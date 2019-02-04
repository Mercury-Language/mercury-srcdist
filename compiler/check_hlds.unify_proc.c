/*
** Automatically generated from `unify_proc.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__unify_proc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "check_hlds.unify_proc.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "check_hlds.unify_proc.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "check_hlds.unify_proc.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "check_hlds.unify_proc.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "check_hlds.unify_proc.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "check_hlds.unify_proc.c"
#line 48 "check_hlds.unify_proc.c"
#include "check_hlds.unify_proc.mh"

#line 51 "check_hlds.unify_proc.c"
#line 52 "check_hlds.unify_proc.c"
#ifndef CHECK_HLDS__UNIFY_PROC_DECL_GUARD
#define CHECK_HLDS__UNIFY_PROC_DECL_GUARD

#line 56 "check_hlds.unify_proc.c"
#line 57 "check_hlds.unify_proc.c"

#endif
#line 60 "check_hlds.unify_proc.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

MR_STATIC_LINKAGE const struct mercury_type_3 mercury_vector_common_3_0[];

MR_STATIC_LINKAGE const struct mercury_type_3 mercury_vector_common_3_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__unify_proc__type_ctor_info_unify_req_map_0,
	mercury_data_check_hlds__unify_proc__type_ctor_info_unify_proc_info_0,
	mercury_data_check_hlds__unify_proc__type_ctor_info_unify_proc_id_0,
	mercury_data_check_hlds__unify_proc__type_ctor_info_unify_pred_item_0,
	mercury_data_check_hlds__unify_proc__type_ctor_info_req_queue_0,
	mercury_data_check_hlds__unify_proc__type_ctor_info_proc_requests_0,
	mercury_data_check_hlds__unify_proc__type_ctor_info_linear_or_quad_0;
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0, 2,4,6,7,8,9,10,11)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0, 12,14,15,20,41,29,28,31)
MR_decl_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0, 32,35)
MR_decl_label8(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0, 11,12,13,15,16,19,20,21)
MR_decl_label3(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0, 23,24,25)
MR_decl_label8(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0, 6,7,8,9,10,5,12,13)
MR_decl_label6(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0, 14,15,16,18,19,20)
MR_decl_label8(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0, 4,6,7,9,10,15,16,17)
MR_decl_label8(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0, 19,2,23,24,25,26,27,28)
MR_decl_label8(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0, 29,30,32,33,34,35,38,36)
MR_decl_label5(check_hlds__unify_proc__build_call_6_0, 3,5,4,9,12)
MR_decl_label5(check_hlds__unify_proc__build_specific_call_9_0, 3,7,8,9,2)
MR_decl_label2(check_hlds__unify_proc__compare_args_9_0, 3,2)
MR_decl_label8(check_hlds__unify_proc__compare_args_2_9_0, 100,6,9,10,3,13,14,20)
MR_decl_label8(check_hlds__unify_proc__compare_args_2_9_0, 21,22,17,24,16,26,28,36)
MR_decl_label8(check_hlds__unify_proc__compare_args_2_9_0, 31,37,38,42,43,44,48,53)
MR_decl_label1(check_hlds__unify_proc__compare_args_2_9_0, 1)
MR_decl_label6(check_hlds__unify_proc__compare_ctors_lexically_3_0, 2,3,4,7,8,5)
MR_decl_label8(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0, 2,3,6,7,9,11,12,15)
MR_decl_label3(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0, 19,20,21)
MR_decl_label6(check_hlds__unify_proc__generate_builtin_compare_8_0, 11,6,8,10,5,16)
MR_decl_label6(check_hlds__unify_proc__generate_builtin_unify_7_0, 10,5,7,9,4,15)
MR_decl_label8(check_hlds__unify_proc__generate_clause_info_6_0, 2,3,5,6,8,10,11,20)
MR_decl_label8(check_hlds__unify_proc__generate_clause_info_6_0, 21,29,30,37,42,38,9,46)
MR_decl_label3(check_hlds__unify_proc__generate_clause_info_6_0, 47,49,50)
MR_decl_label8(check_hlds__unify_proc__generate_compare_case_9_0, 2,7,8,11,12,14,17,5)
MR_decl_label8(check_hlds__unify_proc__generate_compare_case_9_0, 21,22,24,26,27,31,32,33)
MR_decl_label3(check_hlds__unify_proc__generate_compare_cases_8_0, 14,4,5)
MR_decl_label8(check_hlds__unify_proc__generate_compare_proc_body_9_0, 3,4,6,9,10,2,17,16)
MR_decl_label8(check_hlds__unify_proc__generate_compare_proc_body_9_0, 29,35,37,38,40,33,47,48)
MR_decl_label8(check_hlds__unify_proc__generate_compare_proc_body_9_0, 50,53,54,61,21,23,25,22)
MR_decl_label1(check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_0, 5)
MR_decl_label1(check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_0, 4)
MR_decl_label8(check_hlds__unify_proc__generate_du_compare_proc_body_9_0, 2,3,7,4,10,11,15,17)
MR_decl_label8(check_hlds__unify_proc__generate_du_compare_proc_body_9_0, 13,19,21,22,23,24,25,26)
MR_decl_label5(check_hlds__unify_proc__generate_du_compare_proc_body_9_0, 12,28,30,31,9)
MR_decl_label8(check_hlds__unify_proc__generate_du_index_case_9_0, 2,7,8,5,10,11,4,14)
MR_decl_label4(check_hlds__unify_proc__generate_du_index_case_9_0, 15,18,19,20)
MR_decl_label8(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0, 2,3,4,5,6,7,8,12)
MR_decl_label8(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0, 15,18,21,23,24,25,28,31)
MR_decl_label3(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0, 33,34,37)
MR_decl_label3(check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0, 10,3,4)
MR_decl_label6(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0, 23,3,6,8,4,10)
MR_decl_label8(check_hlds__unify_proc__generate_du_unify_case_8_0, 2,8,9,10,11,12,13,14)
MR_decl_label8(check_hlds__unify_proc__generate_du_unify_case_8_0, 15,16,18,4,23,24,26,28)
MR_decl_label6(check_hlds__unify_proc__generate_du_unify_case_8_0, 31,30,37,38,39,40)
MR_decl_label6(check_hlds__unify_proc__generate_du_unify_proc_body_7_0, 2,3,5,6,7,10)
MR_decl_label3(check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0, 2,5,6)
MR_decl_label8(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0, 2,3,4,5,6,10,11,12)
MR_decl_label1(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0, 16)
MR_decl_label8(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0, 2,3,4,5,9,10,11,15)
MR_decl_label8(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0, 2,3,4,5,7,8,9,13)
MR_decl_label8(check_hlds__unify_proc__generate_index_proc_body_7_0, 4,2,10,32,16,18,19,20)
MR_decl_label6(check_hlds__unify_proc__generate_index_proc_body_7_0, 28,14,34,36,43,8)
MR_decl_label8(check_hlds__unify_proc__generate_unify_proc_body_8_0, 3,4,2,12,11,24,36,38)
MR_decl_label8(check_hlds__unify_proc__generate_unify_proc_body_8_0, 39,41,31,51,52,55,54,60)
MR_decl_label6(check_hlds__unify_proc__generate_unify_proc_body_8_0, 61,68,16,18,20,17)
MR_decl_label6(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0, 8,10,11,13,16,3)
MR_decl_label8(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0, 8,9,10,11,16,18,22,7)
MR_decl_label7(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0, 5,28,29,33,4,35,3)
MR_decl_label2(check_hlds__unify_proc__info_new_named_var_5_0, 2,4)
MR_decl_label2(check_hlds__unify_proc__info_new_var_4_0, 2,4)
MR_decl_label2(check_hlds__unify_proc__init_requests_1_0, 2,3)
MR_decl_label8(check_hlds__unify_proc__lookup_mode_num_5_0, 6,8,3,4,11,14,17,19)
MR_decl_label1(check_hlds__unify_proc__lookup_mode_num_5_0, 2)
MR_decl_label4(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0, 2,3,4,6)
MR_decl_label3(check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0, 14,4,5)
MR_decl_label4(check_hlds__unify_proc__make_fresh_vars_5_0, 5,3,7,8)
MR_decl_label4(check_hlds__unify_proc__make_fresh_vars_from_types_4_0, 17,4,6,8)
MR_decl_label8(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0, 2,3,5,6,7,8,9,10)
MR_decl_label8(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0, 11,12,13,15,20,21,25,24)
MR_decl_label5(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0, 27,30,31,32,34)
MR_decl_label8(check_hlds__unify_proc__modecheck_queued_proc_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__unify_proc__modecheck_queued_proc_9_0, 10,11,12,13,14,15,35,18)
MR_decl_label8(check_hlds__unify_proc__modecheck_queued_proc_9_0, 19,20,21,23,22,25,26,27)
MR_decl_label5(check_hlds__unify_proc__modecheck_queued_proc_9_0, 28,29,30,31,32)
MR_decl_label8(check_hlds__unify_proc__modecheck_queued_procs_8_0, 2,4,7,8,10,12,28,14)
MR_decl_label8(check_hlds__unify_proc__modecheck_queued_procs_8_0, 16,18,19,13,21,9,23,24)
MR_decl_label1(check_hlds__unify_proc__modecheck_queued_procs_8_0, 3)
MR_decl_label1(check_hlds__unify_proc__quantify_clause_body_6_0, 2)
MR_decl_label8(check_hlds__unify_proc__request_proc_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__unify_proc__request_proc_9_0, 10,11,12,19,22,17,25,13)
MR_decl_label8(check_hlds__unify_proc__request_proc_9_0, 14,30,31,32,33,34,35,37)
MR_decl_label1(check_hlds__unify_proc__request_proc_9_0, 39)
MR_decl_label8(check_hlds__unify_proc__request_unify_6_0, 2,4,5,6,3,17,19,14)
MR_decl_label8(check_hlds__unify_proc__request_unify_6_0, 15,22,25,28,29,12,34,35)
MR_decl_label8(check_hlds__unify_proc__request_unify_6_0, 37,42,43,84,39,40,46,9)
MR_decl_label8(check_hlds__unify_proc__request_unify_6_0, 48,52,49,58,64,65,66,68)
MR_decl_label3(check_hlds__unify_proc__request_unify_6_0, 69,70,71)
MR_decl_label8(check_hlds__unify_proc__unify_var_lists_2_7_0, 70,8,10,9,18,19,20,16)
MR_decl_label7(check_hlds__unify_proc__unify_var_lists_2_7_0, 22,25,14,27,30,71,1)
MR_decl_label1(fn__check_hlds__unify_proc__equal_cons_id_0_0, 2)
MR_decl_label3(__Unify___check_hlds__unify_proc__proc_requests_0_0, 4,8,1)
MR_decl_label3(__Unify___check_hlds__unify_proc__unify_proc_id_0_0, 4,8,1)
MR_decl_label5(__Unify___check_hlds__unify_proc__unify_proc_info_0_0, 4,7,9,13,1)
MR_decl_label4(__Compare___check_hlds__unify_proc__proc_requests_0_0, 3,2,5,21)
MR_decl_label4(__Compare___check_hlds__unify_proc__unify_proc_id_0_0, 3,2,5,21)
MR_decl_label6(__Compare___check_hlds__unify_proc__unify_proc_info_0_0, 3,2,5,10,14,38)
MR_def_extern_entry(check_hlds__unify_proc__init_requests_1_0)
MR_def_extern_entry(check_hlds__unify_proc__request_proc_9_0)
MR_decl_static(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0)
MR_def_extern_entry(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0)
MR_decl_static(check_hlds__unify_proc__set_unify_req_map_3_0)
MR_def_extern_entry(check_hlds__unify_proc__request_unify_6_0)
MR_def_extern_entry(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0)
MR_decl_static(check_hlds__unify_proc__modecheck_queued_proc_9_0)
MR_def_extern_entry(check_hlds__unify_proc__modecheck_queued_procs_8_0)
MR_def_extern_entry(check_hlds__unify_proc__lookup_mode_num_5_0)
MR_decl_static(check_hlds__unify_proc__info_new_named_var_5_0)
MR_decl_static(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0)
MR_decl_static(check_hlds__unify_proc__quantify_clause_body_6_0)
MR_decl_static(check_hlds__unify_proc__info_get_module_info_2_0)
MR_decl_static(check_hlds__unify_proc__build_call_6_0)
MR_decl_static(check_hlds__unify_proc__generate_builtin_unify_7_0)
MR_decl_static(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0)
MR_decl_static(fn__check_hlds__unify_proc__equal_cons_id_0_0)
MR_decl_static(check_hlds__unify_proc__info_new_var_4_0)
MR_decl_static(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0)
MR_decl_static(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0)
MR_decl_static(check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_0)
MR_decl_static(check_hlds__unify_proc__generate_du_unify_proc_body_7_0)
MR_decl_static(check_hlds__unify_proc__generate_unify_proc_body_8_0)
MR_decl_static(check_hlds__unify_proc__generate_index_proc_body_7_0)
MR_decl_static(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0)
MR_decl_static(check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0)
MR_decl_static(check_hlds__unify_proc__generate_builtin_compare_8_0)
MR_decl_static(check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_0)
MR_decl_static(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0)
MR_decl_static(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0)
MR_decl_static(check_hlds__unify_proc__compare_args_2_9_0)
MR_decl_static(check_hlds__unify_proc__compare_args_9_0)
MR_decl_static(check_hlds__unify_proc__make_fresh_vars_from_types_4_0)
MR_decl_static(check_hlds__unify_proc__make_fresh_vars_5_0)
MR_decl_static(check_hlds__unify_proc__generate_compare_case_9_0)
MR_decl_static(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0)
MR_decl_static(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0)
MR_decl_static(check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0)
MR_decl_static(check_hlds__unify_proc__generate_compare_cases_8_0)
MR_decl_static(check_hlds__unify_proc__build_specific_call_9_0)
MR_decl_static(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0)
MR_decl_static(check_hlds__unify_proc__generate_du_compare_proc_body_9_0)
MR_decl_static(check_hlds__unify_proc__generate_compare_proc_body_9_0)
MR_decl_static(check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0)
MR_def_extern_entry(check_hlds__unify_proc__generate_clause_info_6_0)
MR_decl_static(check_hlds__unify_proc__compare_ctors_lexically_3_0)
MR_decl_static(check_hlds__unify_proc__unify_var_lists_2_7_0)
MR_decl_static(check_hlds__unify_proc__generate_du_unify_case_8_0)
MR_decl_static(check_hlds__unify_proc__generate_du_index_case_9_0)
MR_decl_static(__Unify___check_hlds__unify_proc__linear_or_quad_0_0)
MR_decl_static(__Compare___check_hlds__unify_proc__linear_or_quad_0_0)
MR_def_extern_entry(__Unify___check_hlds__unify_proc__proc_requests_0_0)
MR_def_extern_entry(__Compare___check_hlds__unify_proc__proc_requests_0_0)
MR_decl_static(__Unify___check_hlds__unify_proc__req_queue_0_0)
MR_decl_static(__Compare___check_hlds__unify_proc__req_queue_0_0)
MR_decl_static(__Unify___check_hlds__unify_proc__unify_pred_item_0_0)
MR_decl_static(__Compare___check_hlds__unify_proc__unify_pred_item_0_0)
MR_def_extern_entry(__Unify___check_hlds__unify_proc__unify_proc_id_0_0)
MR_def_extern_entry(__Compare___check_hlds__unify_proc__unify_proc_id_0_0)
MR_decl_static(__Unify___check_hlds__unify_proc__unify_proc_info_0_0)
MR_decl_static(__Compare___check_hlds__unify_proc__unify_proc_info_0_0)
MR_decl_static(__Unify___check_hlds__unify_proc__unify_req_map_0_0)
MR_decl_static(__Compare___check_hlds__unify_proc__unify_req_map_0_0)
MR_decl_static(fn__check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__539__1_2_0)
MR_decl_static(check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__620__1_2_0)
MR_decl_static(fn__check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__2010__1_1_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, special_pred_id),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__make_fresh_vars_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__generate_du_index_case_9_0_1;
static const struct mercury_type_2 mercury_common_2[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,0),
MR_COMMON(1,0)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,0),
MR_COMMON(1,0)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,0),
MR_COMMON(1,0)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unify_proc__make_fresh_vars_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unify_proc__generate_du_index_case_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_string_const("{}", 2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__generate_du_compare_proc_body_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unify_proc__generate_du_compare_proc_body_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, constructor),
MR_CTOR0_ADDR(parse_tree__prog_data, constructor),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_body_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_1;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_body),
MR_CTOR0_ADDR(hlds__hlds_pred, import_status)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_body),
MR_CTOR0_ADDR(hlds__hlds_pred, import_status)
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__generate_du_unify_proc_body_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__unify_proc__type_ctor_info_unify_proc_info_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unify_proc__generate_du_unify_proc_body_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_CTOR0_ADDR(term, context),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_info),
MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__generate_index_proc_body_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unify_proc__generate_index_proc_body_7_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, constructor),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_info),
MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_info)
}
},
};

static const struct mercury_type_9 mercury_common_9[3] =
{
{
MR_COMMON(2,3),
MR_ENTRY_AP(fn__check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__2010__1_1_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(check_hlds__unify_proc__compare_ctors_lexically_3_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(fn__check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__2010__1_1_0),
0
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_3 mercury_vector_common_3_0[4] =
{
{
MR_string_const("builtin_unify_int", 17)
},
{
MR_string_const("builtin_unify_float", 19)
},
{
MR_string_const("builtin_unify_character", 23)
},
{
MR_string_const("builtin_unify_string", 20)
},
};

static const struct mercury_type_3 mercury_vector_common_3_1[4] =
{
{
MR_string_const("builtin_compare_int", 19)
},
{
MR_string_const("builtin_compare_float", 21)
},
{
MR_string_const("builtin_compare_character", 25)
},
{
MR_string_const("builtin_compare_string", 22)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__unify_proc__type_ctor_info_unify_proc_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_check_hlds__unify_proc__type_ctor_info_unify_proc_id_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__unify_proc__type_ctor_info_unify_req_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__unify_proc__unify_req_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__unify_proc__unify_req_map_0_0)),
	"check_hlds.unify_proc",
	"unify_req_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__unify_proc__field_types_unify_proc_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0
};

const MR_ConstString mercury_data_check_hlds__unify_proc__field_names_unify_proc_info_0_0[] = {
	"upi_varset",
	"upi_vartypes",
	"upi_rtti_varmaps",
	"upi_module_info"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0 = {
	"unify_proc_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__unify_proc__field_types_unify_proc_info_0_0,
	mercury_data_check_hlds__unify_proc__field_names_unify_proc_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[] = {
	&mercury_data_check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[] = {
	&mercury_data_check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

const MR_Integer mercury_data_check_hlds__unify_proc__functor_number_map_unify_proc_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__unify_proc__type_ctor_info_unify_proc_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__unify_proc__unify_proc_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__unify_proc__unify_proc_info_0_0)),
	"check_hlds.unify_proc",
	"unify_proc_info",
	{ (void *)mercury_data_check_hlds__unify_proc__du_name_ordered_unify_proc_info_0 },
	{ (void *)mercury_data_check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0 },
	1,
	4,
	mercury_data_check_hlds__unify_proc__functor_number_map_unify_proc_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__unify_proc__field_types_unify_proc_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0 = {
	"unify_proc_id",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__unify_proc__field_types_unify_proc_id_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0[] = {
	&mercury_data_check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__unify_proc__du_name_ordered_unify_proc_id_0[] = {
	&mercury_data_check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0
};

const MR_Integer mercury_data_check_hlds__unify_proc__functor_number_map_unify_proc_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__unify_proc__type_ctor_info_unify_proc_id_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__unify_proc__unify_proc_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__unify_proc__unify_proc_id_0_0)),
	"check_hlds.unify_proc",
	"unify_proc_id",
	{ (void *)mercury_data_check_hlds__unify_proc__du_name_ordered_unify_proc_id_0 },
	{ (void *)mercury_data_check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0 },
	1,
	4,
	mercury_data_check_hlds__unify_proc__functor_number_map_unify_proc_id_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0 = {
	"declaration",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1 = {
	"clauses",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[] = {
	&mercury_data_check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0,
	&mercury_data_check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[] = {
	&mercury_data_check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1,
	&mercury_data_check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0
};

const MR_Integer mercury_data_check_hlds__unify_proc__functor_number_map_unify_pred_item_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__unify_proc__type_ctor_info_unify_pred_item_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__unify_proc__unify_pred_item_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__unify_proc__unify_pred_item_0_0)),
	"check_hlds.unify_proc",
	"unify_pred_item",
	{ (void *)mercury_data_check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0 },
	{ (void *)mercury_data_check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0 },
	2,
	4,
	mercury_data_check_hlds__unify_proc__functor_number_map_unify_pred_item_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_queue__type_ctor_info_queue_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_queue__type_ctor_info_queue_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__unify_proc__type_ctor_info_req_queue_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__unify_proc__req_queue_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__unify_proc__req_queue_0_0)),
	"check_hlds.unify_proc",
	"req_queue",
	{ 0 },
	{ (void *)&mercury_data_queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__unify_proc__field_types_proc_requests_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

const MR_ConstString mercury_data_check_hlds__unify_proc__field_names_proc_requests_0_0[] = {
	"unify_req_map",
	"req_queue"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__unify_proc__du_functor_desc_proc_requests_0_0 = {
	"proc_requests",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__unify_proc__field_types_proc_requests_0_0,
	mercury_data_check_hlds__unify_proc__field_names_proc_requests_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0[] = {
	&mercury_data_check_hlds__unify_proc__du_functor_desc_proc_requests_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__unify_proc__du_ptag_ordered_proc_requests_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__unify_proc__du_name_ordered_proc_requests_0[] = {
	&mercury_data_check_hlds__unify_proc__du_functor_desc_proc_requests_0_0
};

const MR_Integer mercury_data_check_hlds__unify_proc__functor_number_map_proc_requests_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__unify_proc__type_ctor_info_proc_requests_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__unify_proc__proc_requests_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__unify_proc__proc_requests_0_0)),
	"check_hlds.unify_proc",
	"proc_requests",
	{ (void *)mercury_data_check_hlds__unify_proc__du_name_ordered_proc_requests_0 },
	{ (void *)mercury_data_check_hlds__unify_proc__du_ptag_ordered_proc_requests_0 },
	1,
	4,
	mercury_data_check_hlds__unify_proc__functor_number_map_proc_requests_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0 = {
	"linear",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1 = {
	"quad",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[] = {
	&mercury_data_check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
	&mercury_data_check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[] = {
	&mercury_data_check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
	&mercury_data_check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

const MR_Integer mercury_data_check_hlds__unify_proc__functor_number_map_linear_or_quad_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__unify_proc__type_ctor_info_linear_or_quad_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__unify_proc__linear_or_quad_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__unify_proc__linear_or_quad_0_0)),
	"check_hlds.unify_proc",
	"linear_or_quad",
	{ (void *)mercury_data_check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0 },
	{ (void *)mercury_data_check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0 },
	2,
	4,
	mercury_data_check_hlds__unify_proc__functor_number_map_linear_or_quad_0
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_1 = {
{
MR_PREDICATE,
"check_hlds.unify_proc",
"check_hlds.unify_proc",
"lambda_unify_proc_m_620",
2,
0
},
"check_hlds.unify_proc",
"unify_proc.m",
620,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_2 = {
{
MR_PREDICATE,
"check_hlds.unify_proc",
"check_hlds.unify_proc",
"lambda_unify_proc_m_620",
2,
0
},
"check_hlds.unify_proc",
"unify_proc.m",
620,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_1 = {
{
MR_FUNCTION,
"check_hlds.unify_proc",
"check_hlds.unify_proc",
"lambda_unify_proc_m_539",
3,
0
},
"check_hlds.unify_proc",
"unify_proc.m",
539,
"d1;c5;t;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_2 = {
{
MR_PREDICATE,
"hlds.special_pred",
"hlds.special_pred",
"special_pred_is_generated_lazily",
4,
0
},
"check_hlds.unify_proc",
"unify_proc.m",
650,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_1 = {
{
MR_PREDICATE,
"hlds.special_pred",
"hlds.special_pred",
"special_pred_is_generated_lazily",
4,
0
},
"check_hlds.unify_proc",
"unify_proc.m",
650,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_2 = {
{
MR_PREDICATE,
"check_hlds.unify_proc",
"check_hlds.unify_proc",
"lambda_unify_proc_m_620",
2,
0
},
"check_hlds.unify_proc",
"unify_proc.m",
620,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__generate_du_unify_proc_body_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.unify_proc",
"check_hlds.unify_proc",
"generate_du_unify_case",
8,
0
},
"check_hlds.unify_proc",
"unify_proc.m",
1347,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__generate_index_proc_body_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.unify_proc",
"check_hlds.unify_proc",
"generate_du_index_case",
9,
0
},
"check_hlds.unify_proc",
"unify_proc.m",
1432,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__make_fresh_vars_5_0_1 = {
{
MR_FUNCTION,
"check_hlds.unify_proc",
"check_hlds.unify_proc",
"lambda_unify_proc_m_2010",
2,
0
},
"check_hlds.unify_proc",
"unify_proc.m",
2010,
"d1;c6;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__generate_du_compare_proc_body_9_0_1 = {
{
MR_PREDICATE,
"check_hlds.unify_proc",
"check_hlds.unify_proc",
"compare_ctors_lexically",
3,
0
},
"check_hlds.unify_proc",
"unify_proc.m",
1472,
"d1;c14;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unify_proc__generate_du_index_case_9_0_1 = {
{
MR_FUNCTION,
"check_hlds.unify_proc",
"check_hlds.unify_proc",
"lambda_unify_proc_m_2010",
2,
0
},
"check_hlds.unify_proc",
"unify_proc.m",
2010,
"d1;c6;d1;c3;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(map__init_1_0);
MR_decl_entry(queue__init_1_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module0)
	MR_init_entry1(check_hlds__unify_proc__init_requests_1_0);
	MR_init_label2(check_hlds__unify_proc__init_requests_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unify_proc__init_requests_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__unify_proc__init_requests_1_0_i2);
MR_def_label(check_hlds__unify_proc__init_requests_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(queue__init_1_0,
		check_hlds__unify_proc__init_requests_1_0_i3);
MR_def_label(check_hlds__unify_proc__init_requests_1_0,3)
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

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__make_hlds__add_new_proc_11_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_set_can_process_3_0);
MR_decl_entry(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_goal__set_goal_contexts_3_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(check_hlds__mode_util__mode_is_fully_input_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0);
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_proc_requests_2_0);
MR_decl_entry(queue__put_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_proc_requests_3_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module1)
	MR_init_entry1(check_hlds__unify_proc__request_proc_9_0);
	MR_init_label8(check_hlds__unify_proc__request_proc_9_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__unify_proc__request_proc_9_0,10,11,12,19,22,17,25,13)
	MR_init_label8(check_hlds__unify_proc__request_proc_9_0,14,30,31,32,33,34,35,37)
	MR_init_label1(check_hlds__unify_proc__request_proc_9_0,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unify_proc__request_proc_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__unify_proc__request_proc_9_0_i2);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__unify_proc__request_proc_9_0_i3);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__request_proc_9_0_i4);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Integer) 1;
	MR_r9 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_new_proc_11_0,
		check_hlds__unify_proc__request_proc_9_0_i5);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__unify_proc__request_proc_9_0_i6);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__unify_proc__request_proc_9_0_i7);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__unify_proc__request_proc_9_0_i8);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_can_process_3_0,
		check_hlds__unify_proc__request_proc_9_0_i9);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__clause_to_proc__copy_clauses_to_proc_4_0,
		check_hlds__unify_proc__request_proc_9_0_i10);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__unify_proc__request_proc_9_0_i11);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__set_goal_contexts_3_0,
		check_hlds__unify_proc__request_proc_9_0_i12);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(12) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(13));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__unify_proc__request_proc_9_0_i17);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__unify_proc__request_proc_9_0_i19);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		check_hlds__unify_proc__request_proc_9_0_i22);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(13));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
	MR_GOTO_LAB(check_hlds__unify_proc__request_proc_9_0_i13);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_proc_9_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(5), 0);
	if (MR_INT_EQ(MR_tempr1,7)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_proc_9_0_i14);
	}
	}
MR_def_label(check_hlds__unify_proc__request_proc_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__unify_proc__request_proc_9_0_i30);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		check_hlds__unify_proc__request_proc_9_0_i25);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		check_hlds__unify_proc__request_proc_9_0_i31);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__unify_proc__request_proc_9_0_i32);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		check_hlds__unify_proc__request_proc_9_0_i33);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__unify_proc__request_proc_9_0_i34);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_proc_requests_2_0,
		check_hlds__unify_proc__request_proc_9_0_i35);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(queue__put_3_0,
		check_hlds__unify_proc__request_proc_9_0_i37);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_proc_requests_3_0,
		check_hlds__unify_proc__request_proc_9_0_i39);
MR_def_label(check_hlds__unify_proc__request_proc_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__add_special_pred_for_real_9_0);
MR_decl_entry(hlds__hlds_module__module_info_get_special_pred_map_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(hlds__make_hlds__add_special_pred_decl_for_real_8_0);
MR_decl_entry(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_process_generated_pred_3_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module2)
	MR_init_entry1(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0);
	MR_init_label8(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,6,7,8,9,10,5,12,13)
	MR_init_label6(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,14,15,16,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i5);
	}
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred_for_real_9_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i6);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i7);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i8);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i9);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i10);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__620__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r3 = (MR_Word) MR_string_const("add_lazily_generated_special_pred: error in post_typecheck", 58);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i18);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred_decl_for_real_8_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i12);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i13);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i14);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i15);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i16);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__620__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r3 = (MR_Word) MR_string_const("add_lazily_generated_special_pred: error in post_typecheck", 58);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i18);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i19);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_process_generated_pred_3_0,
		check_hlds__unify_proc__add_lazily_generated_special_pred_11_0_i20);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_ctor_is_tuple_1_0);
MR_decl_entry(varset__init_1_0);
MR_decl_entry(varset__new_vars_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(parse_tree__prog_type__var_list_to_type_list_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(map__from_assoc_list_2_0);
MR_decl_entry(parse_tree__prog_type__construct_type_3_0);
MR_decl_entry(term__context_init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
MR_decl_entry(hlds__hlds_data__get_type_defn_tvarset_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_tparams_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_kind_map_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_status_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_context_2_0);
MR_decl_entry(hlds__special_pred__special_pred_is_generated_lazily_4_0);
MR_decl_entry(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module3)
	MR_init_entry1(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0);
	MR_init_label8(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,4,6,7,9,10,15,16,17)
	MR_init_label8(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,19,2,23,24,25,26,27,28)
	MR_init_label8(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,29,30,32,33,34,35,38,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i4);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i2);
	}
	MR_sv(2) = MR_ctfield(0, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(varset__init_1_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i6);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i7);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i9);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i10);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i15);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i16);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i17);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__539__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i19);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 3) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr3, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 6) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i35);
	}
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i23);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i24);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tvarset_2_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i25);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i26);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_kind_map_2_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i27);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i28);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_status_2_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i29);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_context_2_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i30);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__special_pred__special_pred_is_generated_lazily_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r3 = (MR_Word) MR_string_const("add_lazily_generated_unify_pred", 31);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i32);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i33);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i34);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,
		check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i38);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0_i36);
	}
	MR_r5 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r7 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 2);
	MR_r2 = (MR_Integer) 1;
	MR_r9 = MR_sv(7);
	MR_r1 = (MR_Integer) 0;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_r5 = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r7 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r8 = (MR_Word) MR_TAG_COMMON(2,6,0);
	MR_r2 = (MR_Integer) 0;
	MR_r9 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__add_lazily_generated_special_pred_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module4)
	MR_init_entry1(check_hlds__unify_proc__set_unify_req_map_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__set_unify_req_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_maybe_recompilation_info_2_0);
MR_decl_entry(fn__recompilation__type_ctor_to_item_name_1_0);
MR_decl_entry(recompilation__record_used_item_5_0);
MR_decl_entry(hlds__hlds_module__module_info_set_maybe_recompilation_info_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_or_any_2_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0);
MR_decl_entry(parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module5)
	MR_init_entry1(check_hlds__unify_proc__request_unify_6_0);
	MR_init_label8(check_hlds__unify_proc__request_unify_6_0,2,4,5,6,3,17,19,14)
	MR_init_label8(check_hlds__unify_proc__request_unify_6_0,15,22,25,28,29,12,34,35)
	MR_init_label8(check_hlds__unify_proc__request_unify_6_0,37,42,43,84,39,40,46,9)
	MR_init_label8(check_hlds__unify_proc__request_unify_6_0,48,52,49,58,64,65,66,68)
	MR_init_label3(check_hlds__unify_proc__request_unify_6_0,69,70,71)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unify_proc__request_unify_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r5;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_maybe_recompilation_info_2_0,
		check_hlds__unify_proc__request_unify_6_0_i2);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i4);
	}
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i3);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__recompilation__type_ctor_to_item_name_1_0,
		check_hlds__unify_proc__request_unify_6_0_i5);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(recompilation__record_used_item_5_0,
		check_hlds__unify_proc__request_unify_6_0_i6);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_maybe_recompilation_info_3_0,
		check_hlds__unify_proc__request_unify_6_0_i3);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(6), 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i15);
	}
	MR_sv(9) = MR_r1;
	MR_sv(7) = MR_r2;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_or_any_2_0,
		check_hlds__unify_proc__request_unify_6_0_i17);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i14);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_or_any_2_0,
		check_hlds__unify_proc__request_unify_6_0_i19);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i14);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		check_hlds__unify_proc__request_unify_6_0_i84);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i22);
	}
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		check_hlds__unify_proc__request_unify_6_0_i84);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i25);
	}
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		check_hlds__unify_proc__request_unify_6_0_i84);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_proc_requests_2_0,
		check_hlds__unify_proc__request_unify_6_0_i28);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__unify_proc__request_unify_6_0_i29);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i12);
	}
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__unify_proc__request_unify_6_0_i34);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__unify_proc__request_unify_6_0_i35);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i9);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__unify_proc__request_unify_6_0_i37);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(5), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i40);
	}
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		check_hlds__unify_proc__request_unify_6_0_i42);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__unify_proc__request_unify_6_0_i43);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i39);
	}
	if (MR_RTAGS_TESTR(MR_sv(7),3,1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i39);
	}
MR_def_label(check_hlds__unify_proc__request_unify_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0,
		check_hlds__unify_proc__request_unify_6_0_i46);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i9);
	}
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		check_hlds__unify_proc__request_unify_6_0_i48);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__unify_proc__request_unify_6_0_i52);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__request_unify_6_0_i49);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr6 = MR_sv(6);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr4, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_sv(9);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		check_hlds__unify_proc__request_unify_6_0_i64);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__unify_proc__add_lazily_generated_unify_pred_4_0,
		check_hlds__unify_proc__request_unify_6_0_i58);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr6 = MR_sv(6);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr4, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		check_hlds__unify_proc__request_unify_6_0_i64);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_ctfield(0, MR_sv(5), 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		check_hlds__unify_proc__request_unify_6_0_i65);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__unify_proc__request_unify_6_0_i66);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__request_proc_9_0,
		check_hlds__unify_proc__request_unify_6_0_i68);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_proc_requests_2_0,
		check_hlds__unify_proc__request_unify_6_0_i69);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r3 = MR_ctfield(0, MR_sv(1), 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		check_hlds__unify_proc__request_unify_6_0_i70);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__unify_proc__set_unify_req_map_3_0,
		check_hlds__unify_proc__request_unify_6_0_i71);
MR_def_label(check_hlds__unify_proc__request_unify_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_proc_requests_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module6)
	MR_init_entry1(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0);
	MR_init_label8(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,11,12,13,15,16,19,20,21)
	MR_init_label3(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i2);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i3);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tvarset_2_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i4);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i5);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_kind_map_2_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i6);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i7);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_status_2_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i8);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_context_2_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i9);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__special_pred__special_pred_is_generated_lazily_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r3 = (MR_Word) MR_string_const("add_lazily_generated_unify_pred", 31);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i11);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i12);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i13);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Word) MR_TAG_COMMON(2,6,0);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred_decl_for_real_8_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i15);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i16);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i19);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i20);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i21);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__620__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r3 = (MR_Word) MR_string_const("add_lazily_generated_special_pred: error in post_typecheck", 58);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i23);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i24);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_process_generated_pred_3_0,
		check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0_i25);
MR_def_label(check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_0,25)
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

MR_decl_entry(map__det_update_4_0);
MR_decl_entry(check_hlds__modes__modecheck_proc_8_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);
MR_decl_entry(hlds__hlds_module__module_info_incr_num_errors_3_0);
MR_decl_entry(hlds__hlds_module__module_info_remove_predid_3_0);
MR_decl_entry(check_hlds__switch_detection__detect_switches_in_proc_4_0);
MR_decl_entry(check_hlds__cse_detection__detect_cse_in_proc_6_0);
MR_decl_entry(check_hlds__det_analysis__determinism_check_proc_5_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(check_hlds__unique_modes__unique_modes_check_proc_7_0);
MR_decl_entry(bool__or_3_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module7)
	MR_init_entry1(check_hlds__unify_proc__modecheck_queued_proc_9_0);
	MR_init_label8(check_hlds__unify_proc__modecheck_queued_proc_9_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__unify_proc__modecheck_queued_proc_9_0,10,11,12,13,14,15,35,18)
	MR_init_label8(check_hlds__unify_proc__modecheck_queued_proc_9_0,19,20,21,23,22,25,26,27)
	MR_init_label5(check_hlds__unify_proc__modecheck_queued_proc_9_0,28,29,30,31,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__modecheck_queued_proc_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i2);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i3);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i4);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i5);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_can_process_3_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i6);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i7);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i8);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,8)
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
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i9);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i10);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_proc_8_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i11);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i12);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i13);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i14);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__modecheck_queued_proc_9_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_remove_predid_3_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i35);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__modecheck_queued_proc_9_0_i18);
	}
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_proc_4_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i19);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_proc_6_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i20);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__determinism_check_proc_5_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i21);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__modecheck_queued_proc_9_0_i23);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__unify_proc__modecheck_queued_proc_9_0_i22);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("modecheck_queued_proc: found error", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i22);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i25);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i26);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i27);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__set_4_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i28);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i29);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i30);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_proc_7_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i31);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__unify_proc__modecheck_queued_proc_9_0_i32);
MR_def_label(check_hlds__unify_proc__modecheck_queued_proc_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(queue__get_3_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(hlds__hlds_out__write_pred_proc_id_4_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module8)
	MR_init_entry1(check_hlds__unify_proc__modecheck_queued_procs_8_0);
	MR_init_label8(check_hlds__unify_proc__modecheck_queued_procs_8_0,2,4,7,8,10,12,28,14)
	MR_init_label8(check_hlds__unify_proc__modecheck_queued_procs_8_0,16,18,19,13,21,9,23,24)
	MR_init_label1(check_hlds__unify_proc__modecheck_queued_procs_8_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unify_proc__modecheck_queued_procs_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_proc_requests_2_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i2);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_ctfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(queue__get_3_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i4);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__modecheck_queued_procs_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(2), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_proc_requests_3_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i7);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i8);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i10);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__modecheck_queued_procs_8_0_i9);
	}
	MR_r1 = (MR_Integer) 37;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i12);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__modecheck_queued_procs_8_0_i14);
	}
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__unify_proc__modecheck_queued_procs_8_0_i13);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__modecheck_queued_procs_8_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("% Mode-analyzing ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i18);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Analyzing modes, determinism, and unique-modes for\n% ", 55);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i18);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_proc_id_4_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i19);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i28);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__unify_proc__modecheck_queued_proc_9_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i21);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__unify_proc__modecheck_queued_procs_8_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i23);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(check_hlds__unify_proc__modecheck_queued_procs_8_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i23);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__unify_proc__modecheck_queued_procs_8_0_i24);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__unify_proc__modecheck_queued_procs_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module9)
	MR_init_entry1(check_hlds__unify_proc__lookup_mode_num_5_0);
	MR_init_label8(check_hlds__unify_proc__lookup_mode_num_5_0,6,8,3,4,11,14,17,19)
	MR_init_label1(check_hlds__unify_proc__lookup_mode_num_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unify_proc__lookup_mode_num_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__lookup_mode_num_5_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr2;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_or_any_2_0,
		check_hlds__unify_proc__lookup_mode_num_5_0_i6);
MR_def_label(check_hlds__unify_proc__lookup_mode_num_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__lookup_mode_num_5_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_or_any_2_0,
		check_hlds__unify_proc__lookup_mode_num_5_0_i8);
MR_def_label(check_hlds__unify_proc__lookup_mode_num_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__lookup_mode_num_5_0_i3);
	}
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_def_label(check_hlds__unify_proc__lookup_mode_num_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r6 = MR_sv(4);
MR_def_label(check_hlds__unify_proc__lookup_mode_num_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__lookup_mode_num_5_0_i11);
	}
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_def_label(check_hlds__unify_proc__lookup_mode_num_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__lookup_mode_num_5_0_i14);
	}
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_def_label(check_hlds__unify_proc__lookup_mode_num_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_proc_requests_2_0,
		check_hlds__unify_proc__lookup_mode_num_5_0_i17);
MR_def_label(check_hlds__unify_proc__lookup_mode_num_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__unify_proc__lookup_mode_num_5_0_i19);
MR_def_label(check_hlds__unify_proc__lookup_mode_num_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__lookup_mode_num_5_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__unify_proc__lookup_mode_num_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("search_num failed", 17);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module10)
	MR_init_entry1(check_hlds__unify_proc__info_new_named_var_5_0);
	MR_init_label2(check_hlds__unify_proc__info_new_named_var_5_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__info_new_named_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		check_hlds__unify_proc__info_new_named_var_5_0_i2);
MR_def_label(check_hlds__unify_proc__info_new_named_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(3), 1);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__unify_proc__info_new_named_var_5_0_i4);
MR_def_label(check_hlds__unify_proc__info_new_named_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(check_hlds__unify_proc_module11)
	MR_init_entry1(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0);
	MR_init_label4(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,2,3,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		check_hlds__unify_proc__make_fresh_named_var_from_type_6_0_i2);
MR_def_label(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		check_hlds__unify_proc__make_fresh_named_var_from_type_6_0_i3);
MR_def_label(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		check_hlds__unify_proc__make_fresh_named_var_from_type_6_0_i4);
MR_def_label(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(3), 1);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__unify_proc__make_fresh_named_var_from_type_6_0_i6);
MR_def_label(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_10_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module12)
	MR_init_entry1(check_hlds__unify_proc__quantify_clause_body_6_0);
	MR_init_label1(check_hlds__unify_proc__quantify_clause_body_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__quantify_clause_body_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_r4, 1);
	MR_r5 = MR_ctfield(0, MR_sv(2), 2);
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_10_0,
		check_hlds__unify_proc__quantify_clause_body_6_0_i2);
MR_def_label(check_hlds__unify_proc__quantify_clause_body_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_sv(2), 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module13)
	MR_init_entry1(check_hlds__unify_proc__info_get_module_info_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__info_get_module_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__prim_data__special_pred_name_arity_4_1);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module14)
	MR_init_entry1(check_hlds__unify_proc__build_call_6_0);
	MR_init_label5(check_hlds__unify_proc__build_call_6_0,3,5,4,9,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__build_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__build_call_6_0_i3);
MR_def_label(check_hlds__unify_proc__build_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdbcomp__prim_data__special_pred_name_arity_4_1,
		check_hlds__unify_proc__build_call_6_0_i5);
MR_def_label(check_hlds__unify_proc__build_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__build_call_6_0_i4);
	}
	if ((MR_sv(5) != MR_r4)) {
		MR_GOTO_LAB(check_hlds__unify_proc__build_call_6_0_i4);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__unify_proc__build_call_6_0_i9);
MR_def_label(check_hlds__unify_proc__build_call_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		check_hlds__unify_proc__build_call_6_0_i9);
MR_def_label(check_hlds__unify_proc__build_call_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r5 = (MR_Integer) 6;
	MR_r6 = (MR_Integer) 0;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__unify_proc__build_call_6_0_i12);
MR_def_label(check_hlds__unify_proc__build_call_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module15)
	MR_init_entry1(check_hlds__unify_proc__generate_builtin_unify_7_0);
	MR_init_label6(check_hlds__unify_proc__generate_builtin_unify_7_0,10,5,7,9,4,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_builtin_unify_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__unify_proc__generate_builtin_unify_7_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_builtin_unify_7_0_i5) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_builtin_unify_7_0_i7) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_builtin_unify_7_0_i7));
	}
MR_def_label(check_hlds__unify_proc__generate_builtin_unify_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_builtin_unify_7_0_i9);
	}
	MR_GOTO_LAB(check_hlds__unify_proc__generate_builtin_unify_7_0_i7);
MR_def_label(check_hlds__unify_proc__generate_builtin_unify_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(1, MR_r1, 0);
	MR_r8 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_3_0, (MR_Integer) MR_r6);
	MR_r3 = MR_r4;
	MR_r2 = MR_r7;
	MR_r1 = MR_ctfield(0, MR_r8, 0);
	MR_r4 = MR_r5;
	MR_GOTO_LAB(check_hlds__unify_proc__generate_builtin_unify_7_0_i4);
MR_def_label(check_hlds__unify_proc__generate_builtin_unify_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_builtin_unify: bad ctor category", 41);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__unify_proc__generate_builtin_unify_7_0_i4);
MR_def_label(check_hlds__unify_proc__generate_builtin_unify_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r2 = MR_r7;
	MR_r1 = (MR_Word) MR_string_const("builtin_unify_pred", 18);
	MR_r4 = MR_r5;
MR_def_label(check_hlds__unify_proc__generate_builtin_unify_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__generate_builtin_unify_7_0_i15);
MR_def_label(check_hlds__unify_proc__generate_builtin_unify_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__parse_tree__prog_type__int_type_0_0);
MR_decl_entry(hlds__goal_util__generate_cast_5_0);
MR_decl_entry(hlds__hlds_goal__goal_add_feature_3_0);
MR_decl_entry(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_with_context_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);
MR_decl_entry(hlds__hlds_goal__make_const_construction_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module16)
	MR_init_entry1(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0);
	MR_init_label8(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,2,3,5,6,7,8,9,10)
	MR_init_label8(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,11,12,13,15,20,21,25,24)
	MR_init_label5(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,27,30,31,32,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0)
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
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i2);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 283;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i3);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i6);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("CastX", 5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__unify_proc__info_new_named_var_5_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i7);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i8);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("CastY", 5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__unify_proc__info_new_named_var_5_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i9);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_5_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i10);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_5_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i11);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 11;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i12);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 11;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i13);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i15);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_sv(2) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i20);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i21);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i24);
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i25);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Integer) 18;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i34);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i27);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("=", 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i30);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i31);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i32);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 18;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0_i34);
MR_def_label(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module17)
	MR_init_entry1(fn__check_hlds__unify_proc__equal_cons_id_0_0);
	MR_init_label1(fn__check_hlds__unify_proc__equal_cons_id_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__unify_proc__equal_cons_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__check_hlds__unify_proc__equal_cons_id_0_0_i2);
MR_def_label(fn__check_hlds__unify_proc__equal_cons_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("=", 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module18)
	MR_init_entry1(check_hlds__unify_proc__info_new_var_4_0);
	MR_init_label2(check_hlds__unify_proc__info_new_var_4_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__info_new_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__unify_proc__info_new_var_4_0_i2);
MR_def_label(check_hlds__unify_proc__info_new_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(3), 1);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__unify_proc__info_new_var_4_0_i4);
MR_def_label(check_hlds__unify_proc__info_new_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_type__comparison_result_type_0_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_proc_id_0_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_2_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module19)
	MR_init_entry1(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0);
	MR_init_label8(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,8,9,10,11,16,18,22,7)
	MR_init_label7(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,5,28,29,33,4,35,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r6 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i5);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__comparison_result_type_0_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i8);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unify_proc__info_new_var_4_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i9);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i10);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i11);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr4, 1) = MR_r1;
	MR_tfield(1, MR_tempr4, 2) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr4, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr4, 5) = MR_sv(5);
	MR_sv(5) = MR_tempr4;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i16);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i18);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("=", 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i22);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r6 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i4);
	}
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("generate_user_defined_unify_proc_body", 37);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i4);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r6, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i28);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i29);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr3, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr3, 5) = MR_sv(5);
	MR_sv(5) = MR_tempr3;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i33);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,
		check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0_i35);
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr3;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
MR_def_label(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create unify proc for abstract noncanonical type", 58);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module20)
	MR_init_entry1(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0);
	MR_init_label8(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0,2,3,4,5,7,8,9,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r2 = (MR_Word) MR_string_const("Cast_HeadVar", 12);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,
		check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0_i2);
MR_def_label(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("Cast_HeadVar", 12);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,
		check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0_i3);
MR_def_label(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_5_0,
		check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0_i4);
MR_def_label(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_5_0,
		check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0_i5);
MR_def_label(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0_i7);
MR_def_label(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0_i8);
MR_def_label(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0_i9);
MR_def_label(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0_i13);
MR_def_label(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module21)
	MR_init_entry1(check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_0);
	MR_init_label1(check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("builtin_unify_solver_type", 25);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_0_i4);
MR_def_label(check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(check_hlds__unify_proc_module22)
	MR_init_entry1(check_hlds__unify_proc__generate_du_unify_proc_body_7_0);
	MR_init_label6(check_hlds__unify_proc__generate_du_unify_proc_body_7_0,2,3,5,6,7,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_du_unify_proc_body_7_0)
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
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__unify_proc__generate_du_unify_proc_body_7_0_i2);
MR_def_label(check_hlds__unify_proc__generate_du_unify_proc_body_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 236;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__unify_proc__generate_du_unify_proc_body_7_0_i3);
MR_def_label(check_hlds__unify_proc__generate_du_unify_proc_body_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__unify_proc__generate_du_unify_case_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_info);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__unify_proc__generate_du_unify_proc_body_7_0_i5);
MR_def_label(check_hlds__unify_proc__generate_du_unify_proc_body_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_du_unify_proc_body_7_0_i6);
MR_def_label(check_hlds__unify_proc__generate_du_unify_proc_body_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__generate_du_unify_proc_body_7_0_i7);
MR_def_label(check_hlds__unify_proc__generate_du_unify_proc_body_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,
		check_hlds__unify_proc__generate_du_unify_proc_body_7_0_i10);
MR_def_label(check_hlds__unify_proc__generate_du_unify_proc_body_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr3;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0);
MR_decl_entry(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0);
MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);
MR_decl_entry(hlds__hlds_goal__make_simple_test_5_0);
MR_decl_entry(fn__parse_tree__prog_type__c_pointer_type_0_0);
MR_decl_entry(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0);
MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module23)
	MR_init_entry1(check_hlds__unify_proc__generate_unify_proc_body_8_0);
	MR_init_label8(check_hlds__unify_proc__generate_unify_proc_body_8_0,3,4,2,12,11,24,36,38)
	MR_init_label8(check_hlds__unify_proc__generate_unify_proc_body_8_0,39,41,31,51,52,55,54,60)
	MR_init_label6(check_hlds__unify_proc__generate_unify_proc_body_8_0,61,68,16,18,20,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_unify_proc_body_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i3);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i4);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_unify_proc_body_8_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i55);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i12);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_unify_proc_body_8_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_0);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(check_hlds__unify_proc__generate_unify_proc_body_8_0_i24) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_unify_proc_body_8_0_i51) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_unify_proc_body_8_0_i60) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_unify_proc_body_8_0_i68));
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 3);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_unify_proc_body_8_0_i31);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_unify_proc_body_8_0_i38);
	}
	MR_tempr3 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr3,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_unify_proc_body_8_0_i31);
	}
	if (MR_INT_NE(MR_tempr3,1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_unify_proc_body_8_0_i36);
	}
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i55);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_du_unify_proc_body_7_0);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_sv(2), 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_ctfield(2, MR_r2, 1);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i39);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_unify_proc_body_8_0_i41);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i55);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_du_unify_proc_body_7_0);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_goal__make_simple_test_5_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i55);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i52);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_unify_proc_body_8_0_i54);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i55);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i61);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_eqv_unify_proc_body_7_0);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_unify_proc_body_8_0_i16);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_0);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i18);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_unify_proc_body_8_0_i17);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		check_hlds__unify_proc__generate_unify_proc_body_8_0_i20);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_builtin_unify_7_0);
MR_def_label(check_hlds__unify_proc__generate_unify_proc_body_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create unify proc for abstract type", 45);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_foldl2_7_1);

MR_BEGIN_MODULE(check_hlds__unify_proc_module24)
	MR_init_entry1(check_hlds__unify_proc__generate_index_proc_body_7_0);
	MR_init_label8(check_hlds__unify_proc__generate_index_proc_body_7_0,4,2,10,32,16,18,19,20)
	MR_init_label6(check_hlds__unify_proc__generate_index_proc_body_7_0,28,14,34,36,43,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_index_proc_body_7_0)
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
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,
		check_hlds__unify_proc__generate_index_proc_body_7_0_i4);
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_index_proc_body_7_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create index proc for non-canonical type", 50);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__unify_proc__generate_index_proc_body_7_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_index_proc_body_7_0_i34) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_index_proc_body_7_0_i36) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_index_proc_body_7_0_i43));
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_index_proc_body_7_0_i14);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_index_proc_body_7_0_i28);
	}
	MR_r8 = MR_unmkbody(MR_tempr1);
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_index_proc_body_7_0_i32);
	}
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create index proc for enum type", 41);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r8,1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_index_proc_body_7_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create index proc for dummy type", 42);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__unify_proc__generate_du_index_case_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tempr5 = MR_r4;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr5;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr5;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_info);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_ctfield(0, MR_sv(1), 0);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl2_7_1,
		check_hlds__unify_proc__generate_index_proc_body_7_0_i18);
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_index_proc_body_7_0_i19);
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__generate_index_proc_body_7_0_i20);
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create index proc for notag type", 42);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create index proc for foreign enum type", 49);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create index proc for eqv type", 40);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create index proc for a foreign type", 46);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_index_proc_body_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create index proc for a solver type", 45);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__unify_proc__generate_index_proc_body_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create index proc for abstract type", 45);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module25)
	MR_init_entry1(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0);
	MR_init_label8(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0,2,3,4,5,6,10,11,12)
	MR_init_label1(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		check_hlds__unify_proc__generate_enum_compare_proc_body_7_0_i2);
MR_def_label(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("Cast_HeadVar", 12);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,
		check_hlds__unify_proc__generate_enum_compare_proc_body_7_0_i3);
MR_def_label(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("Cast_HeadVar", 12);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,
		check_hlds__unify_proc__generate_enum_compare_proc_body_7_0_i4);
MR_def_label(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_5_0,
		check_hlds__unify_proc__generate_enum_compare_proc_body_7_0_i5);
MR_def_label(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_5_0,
		check_hlds__unify_proc__generate_enum_compare_proc_body_7_0_i6);
MR_def_label(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("builtin_compare_int", 19);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__generate_enum_compare_proc_body_7_0_i10);
MR_def_label(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_enum_compare_proc_body_7_0_i11);
MR_def_label(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__generate_enum_compare_proc_body_7_0_i12);
MR_def_label(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__unify_proc__generate_enum_compare_proc_body_7_0_i16);
MR_def_label(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_set_context_3_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module26)
	MR_init_entry1(check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0);
	MR_init_label3(check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0,2,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0_i2);
MR_def_label(check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("=", 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0_i5);
MR_def_label(check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_set_context_3_0,
		check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0_i6);
MR_def_label(check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module27)
	MR_init_entry1(check_hlds__unify_proc__generate_builtin_compare_8_0);
	MR_init_label6(check_hlds__unify_proc__generate_builtin_compare_8_0,11,6,8,10,5,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_builtin_compare_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__unify_proc__generate_builtin_compare_8_0_i11) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_builtin_compare_8_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_builtin_compare_8_0_i8) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_builtin_compare_8_0_i8));
	}
MR_def_label(check_hlds__unify_proc__generate_builtin_compare_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_builtin_compare_8_0_i10);
	}
	MR_GOTO_LAB(check_hlds__unify_proc__generate_builtin_compare_8_0_i8);
MR_def_label(check_hlds__unify_proc__generate_builtin_compare_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_ctfield(1, MR_r1, 0);
	MR_r9 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_3_1, (MR_Integer) MR_r8);
	MR_r3 = MR_r5;
	MR_r2 = MR_r7;
	MR_r1 = MR_ctfield(0, MR_r9, 0);
	MR_r4 = MR_r6;
	MR_GOTO_LAB(check_hlds__unify_proc__generate_builtin_compare_8_0_i5);
MR_def_label(check_hlds__unify_proc__generate_builtin_compare_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_builtin_compare: bad ctor category", 43);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__unify_proc__generate_builtin_compare_8_0_i5);
MR_def_label(check_hlds__unify_proc__generate_builtin_compare_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r5;
	MR_r2 = MR_r7;
	MR_r1 = (MR_Word) MR_string_const("builtin_compare_pred", 20);
	MR_r4 = MR_r6;
MR_def_label(check_hlds__unify_proc__generate_builtin_compare_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__generate_builtin_compare_8_0_i16);
MR_def_label(check_hlds__unify_proc__generate_builtin_compare_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module28)
	MR_init_entry1(check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_0);
	MR_init_label1(check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_0,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("builtin_compare_solver_type", 27);
	MR_r3 = MR_tempr4;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_0_i5);
MR_def_label(check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module29)
	MR_init_entry1(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0);
	MR_init_label6(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0,8,10,11,13,16,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r10 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0_i8);
	}
	MR_tempr4 = MR_r5;
	MR_sv(4) = MR_tempr4;
	MR_sv(6) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("builtin_compare_non_canonical_type", 34);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_r6;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0_i16);
MR_def_label(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_ctfield(1, MR_r10, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0_i10);
MR_def_label(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0_i11);
MR_def_label(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0_i13);
MR_def_label(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,
		check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0_i16);
MR_def_label(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
MR_def_label(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create compare proc for abstract noncanonical type", 60);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module30)
	MR_init_entry1(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0);
	MR_init_label8(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0,2,3,4,5,9,10,11,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = (MR_Word) MR_string_const("Cast_HeadVar", 12);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_r6;
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,
		check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0_i2);
MR_def_label(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("Cast_HeadVar", 12);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,
		check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0_i3);
MR_def_label(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_5_0,
		check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0_i4);
MR_def_label(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_5_0,
		check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0_i5);
MR_def_label(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("compare", 7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0_i9);
MR_def_label(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0_i10);
MR_def_label(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0_i11);
MR_def_label(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0_i15);
MR_def_label(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_contains_var_2_0);
MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module31)
	MR_init_entry1(check_hlds__unify_proc__compare_args_2_9_0);
	MR_init_label8(check_hlds__unify_proc__compare_args_2_9_0,100,6,9,10,3,13,14,20)
	MR_init_label8(check_hlds__unify_proc__compare_args_2_9_0,21,22,17,24,16,26,28,36)
	MR_init_label8(check_hlds__unify_proc__compare_args_2_9_0,31,37,38,42,43,44,48,53)
	MR_init_label1(check_hlds__unify_proc__compare_args_2_9_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__compare_args_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i1);
	}
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__unify_proc__compare_args_2_9_0_i6);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("=", 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		check_hlds__unify_proc__compare_args_2_9_0_i9);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_set_context_3_0,
		check_hlds__unify_proc__compare_args_2_9_0_i10);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(18);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i1);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_tempr2 = MR_r1;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r3;
	MR_sv(8) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__compare_args_2_9_0_i13);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__compare_args_2_9_0_i14);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_ctfield(0, MR_sv(6), 1);
	MR_sv(15) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(16) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(17));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__unify_proc__compare_args_2_9_0_i17);
	MR_sv(6) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__unify_proc__compare_args_2_9_0_i20);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_type__type_contains_var_2_0,
		check_hlds__unify_proc__compare_args_2_9_0_i21);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__unify_proc__compare_args_2_9_0_i22);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(17));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i24);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i16);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(12) = (MR_Word) MR_string_const("typed_compare", 13);
	MR_r1 = MR_ctfield(0, MR_sv(5), 3);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		check_hlds__unify_proc__compare_args_2_9_0_i26);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(12);
	MR_sv(12) = (MR_Word) MR_string_const("compare", 7);
	MR_r1 = MR_ctfield(0, MR_sv(5), 3);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		check_hlds__unify_proc__compare_args_2_9_0_i26);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i28);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(18);
	MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i100);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i31);
	}
	if (MR_LTAGS_TESTR(MR_sv(11),0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__compare_args_2_9_0_i36);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__comparison_result_type_0_0,
		check_hlds__unify_proc__compare_args_2_9_0_i37);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__unify_proc__info_new_var_4_0,
		check_hlds__unify_proc__compare_args_2_9_0_i38);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_sv(12);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__compare_args_2_9_0_i42);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__unify_proc__equal_cons_id_0_0,
		check_hlds__unify_proc__compare_args_2_9_0_i43);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		check_hlds__unify_proc__compare_args_2_9_0_i44);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__compare_args_2_9_0_i48);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(8);
	}
	MR_np_localcall_lab(check_hlds__unify_proc__compare_args_2_9_0,
		check_hlds__unify_proc__compare_args_2_9_0_i53);
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__compare_args_2_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__unify_proc__compare_args_2_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module32)
	MR_init_entry1(check_hlds__unify_proc__compare_args_9_0);
	MR_init_label2(check_hlds__unify_proc__compare_args_9_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__compare_args_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__unify_proc__compare_args_2_9_0,
		check_hlds__unify_proc__compare_args_9_0_i3);
MR_def_label(check_hlds__unify_proc__compare_args_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__compare_args_9_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__unify_proc__compare_args_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("compare_args: length mismatch", 29);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module33)
	MR_init_entry1(check_hlds__unify_proc__make_fresh_vars_from_types_4_0);
	MR_init_label4(check_hlds__unify_proc__make_fresh_vars_from_types_4_0,17,4,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__make_fresh_vars_from_types_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__make_fresh_vars_from_types_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__unify_proc__make_fresh_vars_from_types_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__unify_proc__make_fresh_vars_from_types_4_0_i4);
MR_def_label(check_hlds__unify_proc__make_fresh_vars_from_types_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(1), 1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__unify_proc__make_fresh_vars_from_types_4_0_i6);
MR_def_label(check_hlds__unify_proc__make_fresh_vars_from_types_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__unify_proc__make_fresh_vars_from_types_4_0,
		check_hlds__unify_proc__make_fresh_vars_from_types_4_0_i8);
MR_def_label(check_hlds__unify_proc__make_fresh_vars_from_types_4_0,8)
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


MR_BEGIN_MODULE(check_hlds__unify_proc_module34)
	MR_init_entry1(check_hlds__unify_proc__make_fresh_vars_5_0);
	MR_init_label4(check_hlds__unify_proc__make_fresh_vars_5_0,5,3,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__make_fresh_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__make_fresh_vars_5_0_i3);
	}
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__unify_proc__make_fresh_vars_5_0_i5);
MR_def_label(check_hlds__unify_proc__make_fresh_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__unify_proc__make_fresh_vars_from_types_4_0);
MR_def_label(check_hlds__unify_proc__make_fresh_vars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__make_fresh_vars_5_0_i7);
MR_def_label(check_hlds__unify_proc__make_fresh_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		check_hlds__unify_proc__make_fresh_vars_5_0_i8);
MR_def_label(check_hlds__unify_proc__make_fresh_vars_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module35)
	MR_init_entry1(check_hlds__unify_proc__generate_compare_case_9_0);
	MR_init_label8(check_hlds__unify_proc__generate_compare_case_9_0,2,7,8,11,12,14,17,5)
	MR_init_label8(check_hlds__unify_proc__generate_compare_case_9_0,21,22,24,26,27,31,32,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_compare_case_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(9) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i2);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_case_9_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i7);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i8);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("=", 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i11);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_set_context_3_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i12);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_case_9_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i31);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i17);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(2) = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i31);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r6;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_vars_5_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i21);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_vars_5_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i22);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(7);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i24);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i26);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__compare_args_9_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i27);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i31);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i32);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__unify_proc__generate_compare_case_9_0_i33);
MR_def_label(check_hlds__unify_proc__generate_compare_case_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module36)
	MR_init_entry1(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0);
	MR_init_label8(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,2,3,6,7,9,11,12,15)
	MR_init_label3(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_r2;
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(13) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__generate_asymmetric_compare_case_10_0_i2);
MR_def_label(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__generate_asymmetric_compare_case_10_0_i3);
MR_def_label(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_vars_5_0,
		check_hlds__unify_proc__generate_asymmetric_compare_case_10_0_i6);
MR_def_label(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_vars_5_0,
		check_hlds__unify_proc__generate_asymmetric_compare_case_10_0_i7);
MR_def_label(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(8);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_asymmetric_compare_case_10_0_i9);
MR_def_label(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_asymmetric_compare_case_10_0_i11);
MR_def_label(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__unify_proc__generate_asymmetric_compare_case_10_0_i12);
MR_def_label(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		check_hlds__unify_proc__generate_asymmetric_compare_case_10_0_i15);
MR_def_label(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_asymmetric_compare_case_10_0_i19);
MR_def_label(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__generate_asymmetric_compare_case_10_0_i20);
MR_def_label(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__unify_proc__generate_asymmetric_compare_case_10_0_i21);
MR_def_label(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__constructor_0_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module37)
	MR_init_entry1(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0);
	MR_init_label6(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0,23,3,6,8,4,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0_i3);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(10) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__constructor_0_0,
		check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0_i6);
MR_def_label(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_compare_case_9_0,
		check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0_i8);
MR_def_label(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_string_const("<", 1);
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0_i23);
	}
MR_def_label(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_sv(9);
	MR_r2 = MR_tempr2;
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,
		check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0_i10);
MR_def_label(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0_i23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module38)
	MR_init_entry1(check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0);
	MR_init_label3(check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = (MR_Word) MR_string_const(">", 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_r7 = MR_sv(5);
	MR_tempr2 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0,
		check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0_i4);
MR_def_label(check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module39)
	MR_init_entry1(check_hlds__unify_proc__generate_compare_cases_8_0);
	MR_init_label3(check_hlds__unify_proc__generate_compare_cases_8_0,14,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_compare_cases_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_cases_8_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(check_hlds__unify_proc__generate_compare_cases_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_compare_case_9_0,
		check_hlds__unify_proc__generate_compare_cases_8_0_i4);
MR_def_label(check_hlds__unify_proc__generate_compare_cases_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__unify_proc__generate_compare_cases_8_0,
		check_hlds__unify_proc__generate_compare_cases_8_0_i5);
MR_def_label(check_hlds__unify_proc__generate_compare_cases_8_0,5)
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

MR_decl_entry(check_hlds__polymorphism__get_special_proc_6_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_5_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module40)
	MR_init_entry1(check_hlds__unify_proc__build_specific_call_9_0);
	MR_init_label5(check_hlds__unify_proc__build_specific_call_9_0,3,7,8,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__build_specific_call_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(5) = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__get_special_proc_6_0,
		check_hlds__unify_proc__build_specific_call_9_0_i3);
MR_def_label(check_hlds__unify_proc__build_specific_call_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__build_specific_call_9_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__unify_proc__build_specific_call_9_0_i7);
MR_def_label(check_hlds__unify_proc__build_specific_call_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		check_hlds__unify_proc__build_specific_call_9_0_i8);
MR_def_label(check_hlds__unify_proc__build_specific_call_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__build_specific_call_9_0_i9);
MR_def_label(check_hlds__unify_proc__build_specific_call_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__unify_proc__build_specific_call_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("build_specific_call: lookup failed", 34);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_from_assoc_list_2_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module41)
	MR_init_entry1(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0);
	MR_init_label8(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,2,3,4,5,6,7,8,12)
	MR_init_label8(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,15,18,21,23,24,25,28,31)
	MR_init_label3(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,33,34,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i2);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__info_new_var_4_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i3);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__info_new_var_4_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i4);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__comparison_result_type_0_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i5);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__unify_proc__info_new_var_4_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i6);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i7);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i8);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,10,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = MR_r1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,10,0);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i12);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tempr3;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_specific_call_9_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i15);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i18);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr4 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tempr4;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_specific_call_9_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i21);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("builtin_int_lt", 14);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i23);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("builtin_int_gt", 14);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i24);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i25);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("<", 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_sv(12) = MR_tempr3;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i28);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const(">", 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i31);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i33);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_compare_cases_8_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i34);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_r1 = (MR_Word) MR_string_const("compare_error", 13);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0_i37);
MR_def_label(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr7 = MR_sv(10);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 4) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr7;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__sort_3_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(hlds__hlds_goal__disj_list_to_goal_3_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module42)
	MR_init_entry1(check_hlds__unify_proc__generate_du_compare_proc_body_9_0);
	MR_init_label8(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,2,3,7,4,10,11,15,17)
	MR_init_label8(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,13,19,21,22,23,24,25,26)
	MR_init_label5(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,12,28,30,31,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_du_compare_proc_body_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
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
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i2);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 238;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i3);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__sort_3_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i7);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i9);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 282;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i10);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i11);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__constructor_0_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i15);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_compare_case_9_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i17);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r10 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const("<", 1);
	MR_r9 = MR_r10;
	MR_GOTO_LAB(check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i21);
	}
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(">", 1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_asymmetric_compare_case_10_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i19);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const(">", 1);
	MR_r9 = MR_tempr2;
	}
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_11_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i22);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_10_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i23);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i24);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i25);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__disj_list_to_goal_3_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i26);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_r7;
	MR_r6 = MR_sv(1);
	MR_GOTO_LAB(check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i30);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i28);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	}
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_0,
		check_hlds__unify_proc__generate_du_compare_proc_body_9_0_i31);
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
MR_def_label(check_hlds__unify_proc__generate_du_compare_proc_body_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("compare for type with no functors", 33);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module43)
	MR_init_entry1(check_hlds__unify_proc__generate_compare_proc_body_9_0);
	MR_init_label8(check_hlds__unify_proc__generate_compare_proc_body_9_0,3,4,6,9,10,2,17,16)
	MR_init_label8(check_hlds__unify_proc__generate_compare_proc_body_9_0,29,35,37,38,40,33,47,48)
	MR_init_label8(check_hlds__unify_proc__generate_compare_proc_body_9_0,50,53,54,61,21,23,25,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_compare_proc_body_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		check_hlds__unify_proc__generate_compare_proc_body_9_0_i3);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0,
		check_hlds__unify_proc__generate_compare_proc_body_9_0_i4);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_proc_body_9_0_i2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__unify_proc__generate_compare_proc_body_9_0_i6);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("=", 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		check_hlds__unify_proc__generate_compare_proc_body_9_0_i9);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_set_context_3_0,
		check_hlds__unify_proc__generate_compare_proc_body_9_0_i10);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,
		check_hlds__unify_proc__generate_compare_proc_body_9_0_i17);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_proc_body_9_0_i16);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_0);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(check_hlds__unify_proc__generate_compare_proc_body_9_0_i29) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_compare_proc_body_9_0_i47) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_compare_proc_body_9_0_i53) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_compare_proc_body_9_0_i61));
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 3);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_proc_body_9_0_i33);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_proc_body_9_0_i37);
	}
	MR_tempr3 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr3,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_proc_body_9_0_i33);
	}
	if (MR_INT_NE(MR_tempr3,1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_proc_body_9_0_i35);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0);
	}
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_du_compare_proc_body_9_0);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_sv(2), 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_ctfield(2, MR_r6, 1);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		check_hlds__unify_proc__generate_compare_proc_body_9_0_i38);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_proc_body_9_0_i40);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_du_compare_proc_body_9_0);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_enum_compare_proc_body_7_0);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		check_hlds__unify_proc__generate_compare_proc_body_9_0_i48);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_proc_body_9_0_i50);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_dummy_compare_proc_body_7_0);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__c_pointer_type_0_0,
		check_hlds__unify_proc__generate_compare_proc_body_9_0_i54);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_eqv_compare_proc_body_8_0);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_proc_body_9_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_0);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0,
		check_hlds__unify_proc__generate_compare_proc_body_9_0_i23);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_compare_proc_body_9_0_i22);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		check_hlds__unify_proc__generate_compare_proc_body_9_0_i25);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__unify_proc__generate_builtin_compare_8_0);
MR_def_label(check_hlds__unify_proc__generate_compare_proc_body_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("trying to create compare proc for abstract type", 47);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module44)
	MR_init_entry1(check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0);
	MR_init_label3(check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0,14,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,
		check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0_i4);
MR_def_label(check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0,
		check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0_i5);
MR_def_label(check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0,5)
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

MR_decl_entry(hlds__special_pred__special_pred_interface_5_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_init_2_0);
MR_decl_entry(hlds__hlds_clauses__set_clause_list_2_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module45)
	MR_init_entry1(check_hlds__unify_proc__generate_clause_info_6_0);
	MR_init_label8(check_hlds__unify_proc__generate_clause_info_6_0,2,3,5,6,8,10,11,20)
	MR_init_label8(check_hlds__unify_proc__generate_clause_info_6_0,21,29,30,37,42,38,9,46)
	MR_init_label3(check_hlds__unify_proc__generate_clause_info_6_0,47,49,50)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unify_proc__generate_clause_info_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(hlds__special_pred__special_pred_interface_5_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i2);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i3);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i5);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_init_1_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i6);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("HeadVar__", 9);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_named_vars_from_types_6_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i8);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(check_hlds__unify_proc__generate_clause_info_6_0_i37) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_clause_info_6_0_i20) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_clause_info_6_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__unify_proc__generate_clause_info_6_0_i29));
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i11);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i11);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i11);
	}
	MR_sv(1) = MR_tempr4;
	MR_r1 = MR_sv(2);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(1, MR_sv(1), 0);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_compare_proc_body_9_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i42);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_clause_info: bad compare args", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i9);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i21);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i21);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_index_proc_body_7_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i42);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_clause_info: bad index args", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i9);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i30);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i42);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_clause_info: bad init args", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i9);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i38);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_clause_info_6_0_i38);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(1, MR_sv(1), 0);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_unify_proc_body_8_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i42);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i46);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_clause_info: bad unify args", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i9);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i46);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_init_2_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i47);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__set_clause_list_2_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i49);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_init_1_0,
		check_hlds__unify_proc__generate_clause_info_6_0_i50);
MR_def_label(check_hlds__unify_proc__generate_clause_info_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(fn__mdbcomp__prim_data__unqualify_name_1_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module46)
	MR_init_entry1(check_hlds__unify_proc__compare_ctors_lexically_3_0);
	MR_init_label6(check_hlds__unify_proc__compare_ctors_lexically_3_0,2,3,4,7,8,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__compare_ctors_lexically_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_ctfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__compare_ctors_lexically_3_0_i2);
MR_def_label(check_hlds__unify_proc__compare_ctors_lexically_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__compare_ctors_lexically_3_0_i3);
MR_def_label(check_hlds__unify_proc__compare_ctors_lexically_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		check_hlds__unify_proc__compare_ctors_lexically_3_0_i4);
MR_def_label(check_hlds__unify_proc__compare_ctors_lexically_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__compare_ctors_lexically_3_0_i5);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		check_hlds__unify_proc__compare_ctors_lexically_3_0_i7);
MR_def_label(check_hlds__unify_proc__compare_ctors_lexically_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		check_hlds__unify_proc__compare_ctors_lexically_3_0_i8);
MR_def_label(check_hlds__unify_proc__compare_ctors_lexically_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
	}
MR_def_label(check_hlds__unify_proc__compare_ctors_lexically_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module47)
	MR_init_entry1(check_hlds__unify_proc__unify_var_lists_2_7_0);
	MR_init_label8(check_hlds__unify_proc__unify_var_lists_2_7_0,70,8,10,9,18,19,20,16)
	MR_init_label7(check_hlds__unify_proc__unify_var_lists_2_7_0,22,25,14,27,30,71,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__unify_var_lists_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__unify_var_lists_2_7_0_i70);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__unify_var_lists_2_7_0_i71);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__unify_var_lists_2_7_0_i71);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__unify_var_lists_2_7_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__unify_var_lists_2_7_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(8) = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__unify_proc__unify_var_lists_2_7_0_i8);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		check_hlds__unify_proc__unify_var_lists_2_7_0_i10);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__unify_var_lists_2_7_0_i9);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__unify_proc__unify_var_lists_2_7_0_i27);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__unify_proc__unify_var_lists_2_7_0_i16);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__unify_proc__unify_var_lists_2_7_0_i18);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_type__type_contains_var_2_0,
		check_hlds__unify_proc__unify_var_lists_2_7_0_i19);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__unify_proc__unify_var_lists_2_7_0_i20);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(14));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(check_hlds__unify_proc__unify_var_lists_2_7_0_i22);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(check_hlds__unify_proc__unify_var_lists_2_7_0_i14);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("typed_unify", 11);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__build_call_6_0,
		check_hlds__unify_proc__unify_var_lists_2_7_0_i25);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_sv(1) = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__unify_proc__unify_var_lists_2_7_0,
		check_hlds__unify_proc__unify_var_lists_2_7_0_i30);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__unify_var_lists_2_7_0_i27);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_localcall_lab(check_hlds__unify_proc__unify_var_lists_2_7_0,
		check_hlds__unify_proc__unify_var_lists_2_7_0_i30);
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__unify_var_lists_2_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unify_proc__unify_var_lists_2_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module48)
	MR_init_entry1(check_hlds__unify_proc__generate_du_unify_case_8_0);
	MR_init_label8(check_hlds__unify_proc__generate_du_unify_case_8_0,2,8,9,10,11,12,13,14)
	MR_init_label8(check_hlds__unify_proc__generate_du_unify_case_8_0,15,16,18,4,23,24,26,28)
	MR_init_label6(check_hlds__unify_proc__generate_du_unify_case_8_0,31,30,37,38,39,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_du_unify_case_8_0)
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
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i2);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_du_unify_case_8_0_i4);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_du_unify_case_8_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i8);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i9);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("CastX", 5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__unify_proc__info_new_named_var_5_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i10);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i11);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("CastY", 5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__unify_proc__info_new_named_var_5_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i12);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_5_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i13);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_5_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i14);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 11;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i15);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 11;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i16);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i18);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i38);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r6;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_vars_5_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i23);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_vars_5_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i24);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i26);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i28);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__unify_var_lists_2_7_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i31);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_du_unify_case_8_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(6) = MR_r3;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i38);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("unify_var_lists: length mismatch", 32);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i37);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i38);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i39);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__unify_proc__generate_du_unify_case_8_0_i40);
MR_def_label(check_hlds__unify_proc__generate_du_unify_case_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__make_int_const_construction_3_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module49)
	MR_init_entry1(check_hlds__unify_proc__generate_du_index_case_9_0);
	MR_init_label8(check_hlds__unify_proc__generate_du_index_case_9_0,2,7,8,5,10,11,4,14)
	MR_init_label4(check_hlds__unify_proc__generate_du_index_case_9_0,15,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__generate_du_index_case_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__generate_du_index_case_9_0_i2);
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__unify_proc__generate_du_index_case_9_0_i5);
	}
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,2);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__unify_proc__generate_du_index_case_9_0_i7);
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_vars_from_types_4_0,
		check_hlds__unify_proc__generate_du_index_case_9_0_i8);
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__unify_proc__generate_du_index_case_9_0_i4);
	}
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(0, MR_sv(8), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__unify_proc__generate_du_index_case_9_0_i10);
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		check_hlds__unify_proc__generate_du_index_case_9_0_i11);
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(4) = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__unify_proc__generate_du_index_case_9_0_i14);
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_3_0,
		check_hlds__unify_proc__generate_du_index_case_9_0_i15);
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = ((MR_Integer) MR_sv(7) + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__unify_proc__generate_du_index_case_9_0_i18);
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__unify_proc__generate_du_index_case_9_0_i19);
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__unify_proc__generate_du_index_case_9_0_i20);
MR_def_label(check_hlds__unify_proc__generate_du_index_case_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module50)
	MR_init_entry1(__Unify___check_hlds__unify_proc__linear_or_quad_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__unify_proc__linear_or_quad_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module51)
	MR_init_entry1(__Compare___check_hlds__unify_proc__linear_or_quad_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__unify_proc__linear_or_quad_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___queue__queue_1_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module52)
	MR_init_entry1(__Unify___check_hlds__unify_proc__proc_requests_0_0);
	MR_init_label3(__Unify___check_hlds__unify_proc__proc_requests_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__unify_proc__proc_requests_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__unify_proc__proc_requests_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__unify_proc__proc_requests_0_0_i4);
MR_def_label(__Unify___check_hlds__unify_proc__proc_requests_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__unify_proc__proc_requests_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___queue__queue_1_0);
MR_def_label(__Unify___check_hlds__unify_proc__proc_requests_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__unify_proc__proc_requests_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___queue__queue_1_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module53)
	MR_init_entry1(__Compare___check_hlds__unify_proc__proc_requests_0_0);
	MR_init_label4(__Compare___check_hlds__unify_proc__proc_requests_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__unify_proc__proc_requests_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__unify_proc__proc_requests_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__unify_proc__proc_requests_0_0_i2);
MR_def_label(__Compare___check_hlds__unify_proc__proc_requests_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__unify_proc__proc_requests_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__unify_proc__proc_requests_0_0_i5);
MR_def_label(__Compare___check_hlds__unify_proc__proc_requests_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__unify_proc__proc_requests_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___queue__queue_1_0);
MR_def_label(__Compare___check_hlds__unify_proc__proc_requests_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module54)
	MR_init_entry1(__Unify___check_hlds__unify_proc__req_queue_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__unify_proc__req_queue_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___queue__queue_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module55)
	MR_init_entry1(__Compare___check_hlds__unify_proc__req_queue_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__unify_proc__req_queue_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___queue__queue_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module56)
	MR_init_entry1(__Unify___check_hlds__unify_proc__unify_pred_item_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__unify_proc__unify_pred_item_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module57)
	MR_init_entry1(__Compare___check_hlds__unify_proc__unify_pred_item_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__unify_proc__unify_pred_item_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_decl_entry(__Unify___hlds__hlds_goal__uni_mode_0_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module58)
	MR_init_entry1(__Unify___check_hlds__unify_proc__unify_proc_id_0_0);
	MR_init_label3(__Unify___check_hlds__unify_proc__unify_proc_id_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__unify_proc__unify_proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__unify_proc__unify_proc_id_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_ctor_0_0,
		__Unify___check_hlds__unify_proc__unify_proc_id_0_0_i4);
MR_def_label(__Unify___check_hlds__unify_proc__unify_proc_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__unify_proc__unify_proc_id_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__uni_mode_0_0);
MR_def_label(__Unify___check_hlds__unify_proc__unify_proc_id_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__unify_proc__unify_proc_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__type_ctor_0_0);
MR_decl_entry(__Compare___hlds__hlds_goal__uni_mode_0_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module59)
	MR_init_entry1(__Compare___check_hlds__unify_proc__unify_proc_id_0_0);
	MR_init_label4(__Compare___check_hlds__unify_proc__unify_proc_id_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__unify_proc__unify_proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__unify_proc__unify_proc_id_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__unify_proc__unify_proc_id_0_0_i2);
MR_def_label(__Compare___check_hlds__unify_proc__unify_proc_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__unify_proc__unify_proc_id_0_0,2)
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__type_ctor_0_0,
		__Compare___check_hlds__unify_proc__unify_proc_id_0_0_i5);
MR_def_label(__Compare___check_hlds__unify_proc__unify_proc_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__unify_proc__unify_proc_id_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__uni_mode_0_0);
MR_def_label(__Compare___check_hlds__unify_proc__unify_proc_id_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module60)
	MR_init_entry1(__Unify___check_hlds__unify_proc__unify_proc_info_0_0);
	MR_init_label5(__Unify___check_hlds__unify_proc__unify_proc_info_0_0,4,7,9,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__unify_proc__unify_proc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__unify_proc__unify_proc_info_0_0_i13);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__unify_proc__unify_proc_info_0_0_i4);
MR_def_label(__Unify___check_hlds__unify_proc__unify_proc_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__unify_proc__unify_proc_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__unify_proc__unify_proc_info_0_0_i7);
MR_def_label(__Unify___check_hlds__unify_proc__unify_proc_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__unify_proc__unify_proc_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___check_hlds__unify_proc__unify_proc_info_0_0_i9);
MR_def_label(__Unify___check_hlds__unify_proc__unify_proc_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__unify_proc__unify_proc_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___hlds__hlds_module__module_info_0_0);
MR_def_label(__Unify___check_hlds__unify_proc__unify_proc_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__unify_proc__unify_proc_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module61)
	MR_init_entry1(__Compare___check_hlds__unify_proc__unify_proc_info_0_0);
	MR_init_label6(__Compare___check_hlds__unify_proc__unify_proc_info_0_0,3,2,5,10,14,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__unify_proc__unify_proc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__unify_proc__unify_proc_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__unify_proc__unify_proc_info_0_0_i2);
MR_def_label(__Compare___check_hlds__unify_proc__unify_proc_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__unify_proc__unify_proc_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__unify_proc__unify_proc_info_0_0_i5);
MR_def_label(__Compare___check_hlds__unify_proc__unify_proc_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__unify_proc__unify_proc_info_0_0_i38);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__unify_proc__unify_proc_info_0_0_i10);
MR_def_label(__Compare___check_hlds__unify_proc__unify_proc_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__unify_proc__unify_proc_info_0_0_i38);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___check_hlds__unify_proc__unify_proc_info_0_0_i14);
MR_def_label(__Compare___check_hlds__unify_proc__unify_proc_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__unify_proc__unify_proc_info_0_0_i38);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___hlds__hlds_module__module_info_0_0);
MR_def_label(__Compare___check_hlds__unify_proc__unify_proc_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module62)
	MR_init_entry1(__Unify___check_hlds__unify_proc__unify_req_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__unify_proc__unify_req_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module63)
	MR_init_entry1(__Compare___check_hlds__unify_proc__unify_req_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__unify_proc__unify_req_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__unify_proc, unify_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unify_proc_module64)
	MR_init_entry1(fn__check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__539__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__539__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module65)
	MR_init_entry1(check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__620__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__620__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
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


MR_BEGIN_MODULE(check_hlds__unify_proc_module66)
	MR_init_entry1(fn__check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__2010__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__2010__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__special_pred__special_pred_name_2_0);
MR_decl_entry(mdbcomp__prim_data__sym_name_get_module_name_default_3_0);
MR_decl_entry(hlds__goal_util__generate_cast_with_insts_7_0);

MR_BEGIN_MODULE(check_hlds__unify_proc_module67)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0);
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,2,4,6,7,8,9,10,11)
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,12,14,15,20,41,29,28,31)
	MR_init_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,32,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__info_get_module_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i4) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i6) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i4) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i41));
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_initialise_proc_body: trying to create initialisation proc for type that has no solver_type_details", 108);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i7);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("PreCast_HeadVar", 15);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__make_fresh_named_var_from_type_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__special_pred__special_pred_name_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__sym_name_get_module_name_default_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 5) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(5);
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(2,11,0);
	MR_r5 = MR_r4;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_cast_with_insts_7_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i20);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(3, MR_sv(1), 1), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i29);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i31);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify_proc.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generating initialise pred. for solver type that does not have automatic initialisation.", 88);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i28);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i31);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i32);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 5) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0_i35);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_117_110_105_102_121_95_112_114_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unify_proc__quantify_clause_body_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__unify_proc_maybe_bunch_0(void)
{
	check_hlds__unify_proc_module0();
	check_hlds__unify_proc_module1();
	check_hlds__unify_proc_module2();
	check_hlds__unify_proc_module3();
	check_hlds__unify_proc_module4();
	check_hlds__unify_proc_module5();
	check_hlds__unify_proc_module6();
	check_hlds__unify_proc_module7();
	check_hlds__unify_proc_module8();
	check_hlds__unify_proc_module9();
	check_hlds__unify_proc_module10();
	check_hlds__unify_proc_module11();
	check_hlds__unify_proc_module12();
	check_hlds__unify_proc_module13();
	check_hlds__unify_proc_module14();
	check_hlds__unify_proc_module15();
	check_hlds__unify_proc_module16();
	check_hlds__unify_proc_module17();
	check_hlds__unify_proc_module18();
	check_hlds__unify_proc_module19();
	check_hlds__unify_proc_module20();
	check_hlds__unify_proc_module21();
	check_hlds__unify_proc_module22();
	check_hlds__unify_proc_module23();
	check_hlds__unify_proc_module24();
	check_hlds__unify_proc_module25();
	check_hlds__unify_proc_module26();
	check_hlds__unify_proc_module27();
	check_hlds__unify_proc_module28();
	check_hlds__unify_proc_module29();
	check_hlds__unify_proc_module30();
	check_hlds__unify_proc_module31();
	check_hlds__unify_proc_module32();
	check_hlds__unify_proc_module33();
	check_hlds__unify_proc_module34();
	check_hlds__unify_proc_module35();
	check_hlds__unify_proc_module36();
	check_hlds__unify_proc_module37();
	check_hlds__unify_proc_module38();
	check_hlds__unify_proc_module39();
}

static void mercury__check_hlds__unify_proc_maybe_bunch_1(void)
{
	check_hlds__unify_proc_module40();
	check_hlds__unify_proc_module41();
	check_hlds__unify_proc_module42();
	check_hlds__unify_proc_module43();
	check_hlds__unify_proc_module44();
	check_hlds__unify_proc_module45();
	check_hlds__unify_proc_module46();
	check_hlds__unify_proc_module47();
	check_hlds__unify_proc_module48();
	check_hlds__unify_proc_module49();
	check_hlds__unify_proc_module50();
	check_hlds__unify_proc_module51();
	check_hlds__unify_proc_module52();
	check_hlds__unify_proc_module53();
	check_hlds__unify_proc_module54();
	check_hlds__unify_proc_module55();
	check_hlds__unify_proc_module56();
	check_hlds__unify_proc_module57();
	check_hlds__unify_proc_module58();
	check_hlds__unify_proc_module59();
	check_hlds__unify_proc_module60();
	check_hlds__unify_proc_module61();
	check_hlds__unify_proc_module62();
	check_hlds__unify_proc_module63();
	check_hlds__unify_proc_module64();
	check_hlds__unify_proc_module65();
	check_hlds__unify_proc_module66();
	check_hlds__unify_proc_module67();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__unify_proc__init(void);
void mercury__check_hlds__unify_proc__init_type_tables(void);
void mercury__check_hlds__unify_proc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__unify_proc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__unify_proc__init_complexity_procs(void);
#endif

void mercury__check_hlds__unify_proc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__unify_proc_maybe_bunch_0();
	mercury__check_hlds__unify_proc_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__unify_proc__type_ctor_info_unify_req_map_0,
		check_hlds__unify_proc__unify_req_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__unify_proc__type_ctor_info_unify_proc_info_0,
		check_hlds__unify_proc__unify_proc_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__unify_proc__type_ctor_info_unify_proc_id_0,
		check_hlds__unify_proc__unify_proc_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__unify_proc__type_ctor_info_unify_pred_item_0,
		check_hlds__unify_proc__unify_pred_item_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__unify_proc__type_ctor_info_req_queue_0,
		check_hlds__unify_proc__req_queue_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__unify_proc__type_ctor_info_proc_requests_0,
		check_hlds__unify_proc__proc_requests_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__unify_proc__type_ctor_info_linear_or_quad_0,
		check_hlds__unify_proc__linear_or_quad_0_0);
	mercury__check_hlds__unify_proc__init_debugger();
}

void mercury__check_hlds__unify_proc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__unify_proc__type_ctor_info_unify_req_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__unify_proc__type_ctor_info_unify_proc_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__unify_proc__type_ctor_info_unify_proc_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__unify_proc__type_ctor_info_unify_pred_item_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__unify_proc__type_ctor_info_req_queue_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__unify_proc__type_ctor_info_proc_requests_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__unify_proc__type_ctor_info_linear_or_quad_0);
	}
}


void mercury__check_hlds__unify_proc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__unify_proc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__unify_proc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__unify_proc__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
