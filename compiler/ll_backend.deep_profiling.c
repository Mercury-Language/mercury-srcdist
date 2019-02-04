/*
** Automatically generated from `deep_profiling.m'
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
INIT mercury__ll_backend__deep_profiling__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 166 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 27 "ll_backend.deep_profiling.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 31 "ll_backend.deep_profiling.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 35 "ll_backend.deep_profiling.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.deep_profiling.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.deep_profiling.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "ll_backend.deep_profiling.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "ll_backend.deep_profiling.c"
#line 52 "ll_backend.deep_profiling.c"
#include "ll_backend.deep_profiling.mh"

#line 55 "ll_backend.deep_profiling.c"
#line 56 "ll_backend.deep_profiling.c"
#ifndef LL_BACKEND__DEEP_PROFILING_DECL_GUARD
#define LL_BACKEND__DEEP_PROFILING_DECL_GUARD

#line 60 "ll_backend.deep_profiling.c"
#line 61 "ll_backend.deep_profiling.c"

#endif
#line 64 "ll_backend.deep_profiling.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
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
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__deep_profiling__type_ctor_info_var_info_0,
	mercury_data_ll_backend__deep_profiling__type_ctor_info_proc_coverage_info_0,
	mercury_data_ll_backend__deep_profiling__type_ctor_info_deep_info_0,
	mercury_data_ll_backend__deep_profiling__type_ctor_info_coverage_profiling_options_0,
	mercury_data_ll_backend__deep_profiling__type_ctor_info_coverage_after_known_0,
	mercury_data_ll_backend__deep_profiling__type_ctor_info_call_class_0,
	mercury_data_ll_backend__deep_profiling__type_ctor_info_apply_tail_recursion_info_0;
MR_decl_label4(ll_backend__deep_profiling__add_impurity_if_needed_3_0, 21,5,4,7)
MR_decl_label8(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0, 2,3,5,6,7,8,4,12)
MR_decl_label4(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0, 13,14,17,18)
MR_decl_label4(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0, 20,5,4,8)
MR_decl_label3(ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0, 15,4,6)
MR_decl_label4(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0, 23,5,7,10)
MR_decl_label6(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0, 31,6,5,10,9,13)
MR_decl_label8(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0, 47,50,94,24,26,27,28,29)
MR_decl_label8(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0, 30,32,36,22,55,4,67,100)
MR_decl_label8(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0, 7,96,11,98,16,17,99,41)
MR_decl_label2(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0, 97,44)
MR_decl_label8(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0, 2,3,4,5,6,7,8,10)
MR_decl_label8(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0, 13,14,17,16,20,21,26,28)
MR_decl_label8(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0, 29,41,43,44,45,46,47,9)
MR_decl_label7(ll_backend__deep_profiling__build_det_proc_body_9_0, 8,9,3,17,18,19,20)
MR_decl_label8(ll_backend__deep_profiling__build_non_proc_body_10_0, 8,9,12,13,14,3,22,23)
MR_decl_label8(ll_backend__deep_profiling__build_non_proc_body_10_0, 27,28,30,32,33,35,36,37)
MR_decl_label6(ll_backend__deep_profiling__build_non_proc_body_10_0, 38,41,42,43,44,45)
MR_decl_label8(ll_backend__deep_profiling__build_semi_proc_body_9_0, 7,8,9,10,3,17,18,19)
MR_decl_label4(ll_backend__deep_profiling__build_semi_proc_body_9_0, 20,22,23,24)
MR_decl_label1(ll_backend__deep_profiling__compress_filename_3_0, 2)
MR_decl_label1(ll_backend__deep_profiling__coverage_after_known_branch_3_0, 3)
MR_decl_label5(ll_backend__deep_profiling__coverage_point_ll_code_2_0, 2,3,4,5,6)
MR_decl_label1(ll_backend__deep_profiling__coverage_points_map_list_2_0, 2)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_first_pass_5_0, 37,3,41,4,6,8,9,11)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_first_pass_5_0, 12,14,15,16,17,18,20,21)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_first_pass_5_0, 22,23,24,26,27,29,30,32)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_first_pass_5_0, 33,36,2,43,44,42,46,51)
MR_decl_label2(ll_backend__deep_profiling__coverage_prof_first_pass_conj_7_0, 2,3)
MR_decl_label6(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0, 35,4,5,7,10,11)
MR_decl_label6(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0, 38,4,5,6,9,10)
MR_decl_label7(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0, 32,4,6,7,12,8,15)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0, 50,4,6,7,9,12,15,16)
MR_decl_label3(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0, 21,23,25)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0, 2,4,5,3,11,14,21,23)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0, 26,28,30,96,32,9,7,98)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0, 36,40,77,41,42,44,45,47)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0, 50,51,52,53,54,56,58,57)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0, 61,62,63,65,66,68,69,71)
MR_decl_label5(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0, 39,78,81,83,85)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0, 4,7,11,12,14,6,3,2)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0, 15,16,17,18,19,49,21,25)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0, 26,24,30,31,34,35,36,37)
MR_decl_label5(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0, 38,39,40,41,42)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0, 56,29,7,4,11,12,14,16)
MR_decl_label4(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0, 18,19,23,26)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0, 10,11,13,15,16,17,18,19)
MR_decl_label7(ll_backend__deep_profiling__deep_prof_transform_conj_8_0, 32,5,6,7,12,8,15)
MR_decl_label5(ll_backend__deep_profiling__deep_prof_transform_disj_7_0, 17,5,6,7,9)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0, 57,173,19,119,175,172,3,5)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0, 7,4,9,10,11,14,15,16)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0, 23,24,25,26,27,28,29,33)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0, 35,32,39,38,43,44,31,51)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0, 52,53,54,61,62,63,66,67)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0, 68,64,72,73,74,75,87,88)
MR_decl_label6(ll_backend__deep_profiling__deep_prof_transform_goal_6_0, 90,92,95,94,99,100)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0, 2,3,4,9,10,11,6,13)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0, 14,18,19,20,21,23,24,25)
MR_decl_label7(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0, 26,29,31,32,33,35,41)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_transform_proc_4_0, 2,7,8,9,11,12,13,14)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_transform_proc_4_0, 15,17,18,20,21,22,23,3)
MR_decl_label5(ll_backend__deep_profiling__deep_prof_transform_switch_8_0, 18,5,6,8,10)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0, 2,3,4,6,7,8,10,12)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0, 13,14,15,16,60,59,65,67)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0, 72,68,69,81,77,78,86,18)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0, 41,44,23,24,25,28,32,38)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0, 39,20,21,19,50,51,52,54)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0, 56,91,94,99,102,107,110,109)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0, 111,106,113,115,127,128,129,130)
MR_decl_label3(ll_backend__deep_profiling__deep_prof_wrap_call_5_0, 134,147,101)
MR_decl_label8(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0, 2,3,4,6,8,9,10,11)
MR_decl_label3(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0, 12,14,22)
MR_decl_label1(ll_backend__deep_profiling__extract_deep_rec_info_2_0, 3)
MR_decl_label8(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0, 52,34,19,20,22,21,25,12)
MR_decl_label8(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0, 38,3,5,4,8,10,13,14)
MR_decl_label6(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0, 15,17,28,30,32,65)
MR_decl_label3(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0, 10,3,4)
MR_decl_label3(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0, 10,3,4)
MR_decl_label2(ll_backend__deep_profiling__find_list_of_output_args_5_0, 3,2)
MR_decl_label6(ll_backend__deep_profiling__find_list_of_output_args_2_5_0, 41,8,10,12,42,1)
MR_decl_label8(ll_backend__deep_profiling__generate_csn_vector_7_0, 5,2,9,13,14,15,16,19)
MR_decl_label8(ll_backend__deep_profiling__generate_csn_vector_cell_6_0, 2,5,8,9,15,18,19,23)
MR_decl_label8(ll_backend__deep_profiling__generate_deep_call_7_0, 2,3,5,11,12,13,17,15)
MR_decl_label8(ll_backend__deep_profiling__generate_deep_call_7_0, 10,8,4,27,29,30,34,33)
MR_decl_label3(ll_backend__deep_profiling__generate_deep_call_7_0, 39,40,43)
MR_decl_label3(ll_backend__deep_profiling__generate_depth_var_4_0, 4,5,6)
MR_decl_label5(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0, 4,5,3,9,10)
MR_decl_label1(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_0, 2)
MR_decl_label8(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0, 44,6,7,8,9,10,14,17)
MR_decl_label8(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0, 18,19,22,25,28,29,31,33)
MR_decl_label2(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0, 35,36)
MR_decl_label4(ll_backend__deep_profiling__generate_single_csn_unify_4_0, 4,5,6,9)
MR_decl_label3(ll_backend__deep_profiling__generate_unify_3_0, 4,7,8)
MR_decl_label2(ll_backend__deep_profiling__generate_var_5_0, 2,4)
MR_decl_label8(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0, 2,3,5,11,12,13,17,15)
MR_decl_label4(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0, 10,8,4,26)
MR_decl_label1(ll_backend__deep_profiling__goal_has_port_counts_and_3_0, 2)
MR_decl_label1(ll_backend__deep_profiling__goal_trivial_and_3_0, 2)
MR_decl_label4(ll_backend__deep_profiling__has_port_counts_after_4_0, 4,7,5,3)
MR_decl_label4(ll_backend__deep_profiling__insert_coverage_point_before_5_0, 2,3,8,10)
MR_decl_label8(ll_backend__deep_profiling__make_coverage_point_4_0, 2,3,5,6,8,9,10,11)
MR_decl_label8(ll_backend__deep_profiling__make_coverage_point_4_0, 12,14,27,28,31,32,35,38)
MR_decl_label2(ll_backend__deep_profiling__make_coverage_point_4_0, 39,40)
MR_decl_label3(ll_backend__deep_profiling__make_impure_2_0, 3,2,5)
MR_decl_label3(ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0, 4,5,3)
MR_decl_label5(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0, 29,4,5,10,12)
MR_decl_label8(ll_backend__deep_profiling__maybe_transform_procedure_5_0, 2,3,4,5,10,11,9,14)
MR_decl_label2(ll_backend__deep_profiling__proc_static_cons_id_2_0, 2,6)
MR_decl_label2(ll_backend__deep_profiling__record_hlds_proc_static_4_0, 2,6)
MR_decl_label8(ll_backend__deep_profiling__transform_normal_proc_4_0, 2,3,4,5,7,8,9,10)
MR_decl_label8(ll_backend__deep_profiling__transform_normal_proc_4_0, 11,12,13,14,15,16,17,18)
MR_decl_label8(ll_backend__deep_profiling__transform_normal_proc_4_0, 20,21,22,24,25,23,26,30)
MR_decl_label8(ll_backend__deep_profiling__transform_normal_proc_4_0, 31,34,36,37,40,39,43,42)
MR_decl_label5(ll_backend__deep_profiling__transform_normal_proc_4_0, 45,46,47,48,49)
MR_decl_label5(ll_backend__deep_profiling__transform_predicate_4_0, 2,3,4,7,8)
MR_decl_label5(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0, 2,7,9,4,3)
MR_decl_label8(fn__ll_backend__deep_profiling__classify_call_2_0, 3,70,9,11,8,16,18,15)
MR_decl_label4(fn__ll_backend__deep_profiling__classify_call_2_0, 23,25,22,5)
MR_decl_label2(fn__ll_backend__deep_profiling__fail_goal_info_0_0, 2,4)
MR_decl_label6(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0, 2,4,5,7,6,9)
MR_decl_label1(fn__ll_backend__deep_profiling__impure_init_goal_info_3_0, 2)
MR_decl_label1(fn__ll_backend__deep_profiling__impure_reachable_init_goal_info_2_0, 2)
MR_decl_label2(fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0, 2,3)
MR_decl_label2(fn__ll_backend__deep_profiling__init_proc_coverage_info_5_0, 2,3)
MR_decl_label4(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0, 4,7,12,1)
MR_decl_label5(__Unify___ll_backend__deep_profiling__call_class_0_0, 5,13,15,21,1)
MR_decl_label2(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0, 4,1)
MR_decl_label8(__Unify___ll_backend__deep_profiling__deep_info_0_0, 4,6,8,10,12,14,18,1)
MR_decl_label8(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0, 4,6,8,10,12,14,18,1)
MR_decl_label3(__Unify___ll_backend__deep_profiling__var_info_0_0, 4,9,1)
MR_decl_label6(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0, 3,2,5,10,14,39)
MR_decl_label8(__Compare___ll_backend__deep_profiling__call_class_0_0, 3,2,5,7,21,55,23,25)
MR_decl_label2(__Compare___ll_backend__deep_profiling__call_class_0_0, 27,93)
MR_decl_label8(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label3(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0, 29,33,77)
MR_decl_label8(__Compare___ll_backend__deep_profiling__deep_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label2(__Compare___ll_backend__deep_profiling__deep_info_0_0, 29,69)
MR_decl_label8(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label1(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0, 61)
MR_decl_label4(__Compare___ll_backend__deep_profiling__var_info_0_0, 3,2,5,22)
MR_def_extern_entry(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0)
MR_decl_static(ll_backend__deep_profiling__apply_tail_recursion_to_scc_3_0)
MR_decl_static(ll_backend__deep_profiling__find_list_of_output_args_2_5_0)
MR_decl_static(fn__ll_backend__deep_profiling__this_file_0_0)
MR_decl_static(ll_backend__deep_profiling__find_list_of_output_args_5_0)
MR_decl_static(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0)
MR_decl_static(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0)
MR_decl_static(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0)
MR_decl_static(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0)
MR_decl_static(ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0)
MR_decl_static(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0)
MR_decl_static(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0)
MR_decl_static(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0)
MR_decl_static(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0)
MR_decl_static(ll_backend__deep_profiling__transform_predicate_4_0)
MR_decl_static(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0)
MR_decl_static(fn__ll_backend__deep_profiling__impure_init_goal_info_3_0)
MR_decl_static(ll_backend__deep_profiling__generate_deep_call_7_0)
MR_decl_static(ll_backend__deep_profiling__generate_deep_det_call_6_0)
MR_decl_static(fn__ll_backend__deep_profiling__impure_reachable_init_goal_info_2_0)
MR_decl_static(ll_backend__deep_profiling__make_impure_2_0)
MR_decl_static(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0)
MR_decl_static(ll_backend__deep_profiling__build_non_proc_body_10_0)
MR_decl_static(ll_backend__deep_profiling__generate_var_5_0)
MR_decl_static(fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0)
MR_decl_static(fn__ll_backend__deep_profiling__fail_goal_info_0_0)
MR_decl_static(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0)
MR_decl_static(ll_backend__deep_profiling__compress_filename_3_0)
MR_decl_static(fn__ll_backend__deep_profiling__classify_call_2_0)
MR_decl_static(ll_backend__deep_profiling__generate_csn_vector_cell_6_0)
MR_decl_static(ll_backend__deep_profiling__generate_unify_3_0)
MR_decl_static(ll_backend__deep_profiling__generate_single_csn_unify_4_0)
MR_decl_static(ll_backend__deep_profiling__generate_csn_vector_7_0)
MR_decl_static(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0)
MR_decl_static(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_0)
MR_decl_static(ll_backend__deep_profiling__deep_prof_wrap_call_5_0)
MR_decl_static(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0)
MR_decl_static(ll_backend__deep_profiling__add_impurity_if_needed_3_0)
MR_decl_static(ll_backend__deep_profiling__deep_prof_transform_goal_6_0)
MR_decl_static(ll_backend__deep_profiling__deep_prof_transform_conj_8_0)
MR_decl_static(ll_backend__deep_profiling__deep_prof_transform_disj_7_0)
MR_decl_static(ll_backend__deep_profiling__deep_prof_transform_switch_8_0)
MR_decl_static(ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0)
MR_decl_static(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0)
MR_decl_static(ll_backend__deep_profiling__extract_deep_rec_info_2_0)
MR_decl_static(ll_backend__deep_profiling__record_hlds_proc_static_4_0)
MR_decl_static(ll_backend__deep_profiling__proc_static_cons_id_2_0)
MR_decl_static(ll_backend__deep_profiling__coverage_point_ll_code_2_0)
MR_decl_static(ll_backend__deep_profiling__make_coverage_point_4_0)
MR_decl_static(ll_backend__deep_profiling__insert_coverage_point_before_5_0)
MR_decl_static(ll_backend__deep_profiling__coverage_after_known_branch_3_0)
MR_decl_static(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0)
MR_decl_static(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0)
MR_decl_static(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0)
MR_decl_static(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0)
MR_decl_static(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0)
MR_decl_static(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0)
MR_decl_static(fn__ll_backend__deep_profiling__init_proc_coverage_info_5_0)
MR_decl_static(ll_backend__deep_profiling__goal_trivial_and_3_0)
MR_decl_static(ll_backend__deep_profiling__goal_has_port_counts_and_3_0)
MR_decl_static(ll_backend__deep_profiling__has_port_counts_after_4_0)
MR_decl_static(ll_backend__deep_profiling__coverage_prof_first_pass_5_0)
MR_decl_static(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0)
MR_decl_static(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0)
MR_decl_static(ll_backend__deep_profiling__coverage_points_map_list_2_0)
MR_decl_static(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0)
MR_decl_static(ll_backend__deep_profiling__transform_normal_proc_4_0)
MR_decl_static(ll_backend__deep_profiling__deep_prof_transform_proc_4_0)
MR_decl_static(ll_backend__deep_profiling__maybe_transform_procedure_5_0)
MR_decl_static(ll_backend__deep_profiling__build_det_proc_body_9_0)
MR_decl_static(ll_backend__deep_profiling__build_semi_proc_body_9_0)
MR_decl_static(ll_backend__deep_profiling__generate_depth_var_4_0)
MR_decl_static(ll_backend__deep_profiling__coverage_prof_first_pass_conj_7_0)
MR_decl_static(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0)
MR_decl_static(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0)
MR_decl_static(__Unify___ll_backend__deep_profiling__call_class_0_0)
MR_decl_static(__Compare___ll_backend__deep_profiling__call_class_0_0)
MR_decl_static(__Unify___ll_backend__deep_profiling__coverage_after_known_0_0)
MR_decl_static(__Compare___ll_backend__deep_profiling__coverage_after_known_0_0)
MR_decl_static(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0)
MR_decl_static(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0)
MR_decl_static(__Unify___ll_backend__deep_profiling__deep_info_0_0)
MR_decl_static(__Compare___ll_backend__deep_profiling__deep_info_0_0)
MR_decl_static(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0)
MR_decl_static(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0)
MR_decl_static(__Unify___ll_backend__deep_profiling__var_info_0_0)
MR_decl_static(__Compare___ll_backend__deep_profiling__var_info_0_0)
MR_decl_static(ll_backend__deep_profiling__IntroducedFrom__pred__generate_deep_call__1604__1_3_0)
MR_decl_static(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0)
MR_decl_static(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
static const struct mercury_type_0 mercury_common_0[13] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(3,6,0)
}
},
{
{
MR_TAG_COMMON(3,6,0),
MR_TAG_COMMON(3,6,0)
}
},
{
{
MR_TAG_COMMON(0,0,5),
MR_TAG_COMMON(0,0,6)
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
MR_TAG_COMMON(0,14,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,14,0),
MR_TAG_COMMON(1,0,9)
}
},
{
{
MR_TAG_COMMON(3,6,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,6,0),
MR_TAG_COMMON(1,0,11)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__apply_tail_recursion_to_scc_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__generate_deep_call_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__deep_profiling__apply_tail_recursion_to_scc_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__deep_profiling__generate_deep_call_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(0,3),
MR_COMMON(3,4)
}
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(ll_backend__deep_profiling__apply_tail_recursion_to_scc_3_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(ll_backend__deep_profiling__generate_single_csn_unify_4_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(ll_backend__deep_profiling__generate_depth_var_4_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_3 mercury_common_3[8] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,4),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,4),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__generate_csn_vector_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__deep_profiling__type_ctor_info_deep_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_1;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__deep_profiling__generate_csn_vector_7_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(3,6),
MR_CTOR0_ADDR(ll_backend__deep_profiling, deep_info),
MR_CTOR0_ADDR(ll_backend__deep_profiling, deep_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,3),
MR_CTOR0_ADDR(ll_backend__deep_profiling, deep_info),
MR_CTOR0_ADDR(ll_backend__deep_profiling, deep_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__transform_predicate_4_0_1;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__deep_profiling__transform_predicate_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_COMMON(1,2),
MR_ENTRY_AP(ll_backend__deep_profiling__IntroducedFrom__pred__generate_deep_call__1604__1_3_0),
1,
MR_TAG_COMMON(3,6,0)
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
2,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_9 mercury_common_9[4] =
{
{
0
},
{
((MR_Integer) MR_cp_type_solns_may_fail)
},
{
((MR_Integer) MR_cp_type_solns_multi)
},
{
((MR_Integer) MR_cp_type_solns_any)
},
};

static const struct mercury_type_10 mercury_common_10[3] =
{
{
MR_tbmkword(0, 0)
},
{
MR_TAG_COMMON(0,13,1)
},
{
MR_TAG_COMMON(0,13,2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__generate_csn_vector_7_0_1;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__deep_profiling__generate_csn_vector_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

static const struct mercury_type_12 mercury_common_12[3] =
{
{
{
1,
1
}
},
{
{
1,
0
}
},
{
{
0,
0
}
},
};

static const struct mercury_type_13 mercury_common_13[3] =
{
{
MR_string_const("{\n#ifdef MR_DEEP_PROFILING\n\n    const MR_ProcLayout *pl;\n    MR_ProcStatic       *ps;\n\n    MR_enter_instrumentation();\n\n  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG\n    if (MR_calldebug && MR_lld_print_enabled) {\n        MR_print_deep_prof_vars(stdout, \"increment_coverage_point_count\");\n        printf(\", ProcLayout: 0x%x, CPIndex: %d\\n\", ProcLayout, CPIndex);\n    }\n  #endif\n\n    pl = (const MR_ProcLayout *) ProcLayout;\n\n    MR_deep_assert(NULL, NULL, NULL, pl != NULL);\n    ps = pl->MR_sle_proc_static;\n    MR_d" "eep_assert(NULL, pl, NULL, ps != NULL);\n\n    MR_deep_assert(NULL, pl, ps, \n        CPIndex >= ps->MR_ps_num_coverage_points);\n    MR_deep_assert(NULL, pl, ps, ps->MR_ps_coverage_points != NULL);\n\n    ps->MR_ps_coverage_points[CPIndex]++;\n\n    /*\n     * This procedure doesn\'t collect statistics about the deep profiler as\n     * they can be generated by the profiling data it\'s self.\n     */\n\n    MR_leave_instrumentation();\n#else\n    MR_fatal_error(\n        \"increment_coverage_point_count: deep profiling not e" "nabled\");\n#endif /* MR_DEEP_PROFILING */\n}", 1066),
MR_tbmkword(0, 0)
},
{
MR_string_const("ProcLayout", 10),
MR_TAG_COMMON(0,0,6)
},
{
MR_string_const("CPIndex", 7),
MR_TAG_COMMON(0,0,6)
},
};

static const struct mercury_type_14 mercury_common_14[2] =
{
{
MR_TAG_COMMON(1,10,1),
0
},
{
MR_TAG_COMMON(1,10,2),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__coverage_prof_first_pass_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__deep_profiling__type_ctor_info_coverage_profiling_options_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_trivial_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_has_port_counts_0;
static const struct mercury_type_15 mercury_common_15[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__deep_profiling__coverage_prof_first_pass_5_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ll_backend__deep_profiling, coverage_profiling_options),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, goal_trivial),
MR_CTOR0_ADDR(hlds__hlds_goal, goal_trivial),
MR_CTOR0_ADDR(hlds__hlds_goal, goal_has_port_counts),
MR_CTOR0_ADDR(hlds__hlds_goal, goal_has_port_counts)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__deep_profiling__field_types_var_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

const MR_ConstString mercury_data_ll_backend__deep_profiling__field_names_var_info_0_0[] = {
	"varinfo_varset",
	"varinfo_vartypes"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__deep_profiling__du_functor_desc_var_info_0_0 = {
	"var_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__deep_profiling__field_types_var_info_0_0,
	mercury_data_ll_backend__deep_profiling__field_names_var_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_stag_ordered_var_info_0_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_var_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__deep_profiling__du_ptag_ordered_var_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__deep_profiling__du_stag_ordered_var_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_name_ordered_var_info_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_var_info_0_0
};

const MR_Integer mercury_data_ll_backend__deep_profiling__functor_number_map_var_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__deep_profiling__type_ctor_info_var_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__deep_profiling__var_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__deep_profiling__var_info_0_0)),
	"ll_backend.deep_profiling",
	"var_info",
	{ (void *)mercury_data_ll_backend__deep_profiling__du_name_ordered_var_info_0 },
	{ (void *)mercury_data_ll_backend__deep_profiling__du_ptag_ordered_var_info_0 },
	1,
	4,
	mercury_data_ll_backend__deep_profiling__functor_number_map_var_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_deep_recursion_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_deep_recursion_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_deep_recursion_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__deep_profiling__type_ctor_info_var_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__deep_profiling__type_ctor_info_coverage_profiling_options_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__deep_profiling__field_types_proc_coverage_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__deep_profiling__type_ctor_info_var_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__deep_profiling__type_ctor_info_coverage_profiling_options_0
};

const MR_ConstString mercury_data_ll_backend__deep_profiling__field_names_proc_coverage_info_0_0[] = {
	"ci_coverage_points",
	"ci_cp_index_counter",
	"ci_var_info",
	"ci_module_info",
	"ci_pred_proc_id",
	"ci_maybe_rec_info",
	"ci_coverage_profiling_opts"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__deep_profiling__du_functor_desc_proc_coverage_info_0_0 = {
	"proc_coverage_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__deep_profiling__field_types_proc_coverage_info_0_0,
	mercury_data_ll_backend__deep_profiling__field_names_proc_coverage_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_stag_ordered_proc_coverage_info_0_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_proc_coverage_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__deep_profiling__du_ptag_ordered_proc_coverage_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__deep_profiling__du_stag_ordered_proc_coverage_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_name_ordered_proc_coverage_info_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_proc_coverage_info_0_0
};

const MR_Integer mercury_data_ll_backend__deep_profiling__functor_number_map_proc_coverage_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__deep_profiling__type_ctor_info_proc_coverage_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0)),
	"ll_backend.deep_profiling",
	"proc_coverage_info",
	{ (void *)mercury_data_ll_backend__deep_profiling__du_name_ordered_proc_coverage_info_0 },
	{ (void *)mercury_data_ll_backend__deep_profiling__du_ptag_ordered_proc_coverage_info_0 },
	1,
	4,
	mercury_data_ll_backend__deep_profiling__functor_number_map_proc_coverage_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_call_site_static_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_call_site_static_data_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_call_site_static_data_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__deep_profiling__field_types_deep_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__deep_profiling__type_ctor_info_var_info_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0
};

const MR_ConstString mercury_data_ll_backend__deep_profiling__field_names_deep_info_0_0[] = {
	"deep_module_info",
	"deep_pred_proc_id",
	"deep_current_csd",
	"deep_site_num_counter",
	"deep_call_sites",
	"deep_varinfos",
	"deep_proc_filename",
	"deep_maybe_rec_info"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__deep_profiling__du_functor_desc_deep_info_0_0 = {
	"deep_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__deep_profiling__field_types_deep_info_0_0,
	mercury_data_ll_backend__deep_profiling__field_names_deep_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_deep_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__deep_profiling__du_ptag_ordered_deep_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_name_ordered_deep_info_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_deep_info_0_0
};

const MR_Integer mercury_data_ll_backend__deep_profiling__functor_number_map_deep_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__deep_profiling__type_ctor_info_deep_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__deep_profiling__deep_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__deep_profiling__deep_info_0_0)),
	"ll_backend.deep_profiling",
	"deep_info",
	{ (void *)mercury_data_ll_backend__deep_profiling__du_name_ordered_deep_info_0 },
	{ (void *)mercury_data_ll_backend__deep_profiling__du_ptag_ordered_deep_info_0 },
	1,
	4,
	mercury_data_ll_backend__deep_profiling__functor_number_map_deep_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__deep_profiling__field_types_coverage_profiling_options_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_ll_backend__deep_profiling__field_names_coverage_profiling_options_0_0[] = {
	"cpo_may_fail",
	"cpo_multi",
	"cpo_any",
	"cpo_branch_ite",
	"cpo_branch_switch",
	"cpo_branch_disj",
	"cpo_use_portcounts",
	"cpo_use_trivial",
	"cpo_use_2pass"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__deep_profiling__du_functor_desc_coverage_profiling_options_0_0 = {
	"coverage_profiling_options",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__deep_profiling__field_types_coverage_profiling_options_0_0,
	mercury_data_ll_backend__deep_profiling__field_names_coverage_profiling_options_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_stag_ordered_coverage_profiling_options_0_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_coverage_profiling_options_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__deep_profiling__du_ptag_ordered_coverage_profiling_options_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__deep_profiling__du_stag_ordered_coverage_profiling_options_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_name_ordered_coverage_profiling_options_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_coverage_profiling_options_0_0
};

const MR_Integer mercury_data_ll_backend__deep_profiling__functor_number_map_coverage_profiling_options_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__deep_profiling__type_ctor_info_coverage_profiling_options_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0)),
	"ll_backend.deep_profiling",
	"coverage_profiling_options",
	{ (void *)mercury_data_ll_backend__deep_profiling__du_name_ordered_coverage_profiling_options_0 },
	{ (void *)mercury_data_ll_backend__deep_profiling__du_ptag_ordered_coverage_profiling_options_0 },
	1,
	4,
	mercury_data_ll_backend__deep_profiling__functor_number_map_coverage_profiling_options_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__deep_profiling__enum_functor_desc_coverage_after_known_0_0 = {
	"coverage_after_known",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__deep_profiling__enum_functor_desc_coverage_after_known_0_1 = {
	"coverage_after_unknown",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__deep_profiling__enum_value_ordered_coverage_after_known_0[] = {
	&mercury_data_ll_backend__deep_profiling__enum_functor_desc_coverage_after_known_0_0,
	&mercury_data_ll_backend__deep_profiling__enum_functor_desc_coverage_after_known_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__deep_profiling__enum_name_ordered_coverage_after_known_0[] = {
	&mercury_data_ll_backend__deep_profiling__enum_functor_desc_coverage_after_known_0_0,
	&mercury_data_ll_backend__deep_profiling__enum_functor_desc_coverage_after_known_0_1
};

const MR_Integer mercury_data_ll_backend__deep_profiling__functor_number_map_coverage_after_known_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__deep_profiling__type_ctor_info_coverage_after_known_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__deep_profiling__coverage_after_known_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__deep_profiling__coverage_after_known_0_0)),
	"ll_backend.deep_profiling",
	"coverage_after_known",
	{ (void *)mercury_data_ll_backend__deep_profiling__enum_name_ordered_coverage_after_known_0 },
	{ (void *)mercury_data_ll_backend__deep_profiling__enum_value_ordered_coverage_after_known_0 },
	2,
	4,
	mercury_data_ll_backend__deep_profiling__functor_number_map_coverage_after_known_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__deep_profiling__field_types_call_class_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__deep_profiling__du_functor_desc_call_class_0_0 = {
	"call_class_normal",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__deep_profiling__field_types_call_class_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__deep_profiling__field_types_call_class_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__deep_profiling__du_functor_desc_call_class_0_1 = {
	"call_class_special",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__deep_profiling__field_types_call_class_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_generic_call_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_generic_call_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__deep_profiling__field_types_call_class_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_generic_call_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__deep_profiling__du_functor_desc_call_class_0_2 = {
	"call_class_generic",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__deep_profiling__field_types_call_class_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_stag_ordered_call_class_0_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_call_class_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_stag_ordered_call_class_0_1[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_call_class_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_stag_ordered_call_class_0_2[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_call_class_0_2

};

const MR_DuPtagLayout mercury_data_ll_backend__deep_profiling__du_ptag_ordered_call_class_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__deep_profiling__du_stag_ordered_call_class_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__deep_profiling__du_stag_ordered_call_class_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__deep_profiling__du_stag_ordered_call_class_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_name_ordered_call_class_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_call_class_0_2,
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_call_class_0_0,
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_call_class_0_1
};

const MR_Integer mercury_data_ll_backend__deep_profiling__functor_number_map_call_class_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__deep_profiling__type_ctor_info_call_class_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__deep_profiling__call_class_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__deep_profiling__call_class_0_0)),
	"ll_backend.deep_profiling",
	"call_class",
	{ (void *)mercury_data_ll_backend__deep_profiling__du_name_ordered_call_class_0 },
	{ (void *)mercury_data_ll_backend__deep_profiling__du_ptag_ordered_call_class_0 },
	3,
	4,
	mercury_data_ll_backend__deep_profiling__functor_number_map_call_class_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__deep_profiling__field_types_apply_tail_recursion_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_ll_backend__deep_profiling__field_names_apply_tail_recursion_info_0_0[] = {
	"moduleinfo",
	"scc_ppids",
	"detism",
	"outputs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__deep_profiling__du_functor_desc_apply_tail_recursion_info_0_0 = {
	"apply_tail_recursion_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__deep_profiling__field_types_apply_tail_recursion_info_0_0,
	mercury_data_ll_backend__deep_profiling__field_names_apply_tail_recursion_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_stag_ordered_apply_tail_recursion_info_0_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_apply_tail_recursion_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__deep_profiling__du_ptag_ordered_apply_tail_recursion_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__deep_profiling__du_stag_ordered_apply_tail_recursion_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__deep_profiling__du_name_ordered_apply_tail_recursion_info_0[] = {
	&mercury_data_ll_backend__deep_profiling__du_functor_desc_apply_tail_recursion_info_0_0
};

const MR_Integer mercury_data_ll_backend__deep_profiling__functor_number_map_apply_tail_recursion_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__deep_profiling__type_ctor_info_apply_tail_recursion_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0)),
	"ll_backend.deep_profiling",
	"apply_tail_recursion_info",
	{ (void *)mercury_data_ll_backend__deep_profiling__du_name_ordered_apply_tail_recursion_info_0 },
	{ (void *)mercury_data_ll_backend__deep_profiling__du_ptag_ordered_apply_tail_recursion_info_0 },
	1,
	4,
	mercury_data_ll_backend__deep_profiling__functor_number_map_apply_tail_recursion_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_1 = {
{
MR_PREDICATE,
"ll_backend.deep_profiling",
"ll_backend.deep_profiling",
"apply_tail_recursion_to_scc",
3,
0
},
"ll_backend.deep_profiling",
"deep_profiling.m",
97,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_2 = {
{
MR_PREDICATE,
"ll_backend.deep_profiling",
"ll_backend.deep_profiling",
"transform_predicate",
4,
0
},
"ll_backend.deep_profiling",
"deep_profiling.m",
84,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__apply_tail_recursion_to_scc_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.deep_profiling",
"ll_backend.deep_profiling",
"apply_tail_recursion_to_proc",
3,
0
},
"ll_backend.deep_profiling",
"deep_profiling.m",
104,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__transform_predicate_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.deep_profiling",
"ll_backend.deep_profiling",
"maybe_transform_procedure",
5,
0
},
"ll_backend.deep_profiling",
"deep_profiling.m",
441,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__generate_deep_call_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.deep_profiling",
"ll_backend.deep_profiling",
"lambda_deep_profiling_m_1604",
3,
0
},
"ll_backend.deep_profiling",
"deep_profiling.m",
1603,
"d1;c13;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__generate_csn_vector_7_0_1 = {
{
MR_PREDICATE,
"int",
"int",
"=<",
2,
0
},
"ll_backend.deep_profiling",
"deep_profiling.m",
1549,
"d1;c8;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__generate_csn_vector_7_0_2 = {
{
MR_PREDICATE,
"ll_backend.deep_profiling",
"ll_backend.deep_profiling",
"generate_single_csn_unify",
4,
0
},
"ll_backend.deep_profiling",
"deep_profiling.m",
1551,
"d1;c8;e;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_1 = {
{
MR_PREDICATE,
"ll_backend.deep_profiling",
"ll_backend.deep_profiling",
"generate_depth_var",
4,
0
},
"ll_backend.deep_profiling",
"deep_profiling.m",
1493,
"d2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__deep_profiling__coverage_prof_first_pass_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.deep_profiling",
"ll_backend.deep_profiling",
"coverage_prof_first_pass_conj",
7,
0
},
"ll_backend.deep_profiling",
"deep_profiling.m",
2814,
"d1;c7;d3;c2;"
};

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_get_preds_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_set_preds_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module0)
	MR_init_entry1(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0);
	MR_init_label8(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,2,3,5,6,7,8,4,12)
	MR_init_label4(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,13,14,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i2);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 178;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i3);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i12);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i6);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i7);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i8);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i4);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i12);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i13);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i14);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__deep_profiling__transform_predicate_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i17);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_set_preds_3_0,
		ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0_i18);
MR_def_label(ll_backend__deep_profiling__apply_deep_profiling_transformation_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_predicate_table_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module1)
	MR_init_entry1(ll_backend__deep_profiling__apply_tail_recursion_to_scc_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__apply_tail_recursion_to_scc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module2)
	MR_init_entry1(ll_backend__deep_profiling__find_list_of_output_args_2_5_0);
	MR_init_label6(ll_backend__deep_profiling__find_list_of_output_args_2_5_0,41,8,10,12,42,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__find_list_of_output_args_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__find_list_of_output_args_2_5_0_i41);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__find_list_of_output_args_2_5_0_i42);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__find_list_of_output_args_2_5_0_i42);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__find_list_of_output_args_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__find_list_of_output_args_2_5_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__find_list_of_output_args_2_5_0_i1);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_sv(4) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_localcall_lab(ll_backend__deep_profiling__find_list_of_output_args_2_5_0,
		ll_backend__deep_profiling__find_list_of_output_args_2_5_0_i8);
MR_def_label(ll_backend__deep_profiling__find_list_of_output_args_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__find_list_of_output_args_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ll_backend__deep_profiling__find_list_of_output_args_2_5_0_i10);
MR_def_label(ll_backend__deep_profiling__find_list_of_output_args_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__find_list_of_output_args_2_5_0_i12);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__deep_profiling__find_list_of_output_args_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__deep_profiling__find_list_of_output_args_2_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__deep_profiling__find_list_of_output_args_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module3)
	MR_init_entry1(fn__ll_backend__deep_profiling__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__deep_profiling__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module4)
	MR_init_entry1(ll_backend__deep_profiling__find_list_of_output_args_5_0);
	MR_init_label2(ll_backend__deep_profiling__find_list_of_output_args_5_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__find_list_of_output_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__deep_profiling__find_list_of_output_args_2_5_0,
		ll_backend__deep_profiling__find_list_of_output_args_5_0_i3);
MR_def_label(ll_backend__deep_profiling__find_list_of_output_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__find_list_of_output_args_5_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__deep_profiling__find_list_of_output_args_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("find_list_of_output_args: list length mismatch", 46);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module5)
	MR_init_entry1(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0);
	MR_init_label4(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0,20,5,4,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0_i5);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_sv(1) = MR_r3;
	MR_np_localcall_lab(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0,
		ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0_i8);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_sv(1) = MR_sv(3);
	MR_np_localcall_lab(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0,
		ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0_i8);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0,8)
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

MR_decl_entry(assoc_list__search_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module6)
	MR_init_entry1(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0);
	MR_init_label8(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,47,50,94,24,26,27,28,29)
	MR_init_label8(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,30,32,36,22,55,4,67,100)
	MR_init_label8(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,7,96,11,98,16,17,99,41)
	MR_init_label2(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,97,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i94) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i67) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i55));
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r4, 3);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i67);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_r2, 3);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	MR_r3 = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__apply_tail_recursion_process_assign_4_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i50);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 4);
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 5);
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_ctfield(0, MR_sv(2), 1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__search_3_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i24);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i26);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i27);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 2);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i22);
	}
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i28);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i29);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_ctfield(0, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__find_list_of_output_args_5_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i30);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_sv(2), 3);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i32);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i22);
	}
	if (MR_INT_NE(MR_sv(7),2)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(9);
	MR_r1 = (MR_Integer) 9;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i36);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i67) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i97) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i67) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i67) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i98) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i99));
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i100);
	}
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_r4, 2);
	MR_np_call_localret_ent(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i7);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,7)
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
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i11);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i16);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i17);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__this_file_0_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i41);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("shorthand in apply_tail_recursion_to_goal", 41);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0_i44);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module7)
	MR_init_entry1(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0);
	MR_init_label4(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0,23,5,7,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r2, 3);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0_i5);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(1, MR_r3, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0_i10);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_conj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module8)
	MR_init_entry1(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0);
	MR_init_label6(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0,31,6,5,10,9,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r4 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0_i5);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0_i6);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0_i9);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0_i10);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r4, 0);
	MR_r1 = MR_r5;
	MR_np_localcall_lab(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0_i13);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_disj_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module9)
	MR_init_entry1(ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0);
	MR_init_label3(ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0,15,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0_i4);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0_i6);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_cases_5_0,6)
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

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_features_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
MR_decl_entry(set__member_2_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_call_mercury_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module10)
	MR_init_entry1(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0);
	MR_init_label8(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,52,34,19,20,22,21,25,12)
	MR_init_label8(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,38,3,5,4,8,10,13,14)
	MR_init_label6(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,15,17,28,30,32,65)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i38));
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r4, 3);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_features_1_0,
		ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i20);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Integer) 9;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i22);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i25);
	}
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i65);
	}
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i30));
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i5);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i4);
	}
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,
		ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i14);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,
		ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i15);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i52);
	}
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i52);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0_i52);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("shorthand in apply_tail_recursion_to_goal", 41);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module11)
	MR_init_entry1(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0);
	MR_init_label3(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,
		ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0_i4);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module12)
	MR_init_entry1(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0);
	MR_init_label3(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 2);
	MR_np_call_localret_ent(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,
		ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0_i4);
MR_def_label(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__clone_proc_id_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module13)
	MR_init_entry1(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0);
	MR_init_label8(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,2,3,4,5,6,7,8,10)
	MR_init_label8(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,13,14,17,16,20,21,26,28)
	MR_init_label8(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,29,41,43,44,45,46,47,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r2;
	MR_sv(12) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i2);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i3);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i4);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i5);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i6);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i7);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i8);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i10);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i9);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i13);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i14);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__find_list_of_output_args_2_5_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i17);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i16);
	}
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i20);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("find_list_of_output_args: list length mismatch", 46);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i20);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__clone_proc_id_3_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i21);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tempr5 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr4, 3) = MR_sv(6);
	MR_sv(6) = MR_tempr5;
	MR_tempr3 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__apply_tail_recursion_to_goal_6_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i26);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i28);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__figure_out_rec_call_numbers_5_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i29);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr7 = MR_sv(9);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tempr8 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr7;
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr5;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i41);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i43);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i44);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i45);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i46);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0_i47);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
MR_def_label(ll_backend__deep_profiling__apply_tail_recursion_to_proc_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module14)
	MR_init_entry1(ll_backend__deep_profiling__transform_predicate_4_0);
	MR_init_label5(ll_backend__deep_profiling__transform_predicate_4_0,2,3,4,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__transform_predicate_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__deep_profiling__transform_predicate_4_0_i2);
MR_def_label(ll_backend__deep_profiling__transform_predicate_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		ll_backend__deep_profiling__transform_predicate_4_0_i3);
MR_def_label(ll_backend__deep_profiling__transform_predicate_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		ll_backend__deep_profiling__transform_predicate_4_0_i4);
MR_def_label(ll_backend__deep_profiling__transform_predicate_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__deep_profiling__maybe_transform_procedure_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__deep_profiling__transform_predicate_4_0_i7);
MR_def_label(ll_backend__deep_profiling__transform_predicate_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		ll_backend__deep_profiling__transform_predicate_4_0_i8);
MR_def_label(ll_backend__deep_profiling__transform_predicate_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_profiling_builtin_module_0_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module15)
	MR_init_entry1(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0);
	MR_init_label8(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,2,3,5,11,12,13,17,15)
	MR_init_label4(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,10,8,4,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_profiling_builtin_module_0_0,
		ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i2);
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i3);
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0,
		ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i5);
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i10);
	}
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i11);
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i12);
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i13);
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i17);
	}
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_deep_profile_builtin_ppid: proc_id not unique", 49);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_deep_profile_builtin_ppid: no proc_id", 41);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_deep_profile_builtin_ppid: pred_id not unique", 49);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_deep_profile_builtin_ppid: no pred_id", 41);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("couldn\'t find pred_id for \140%s\'/%d", 33);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0_i26);
MR_def_label(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_init_5_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module16)
	MR_init_entry1(fn__ll_backend__deep_profiling__impure_init_goal_info_3_0);
	MR_init_label1(fn__ll_backend__deep_profiling__impure_init_goal_info_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__deep_profiling__impure_init_goal_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		fn__ll_backend__deep_profiling__impure_init_goal_info_3_0_i2);
MR_def_label(fn__ll_backend__deep_profiling__impure_init_goal_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_add_feature_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_init_unreachable_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_from_assoc_list_2_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module17)
	MR_init_entry1(ll_backend__deep_profiling__generate_deep_call_7_0);
	MR_init_label8(ll_backend__deep_profiling__generate_deep_call_7_0,2,3,5,11,12,13,17,15)
	MR_init_label8(ll_backend__deep_profiling__generate_deep_call_7_0,10,8,4,27,29,30,34,33)
	MR_init_label3(ll_backend__deep_profiling__generate_deep_call_7_0,39,40,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__generate_deep_call_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_profiling_builtin_module_0_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i2);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i3);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pred_m_n_a_6_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i5);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__generate_deep_call_7_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__generate_deep_call_7_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__generate_deep_call_7_0_i10);
	}
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i11);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i12);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i13);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__generate_deep_call_7_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__generate_deep_call_7_0_i17);
	}
	MR_r3 = MR_sv(4);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_GOTO_LAB(ll_backend__deep_profiling__generate_deep_call_7_0_i29);
	}
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_deep_profile_builtin_ppid: proc_id not unique", 49);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i29);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_deep_profile_builtin_ppid: no proc_id", 41);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i29);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_deep_profile_builtin_ppid: pred_id not unique", 49);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i29);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_deep_profile_builtin_ppid: no pred_id", 41);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i29);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("couldn\'t find pred_id for \140%s\'/%d", 33);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i27);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i29);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i30);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__generate_deep_call_7_0_i33);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i34);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 5) = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__impure_init_goal_info_3_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i43);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr3 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i39);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i40);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 6);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 5) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_r3 = MR_sv(6);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__impure_init_goal_info_3_0,
		ll_backend__deep_profiling__generate_deep_call_7_0_i43);
MR_def_label(ll_backend__deep_profiling__generate_deep_call_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module18)
	MR_init_entry1(ll_backend__deep_profiling__generate_deep_det_call_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__generate_deep_det_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(ll_backend__deep_profiling__generate_deep_call_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_init_reachable_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module19)
	MR_init_entry1(fn__ll_backend__deep_profiling__impure_reachable_init_goal_info_2_0);
	MR_init_label1(fn__ll_backend__deep_profiling__impure_reachable_init_goal_info_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__deep_profiling__impure_reachable_init_goal_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		fn__ll_backend__deep_profiling__impure_reachable_init_goal_info_2_0_i2);
MR_def_label(fn__ll_backend__deep_profiling__impure_reachable_init_goal_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_init_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module20)
	MR_init_entry1(ll_backend__deep_profiling__make_impure_2_0);
	MR_init_label3(ll_backend__deep_profiling__make_impure_2_0,3,2,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__make_impure_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		ll_backend__deep_profiling__make_impure_2_0_i3);
MR_def_label(ll_backend__deep_profiling__make_impure_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__make_impure_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__deep_profiling__make_impure_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		ll_backend__deep_profiling__make_impure_2_0_i5);
MR_def_label(ll_backend__deep_profiling__make_impure_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_add_feature_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module21)
	MR_init_entry1(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0);
	MR_init_label6(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0,2,4,5,7,6,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0_i2);
MR_def_label(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0_i4);
MR_def_label(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0_i5);
MR_def_label(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0_i7);
MR_def_label(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0_i9);
MR_def_label(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_add_feature_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_add_feature_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_1);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module22)
	MR_init_entry1(ll_backend__deep_profiling__build_non_proc_body_10_0);
	MR_init_label8(ll_backend__deep_profiling__build_non_proc_body_10_0,8,9,12,13,14,3,22,23)
	MR_init_label8(ll_backend__deep_profiling__build_non_proc_body_10_0,27,28,30,32,33,35,36,37)
	MR_init_label6(ll_backend__deep_profiling__build_non_proc_body_10_0,38,41,42,43,44,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__build_non_proc_body_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__build_non_proc_body_10_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr2;
	MR_tempr6 = MR_r3;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tempr7 = MR_r2;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r4;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr7;
	MR_sv(3) = MR_tempr6;
	MR_sv(4) = MR_tempr5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_r2 = (MR_Word) MR_string_const("non_call_port_code_ac", 21);
	MR_r3 = (MR_Integer) 4;
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i8);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i9);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("non_exit_port_code_ac", 21);
	MR_r3 = (MR_Integer) 2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i12);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("non_fail_port_code_ac", 21);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 7;
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_call_7_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i13);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("non_redo_port_code_ac", 21);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_sv(9);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 7;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_call_7_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i14);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i32);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tempr6 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_r5, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tempr7 = MR_r3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tempr8 = MR_r2;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_r4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr8;
	MR_sv(3) = MR_tempr7;
	MR_sv(4) = MR_tempr6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = (MR_Word) MR_string_const("non_call_port_code_sr", 21);
	MR_r3 = (MR_Integer) 5;
	MR_r4 = MR_tempr5;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i22);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i23);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(2) = MR_r1;
	MR_sv(10) = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("non_exit_port_code_sr", 21);
	MR_r3 = (MR_Integer) 3;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i27);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("non_fail_port_code_sr", 21);
	MR_r3 = (MR_Integer) 3;
	MR_r4 = MR_sv(10);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 7;
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_call_7_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i28);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("non_redo_port_code_sr", 21);
	MR_r3 = (MR_Integer) 2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 7;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_call_7_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i30);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i32);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i33);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i35);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i36);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i37);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i38);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i41);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i42);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__impure_reachable_init_goal_info_2_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i43);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i44);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__make_impure_2_0,
		ll_backend__deep_profiling__build_non_proc_body_10_0_i45);
MR_def_label(ll_backend__deep_profiling__build_non_proc_body_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svvarset__new_named_var_4_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module23)
	MR_init_entry1(ll_backend__deep_profiling__generate_var_5_0);
	MR_init_label2(ll_backend__deep_profiling__generate_var_5_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__generate_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		ll_backend__deep_profiling__generate_var_5_0_i2);
MR_def_label(ll_backend__deep_profiling__generate_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__deep_profiling__generate_var_5_0_i4);
MR_def_label(ll_backend__deep_profiling__generate_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module24)
	MR_init_entry1(fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0);
	MR_init_label2(fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0_i2);
MR_def_label(fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0_i3);
MR_def_label(fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_add_feature_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module25)
	MR_init_entry1(fn__ll_backend__deep_profiling__fail_goal_info_0_0);
	MR_init_label2(fn__ll_backend__deep_profiling__fail_goal_info_0_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__deep_profiling__fail_goal_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		fn__ll_backend__deep_profiling__fail_goal_info_0_0_i2);
MR_def_label(fn__ll_backend__deep_profiling__fail_goal_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__ll_backend__deep_profiling__fail_goal_info_0_0_i4);
MR_def_label(fn__ll_backend__deep_profiling__fail_goal_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 7;
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_init_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_type__c_pointer_type_0_0);
MR_decl_entry(fn__parse_tree__prog_type__int_type_0_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module26)
	MR_init_entry1(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0);
	MR_init_label8(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,2,3,4,9,10,11,6,13)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,14,18,19,20,21,23,24,25)
	MR_init_label7(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,26,29,31,32,33,35,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i2);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("SavedPtr", 8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i3);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 166;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i4);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i9);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 0);
	MR_r2 = (MR_Word) MR_string_const("save_and_zero_activation_info_sr", 32);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r4;
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i10);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 0);
	MR_r2 = (MR_Word) MR_string_const("reset_activation_info_sr", 24);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i11);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 0);
	MR_r2 = (MR_Word) MR_string_const("rezero_activation_info_sr", 25);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i21);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i13);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("SavedCounter", 12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i14);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i18);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 0);
	MR_r2 = (MR_Word) MR_string_const("save_and_zero_activation_info_ac", 32);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r4;
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i19);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 0);
	MR_r2 = (MR_Word) MR_string_const("reset_activation_info_ac", 24);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i20);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 0);
	MR_r2 = (MR_Word) MR_string_const("rezero_activation_info_ac", 25);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i21);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 8);
	MR_sv(11) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr3, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(7) = MR_ctfield(0, MR_sv(3), 1);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i23);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i24);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i25);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__fail_goal_info_0_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i26);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,8,0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 7;
	}
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i29);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i31);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i32);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__make_impure_2_0,
		ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i33);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0_i41);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tempr6 = MR_sv(5);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr5, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr3;
	MR_tempr7 = MR_sv(8);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tempr6 = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module27)
	MR_init_entry1(ll_backend__deep_profiling__compress_filename_3_0);
	MR_init_label1(ll_backend__deep_profiling__compress_filename_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__compress_filename_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 6);
	if ((strcmp((char *) (MR_Word *) MR_r2, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__compress_filename_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
	}
MR_def_label(ll_backend__deep_profiling__compress_filename_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(hlds__pred_table__lookup_builtin_pred_proc_id_8_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module28)
	MR_init_entry1(fn__ll_backend__deep_profiling__classify_call_2_0);
	MR_init_label8(fn__ll_backend__deep_profiling__classify_call_2_0,3,70,9,11,8,16,18,15)
	MR_init_label4(fn__ll_backend__deep_profiling__classify_call_2_0,23,25,22,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__deep_profiling__classify_call_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__ll_backend__deep_profiling__classify_call_2_0_i3) MR_AND
		MR_LABEL_AP(fn__ll_backend__deep_profiling__classify_call_2_0_i70) MR_AND
		MR_LABEL_AP(fn__ll_backend__deep_profiling__classify_call_2_0_i5) MR_AND
		MR_LABEL_AP(fn__ll_backend__deep_profiling__classify_call_2_0_i3));
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("unexpected goal type in classify_call/2", 39);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__ll_backend__deep_profiling__classify_call_2_0_i9);
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("unify", 5);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 2;
	MR_r6 = (MR_Word) MR_TAG_COMMON(1,9,0);
	}
	MR_np_call_localret_ent(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,
		fn__ll_backend__deep_profiling__classify_call_2_0_i11);
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__deep_profiling__classify_call_2_0_i8);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__deep_profiling__classify_call_2_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_sv(4), 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__ll_backend__deep_profiling__classify_call_2_0_i16);
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("compare", 7);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 3;
	MR_r6 = (MR_Word) MR_TAG_COMMON(1,9,0);
	}
	MR_np_call_localret_ent(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,
		fn__ll_backend__deep_profiling__classify_call_2_0_i18);
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__deep_profiling__classify_call_2_0_i15);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__deep_profiling__classify_call_2_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_sv(4), 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__ll_backend__deep_profiling__classify_call_2_0_i23);
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("compare_representation", 22);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 3;
	MR_r6 = (MR_Word) MR_TAG_COMMON(1,9,0);
	}
	MR_np_call_localret_ent(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,
		fn__ll_backend__deep_profiling__classify_call_2_0_i25);
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__deep_profiling__classify_call_2_0_i22);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__deep_profiling__classify_call_2_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_sv(4), 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__ll_backend__deep_profiling__classify_call_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_ctfield(2, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(parse_tree__prog_type__construct_type_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
MR_decl_entry(list__duplicate_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module29)
	MR_init_entry1(ll_backend__deep_profiling__generate_csn_vector_cell_6_0);
	MR_init_label8(ll_backend__deep_profiling__generate_csn_vector_cell_6_0,2,5,8,9,15,18,19,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__generate_csn_vector_cell_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_profiling_builtin_module_0_0,
		ll_backend__deep_profiling__generate_csn_vector_cell_6_0_i2);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_cell_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("call_site_nums_%d", 17);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ll_backend__deep_profiling__generate_csn_vector_cell_6_0_i5);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_cell_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_sv(4) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		ll_backend__deep_profiling__generate_csn_vector_cell_6_0_i8);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_cell_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("CSNCell", 7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__generate_csn_vector_cell_6_0_i9);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_cell_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr4, 7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tempr5 = MR_r1;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_sv(3) = MR_tempr5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__deep_profiling__generate_csn_vector_cell_6_0_i15);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_cell_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		ll_backend__deep_profiling__generate_csn_vector_cell_6_0_i18);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_cell_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		ll_backend__deep_profiling__generate_csn_vector_cell_6_0_i19);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_cell_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r2 = MR_ctfield(1, MR_sv(4), 1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_np_call_localret_ent(list__duplicate_3_0,
		ll_backend__deep_profiling__generate_csn_vector_cell_6_0_i23);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_cell_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr5 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr6 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tempr7 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr6;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 4) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_sv(1);
	MR_r1 = MR_tempr7;
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__make_singleton_set_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module30)
	MR_init_entry1(ll_backend__deep_profiling__generate_unify_3_0);
	MR_init_label3(ll_backend__deep_profiling__generate_unify_3_0,4,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__generate_unify_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		ll_backend__deep_profiling__generate_unify_3_0_i4);
MR_def_label(ll_backend__deep_profiling__generate_unify_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		ll_backend__deep_profiling__generate_unify_3_0_i7);
MR_def_label(ll_backend__deep_profiling__generate_unify_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		ll_backend__deep_profiling__generate_unify_3_0_i8);
MR_def_label(ll_backend__deep_profiling__generate_unify_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr4 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tempr5 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 4) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module31)
	MR_init_entry1(ll_backend__deep_profiling__generate_single_csn_unify_4_0);
	MR_init_label4(ll_backend__deep_profiling__generate_single_csn_unify_4_0,4,5,6,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__generate_single_csn_unify_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(4) = MR_tempr4;
	MR_r1 = (MR_Word) MR_string_const("CSN%d", 5);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ll_backend__deep_profiling__generate_single_csn_unify_4_0_i4);
MR_def_label(ll_backend__deep_profiling__generate_single_csn_unify_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		ll_backend__deep_profiling__generate_single_csn_unify_4_0_i5);
MR_def_label(ll_backend__deep_profiling__generate_single_csn_unify_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__generate_single_csn_unify_4_0_i6);
MR_def_label(ll_backend__deep_profiling__generate_single_csn_unify_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(2) = MR_tempr1;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_unify_3_0,
		ll_backend__deep_profiling__generate_single_csn_unify_4_0_i9);
MR_def_label(ll_backend__deep_profiling__generate_single_csn_unify_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_105_110_116_95_95_61_60_2_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(fn__assoc_list__keys_1_0);
MR_decl_entry(fn__assoc_list__values_1_0);
MR_decl_entry(fn__list__append_2_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module32)
	MR_init_entry1(ll_backend__deep_profiling__generate_csn_vector_7_0);
	MR_init_label8(ll_backend__deep_profiling__generate_csn_vector_7_0,5,2,9,13,14,15,16,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__generate_csn_vector_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__generate_csn_vector_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__generate_csn_vector_7_0_i2);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_single_csn_unify_4_0,
		ll_backend__deep_profiling__generate_csn_vector_7_0_i5);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(f_105_110_116_95_95_61_60_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 9;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r3 = (MR_Word) MR_string_const("generate_csn_vector_unifies: too long", 37);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__deep_profiling__generate_csn_vector_7_0_i9);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__deep_profiling, deep_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__deep_profiling__generate_csn_vector_7_0_i13);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__assoc_list__keys_1_0,
		ll_backend__deep_profiling__generate_csn_vector_7_0_i14);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__assoc_list__values_1_0,
		ll_backend__deep_profiling__generate_csn_vector_7_0_i15);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_csn_vector_cell_6_0,
		ll_backend__deep_profiling__generate_csn_vector_7_0_i16);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		ll_backend__deep_profiling__generate_csn_vector_7_0_i19);
MR_def_label(ll_backend__deep_profiling__generate_csn_vector_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module33)
	MR_init_entry1(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0);
	MR_init_label8(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,44,6,7,8,9,10,14,17)
	MR_init_label8(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,18,19,22,25,28,29,31,33)
	MR_init_label2(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i44);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(15);
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__deep_profiling, deep_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i6);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i7);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_csn_vector_7_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i8);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_csn_vector_7_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i9);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_csn_vector_7_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i10);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i14);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r1;
	MR_sv(13) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("save_recursion_depth_%d", 23);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i17);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("restore_recursion_depth_exit_%d", 31);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__string__format_2_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i18);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("restore_recursion_depth_fail_%d", 31);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i19);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_tempr3 = MR_sv(12);
	MR_sv(12) = MR_ctfield(0, MR_sv(14), 0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr3;
	MR_r3 = ((MR_Integer) MR_sv(5) + (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i22);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = ((MR_Integer) MR_sv(5) + (MR_Integer) 2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i25);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_r3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i28);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(14);
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i29);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(4) = MR_r5;
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i31);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i33);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i35);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0_i36);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__chunk_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module34)
	MR_init_entry1(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_0);
	MR_init_label1(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 9;
	}
	MR_np_call_localret_ent(list__chunk_3_0,
		ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_0_i2);
MR_def_label(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_remove_feature_3_0);
MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__term__context_file_1_0);
MR_decl_entry(fn__term__context_line_1_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module35)
	MR_init_entry1(ll_backend__deep_profiling__deep_prof_wrap_call_5_0);
	MR_init_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,2,3,4,6,7,8,10,12)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,13,14,15,16,60,59,65,67)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,72,68,69,81,77,78,86,18)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,41,44,23,24,25,28,32,38)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,39,20,21,19,50,51,52,54)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,56,91,94,99,102,107,110,109)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,111,106,113,115,127,128,129,130)
	MR_init_label3(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,134,147,101)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__deep_prof_wrap_call_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(11) = MR_tempr2;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_features_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i2);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_remove_feature_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i3);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__deep_profiling__make_impure_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i4);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_sv(11), 3);
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i6);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_ctfield(0, MR_sv(11), 5);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i7);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("SiteNum", 7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i8);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_unify_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i10);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(17) = MR_tempr1;
	MR_tempr2 = MR_sv(11);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i12);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i13);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i14);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__compress_filename_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i15);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_sv(7), 0);
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__classify_call_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i16);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	MR_r2 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i91);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i18);
	}
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Integer) 9;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i60);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i59);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("prepare_for_tail_call", 21);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i65);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("prepare_for_normal_call", 23);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i65);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i67);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(17);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(15) = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i69);
	}
	MR_tempr2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i69);
	}
	MR_sv(14) = MR_r1;
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i72);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i68);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(16);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i86);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(15),0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i78);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_sv(15), 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i78);
	}
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i81);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i77);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(17), 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i86);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i86);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_sv(7);
	MR_sv(2) = MR_sv(17);
	MR_r2 = MR_ctfield(0, MR_sv(2), 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i99);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(2, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i38) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i20));
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("prepare_for_ho_call", 19);
	MR_r3 = (MR_Integer) 2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i44);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(1);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_sv(13) = MR_sv(17);
	MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i19);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(12) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(13) = MR_ctfield(0, MR_sv(17), 5);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i24);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MethodNum", 9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i25);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(13) = MR_tempr1;
	MR_tempr3 = MR_sv(17);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_unify_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i28);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("prepare_for_method_call", 23);
	MR_r3 = (MR_Integer) 3;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i32);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tempr6 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_ctfield(0, MR_tempr6, 1);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_r1 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr5, 2) = MR_sv(10);
	MR_tfield(3, MR_tempr5, 3) = MR_sv(1);
	MR_sv(1) = MR_tempr5;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i19);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__this_file_0_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i39);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("deep_profiling.wrap_call: event_call", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i19);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__this_file_0_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i21);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("deep_profiling.wrap_call: cast", 30);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i19);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i50);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i51);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 176;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i52);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i54);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_sv(7);
	MR_sv(2) = MR_sv(13);
	MR_r2 = MR_ctfield(0, MR_sv(2), 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i99);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i56);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i99);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("prepare_for_special_call", 24);
	MR_r3 = (MR_Integer) 2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i94);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_sv(7);
	MR_sv(2) = MR_sv(17);
	MR_r2 = MR_ctfield(0, MR_sv(2), 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i99);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Integer) 9;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i102);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i101);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 7);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i101);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i101);
	}
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i107);
	}
	MR_r1 = MR_sv(3);
	MR_sv(10) = MR_tempr4;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_ctfield(0, MR_sv(10), 2);
	}
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i113);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i109);
	}
	MR_tempr3 = MR_sv(2);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 2);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i110);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i113);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__this_file_0_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i111);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("wrap_call: multi-procedure SCCs not yet implemented", 51);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i106);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i113);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i115);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i147);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i127);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i128);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 7;
	}
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__impure_unreachable_init_goal_info_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i129);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__fail_goal_info_0_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i130);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,8,0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i134);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr5 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_call_5_0_i147);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,147)
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
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(18);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module36)
	MR_init_entry1(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0);
	MR_init_label8(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,2,3,4,6,8,9,10,11)
	MR_init_label3(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,12,14,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(9) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0_i2);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0_i3);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("SiteNum", 7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_sv(9), 5);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0_i4);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_unify_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0_i6);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("prepare_for_callback", 20);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0_i8);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0_i9);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0_i10);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0_i11);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__compress_filename_3_0,
		ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0_i12);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__make_impure_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0_i14);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 8);
	MR_sv(2) = MR_tempr3;
	MR_tempr5 = MR_sv(9);
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 4) = MR_ctfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr3, 6) = MR_ctfield(0, MR_tempr5, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_ctfield(0, MR_tempr5, 7);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	MR_r2 = MR_ctfield(0, MR_tempr3, 4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0_i22);
MR_def_label(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module37)
	MR_init_entry1(ll_backend__deep_profiling__add_impurity_if_needed_3_0);
	MR_init_label4(ll_backend__deep_profiling__add_impurity_if_needed_3_0,21,5,4,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__add_impurity_if_needed_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__add_impurity_if_needed_3_0_i21);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__add_impurity_if_needed_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		ll_backend__deep_profiling__add_impurity_if_needed_3_0_i5);
MR_def_label(ll_backend__deep_profiling__add_impurity_if_needed_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__add_impurity_if_needed_3_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__deep_profiling__add_impurity_if_needed_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		ll_backend__deep_profiling__add_impurity_if_needed_3_0_i7);
MR_def_label(ll_backend__deep_profiling__add_impurity_if_needed_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_add_feature_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
MR_decl_entry(fn__cord__snoc_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__type_util__switch_type_num_functors_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module38)
	MR_init_entry1(ll_backend__deep_profiling__deep_prof_transform_goal_6_0);
	MR_init_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,57,173,19,119,175,172,3,5)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,7,4,9,10,11,14,15,16)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,23,24,25,26,27,28,29,33)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,35,32,39,38,43,44,31,51)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,52,53,54,61,62,63,66,67)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,68,64,72,73,74,75,87,88)
	MR_init_label6(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,90,92,95,94,99,100)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__deep_prof_transform_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i119) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i172));
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r4, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i173);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i7);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r4, 0);
	if (!(((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i175);
	}
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_wrap_call_5_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i7);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i90) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i61) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i87));
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i5);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_wrap_foreign_code_5_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i7);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(3) = MR_ctfield(3, MR_r4, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_r4, 2);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_transform_conj_8_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i10);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__add_impurity_if_needed_3_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i11);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_r4, 1);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_transform_disj_7_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i15);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(6) = MR_r3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__add_impurity_if_needed_3_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i16);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i24);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_np_localcall_lab(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i25);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i26);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_np_localcall_lab(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i27);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i28);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_localcall_lab(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i29);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i33);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i32);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i35);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i32);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i31);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(6) = MR_r3;
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i39);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i43);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i44);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,31)
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
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(3, MR_r4, 1);
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 3);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i52);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_localcall_lab(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i53);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__add_impurity_if_needed_3_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i54);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_ctfield(3, MR_tempr1, 2), 1);
	MR_sv(7) = MR_r3;
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i62);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i63);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(4))) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i64);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,12,0);
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i66);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_localcall_lab(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i67);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(6) = MR_r3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__add_impurity_if_needed_3_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i68);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,12,1);
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i72);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_localcall_lab(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i73);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(6) = MR_r3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__add_impurity_if_needed_3_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i74);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i75);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,12,2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,12,2);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__this_file_0_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i88);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("deep_prof_transform_goal: shorthand should have gone by now", 59);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_ctfield(0, MR_sv(7), 5), 1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i92);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__switch_type_num_functors_3_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i95);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i94);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_transform_switch_8_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i99);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(7);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_transform_switch_8_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i99);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__add_impurity_if_needed_3_0,
		ll_backend__deep_profiling__deep_prof_transform_goal_6_0_i100);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bool__or_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module39)
	MR_init_entry1(ll_backend__deep_profiling__deep_prof_transform_conj_8_0);
	MR_init_label7(ll_backend__deep_profiling__deep_prof_transform_conj_8_0,32,5,6,7,12,8,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__deep_prof_transform_conj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_conj_8_0_i32);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_conj_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__deep_prof_transform_conj_8_0_i5);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,
		ll_backend__deep_profiling__deep_prof_transform_conj_8_0_i6);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_conj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__deep_prof_transform_conj_8_0,
		ll_backend__deep_profiling__deep_prof_transform_conj_8_0_i7);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_conj_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_conj_8_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_conj_8_0_i8);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_conj_8_0_i8);
	}
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__deep_prof_transform_conj_8_0_i12);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_conj_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__deep_prof_transform_conj_8_0_i15);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_conj_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__deep_prof_transform_conj_8_0_i15);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_conj_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module40)
	MR_init_entry1(ll_backend__deep_profiling__deep_prof_transform_disj_7_0);
	MR_init_label5(ll_backend__deep_profiling__deep_prof_transform_disj_7_0,17,5,6,7,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__deep_prof_transform_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_disj_7_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_disj_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__deep_prof_transform_disj_7_0_i5);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_disj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,
		ll_backend__deep_profiling__deep_prof_transform_disj_7_0_i6);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_disj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__deep_prof_transform_disj_7_0,
		ll_backend__deep_profiling__deep_prof_transform_disj_7_0_i7);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_disj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__deep_prof_transform_disj_7_0_i9);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_disj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module41)
	MR_init_entry1(ll_backend__deep_profiling__deep_prof_transform_switch_8_0);
	MR_init_label5(ll_backend__deep_profiling__deep_prof_transform_switch_8_0,18,5,6,8,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__deep_prof_transform_switch_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_switch_8_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_switch_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = MR_r5;
	MR_tempr5 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr5, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__deep_prof_transform_switch_8_0_i5);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_switch_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,
		ll_backend__deep_profiling__deep_prof_transform_switch_8_0_i6);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_switch_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr4;
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__deep_prof_transform_switch_8_0,
		ll_backend__deep_profiling__deep_prof_transform_switch_8_0_i8);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_switch_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__deep_prof_transform_switch_8_0_i10);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_switch_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module42)
	MR_init_entry1(ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0);
	MR_init_label3(ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0_i4);
MR_def_label(ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ActivationPtr", 13);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0_i5);
MR_def_label(ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r4;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module43)
	MR_init_entry1(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0);
	MR_init_label5(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0,4,5,3,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0_i4);
MR_def_label(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("OldOutermost", 12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0_i5);
MR_def_label(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0_i9);
MR_def_label(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r4;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0_i9);
MR_def_label(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("NewOutermost", 12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0_i10);
MR_def_label(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module44)
	MR_init_entry1(ll_backend__deep_profiling__extract_deep_rec_info_2_0);
	MR_init_label1(ll_backend__deep_profiling__extract_deep_rec_info_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__extract_deep_rec_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__extract_deep_rec_info_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__extract_deep_rec_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module45)
	MR_init_entry1(ll_backend__deep_profiling__record_hlds_proc_static_4_0);
	MR_init_label2(ll_backend__deep_profiling__record_hlds_proc_static_4_0,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__record_hlds_proc_static_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0,
		ll_backend__deep_profiling__record_hlds_proc_static_4_0_i2);
MR_def_label(ll_backend__deep_profiling__record_hlds_proc_static_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__record_hlds_proc_static_4_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_0);
	}
MR_def_label(ll_backend__deep_profiling__record_hlds_proc_static_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module46)
	MR_init_entry1(ll_backend__deep_profiling__proc_static_cons_id_2_0);
	MR_init_label2(ll_backend__deep_profiling__proc_static_cons_id_2_0,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__proc_static_cons_id_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_r2 = MR_ctfield(0, MR_tempr3, 4);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 5);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__proc_static_cons_id_2_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__proc_static_cons_id_2_0_i2);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		ll_backend__deep_profiling__proc_static_cons_id_2_0_i6);
MR_def_label(ll_backend__deep_profiling__proc_static_cons_id_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		ll_backend__deep_profiling__proc_static_cons_id_2_0_i6);
MR_def_label(ll_backend__deep_profiling__proc_static_cons_id_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__default_attributes_1_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mercury_3_0);
MR_decl_entry(parse_tree__prog_data__set_purity_3_0);
MR_decl_entry(parse_tree__prog_data__set_terminates_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_throw_exception_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module47)
	MR_init_entry1(ll_backend__deep_profiling__coverage_point_ll_code_2_0);
	MR_init_label5(ll_backend__deep_profiling__coverage_point_ll_code_2_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_point_ll_code_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		ll_backend__deep_profiling__coverage_point_ll_code_2_0_i2);
MR_def_label(ll_backend__deep_profiling__coverage_point_ll_code_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		ll_backend__deep_profiling__coverage_point_ll_code_2_0_i3);
MR_def_label(ll_backend__deep_profiling__coverage_point_ll_code_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		ll_backend__deep_profiling__coverage_point_ll_code_2_0_i4);
MR_def_label(ll_backend__deep_profiling__coverage_point_ll_code_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_terminates_3_0,
		ll_backend__deep_profiling__coverage_point_ll_code_2_0_i5);
MR_def_label(ll_backend__deep_profiling__coverage_point_ll_code_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_throw_exception_3_0,
		ll_backend__deep_profiling__coverage_point_ll_code_2_0_i6);
MR_def_label(ll_backend__deep_profiling__coverage_point_ll_code_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,13,0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(hlds__hlds_goal__make_foreign_args_4_0);
MR_decl_entry(fn__assoc_list__from_corresponding_lists_2_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module48)
	MR_init_entry1(ll_backend__deep_profiling__make_coverage_point_4_0);
	MR_init_label8(ll_backend__deep_profiling__make_coverage_point_4_0,2,3,5,6,8,9,10,11)
	MR_init_label8(ll_backend__deep_profiling__make_coverage_point_4_0,12,14,27,28,31,32,35,38)
	MR_init_label2(ll_backend__deep_profiling__make_coverage_point_4_0,39,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__make_coverage_point_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i2);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i3);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i5);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("CPIndex", 7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i6);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_unify_3_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i8);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i9);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ProcLayout", 10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i10);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__deep_profiling__proc_static_cons_id_2_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i11);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_unify_3_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i12);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(8) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = (MR_Word) MR_string_const("increment_coverage_point_count", 30);
	MR_r3 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i14);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,0,10);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i27);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i28);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_foreign_args_4_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i31);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_point_ll_code_2_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i32);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 7) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i35);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_sv(7);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,0,12);
	MR_np_call_localret_ent(fn__assoc_list__from_corresponding_lists_2_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i38);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i39);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__impure_init_goal_info_3_0,
		ll_backend__deep_profiling__make_coverage_point_4_0_i40);
MR_def_label(ll_backend__deep_profiling__make_coverage_point_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__create_conj_from_list_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module49)
	MR_init_entry1(ll_backend__deep_profiling__insert_coverage_point_before_5_0);
	MR_init_label4(ll_backend__deep_profiling__insert_coverage_point_before_5_0,2,3,8,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__insert_coverage_point_before_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__deep_profiling__make_coverage_point_4_0,
		ll_backend__deep_profiling__insert_coverage_point_before_5_0_i2);
MR_def_label(ll_backend__deep_profiling__insert_coverage_point_before_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__insert_coverage_point_before_5_0_i3);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__insert_coverage_point_before_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__insert_coverage_point_before_5_0_i8);
MR_def_label(ll_backend__deep_profiling__insert_coverage_point_before_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__insert_coverage_point_before_5_0_i8);
MR_def_label(ll_backend__deep_profiling__insert_coverage_point_before_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_util__create_conj_from_list_3_0,
		ll_backend__deep_profiling__insert_coverage_point_before_5_0_i10);
MR_def_label(ll_backend__deep_profiling__insert_coverage_point_before_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module50)
	MR_init_entry1(ll_backend__deep_profiling__coverage_after_known_branch_3_0);
	MR_init_label1(ll_backend__deep_profiling__coverage_after_known_branch_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_after_known_branch_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_after_known_branch_3_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_after_known_branch_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__coverage_after_known_branch_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module51)
	MR_init_entry1(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0);
	MR_init_label5(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0,29,4,5,10,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0_i29);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ll_backend__deep_profiling__make_coverage_point_4_0,
		ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0_i4);
MR_def_label(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0_i5);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0_i10);
MR_def_label(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0_i10);
MR_def_label(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_util__create_conj_from_list_3_0,
		ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0_i12);
MR_def_label(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_dp_info_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module52)
	MR_init_entry1(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0);
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,2,4,5,3,11,14,21,23)
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,26,28,30,96,32,9,7,98)
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,36,40,77,41,42,44,45,47)
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,50,51,52,53,54,56,58,57)
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,61,62,63,65,66,68,69,71)
	MR_init_label5(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,39,78,81,83,85)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_r4;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i2);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_ctfield(0, MR_sv(8), 6), 8);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i4);
	}
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i3);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_dp_info_1_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i5);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i7);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i9);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i11);
	}
	if (!((((MR_Integer) MR_sv(5) == (MR_Integer) 4) || ((MR_Integer) MR_sv(5) == (MR_Integer) 0)))) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i96);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	if (MR_INT_EQ(MR_tag(MR_sv(3)),3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i77);
	}
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i40);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i14);
	}
	if (!((((MR_Integer) MR_sv(5) == (MR_Integer) 4) || ((MR_Integer) MR_sv(5) == (MR_Integer) 0)))) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i96);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	if (MR_INT_EQ(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i77);
	}
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i40);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(5),
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i98) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i26) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i98) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i96));
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_ctfield(0, MR_sv(8), 6), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Integer) 1;
	if (MR_INT_EQ(MR_tag(MR_sv(3)),3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i77);
	}
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i40);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,9,1);
	MR_sv(2) = (MR_Integer) 0;
	if (MR_INT_EQ(MR_tag(MR_sv(3)),3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i77);
	}
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i40);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_ctfield(0, MR_sv(8), 6), 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Integer) 1;
	if (MR_INT_EQ(MR_tag(MR_sv(3)),3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i77);
	}
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i40);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,9,2);
	MR_sv(2) = (MR_Integer) 0;
	if (MR_INT_EQ(MR_tag(MR_sv(3)),3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i77);
	}
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i40);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_sv(8), 6), 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i32);
	}
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Integer) 1;
	if (MR_INT_EQ(MR_tag(MR_sv(3)),3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i77);
	}
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i40);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,9,3);
	MR_sv(2) = (MR_Integer) 0;
	if (MR_INT_EQ(MR_tag(MR_sv(3)),3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i77);
	}
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i40);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Integer) 0;
	if (MR_INT_EQ(MR_tag(MR_sv(3)),3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i77);
	}
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i40);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i36);
	}
	if (!((((MR_Integer) MR_sv(5) == (MR_Integer) 4) || ((MR_Integer) MR_sv(5) == (MR_Integer) 0)))) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i96);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	if (MR_INT_EQ(MR_tag(MR_sv(3)),3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i77);
	}
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i40);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Integer) 0;
	if (MR_INT_EQ(MR_tag(MR_sv(3)),3)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i77);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(6) = MR_sv(8);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i39);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(3), 0),
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i40) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i44) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i52) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i56) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i65));
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i42);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r4;
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i39);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i45);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(5) == (MR_Integer) 4) || ((MR_Integer) MR_sv(5) == (MR_Integer) 0)))) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i39);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = (MR_Integer) 1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i39);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_r5 = MR_ctfield(3, MR_tempr1, 4);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i51);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i39);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 3);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i53);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i54);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r4;
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i39);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(7), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i58);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i57);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,12,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i61);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,12,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i62);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i63);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r4;
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i39);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__this_file_0_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i66);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("deep_profiling.coverage_prof_transform_goal: shorthand should have gone by now", 78);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i39);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i69);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i71);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = (MR_Integer) 1;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r4;
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i39);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r3;
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__deep_profiling__add_impurity_if_needed_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i78);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i81);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_sv(3), 0);
	MR_sv(1) = MR_r5;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__make_coverage_point_4_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i83);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__goal_util__create_conj_from_list_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0_i85);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module53)
	MR_init_entry1(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0);
	MR_init_label7(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0,32,4,6,7,12,8,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0_i32);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_r4, 0);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0_i4);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0_i6);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0_i7);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0_i8);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0_i8);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0_i12);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0_i15);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_sv(5);
	MR_r1 = MR_r4;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0_i15);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_conj_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module54)
	MR_init_entry1(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0);
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,50,4,6,7,9,12,15,16)
	MR_init_label3(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,21,23,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i50);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i4);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i6);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i7);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 6), 5);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r4;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i25);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r4;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i25);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_cp_type_branch_arm);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__make_coverage_point_4_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i15);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i16);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i16);
	}
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i21);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i21);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_util__create_conj_from_list_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i23);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0_i25);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_disj_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module55)
	MR_init_entry1(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0);
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,56,29,7,4,11,12,14,16)
	MR_init_label4(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,18,19,23,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i56);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r6;
	MR_r4 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r7 = MR_ctfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i29);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i7);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r8 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r4, 0);
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_ctfield(0, MR_sv(6), 2);
	MR_sv(9) = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i4);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r4, 0);
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_ctfield(0, MR_sv(6), 2);
	MR_sv(9) = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i11);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i12);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_tempr5, 6), 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i14);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_tempr5;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r2;
	MR_r6 = MR_tempr2;
	MR_r2 = ((MR_Integer) MR_tempr4 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i19);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r2;
	MR_r6 = MR_tempr2;
	MR_r2 = ((MR_Integer) MR_tempr4 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i19);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_cp_type_branch_arm);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__insert_coverage_point_before_5_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i18);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 1;
	MR_sv(3) = (MR_Integer) 0;
	MR_r6 = MR_r2;
	MR_r2 = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i19);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i23);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i23);
	}
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 0;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i26);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0_i26);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_switchcase_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bool__or_2_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module56)
	MR_init_entry1(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0);
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,4,7,11,12,14,6,3,2)
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,15,16,17,18,19,49,21,25)
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,26,24,30,31,34,35,36,37)
	MR_init_label5(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,38,39,40,41,42)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i4);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r1 == (MR_Integer) 4) || ((MR_Integer) MR_r1 == (MR_Integer) 0)))) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i6);
	}
	MR_r1 = MR_ctfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i7);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r1 == (MR_Integer) 4) || ((MR_Integer) MR_r1 == (MR_Integer) 0)))) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i6);
	}
	MR_r4 = MR_ctfield(0, MR_ctfield(0, MR_sv(8), 6), 8);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i11);
	}
	MR_r2 = MR_sv(1);
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(7) = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i2);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_dp_info_1_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i12);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i14);
	}
	MR_r2 = MR_sv(1);
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(7) = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i2);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(6) = (MR_Integer) 1;
	MR_sv(7) = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i2);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(6) = (MR_Integer) 1;
	MR_sv(7) = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i2);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = (MR_Integer) 1;
	MR_sv(7) = (MR_Integer) 1;
	MR_sv(8) = MR_r7;
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i15);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i16);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i17);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i18);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(10) = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 6), 3);
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_dp_info_1_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i19);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i21);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i34);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i49);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i25);
	}
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i24);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i26);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_cp_type_branch_arm);
	MR_tag_alloc_heap(MR_sv(10), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(10), 0) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(11);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i34);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i31);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_cp_type_branch_arm);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i34);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i35);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__maybe_insert_coverage_point_before_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i36);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i37);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_after_known_branch_3_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i38);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i39);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i40);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i41);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0_i42);
MR_def_label(ll_backend__deep_profiling__coverage_prof_second_pass_ite_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__counter__init_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module57)
	MR_init_entry1(fn__ll_backend__deep_profiling__init_proc_coverage_info_5_0);
	MR_init_label2(fn__ll_backend__deep_profiling__init_proc_coverage_info_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__deep_profiling__init_proc_coverage_info_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__ll_backend__deep_profiling__init_proc_coverage_info_5_0_i2);
MR_def_label(fn__ll_backend__deep_profiling__init_proc_coverage_info_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		fn__ll_backend__deep_profiling__init_proc_coverage_info_5_0_i3);
MR_def_label(fn__ll_backend__deep_profiling__init_proc_coverage_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module58)
	MR_init_entry1(ll_backend__deep_profiling__goal_trivial_and_3_0);
	MR_init_label1(ll_backend__deep_profiling__goal_trivial_and_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__goal_trivial_and_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__goal_trivial_and_3_0_i2);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__goal_trivial_and_3_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__goal_trivial_and_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module59)
	MR_init_entry1(ll_backend__deep_profiling__goal_has_port_counts_and_3_0);
	MR_init_label1(ll_backend__deep_profiling__goal_has_port_counts_and_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__goal_has_port_counts_and_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__goal_has_port_counts_and_3_0_i2);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__goal_has_port_counts_and_3_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__goal_has_port_counts_and_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module60)
	MR_init_entry1(ll_backend__deep_profiling__has_port_counts_after_4_0);
	MR_init_label4(ll_backend__deep_profiling__has_port_counts_after_4_0,4,7,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__has_port_counts_after_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__has_port_counts_after_4_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__deep_profiling__has_port_counts_after_4_0_i4);
MR_def_label(ll_backend__deep_profiling__has_port_counts_after_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__has_port_counts_after_4_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__deep_profiling__has_port_counts_after_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__has_port_counts_after_4_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__deep_profiling__has_port_counts_after_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__deep_profiling__has_port_counts_after_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_trivial_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_has_port_counts_0;
MR_decl_entry(list__map_foldl2_7_1);
MR_decl_entry(hlds__hlds_goal__goal_info_set_maybe_dp_info_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module61)
	MR_init_entry1(ll_backend__deep_profiling__coverage_prof_first_pass_5_0);
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,37,3,41,4,6,8,9,11)
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,12,14,15,16,17,18,20,21)
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,22,23,24,26,27,29,30,32)
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,33,36,2,43,44,42,46,51)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_prof_first_pass_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_r4 = MR_ctfield(0, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i37) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i41));
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 7);
	MR_r3 = MR_ctfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_sv(6) = (MR_Integer) 1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 7);
	MR_r3 = MR_ctfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i26) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i29));
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__deep_profiling__coverage_prof_first_pass_conj_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_tempr4;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_ctfield(0, MR_tempr4, 1);
	MR_tempr5 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_trivial);
	MR_tempr2 = MR_tempr5;
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_has_port_counts);
	MR_r6 = MR_ctfield(3, MR_tempr2, 2);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_1,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i6);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r1 = MR_r3;
	MR_tempr2 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 7);
	MR_r3 = MR_ctfield(0, MR_tempr2, 6);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i9);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i11);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i12);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i14);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 7);
	MR_r3 = MR_ctfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 7);
	MR_r3 = MR_ctfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 4);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i16);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i17);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_tempr3 = MR_r2;
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i18);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__goal_trivial_and_3_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i20);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__deep_profiling__goal_trivial_and_3_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i21);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__deep_profiling__goal_has_port_counts_and_3_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i22);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 7);
	MR_r3 = MR_ctfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i24);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r4 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_sv(1);
	MR_r4 = MR_tempr3;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 7);
	MR_r3 = MR_ctfield(0, MR_tempr3, 6);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i27);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r5 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_sv(1);
	MR_r5 = MR_tempr3;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 7);
	MR_r3 = MR_ctfield(0, MR_tempr3, 6);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__this_file_0_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i30);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("deep_profiling.goal_is_nontrivial: shorthand should have gone by now", 68);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i2);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 2);
	MR_r2 = MR_ctfield(3, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i33);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tempr3 = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i36);
	}
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 7);
	MR_r3 = MR_ctfield(0, MR_tempr2, 6);
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r1 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 7);
	MR_r3 = MR_ctfield(0, MR_tempr1, 6);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i43);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i42);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__has_port_counts_after_4_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i44);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_maybe_dp_info_3_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i51);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_maybe_dp_info_3_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_5_0_i51);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module62)
	MR_init_entry1(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0);
	MR_init_label6(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0,35,4,5,7,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0_i4);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0_i5);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0_i7);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0_i7);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0_i10);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 1;
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0_i11);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0_i11);
	}
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_disj_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module63)
	MR_init_entry1(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0);
	MR_init_label6(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0,38,4,5,6,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0_i38);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0_i4);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0_i5);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0_i6);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0_i6);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0_i9);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0_i10);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_switchcase_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_sorted_assoc_list_2_0);
MR_decl_entry(assoc_list__values_2_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module64)
	MR_init_entry1(ll_backend__deep_profiling__coverage_points_map_list_2_0);
	MR_init_label1(ll_backend__deep_profiling__coverage_points_map_list_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_points_map_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_sorted_assoc_list_2_0,
		ll_backend__deep_profiling__coverage_points_map_list_2_0_i2);
MR_def_label(ll_backend__deep_profiling__coverage_points_map_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(assoc_list__values_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__empty_0_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module65)
	MR_init_entry1(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0);
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,10,11,13,15,16,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i2);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 168;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i3);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 169;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i4);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 170;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i5);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 171;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i6);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 172;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i7);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 173;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i8);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 174;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i9);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 175;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i10);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i11);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__init_proc_coverage_info_5_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i13);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 8);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i17);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i16);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i17);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_second_pass_goal_8_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i18);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_points_map_list_2_0,
		ll_backend__deep_profiling__coverage_prof_transform_goal_8_0_i19);
MR_def_label(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(fn__hlds__code_model__proc_info_interface_code_model_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module66)
	MR_init_entry1(ll_backend__deep_profiling__transform_normal_proc_4_0);
	MR_init_label8(ll_backend__deep_profiling__transform_normal_proc_4_0,2,3,4,5,7,8,9,10)
	MR_init_label8(ll_backend__deep_profiling__transform_normal_proc_4_0,11,12,13,14,15,16,17,18)
	MR_init_label8(ll_backend__deep_profiling__transform_normal_proc_4_0,20,21,22,24,25,23,26,30)
	MR_init_label8(ll_backend__deep_profiling__transform_normal_proc_4_0,31,34,36,37,40,39,43,42)
	MR_init_label5(ll_backend__deep_profiling__transform_normal_proc_4_0,45,46,47,48,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__transform_normal_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i2);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i3);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i4);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i5);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i7);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("TopCSD", 6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i8);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i9);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MiddleCSD", 9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i10);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i11);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ProcStaticLayout", 16);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i12);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i13);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i14);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i15);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i16);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__deep_profiling__extract_deep_rec_info_2_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i17);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i18);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(11);
	MR_sv(12) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i20);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i21);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 167;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i22);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__transform_normal_proc_4_0_i24);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(15) = MR_sv(13);
	MR_GOTO_LAB(ll_backend__deep_profiling__transform_normal_proc_4_0_i23);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_transform_goal_8_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i25);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(15) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_sv(3) = MR_r3;
	}
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__transform_normal_proc_4_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_sv(11), 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__transform_normal_proc_4_0_i26);
	}
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = (MR_Integer) 166;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i30);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Integer) 166;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i30);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i31);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i34);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_unify_3_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i36);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i37);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__transform_normal_proc_4_0_i39);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i40);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__build_det_proc_body_9_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i46);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__transform_normal_proc_4_0_i42);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_outermost_proc_dyns_8_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i43);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr4 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__build_non_proc_body_10_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i46);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__deep_profiling__maybe_generate_activation_ptr_7_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i45);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__build_semi_proc_body_9_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i46);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i47);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i48);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		ll_backend__deep_profiling__transform_normal_proc_4_0_i49);
MR_def_label(ll_backend__deep_profiling__transform_normal_proc_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(ll_backend__deep_profiling__record_hlds_proc_static_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module67)
	MR_init_entry1(ll_backend__deep_profiling__deep_prof_transform_proc_4_0);
	MR_init_label8(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,2,7,8,9,11,12,13,14)
	MR_init_label8(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,15,17,18,20,21,22,23,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__deep_prof_transform_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i2);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i3);
	}
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i7);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i8);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i9);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i11);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MiddleCSD", 9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i12);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i13);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i14);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i15);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i17);
	}
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i18);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i18);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i20);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_transform_goal_6_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i21);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r3, 5);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i22);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		ll_backend__deep_profiling__deep_prof_transform_proc_4_0_i23);
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_goal_3_0);
	}
MR_def_label(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__deep_profiling__transform_normal_proc_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_module__predicate_module_2_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module68)
	MR_init_entry1(ll_backend__deep_profiling__maybe_transform_procedure_5_0);
	MR_init_label8(ll_backend__deep_profiling__maybe_transform_procedure_5_0,2,3,4,5,10,11,9,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__maybe_transform_procedure_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__deep_profiling__maybe_transform_procedure_5_0_i2);
MR_def_label(ll_backend__deep_profiling__maybe_transform_procedure_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__deep_profiling__maybe_transform_procedure_5_0_i3);
MR_def_label(ll_backend__deep_profiling__maybe_transform_procedure_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_module_2_0,
		ll_backend__deep_profiling__maybe_transform_procedure_5_0_i4);
MR_def_label(ll_backend__deep_profiling__maybe_transform_procedure_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(5), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__maybe_transform_procedure_5_0_i5);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 7);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__maybe_transform_procedure_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("deep_profiling.m", 16);
	MR_r2 = (MR_Word) MR_string_const("deep profiling is incompatible with nondet foreign code", 55);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(ll_backend__deep_profiling__maybe_transform_procedure_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_profiling_builtin_module_0_0,
		ll_backend__deep_profiling__maybe_transform_procedure_5_0_i10);
MR_def_label(ll_backend__deep_profiling__maybe_transform_procedure_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ll_backend__deep_profiling__maybe_transform_procedure_5_0_i11);
MR_def_label(ll_backend__deep_profiling__maybe_transform_procedure_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__maybe_transform_procedure_5_0_i9);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__deep_profiling__maybe_transform_procedure_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__deep_prof_transform_proc_4_0,
		ll_backend__deep_profiling__maybe_transform_procedure_5_0_i14);
MR_def_label(ll_backend__deep_profiling__maybe_transform_procedure_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module69)
	MR_init_entry1(ll_backend__deep_profiling__build_det_proc_body_9_0);
	MR_init_label7(ll_backend__deep_profiling__build_det_proc_body_9_0,8,9,3,17,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__build_det_proc_body_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__build_det_proc_body_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_r2 = (MR_Word) MR_string_const("det_call_port_code_ac", 21);
	MR_r3 = (MR_Integer) 3;
	MR_r4 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_call_7_0,
		ll_backend__deep_profiling__build_det_proc_body_9_0_i8);
MR_def_label(ll_backend__deep_profiling__build_det_proc_body_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		ll_backend__deep_profiling__build_det_proc_body_9_0_i9);
MR_def_label(ll_backend__deep_profiling__build_det_proc_body_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("det_exit_port_code_ac", 21);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_call_7_0,
		ll_backend__deep_profiling__build_det_proc_body_9_0_i19);
MR_def_label(ll_backend__deep_profiling__build_det_proc_body_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r5, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_r2 = (MR_Word) MR_string_const("det_call_port_code_sr", 21);
	MR_r3 = (MR_Integer) 4;
	MR_r4 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_call_7_0,
		ll_backend__deep_profiling__build_det_proc_body_9_0_i17);
MR_def_label(ll_backend__deep_profiling__build_det_proc_body_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		ll_backend__deep_profiling__build_det_proc_body_9_0_i18);
MR_def_label(ll_backend__deep_profiling__build_det_proc_body_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("det_exit_port_code_sr", 21);
	MR_r3 = (MR_Integer) 3;
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__build_det_proc_body_9_0_i19);
MR_def_label(ll_backend__deep_profiling__build_det_proc_body_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__make_impure_2_0,
		ll_backend__deep_profiling__build_det_proc_body_9_0_i20);
MR_def_label(ll_backend__deep_profiling__build_det_proc_body_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module70)
	MR_init_entry1(ll_backend__deep_profiling__build_semi_proc_body_9_0);
	MR_init_label8(ll_backend__deep_profiling__build_semi_proc_body_9_0,7,8,9,10,3,17,18,19)
	MR_init_label4(ll_backend__deep_profiling__build_semi_proc_body_9_0,20,22,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__build_semi_proc_body_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__build_semi_proc_body_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(6) = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("semi_call_port_code_ac", 22);
	MR_r3 = (MR_Integer) 3;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i7);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i8);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("semi_exit_port_code_ac", 22);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i9);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("semi_fail_port_code_ac", 22);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 7;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_call_7_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i10);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i22);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r5, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(6) = MR_tempr3;
	MR_r2 = (MR_Word) MR_string_const("semi_call_port_code_sr", 22);
	MR_r3 = (MR_Integer) 4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i17);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i18);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("semi_exit_port_code_sr", 22);
	MR_r3 = (MR_Integer) 3;
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_det_call_6_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i19);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("semi_fail_port_code_sr", 22);
	MR_r3 = (MR_Integer) 3;
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 7;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_call_7_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i20);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i22);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__deep_profiling__goal_info_add_nonlocals_make_impure_2_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i23);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__make_impure_2_0,
		ll_backend__deep_profiling__build_semi_proc_body_9_0_i24);
MR_def_label(ll_backend__deep_profiling__build_semi_proc_body_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module71)
	MR_init_entry1(ll_backend__deep_profiling__generate_depth_var_4_0);
	MR_init_label3(ll_backend__deep_profiling__generate_depth_var_4_0,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__generate_depth_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(3) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("Depth%d", 7);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ll_backend__deep_profiling__generate_depth_var_4_0_i4);
MR_def_label(ll_backend__deep_profiling__generate_depth_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		ll_backend__deep_profiling__generate_depth_var_4_0_i5);
MR_def_label(ll_backend__deep_profiling__generate_depth_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__deep_profiling__generate_depth_var_4_0_i6);
MR_def_label(ll_backend__deep_profiling__generate_depth_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module72)
	MR_init_entry1(ll_backend__deep_profiling__coverage_prof_first_pass_conj_7_0);
	MR_init_label2(ll_backend__deep_profiling__coverage_prof_first_pass_conj_7_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__coverage_prof_first_pass_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ll_backend__deep_profiling__coverage_prof_first_pass_5_0,
		ll_backend__deep_profiling__coverage_prof_first_pass_conj_7_0_i2);
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_conj_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_conj_7_0_i3);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__deep_profiling__coverage_prof_first_pass_conj_7_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__deep_profiling__coverage_prof_first_pass_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module73)
	MR_init_entry1(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0);
	MR_init_label4(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,4,7,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i12);
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
		__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i4);
MR_def_label(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i7);
MR_def_label(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,1)
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
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module74)
	MR_init_entry1(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0);
	MR_init_label6(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,3,2,5,10,14,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i2);
MR_def_label(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,2)
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
		__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i5);
MR_def_label(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i10);
MR_def_label(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i39);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i14);
MR_def_label(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__deep_profiling__apply_tail_recursion_info_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__generic_call_0_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module75)
	MR_init_entry1(__Unify___ll_backend__deep_profiling__call_class_0_0);
	MR_init_label5(__Unify___ll_backend__deep_profiling__call_class_0_0,5,13,15,21,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__deep_profiling__call_class_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__call_class_0_0_i21);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__call_class_0_0_i13);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__call_class_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__call_class_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
	}
MR_def_label(__Unify___ll_backend__deep_profiling__call_class_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__call_class_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__generic_call_0_0);
MR_def_label(__Unify___ll_backend__deep_profiling__call_class_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__call_class_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___ll_backend__deep_profiling__call_class_0_0_i15);
MR_def_label(__Unify___ll_backend__deep_profiling__call_class_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__call_class_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___ll_backend__deep_profiling__call_class_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__deep_profiling__call_class_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___hlds__hlds_goal__generic_call_0_0);
MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module76)
	MR_init_entry1(__Compare___ll_backend__deep_profiling__call_class_0_0);
	MR_init_label8(__Compare___ll_backend__deep_profiling__call_class_0_0,3,2,5,7,21,55,23,25)
	MR_init_label2(__Compare___ll_backend__deep_profiling__call_class_0_0,27,93)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__deep_profiling__call_class_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__call_class_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__call_class_0_0_i2);
MR_def_label(__Compare___ll_backend__deep_profiling__call_class_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__deep_profiling__call_class_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__call_class_0_0_i21);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__call_class_0_0_i5);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__call_class_0_0_i23);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__call_class_0_0_i23);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
	}
MR_def_label(__Compare___ll_backend__deep_profiling__call_class_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__call_class_0_0_i55);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__call_class_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ll_backend__deep_profiling__call_class_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__generic_call_0_0);
MR_def_label(__Compare___ll_backend__deep_profiling__call_class_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__call_class_0_0_i25);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__call_class_0_0_i23);
	}
	}
MR_def_label(__Compare___ll_backend__deep_profiling__call_class_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__deep_profiling__call_class_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__deep_profiling__call_class_0_0,25)
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
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___ll_backend__deep_profiling__call_class_0_0_i27);
MR_def_label(__Compare___ll_backend__deep_profiling__call_class_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__call_class_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___ll_backend__deep_profiling__call_class_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module77)
	MR_init_entry1(__Unify___ll_backend__deep_profiling__coverage_after_known_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__deep_profiling__coverage_after_known_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module78)
	MR_init_entry1(__Compare___ll_backend__deep_profiling__coverage_after_known_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__deep_profiling__coverage_after_known_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module79)
	MR_init_entry1(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0);
	MR_init_label2(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 5);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 6);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 7);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 7);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 8);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 8);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module80)
	MR_init_entry1(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0);
	MR_init_label8(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,3,2,5,9,13,17,21,25)
	MR_init_label3(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,29,33,77)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i2);
MR_def_label(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i5);
MR_def_label(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i9);
MR_def_label(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i13);
MR_def_label(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i17);
MR_def_label(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i21);
MR_def_label(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i25);
MR_def_label(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i29);
MR_def_label(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i33);
MR_def_label(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___counter__counter_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module81)
	MR_init_entry1(__Unify___ll_backend__deep_profiling__deep_info_0_0);
	MR_init_label8(__Unify___ll_backend__deep_profiling__deep_info_0_0,4,6,8,10,12,14,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__deep_profiling__deep_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__deep_info_0_0_i18);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___ll_backend__deep_profiling__deep_info_0_0_i4);
MR_def_label(__Unify___ll_backend__deep_profiling__deep_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__deep_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___ll_backend__deep_profiling__deep_info_0_0_i6);
MR_def_label(__Unify___ll_backend__deep_profiling__deep_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__deep_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___ll_backend__deep_profiling__deep_info_0_0_i8);
MR_def_label(__Unify___ll_backend__deep_profiling__deep_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__deep_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ll_backend__deep_profiling__deep_info_0_0_i10);
MR_def_label(__Unify___ll_backend__deep_profiling__deep_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__deep_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__deep_profiling__deep_info_0_0_i12);
MR_def_label(__Unify___ll_backend__deep_profiling__deep_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__deep_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___ll_backend__deep_profiling__var_info_0_0,
		__Unify___ll_backend__deep_profiling__deep_info_0_0_i14);
MR_def_label(__Unify___ll_backend__deep_profiling__deep_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__deep_info_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(6), (char *) (MR_Word *) MR_sv(13)) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__deep_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, deep_recursion_info);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__deep_profiling__deep_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__deep_profiling__deep_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___counter__counter_0_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module82)
	MR_init_entry1(__Compare___ll_backend__deep_profiling__deep_info_0_0);
	MR_init_label8(__Compare___ll_backend__deep_profiling__deep_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label2(__Compare___ll_backend__deep_profiling__deep_info_0_0,29,69)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__deep_profiling__deep_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__deep_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__deep_info_0_0_i2);
MR_def_label(__Compare___ll_backend__deep_profiling__deep_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__deep_profiling__deep_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___ll_backend__deep_profiling__deep_info_0_0_i5);
MR_def_label(__Compare___ll_backend__deep_profiling__deep_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__deep_info_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___ll_backend__deep_profiling__deep_info_0_0_i9);
MR_def_label(__Compare___ll_backend__deep_profiling__deep_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__deep_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___ll_backend__deep_profiling__deep_info_0_0_i13);
MR_def_label(__Compare___ll_backend__deep_profiling__deep_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__deep_info_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ll_backend__deep_profiling__deep_info_0_0_i17);
MR_def_label(__Compare___ll_backend__deep_profiling__deep_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__deep_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__deep_profiling__deep_info_0_0_i21);
MR_def_label(__Compare___ll_backend__deep_profiling__deep_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__deep_info_0_0_i69);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___ll_backend__deep_profiling__var_info_0_0,
		__Compare___ll_backend__deep_profiling__deep_info_0_0_i25);
MR_def_label(__Compare___ll_backend__deep_profiling__deep_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__deep_info_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__deep_profiling__deep_info_0_0_i29);
MR_def_label(__Compare___ll_backend__deep_profiling__deep_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__deep_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, deep_recursion_info);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__deep_profiling__deep_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module83)
	MR_init_entry1(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0);
	MR_init_label8(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0,4,6,8,10,12,14,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i18);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i4);
MR_def_label(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i6);
MR_def_label(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___ll_backend__deep_profiling__var_info_0_0,
		__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i8);
MR_def_label(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i10);
MR_def_label(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i12);
MR_def_label(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, deep_recursion_info);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i14);
MR_def_label(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Unify___ll_backend__deep_profiling__coverage_profiling_options_0_0);
MR_def_label(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__deep_profiling__proc_coverage_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module84)
	MR_init_entry1(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0);
	MR_init_label8(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label1(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0,61)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i2);
MR_def_label(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i5);
MR_def_label(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i9);
MR_def_label(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___ll_backend__deep_profiling__var_info_0_0,
		__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i13);
MR_def_label(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i17);
MR_def_label(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i21);
MR_def_label(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, deep_recursion_info);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i25);
MR_def_label(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0_i61);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Compare___ll_backend__deep_profiling__coverage_profiling_options_0_0);
MR_def_label(__Compare___ll_backend__deep_profiling__proc_coverage_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module85)
	MR_init_entry1(__Unify___ll_backend__deep_profiling__var_info_0_0);
	MR_init_label3(__Unify___ll_backend__deep_profiling__var_info_0_0,4,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__deep_profiling__var_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__var_info_0_0_i9);
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
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___ll_backend__deep_profiling__var_info_0_0_i4);
MR_def_label(__Unify___ll_backend__deep_profiling__var_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__deep_profiling__var_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___ll_backend__deep_profiling__var_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__deep_profiling__var_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module86)
	MR_init_entry1(__Compare___ll_backend__deep_profiling__var_info_0_0);
	MR_init_label4(__Compare___ll_backend__deep_profiling__var_info_0_0,3,2,5,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__deep_profiling__var_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__var_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__var_info_0_0_i2);
MR_def_label(__Compare___ll_backend__deep_profiling__var_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__deep_profiling__var_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___ll_backend__deep_profiling__var_info_0_0_i5);
MR_def_label(__Compare___ll_backend__deep_profiling__var_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__deep_profiling__var_info_0_0_i22);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___ll_backend__deep_profiling__var_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module87)
	MR_init_entry1(ll_backend__deep_profiling__IntroducedFrom__pred__generate_deep_call__1604__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__deep_profiling__IntroducedFrom__pred__generate_deep_call__1604__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_exported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_pseudo_exported_1_0);

MR_BEGIN_MODULE(ll_backend__deep_profiling_module88)
	MR_init_entry1(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0);
	MR_init_label5(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0,2,7,9,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0_i2);
MR_def_label(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_exported_1_0,
		fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0_i7);
MR_def_label(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_exported_1_0,
		fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0_i9);
MR_def_label(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0_i3);
	}
MR_def_label(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__deep_profiling_module89)
	MR_init_entry1(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_108_108_95_98_97_99_107_101_110_100_95_95_100_101_101_112_95_112_114_111_102_105_108_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__deep_profiling_maybe_bunch_0(void)
{
	ll_backend__deep_profiling_module0();
	ll_backend__deep_profiling_module1();
	ll_backend__deep_profiling_module2();
	ll_backend__deep_profiling_module3();
	ll_backend__deep_profiling_module4();
	ll_backend__deep_profiling_module5();
	ll_backend__deep_profiling_module6();
	ll_backend__deep_profiling_module7();
	ll_backend__deep_profiling_module8();
	ll_backend__deep_profiling_module9();
	ll_backend__deep_profiling_module10();
	ll_backend__deep_profiling_module11();
	ll_backend__deep_profiling_module12();
	ll_backend__deep_profiling_module13();
	ll_backend__deep_profiling_module14();
	ll_backend__deep_profiling_module15();
	ll_backend__deep_profiling_module16();
	ll_backend__deep_profiling_module17();
	ll_backend__deep_profiling_module18();
	ll_backend__deep_profiling_module19();
	ll_backend__deep_profiling_module20();
	ll_backend__deep_profiling_module21();
	ll_backend__deep_profiling_module22();
	ll_backend__deep_profiling_module23();
	ll_backend__deep_profiling_module24();
	ll_backend__deep_profiling_module25();
	ll_backend__deep_profiling_module26();
	ll_backend__deep_profiling_module27();
	ll_backend__deep_profiling_module28();
	ll_backend__deep_profiling_module29();
	ll_backend__deep_profiling_module30();
	ll_backend__deep_profiling_module31();
	ll_backend__deep_profiling_module32();
	ll_backend__deep_profiling_module33();
	ll_backend__deep_profiling_module34();
	ll_backend__deep_profiling_module35();
	ll_backend__deep_profiling_module36();
	ll_backend__deep_profiling_module37();
	ll_backend__deep_profiling_module38();
	ll_backend__deep_profiling_module39();
}

static void mercury__ll_backend__deep_profiling_maybe_bunch_1(void)
{
	ll_backend__deep_profiling_module40();
	ll_backend__deep_profiling_module41();
	ll_backend__deep_profiling_module42();
	ll_backend__deep_profiling_module43();
	ll_backend__deep_profiling_module44();
	ll_backend__deep_profiling_module45();
	ll_backend__deep_profiling_module46();
	ll_backend__deep_profiling_module47();
	ll_backend__deep_profiling_module48();
	ll_backend__deep_profiling_module49();
	ll_backend__deep_profiling_module50();
	ll_backend__deep_profiling_module51();
	ll_backend__deep_profiling_module52();
	ll_backend__deep_profiling_module53();
	ll_backend__deep_profiling_module54();
	ll_backend__deep_profiling_module55();
	ll_backend__deep_profiling_module56();
	ll_backend__deep_profiling_module57();
	ll_backend__deep_profiling_module58();
	ll_backend__deep_profiling_module59();
	ll_backend__deep_profiling_module60();
	ll_backend__deep_profiling_module61();
	ll_backend__deep_profiling_module62();
	ll_backend__deep_profiling_module63();
	ll_backend__deep_profiling_module64();
	ll_backend__deep_profiling_module65();
	ll_backend__deep_profiling_module66();
	ll_backend__deep_profiling_module67();
	ll_backend__deep_profiling_module68();
	ll_backend__deep_profiling_module69();
	ll_backend__deep_profiling_module70();
	ll_backend__deep_profiling_module71();
	ll_backend__deep_profiling_module72();
	ll_backend__deep_profiling_module73();
	ll_backend__deep_profiling_module74();
	ll_backend__deep_profiling_module75();
	ll_backend__deep_profiling_module76();
	ll_backend__deep_profiling_module77();
	ll_backend__deep_profiling_module78();
	ll_backend__deep_profiling_module79();
}

static void mercury__ll_backend__deep_profiling_maybe_bunch_2(void)
{
	ll_backend__deep_profiling_module80();
	ll_backend__deep_profiling_module81();
	ll_backend__deep_profiling_module82();
	ll_backend__deep_profiling_module83();
	ll_backend__deep_profiling_module84();
	ll_backend__deep_profiling_module85();
	ll_backend__deep_profiling_module86();
	ll_backend__deep_profiling_module87();
	ll_backend__deep_profiling_module88();
	ll_backend__deep_profiling_module89();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__deep_profiling__init(void);
void mercury__ll_backend__deep_profiling__init_type_tables(void);
void mercury__ll_backend__deep_profiling__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__deep_profiling__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__deep_profiling__init_complexity_procs(void);
#endif

void mercury__ll_backend__deep_profiling__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__deep_profiling_maybe_bunch_0();
	mercury__ll_backend__deep_profiling_maybe_bunch_1();
	mercury__ll_backend__deep_profiling_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__deep_profiling__type_ctor_info_var_info_0,
		ll_backend__deep_profiling__var_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__deep_profiling__type_ctor_info_proc_coverage_info_0,
		ll_backend__deep_profiling__proc_coverage_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__deep_profiling__type_ctor_info_deep_info_0,
		ll_backend__deep_profiling__deep_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__deep_profiling__type_ctor_info_coverage_profiling_options_0,
		ll_backend__deep_profiling__coverage_profiling_options_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__deep_profiling__type_ctor_info_coverage_after_known_0,
		ll_backend__deep_profiling__coverage_after_known_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__deep_profiling__type_ctor_info_call_class_0,
		ll_backend__deep_profiling__call_class_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__deep_profiling__type_ctor_info_apply_tail_recursion_info_0,
		ll_backend__deep_profiling__apply_tail_recursion_info_0_0);
	mercury__ll_backend__deep_profiling__init_debugger();
}

void mercury__ll_backend__deep_profiling__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__deep_profiling__type_ctor_info_var_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__deep_profiling__type_ctor_info_proc_coverage_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__deep_profiling__type_ctor_info_deep_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__deep_profiling__type_ctor_info_coverage_profiling_options_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__deep_profiling__type_ctor_info_coverage_after_known_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__deep_profiling__type_ctor_info_call_class_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__deep_profiling__type_ctor_info_apply_tail_recursion_info_0);
	}
}


void mercury__ll_backend__deep_profiling__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__deep_profiling__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__deep_profiling);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__deep_profiling__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
