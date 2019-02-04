/*
** Automatically generated from `det_analysis.m'
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
INIT mercury__check_hlds__det_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "check_hlds.det_analysis.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "check_hlds.det_analysis.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "check_hlds.det_analysis.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 39 "check_hlds.det_analysis.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "check_hlds.det_analysis.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "check_hlds.det_analysis.c"
#line 48 "check_hlds.det_analysis.c"
#include "check_hlds.det_analysis.mh"

#line 51 "check_hlds.det_analysis.c"
#line 52 "check_hlds.det_analysis.c"
#ifndef CHECK_HLDS__DET_ANALYSIS_DECL_GUARD
#define CHECK_HLDS__DET_ANALYSIS_DECL_GUARD

#line 56 "check_hlds.det_analysis.c"
#line 57 "check_hlds.det_analysis.c"

#endif
#line 60 "check_hlds.det_analysis.c"

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
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_4 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_vector_common_4_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__det_analysis__type_ctor_info_pess_info_0,
	mercury_data_check_hlds__det_analysis__type_ctor_info_soln_context_0;
MR_decl_label8(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0, 5,6,8,9,13,14,17,16)
MR_decl_label8(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0, 57,59,124,12,135,136,139,138)
MR_decl_label8(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0, 179,181,137,248,249,250,251,258)
MR_decl_label6(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0, 260,134,11,262,2,3)
MR_decl_label7(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0, 31,5,6,8,3,4,1)
MR_decl_label2(check_hlds__det_analysis__det_get_soln_context_2_0, 3,2)
MR_decl_label8(check_hlds__det_analysis__det_infer_atomic_11_0, 2,4,5,6,7,8,9,10)
MR_decl_label1(check_hlds__det_analysis__det_infer_atomic_11_0, 13)
MR_decl_label6(check_hlds__det_analysis__det_infer_atomic_goal_9_0, 2,6,4,7,8,22)
MR_decl_label8(check_hlds__det_analysis__det_infer_call_11_0, 2,3,4,5,8,10,7,11)
MR_decl_label8(check_hlds__det_analysis__det_infer_call_11_0, 12,17,18,19,20,21,22,24)
MR_decl_label8(check_hlds__det_analysis__det_infer_call_11_0, 16,25,26,27,28,32,39,40)
MR_decl_label8(check_hlds__det_analysis__det_infer_call_11_0, 41,46,48,49,13,51,54,53)
MR_decl_label8(check_hlds__det_analysis__det_infer_conj_11_0, 29,4,5,6,7,10,11,12)
MR_decl_label2(check_hlds__det_analysis__det_infer_conj_11_0, 14,15)
MR_decl_label3(check_hlds__det_analysis__det_infer_disj_11_0, 2,5,3)
MR_decl_label8(check_hlds__det_analysis__det_infer_disj_goals_13_0, 4,3,5,6,12,7,8,15)
MR_decl_label4(check_hlds__det_analysis__det_infer_disj_goals_13_0, 16,17,21,23)
MR_decl_label8(check_hlds__det_analysis__det_infer_foreign_proc_11_0, 2,3,4,7,9,19,20,26)
MR_decl_label8(check_hlds__det_analysis__det_infer_foreign_proc_11_0, 6,27,29,32,34,45,51,28)
MR_decl_label8(check_hlds__det_analysis__det_infer_foreign_proc_11_0, 52,54,53,60,61,62,66,73)
MR_decl_label8(check_hlds__det_analysis__det_infer_foreign_proc_11_0, 74,75,80,82,57,83,84,87)
MR_decl_label1(check_hlds__det_analysis__det_infer_foreign_proc_11_0, 86)
MR_decl_label8(check_hlds__det_analysis__det_infer_generic_call_9_0, 2,3,7,8,11,19,20,25)
MR_decl_label5(check_hlds__det_analysis__det_infer_generic_call_9_0, 27,28,4,29,31)
MR_decl_label7(check_hlds__det_analysis__det_infer_goal_10_0, 2,3,5,7,12,9,4)
MR_decl_label8(check_hlds__det_analysis__det_infer_goal_1_11_0, 2,8,7,6,5,3,13,14)
MR_decl_label8(check_hlds__det_analysis__det_infer_goal_1_11_0, 15,18,16,20,22,21,26,30)
MR_decl_label8(check_hlds__det_analysis__det_infer_goal_1_11_0, 31,32,36,37,80,33,34,47)
MR_decl_label7(check_hlds__det_analysis__det_infer_goal_1_11_0, 48,49,45,41,53,59,54)
MR_decl_label8(check_hlds__det_analysis__det_infer_goal_2_11_0, 47,48,23,24,15,53,3,4)
MR_decl_label8(check_hlds__det_analysis__det_infer_goal_2_11_0, 5,8,7,10,12,13,17,18)
MR_decl_label8(check_hlds__det_analysis__det_infer_goal_2_11_0, 20,21,26,27,29,39,35,36)
MR_decl_label4(check_hlds__det_analysis__det_infer_goal_2_11_0, 31,32,44,45)
MR_decl_label8(check_hlds__det_analysis__det_infer_if_then_else_14_0, 2,3,4,5,8,9,10,11)
MR_decl_label8(check_hlds__det_analysis__det_infer_if_then_else_14_0, 12,13,18,20,19,17,23,24)
MR_decl_label4(check_hlds__det_analysis__det_infer_if_then_else_14_0, 25,15,27,28)
MR_decl_label7(check_hlds__det_analysis__det_infer_not_9_0, 2,3,5,4,7,10,9)
MR_decl_label6(check_hlds__det_analysis__det_infer_orelse_goals_12_0, 17,4,5,6,7,8)
MR_decl_label8(check_hlds__det_analysis__det_infer_par_conj_11_0, 2,4,3,8,9,11,17,10)
MR_decl_label4(check_hlds__det_analysis__det_infer_par_conj_11_0, 23,24,29,31)
MR_decl_label8(check_hlds__det_analysis__det_infer_par_conj_goals_11_0, 20,4,5,6,8,9,10,11)
MR_decl_label1(check_hlds__det_analysis__det_infer_par_conj_goals_11_0, 12)
MR_decl_label8(check_hlds__det_analysis__det_infer_proc_8_0, 2,3,4,5,6,7,8,10)
MR_decl_label8(check_hlds__det_analysis__det_infer_proc_8_0, 11,9,14,13,18,19,20,21)
MR_decl_label8(check_hlds__det_analysis__det_infer_proc_8_0, 22,23,24,25,26,27,28,29)
MR_decl_label8(check_hlds__det_analysis__det_infer_proc_8_0, 30,31,32,33,35,38,39,42)
MR_decl_label8(check_hlds__det_analysis__det_infer_proc_8_0, 44,54,55,34,68,69,75,76)
MR_decl_label8(check_hlds__det_analysis__det_infer_proc_8_0, 79,80,78,73,81,84,89,90)
MR_decl_label8(check_hlds__det_analysis__det_infer_proc_8_0, 82,102,71,105,106,107,108,109)
MR_decl_label6(check_hlds__det_analysis__det_infer_proc_8_0, 126,111,112,113,115,116)
MR_decl_label8(check_hlds__det_analysis__det_infer_scope_12_0, 9,10,11,12,16,43,45,46)
MR_decl_label8(check_hlds__det_analysis__det_infer_scope_12_0, 47,48,14,53,67,68,69,72)
MR_decl_label8(check_hlds__det_analysis__det_infer_scope_12_0, 70,75,76,80,78,101,77,103)
MR_decl_label8(check_hlds__det_analysis__det_infer_scope_12_0, 106,107,121,51,13,123,124,125)
MR_decl_label8(check_hlds__det_analysis__det_infer_scope_12_0, 128,129,131,132,133,134,135,136)
MR_decl_label8(check_hlds__det_analysis__det_infer_scope_12_0, 139,137,142,143,144,148,146,149)
MR_decl_label8(check_hlds__det_analysis__det_infer_scope_12_0, 145,155,156,153,158,152,176,179)
MR_decl_label8(check_hlds__det_analysis__det_infer_scope_12_0, 180,186,187,188,189,190,196,194)
MR_decl_label8(check_hlds__det_analysis__det_infer_scope_12_0, 192,200,201,202,206,204,223,203)
MR_decl_label8(check_hlds__det_analysis__det_infer_scope_12_0, 225,228,229,235,264,239,244,245)
MR_decl_label4(check_hlds__det_analysis__det_infer_scope_12_0, 259,5,7,2)
MR_decl_label8(check_hlds__det_analysis__det_infer_switch_13_0, 2,3,4,7,8,9,10,11)
MR_decl_label2(check_hlds__det_analysis__det_infer_switch_13_0, 14,13)
MR_decl_label8(check_hlds__det_analysis__det_infer_switch_cases_14_0, 4,3,5,6,8,9,10,11)
MR_decl_label5(check_hlds__det_analysis__det_infer_switch_cases_14_0, 13,14,15,16,18)
MR_decl_label8(check_hlds__det_analysis__det_infer_unify_13_0, 6,5,7,8,9,10,11,3)
MR_decl_label8(check_hlds__det_analysis__det_infer_unify_13_0, 2,14,15,17,18,21,36,37)
MR_decl_label8(check_hlds__det_analysis__det_infer_unify_13_0, 39,23,24,50,26,28,29,20)
MR_decl_label4(check_hlds__det_analysis__det_infer_unify_canfail_2_0, 6,3,11,4)
MR_decl_label3(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0, 11,13,4)
MR_decl_label1(check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0, 2)
MR_decl_label4(check_hlds__det_analysis__determinism_check_proc_5_0, 2,3,6,7)
MR_decl_label8(check_hlds__det_analysis__determinism_pass_3_0, 2,3,4,5,7,8,9,10)
MR_decl_label8(check_hlds__det_analysis__determinism_pass_3_0, 12,13,14,15,11,16,17,18)
MR_decl_label3(check_hlds__det_analysis__determinism_pass_3_0, 19,20,21)
MR_decl_label2(check_hlds__det_analysis__fold_pred_modes_4_0, 6,2)
MR_decl_label5(check_hlds__det_analysis__get_all_pred_procs_2_4_0, 12,3,4,5,6)
MR_decl_label2(check_hlds__det_analysis__get_exported_proc_context_4_0, 3,1)
MR_decl_label4(check_hlds__det_analysis__global_inference_pass_5_0, 11,2,3,5)
MR_decl_label8(check_hlds__det_analysis__global_inference_single_pass_8_0, 27,3,4,5,6,9,10,11)
MR_decl_label5(check_hlds__det_analysis__global_inference_single_pass_8_0, 12,13,14,15,29)
MR_decl_label8(check_hlds__det_analysis__segregate_procs_2_8_0, 55,3,4,5,11,9,14,16)
MR_decl_label8(check_hlds__det_analysis__segregate_procs_2_8_0, 13,17,18,8,6,21,22,23)
MR_decl_label1(check_hlds__det_analysis__segregate_procs_2_8_0, 25)
MR_decl_label8(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0, 2,3,4,5,7,8,9,10)
MR_decl_label3(__Unify___check_hlds__det_analysis__pess_info_0_0, 5,9,1)
MR_decl_label1(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2, 1)
MR_decl_label4(__Compare___check_hlds__det_analysis__pess_info_0_0, 3,2,6,22)
MR_decl_static(fn__check_hlds__det_analysis__this_file_0_0)
MR_decl_static(check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0)
MR_decl_static(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0)
MR_decl_static(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0)
MR_decl_static(check_hlds__det_analysis__det_infer_call_11_0)
MR_decl_static(check_hlds__det_analysis__det_infer_generic_call_9_0)
MR_decl_static(check_hlds__det_analysis__det_infer_foreign_proc_11_0)
MR_decl_static(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0)
MR_decl_static(check_hlds__det_analysis__det_infer_unify_canfail_2_0)
MR_def_extern_entry(check_hlds__det_analysis__det_infer_goal_10_0)
MR_decl_static(check_hlds__det_analysis__det_infer_goal_1_11_0)
MR_decl_static(check_hlds__det_analysis__det_infer_goal_2_11_0)
MR_decl_static(check_hlds__det_analysis__det_infer_conj_11_0)
MR_decl_static(check_hlds__det_analysis__det_infer_par_conj_11_0)
MR_decl_static(check_hlds__det_analysis__det_infer_par_conj_goals_11_0)
MR_decl_static(check_hlds__det_analysis__det_infer_disj_11_0)
MR_decl_static(check_hlds__det_analysis__det_infer_disj_goals_13_0)
MR_decl_static(check_hlds__det_analysis__det_infer_switch_13_0)
MR_decl_static(check_hlds__det_analysis__det_infer_switch_cases_14_0)
MR_decl_static(check_hlds__det_analysis__det_infer_unify_13_0)
MR_decl_static(check_hlds__det_analysis__det_infer_if_then_else_14_0)
MR_decl_static(check_hlds__det_analysis__det_infer_not_9_0)
MR_decl_static(check_hlds__det_analysis__det_infer_atomic_11_0)
MR_decl_static(check_hlds__det_analysis__det_infer_atomic_goal_9_0)
MR_decl_static(check_hlds__det_analysis__det_infer_orelse_goals_12_0)
MR_decl_static(check_hlds__det_analysis__det_infer_scope_12_0)
MR_def_extern_entry(check_hlds__det_analysis__det_get_soln_context_2_0)
MR_decl_static(check_hlds__det_analysis__get_exported_proc_context_4_0)
MR_def_extern_entry(check_hlds__det_analysis__det_infer_proc_8_0)
MR_decl_static(check_hlds__det_analysis__global_inference_single_pass_8_0)
MR_decl_static(check_hlds__det_analysis__global_inference_pass_5_0)
MR_decl_static(check_hlds__det_analysis__fold_pred_modes_4_0)
MR_decl_static(check_hlds__det_analysis__get_all_pred_procs_2_4_0)
MR_decl_static(check_hlds__det_analysis__segregate_procs_2_8_0)
MR_def_extern_entry(check_hlds__det_analysis__determinism_pass_3_0)
MR_def_extern_entry(check_hlds__det_analysis__determinism_check_proc_5_0)
MR_decl_static(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0)
MR_def_extern_entry(__Unify___check_hlds__det_analysis__pess_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_analysis__pess_info_0_0)
MR_def_extern_entry(__Unify___check_hlds__det_analysis__soln_context_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_analysis__soln_context_0_0)
MR_decl_static(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2)
MR_decl_static(check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1449__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_failing_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[81] =
{
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
MR_TAG_COMMON(3,1,1),
MR_TAG_COMMON(1,0,1)
}
},
{
{
MR_TAG_COMMON(3,1,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,16),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,15),
MR_TAG_COMMON(1,0,4)
}
},
{
{
MR_TAG_COMMON(3,1,14),
MR_TAG_COMMON(1,0,5)
}
},
{
{
MR_TAG_COMMON(3,1,13),
MR_TAG_COMMON(1,0,6)
}
},
{
{
MR_TAG_COMMON(3,1,12),
MR_TAG_COMMON(1,0,7)
}
},
{
{
MR_TAG_COMMON(3,1,11),
MR_TAG_COMMON(1,0,8)
}
},
{
{
MR_TAG_COMMON(3,1,10),
MR_TAG_COMMON(1,0,9)
}
},
{
{
MR_TAG_COMMON(3,1,9),
MR_TAG_COMMON(1,0,10)
}
},
{
{
MR_TAG_COMMON(3,1,8),
MR_TAG_COMMON(1,0,11)
}
},
{
{
MR_TAG_COMMON(3,1,7),
MR_TAG_COMMON(1,0,12)
}
},
{
{
MR_TAG_COMMON(3,1,6),
MR_TAG_COMMON(1,0,13)
}
},
{
{
MR_TAG_COMMON(3,1,5),
MR_TAG_COMMON(1,0,14)
}
},
{
{
MR_TAG_COMMON(3,1,18),
MR_TAG_COMMON(1,0,1)
}
},
{
{
MR_TAG_COMMON(3,1,21),
MR_TAG_COMMON(1,0,7)
}
},
{
{
MR_TAG_COMMON(3,1,20),
MR_TAG_COMMON(1,0,17)
}
},
{
{
MR_TAG_COMMON(3,1,10),
MR_TAG_COMMON(1,0,18)
}
},
{
{
MR_TAG_COMMON(3,1,19),
MR_TAG_COMMON(1,0,19)
}
},
{
{
MR_TAG_COMMON(3,1,8),
MR_TAG_COMMON(1,0,20)
}
},
{
{
MR_TAG_COMMON(3,1,7),
MR_TAG_COMMON(1,0,21)
}
},
{
{
MR_TAG_COMMON(3,1,6),
MR_TAG_COMMON(1,0,22)
}
},
{
{
MR_TAG_COMMON(3,1,5),
MR_TAG_COMMON(1,0,23)
}
},
{
{
MR_TAG_COMMON(3,1,22),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,28),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,27),
MR_TAG_COMMON(1,0,27)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,0,28)
}
},
{
{
MR_TAG_COMMON(3,1,1),
MR_TAG_COMMON(1,0,29)
}
},
{
{
MR_TAG_COMMON(3,1,32),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,31),
MR_TAG_COMMON(1,0,31)
}
},
{
{
MR_TAG_COMMON(1,2,0),
MR_TAG_COMMON(1,0,32)
}
},
{
{
MR_TAG_COMMON(3,1,30),
MR_TAG_COMMON(1,0,33)
}
},
{
{
MR_TAG_COMMON(3,1,29),
MR_TAG_COMMON(1,0,34)
}
},
{
{
MR_TAG_COMMON(3,1,34),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,33),
MR_TAG_COMMON(1,0,36)
}
},
{
{
MR_TAG_COMMON(3,1,35),
MR_TAG_COMMON(1,0,36)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__det_report, failing_context)
}
},
{
{
MR_TAG_COMMON(3,1,38),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,37),
MR_TAG_COMMON(1,0,40)
}
},
{
{
MR_TAG_COMMON(3,1,41),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,40),
MR_TAG_COMMON(1,0,42)
}
},
{
{
MR_TAG_COMMON(3,1,39),
MR_TAG_COMMON(1,0,43)
}
},
{
{
MR_TAG_COMMON(3,1,43),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,42),
MR_TAG_COMMON(1,0,45)
}
},
{
{
MR_TAG_COMMON(0,7,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,8,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,7,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,8,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,45),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,44),
MR_TAG_COMMON(1,0,51)
}
},
{
{
MR_TAG_COMMON(3,1,39),
MR_TAG_COMMON(1,0,52)
}
},
{
{
MR_TAG_COMMON(0,7,2),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,1,48),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,47),
MR_TAG_COMMON(1,0,57)
}
},
{
{
MR_TAG_COMMON(3,1,40),
MR_TAG_COMMON(1,0,58)
}
},
{
{
MR_TAG_COMMON(3,1,46),
MR_TAG_COMMON(1,0,59)
}
},
{
{
MR_TAG_COMMON(3,1,39),
MR_TAG_COMMON(1,0,60)
}
},
{
{
MR_TAG_COMMON(3,1,49),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,47),
MR_TAG_COMMON(1,0,62)
}
},
{
{
MR_TAG_COMMON(3,1,40),
MR_TAG_COMMON(1,0,63)
}
},
{
{
MR_TAG_COMMON(3,1,46),
MR_TAG_COMMON(1,0,64)
}
},
{
{
MR_TAG_COMMON(3,1,39),
MR_TAG_COMMON(1,0,65)
}
},
{
{
MR_TAG_COMMON(3,1,50),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,51),
MR_TAG_COMMON(1,0,45)
}
},
{
{
MR_TAG_COMMON(0,7,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,56),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,55),
MR_TAG_COMMON(1,0,70)
}
},
{
{
MR_TAG_COMMON(3,1,57),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,55),
MR_TAG_COMMON(1,0,72)
}
},
{
{
MR_TAG_COMMON(3,1,60),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,59),
MR_TAG_COMMON(1,0,74)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,0,75)
}
},
{
{
MR_TAG_COMMON(3,1,1),
MR_TAG_COMMON(1,0,76)
}
},
{
{
MR_TAG_COMMON(3,1,62),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,61),
MR_TAG_COMMON(1,0,78)
}
},
{
{
MR_TAG_COMMON(2,7,4),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[64] =
{
{
4,
MR_string_const("In switch on variable", 21)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("error:", 6)
},
{
4,
MR_string_const("unification for non-canonical type", 34)
},
{
4,
MR_string_const("is not guaranteed to succeed.", 29)
},
{
4,
MR_string_const("Since the type has a user-defined", 33)
},
{
4,
MR_string_const("equality predicate, I must presume that", 39)
},
{
4,
MR_string_const("there is more than one possible concrete", 40)
},
{
4,
MR_string_const("representation for each abstract value", 38)
},
{
4,
MR_string_const("of this type. The success of this unification", 45)
},
{
4,
MR_string_const("might depend on the choice of concrete", 38)
},
{
4,
MR_string_const("representation. Figuring out whether there is", 45)
},
{
4,
MR_string_const("a solution to this unification would require", 44)
},
{
4,
MR_string_const("backtracking over all possible", 30)
},
{
4,
MR_string_const("representations, but I\'m not going to do that", 45)
},
{
4,
MR_string_const("implicitly. (If that\'s really what you want,", 44)
},
{
4,
MR_string_const("you must do it explicitly.)", 27)
},
{
4,
MR_string_const("Error:", 6)
},
{
4,
MR_string_const("occurs in a context which requires all solutions.", 49)
},
{
4,
MR_string_const("of this type. The results of this unification", 45)
},
{
4,
MR_string_const("representation. Finding all possible", 36)
},
{
4,
MR_string_const("solutions to this unification would require", 43)
},
{
4,
MR_string_const("Error: call to", 14)
},
{
4,
MR_string_const("with determinism", 16)
},
{
4,
MR_string_const("Error: higher-order call to predicate with", 42)
},
{
4,
MR_string_const("determinism", 11)
},
{
4,
MR_string_const("In", 2)
},
{
4,
MR_string_const("error: \140:- pragma foreign_proc(...)\'", 36)
},
{
4,
MR_string_const("for a procedure without a determinism declaration.", 50)
},
{
4,
MR_string_const("has determinism erroneous but also has", 38)
},
{
4,
MR_string_const("foreign clauses that have a", 27)
},
{
4,
MR_string_const("This attribute cannot be applied", 32)
},
{
4,
MR_string_const("to erroneous procedures.", 24)
},
{
4,
MR_string_const("Error: parallel conjunct may fail.", 34)
},
{
4,
MR_string_const("The current implementation supports only single-solution non-failing parallel conjunctions.", 91)
},
{
4,
MR_string_const("Error: parallel conjunct may have multiple solutions.", 53)
},
{
4,
MR_string_const("Error: atomic goal has determinism", 34)
},
{
3,
MR_string_const(",", 1)
},
{
4,
MR_string_const("should be det or cc_multi.", 26)
},
{
4,
MR_string_const("Error: ", 7)
},
{
4,
MR_string_const("\140promise_equivalent_solution_sets\' scope", 40)
},
{
4,
MR_string_const("is nested inside another.", 25)
},
{
4,
MR_string_const("This is the outer", 17)
},
{
4,
MR_string_const("\140promise_equivalent_solution_sets\' scope.", 41)
},
{
4,
MR_string_const("this \140arbitrary\' scope is not nested inside", 43)
},
{
4,
MR_string_const("a \140promise_equivalent_solution_sets\' scope.", 43)
},
{
4,
MR_string_const("this \140arbitrary\' scope and the", 30)
},
{
4,
MR_string_const("it is nested inside overlap on", 30)
},
{
4,
MR_string_const("the variable", 12)
},
{
4,
MR_string_const("the following variables:", 24)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("This is the outer ", 18)
},
{
4,
MR_string_const("Error: the", 10)
},
{
4,
MR_string_const("goal may constrain", 18)
},
{
4,
MR_string_const("goal binds", 10)
},
{
4,
MR_string_const("goal lists", 10)
},
{
4,
MR_string_const("an extra variable:", 18)
},
{
4,
MR_string_const("some extra variables:", 21)
},
{
4,
MR_string_const("Error: trace goal has determinism", 33)
},
{
4,
MR_string_const("error: invalid determinism for a predicate", 42)
},
{
4,
MR_string_const("with I/O state arguments.", 25)
},
{
4,
MR_string_const("Valid determinisms are ", 23)
},
{
4,
MR_string_const("det, cc_multi and erroneous.", 28)
},
{
4,
MR_string_const("for a procedure that has a determinism of", 41)
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_string_const("\140will_not_throw_exception\' attribute.", 37)
},
{
MR_string_const("\140:- pragma foreign_export\' declaration", 38)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
0,
1
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_atomic_goal_9_0_1;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_analysis__det_infer_atomic_goal_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,39),
MR_COMMON(0,39)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
18,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_7 mercury_common_7[5] =
{
{
MR_TAG_COMMON(1,0,44)
},
{
MR_TAG_COMMON(1,0,46)
},
{
MR_TAG_COMMON(1,0,53)
},
{
MR_TAG_COMMON(1,0,68)
},
{
MR_TAG_COMMON(1,0,79)
},
};

static const struct mercury_type_8 mercury_common_8[2] =
{
{
18,
1,
MR_TAG_COMMON(1,0,47)
},
{
18,
1,
MR_TAG_COMMON(1,0,49)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__determinism_pass_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_9 mercury_common_9[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,55),
MR_COMMON(0,56),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,56)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,56)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,55),
MR_COMMON(0,56),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,55),
MR_COMMON(0,56),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_analysis__determinism_pass_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_COMMON(9,5),
MR_ENTRY_AP(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0),
0
},
};

static const struct mercury_type_4 mercury_vector_common_4_0[4] =
{
{
0
},
{
2
},
{
2
},
{
3
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__det_analysis__field_types_pess_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_analysis__du_functor_desc_pess_info_0_0 = {
	"pess_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_analysis__field_types_pess_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_analysis__du_stag_ordered_pess_info_0_0[] = {
	&mercury_data_check_hlds__det_analysis__du_functor_desc_pess_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__det_analysis__du_ptag_ordered_pess_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__det_analysis__du_stag_ordered_pess_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_analysis__du_name_ordered_pess_info_0[] = {
	&mercury_data_check_hlds__det_analysis__du_functor_desc_pess_info_0_0
};

const MR_Integer mercury_data_check_hlds__det_analysis__functor_number_map_pess_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_analysis__type_ctor_info_pess_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_analysis__pess_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_analysis__pess_info_0_0)),
	"check_hlds.det_analysis",
	"pess_info",
	{ (void *)mercury_data_check_hlds__det_analysis__du_name_ordered_pess_info_0 },
	{ (void *)mercury_data_check_hlds__det_analysis__du_ptag_ordered_pess_info_0 },
	1,
	4,
	mercury_data_check_hlds__det_analysis__functor_number_map_pess_info_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_analysis__enum_functor_desc_soln_context_0_0 = {
	"all_solns",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_analysis__enum_functor_desc_soln_context_0_1 = {
	"first_soln",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_analysis__enum_value_ordered_soln_context_0[] = {
	&mercury_data_check_hlds__det_analysis__enum_functor_desc_soln_context_0_0,
	&mercury_data_check_hlds__det_analysis__enum_functor_desc_soln_context_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_analysis__enum_name_ordered_soln_context_0[] = {
	&mercury_data_check_hlds__det_analysis__enum_functor_desc_soln_context_0_0,
	&mercury_data_check_hlds__det_analysis__enum_functor_desc_soln_context_0_1
};

const MR_Integer mercury_data_check_hlds__det_analysis__functor_number_map_soln_context_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_analysis__type_ctor_info_soln_context_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_analysis__soln_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_analysis__soln_context_0_0)),
	"check_hlds.det_analysis",
	"soln_context",
	{ (void *)mercury_data_check_hlds__det_analysis__enum_name_ordered_soln_context_0 },
	{ (void *)mercury_data_check_hlds__det_analysis__enum_value_ordered_soln_context_0 },
	2,
	4,
	mercury_data_check_hlds__det_analysis__functor_number_map_soln_context_0
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_atomic_goal_9_0_1 = {
{
MR_PREDICATE,
"check_hlds.det_analysis",
"check_hlds.det_analysis",
"lambda_det_analysis_m_1449",
2,
0
},
"check_hlds.det_analysis",
"det_analysis.m",
1449,
"d1;c11;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_1 = {
{
MR_FUNCTION,
"check_hlds.det_report",
"check_hlds.det_report",
"lookup_var_name_in_varset",
3,
0
},
"check_hlds.det_analysis",
"det_analysis.m",
1562,
"d1;c13;d1;c5;d3;c2;d2;c6;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_2 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"var_is_ground_in_instmap",
3,
0
},
"check_hlds.det_analysis",
"det_analysis.m",
1600,
"d1;c13;d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_3 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"var_is_any_in_instmap",
3,
0
},
"check_hlds.det_analysis",
"det_analysis.m",
1603,
"d1;c13;d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_4 = {
{
MR_FUNCTION,
"check_hlds.det_report",
"check_hlds.det_report",
"lookup_var_name_in_varset",
3,
0
},
"check_hlds.det_analysis",
"det_analysis.m",
1615,
"d1;c13;d1;c19;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_5 = {
{
MR_FUNCTION,
"check_hlds.det_report",
"check_hlds.det_report",
"lookup_var_name_in_varset",
3,
0
},
"check_hlds.det_analysis",
"det_analysis.m",
1655,
"d1;c13;d1;c23;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__determinism_pass_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.det_analysis",
"check_hlds.det_analysis",
"set_non_inferred_proc_determinism",
3,
0
},
"check_hlds.det_analysis",
"det_analysis.m",
144,
"d1;c6;"
};


MR_BEGIN_MODULE(check_hlds__det_analysis_module0)
	MR_init_entry1(fn__check_hlds__det_analysis__this_file_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__det_analysis__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_analysis.m", 14);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_get_module_info_2_0);
MR_decl_entry(check_hlds__type_util__type_has_user_defined_equality_pred_3_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module1)
	MR_init_entry1(check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0);
	MR_init_label1(check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_type_has_user_defined_equality_pred'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0_i2);
MR_def_label(check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__type_util__type_has_user_defined_equality_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_get_proc_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_out__unify_context_to_pieces_3_0);
MR_decl_entry(check_hlds__det_util__det_info_add_error_spec_3_0);
MR_decl_entry(hlds__hlds_out__unify_context_first_to_pieces_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_failing_context_0;
MR_decl_entry(fn__check_hlds__det_report__failing_contexts_description_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;

MR_BEGIN_MODULE(check_hlds__det_analysis_module2)
	MR_init_entry1(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0);
	MR_init_label8(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,5,6,8,9,13,14,17,16)
	MR_init_label8(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,57,59,124,12,135,136,139,138)
	MR_init_label8(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,179,181,137,248,249,250,251,258)
	MR_init_label6(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,260,134,11,262,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_check_for_noncanonical_type'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_get_proc_info_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i5);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i6);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i8);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i9);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i2);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i12);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i13);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i14);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i17);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i124);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(7), 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_out__unify_context_to_pieces_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i57);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,17);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i124);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i124);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr2;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i260);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i134);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i135);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i136);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i138);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i139);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_TAG_COMMON(1,0,16);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_sv(8) = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_r1 = MR_sv(10);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,0,24);
	MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i137);
	}
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_ctfield(1, MR_sv(7), 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_out__unify_context_first_to_pieces_5_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i179);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i181);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,16);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(8) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,17);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(10);
	MR_sv(7) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,0,24);
	MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i137);
	}
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,16);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(8) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_sv(7) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,0,24);
	}
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i248);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i249);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__det_report__failing_contexts_description_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i250);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i251);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i258);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i260);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i11);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i262);
	}
	MR_r1 = (MR_Integer) 3;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_sv(10);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module3)
	MR_init_entry1(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0);
	MR_init_label7(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0,31,5,6,8,3,4,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_find_matching_non_cc_mode_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((MR_tempr2 == MR_r4)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0_i4);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0_i5);
MR_def_label(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0_i6);
MR_def_label(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0_i3);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modecheck_call__modes_are_identical_bar_cc_4_0,
		check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0_i8);
MR_def_label(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
MR_def_label(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0_i31);
MR_def_label(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_lookup_pred_info_and_detism_5_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(check_hlds__format_call__is_format_call_3_0);
MR_decl_entry(check_hlds__det_util__det_info_set_has_format_call_3_0);
MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_1);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_det_to_string_1_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module4)
	MR_init_entry1(check_hlds__det_analysis__det_infer_call_11_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_call_11_0,2,3,4,5,8,10,7,11)
	MR_init_label8(check_hlds__det_analysis__det_infer_call_11_0,12,17,18,19,20,21,22,24)
	MR_init_label8(check_hlds__det_analysis__det_infer_call_11_0,16,25,26,27,28,32,39,40)
	MR_init_label8(check_hlds__det_analysis__det_infer_call_11_0,41,46,48,49,13,51,54,53)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_call'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_call_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_lookup_pred_info_and_detism_5_0,
		check_hlds__det_analysis__det_infer_call_11_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__det_analysis__det_infer_call_11_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__det_analysis__det_infer_call_11_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__format_call__is_format_call_3_0,
		check_hlds__det_analysis__det_infer_call_11_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_set_has_format_call_3_0,
		check_hlds__det_analysis__det_infer_call_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_call_11_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i13);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i13);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i17);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,18)
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
		check_hlds__det_analysis__det_infer_call_11_0_i19);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i20);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i21);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0,
		check_hlds__det_analysis__det_infer_call_11_0_i22);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i16);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_call_11_0_i24);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r2 = MR_r4;
	MR_sv(5) = MR_sv(10);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i51);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_call_11_0_i25);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__det_util__det_get_proc_info_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i26);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		check_hlds__det_analysis__det_infer_call_11_0_i28);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,0,25);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,1,23);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_det_to_string_1_0,
		check_hlds__det_analysis__det_infer_call_11_0_i32);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,16);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i39);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i40);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__det_report__failing_contexts_description_3_0,
		check_hlds__det_analysis__det_infer_call_11_0_i41);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i46);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_call_11_0_i48);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_call_11_0_i49);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r2 = MR_r4;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i51);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(3) = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_sv(5) = MR_sv(10);
	}
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i53);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_call_11_0_i54);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tempr4 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module5)
	MR_init_entry1(check_hlds__det_analysis__det_infer_generic_call_9_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_generic_call_9_0,2,3,7,8,11,19,20,25)
	MR_init_label5(check_hlds__det_analysis__det_infer_generic_call_9_0,27,28,4,29,31)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_generic_call'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_generic_call_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_generic_call_9_0_i4);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_generic_call_9_0_i4);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__det_util__det_get_proc_info_2_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,1,24);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,1,25);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_det_to_string_1_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,16);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i19);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__det_report__failing_contexts_description_3_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i20);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i25);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i28);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_generic_call_9_0_i29);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(7);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_generic_call_9_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_throw_exception_1_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module6)
	MR_init_entry1(check_hlds__det_analysis__det_infer_foreign_proc_11_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_foreign_proc_11_0,2,3,4,7,9,19,20,26)
	MR_init_label8(check_hlds__det_analysis__det_infer_foreign_proc_11_0,6,27,29,32,34,45,51,28)
	MR_init_label8(check_hlds__det_analysis__det_infer_foreign_proc_11_0,52,54,53,60,61,62,66,73)
	MR_init_label8(check_hlds__det_analysis__det_infer_foreign_proc_11_0,74,75,80,82,57,83,84,87)
	MR_init_label1(check_hlds__det_analysis__det_infer_foreign_proc_11_0,86)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_foreign_proc'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_foreign_proc_11_0)
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(13) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_foreign_proc_11_0_i6);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,26);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,30);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i19);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i20);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i26);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_throw_exception_1_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i29);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_foreign_proc_11_0_i28);
	}
	if (MR_INT_NE(MR_sv(10),6)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_foreign_proc_11_0_i28);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i32);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i34);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,35);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i45);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i51);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_foreign_proc_11_0_i52);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(4));
	MR_r3 = MR_tempr1;
	if (((MR_tempr1 == MR_mktag((MR_Integer) 0)) || (MR_tempr1 == MR_mktag((MR_Integer) 2)))) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_foreign_proc_11_0_i54);
	}
	MR_sv(11) = MR_r2;
	MR_r2 = (MR_Integer) 3;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_foreign_proc_11_0_i53);
	}
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_tempr1;
	}
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_foreign_proc_11_0_i57);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_foreign_proc_11_0_i57);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i60);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i61);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i62);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,0,25);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,1,23);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_det_to_string_1_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i66);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,16);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i73);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i74);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__check_hlds__det_report__failing_contexts_description_3_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i75);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i80);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i82);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 3;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_foreign_proc_11_0_i83);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(4) = MR_sv(11);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i84);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_foreign_proc_11_0_i86);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_foreign_proc_11_0_i87);
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__det_analysis__det_infer_foreign_proc_11_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module7)
	MR_init_entry1(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0);
	MR_init_label3(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0,11,13,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_unify_examines_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0_i13) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0_i11));
MR_def_label(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0_i4);
	}
MR_def_label(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module8)
	MR_init_entry1(check_hlds__det_analysis__det_infer_unify_canfail_2_0);
	MR_init_label4(check_hlds__det_analysis__det_infer_unify_canfail_2_0,6,3,11,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_unify_canfail'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_unify_canfail_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_canfail_2_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_canfail_2_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_canfail_2_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_canfail_2_0_i11));
MR_def_label(check_hlds__det_analysis__det_infer_unify_canfail_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 4);
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_unify_canfail_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_unify_canfail_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_canfail_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_unify_canfail_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(check_hlds__det_util__det_no_output_vars_4_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module9)
	MR_init_entry1(check_hlds__det_analysis__det_infer_goal_10_0);
	MR_init_label7(check_hlds__det_analysis__det_infer_goal_10_0,2,3,5,7,12,9,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_goal'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_analysis__det_infer_goal_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__det_analysis__det_infer_goal_10_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__det_analysis__det_infer_goal_10_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_goal_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_no_output_vars_4_0,
		check_hlds__det_analysis__det_infer_goal_10_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_goal_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_10_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__det_analysis__det_infer_goal_10_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_goal_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_10_0_i9);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__det_analysis__det_infer_goal_10_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_goal_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_10_0_i4);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(8);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_1_11_0);
MR_def_label(check_hlds__det_analysis__det_infer_goal_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_1_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_is_unreachable_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(check_hlds__det_analysis_module10)
	MR_init_entry1(check_hlds__det_analysis__det_infer_goal_1_11_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_goal_1_11_0,2,8,7,6,5,3,13,14)
	MR_init_label8(check_hlds__det_analysis__det_infer_goal_1_11_0,15,18,16,20,22,21,26,30)
	MR_init_label8(check_hlds__det_analysis__det_infer_goal_1_11_0,31,32,36,37,80,33,34,47)
	MR_init_label7(check_hlds__det_analysis__det_infer_goal_1_11_0,48,49,45,41,53,59,54)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_goal_1'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_goal_1_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i6);
	}
	MR_r9 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_r9,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i8);
	}
	MR_r9 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_sv(1) = MR_r9;
	MR_r4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i7);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = (MR_Integer) 1;
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r8,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i5);
	}
	MR_r9 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_r9;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r7;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r8, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i3);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_sv(1) = MR_tempr2;
	MR_r4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i13);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_2_11_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i14);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i15);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i16);
	}
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_sv(7) = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i20);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(7),3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i22);
	}
	if (MR_INT_NE(MR_sv(7),2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i21);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i21);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i30);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i26);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i26);
	}
	MR_r2 = (MR_Integer) 2;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i30);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i31);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i32);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,6)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i34);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_sv(5), 2), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i36);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i37);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i33);
	}
	if (MR_INT_EQ(MR_sv(8),3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i33);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i53);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i41);
	}
	if (MR_RTAGS_TESTR(MR_sv(5),3,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i41);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i41);
	}
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_1_11_0_i45);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i47);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i48);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i49);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i80);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i53);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) == MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i54);
	}
	if (MR_RTAGS_TEST(MR_sv(5),3,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i54);
	}
	if (MR_RTAGS_TEST(MR_sv(5),3,5)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i54);
	}
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i59);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module11)
	MR_init_entry1(check_hlds__det_analysis__det_infer_goal_2_11_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_goal_2_11_0,47,48,23,24,15,53,3,4)
	MR_init_label8(check_hlds__det_analysis__det_infer_goal_2_11_0,5,8,7,10,12,13,17,18)
	MR_init_label8(check_hlds__det_analysis__det_infer_goal_2_11_0,20,21,26,27,29,39,35,36)
	MR_init_label4(check_hlds__det_analysis__det_infer_goal_2_11_0,31,32,44,45)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_goal_2'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_goal_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i47) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i23) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i15) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i53));
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr6, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr6, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_tempr1 = MR_tempr6;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_unify_13_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i48);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr4, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 3);
	MR_sv(4) = MR_ctfield(1, MR_tempr4, 4);
	MR_sv(5) = MR_ctfield(1, MR_tempr4, 5);
	MR_tempr1 = MR_tempr4;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(2);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_call_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i24);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_sv(1), 3);
	MR_r3 = MR_tempr1;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_generic_call_9_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i5) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i44) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i20) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i26) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i17) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_2_11_0_i29));
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 7);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_foreign_proc_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r8 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i7);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_par_conj_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r8;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_conj_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_disj_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i13);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr6, 1);
	MR_tempr1 = MR_tempr6;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 4);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_if_then_else_14_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_not_9_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i21);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr7, 1);
	MR_tempr1 = MR_tempr7;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_scope_12_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r8 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i31);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i35);
	}
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_1_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i39);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,39)
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
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__det_analysis__this_file_0_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i36);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("det_infer_goal_2: bi_implication", 32);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 6);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 3);
	MR_r1 = MR_ctfield(1, MR_tempr1, 4);
	MR_r2 = MR_ctfield(1, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_atomic_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i32);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 4) = MR_r1;
	MR_tfield(1, MR_tempr1, 5) = MR_r2;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr7, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr7, 2);
	MR_tempr1 = MR_tempr7;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr6;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_switch_13_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i45);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__update_instmap_3_0);
MR_decl_entry(parse_tree__prog_data__det_conjunction_detism_3_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module12)
	MR_init_entry1(check_hlds__det_analysis__det_infer_conj_11_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_conj_11_0,29,4,5,6,7,10,11,12)
	MR_init_label2(check_hlds__det_analysis__det_infer_conj_11_0,14,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_conj'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_conj_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_conj_11_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__det_analysis__det_infer_conj_11_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	}
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_conj_11_0,
		check_hlds__det_analysis__det_infer_conj_11_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_conj_11_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_conj_11_0_i7);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_conj_11_0_i7);
	}
	MR_r3 = MR_sv(3);
	MR_sv(2) = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_conj_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(2) = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_conj_11_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_conj_11_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		check_hlds__det_analysis__det_infer_conj_11_0_i14);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_conj_11_0_i15);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_report__det_diagnose_conj_7_0);
MR_decl_entry(parse_tree__error_util__sort_error_msgs_2_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module13)
	MR_init_entry1(check_hlds__det_analysis__det_infer_par_conj_11_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_par_conj_11_0,2,4,3,8,9,11,17,10)
	MR_init_label4(check_hlds__det_analysis__det_infer_par_conj_11_0,23,24,29,31)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_par_conj'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_par_conj_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,
		check_hlds__det_analysis__det_infer_par_conj_11_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_par_conj_11_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_par_conj_11_0_i3);
	}
	if (MR_INT_EQ(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_par_conj_11_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_par_conj_11_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_par_conj_11_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_par_conj_11_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,0,37);
	MR_r5 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_par_conj_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_par_conj_11_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,0,38);
	MR_r5 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_par_conj_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_analysis.m", 14);
	MR_r2 = (MR_Word) MR_string_const("strange determinism error for parallel conjunction", 50);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__det_analysis__det_infer_par_conj_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_conj_7_0,
		check_hlds__det_analysis__det_infer_par_conj_11_0_i23);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__error_util__sort_error_msgs_2_0,
		check_hlds__det_analysis__det_infer_par_conj_11_0_i24);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_par_conj_11_0_i29);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_par_conj_11_0_i31);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__det_conjunction_maxsoln_3_0);
MR_decl_entry(parse_tree__prog_data__det_conjunction_canfail_3_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module14)
	MR_init_entry1(check_hlds__det_analysis__det_infer_par_conj_goals_11_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,20,4,5,6,8,9,10,11)
	MR_init_label1(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,12)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_par_conj_goals'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_par_conj_goals_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r6 = MR_r7;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(9);
	}
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_canfail_3_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module15)
	MR_init_entry1(check_hlds__det_analysis__det_infer_disj_11_0);
	MR_init_label3(check_hlds__det_analysis__det_infer_disj_11_0,2,5,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_disj'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_disj_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r7 = (MR_Integer) 0;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_disj_goals_13_0,
		check_hlds__det_analysis__det_infer_disj_11_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_disj_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_disj_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_disj_11_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_disj_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
MR_def_label(check_hlds__det_analysis__det_infer_disj_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__det_disjunction_canfail_3_0);
MR_decl_entry(parse_tree__prog_data__det_disjunction_maxsoln_3_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module16)
	MR_init_entry1(check_hlds__det_analysis__det_infer_disj_goals_13_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_disj_goals_13_0,4,3,5,6,12,7,8,15)
	MR_init_label4(check_hlds__det_analysis__det_infer_disj_goals_13_0,16,17,21,23)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_disj_goals'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_disj_goals_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_disj_goals_13_0_i3);
	}
	MR_sv(7) = MR_r8;
	MR_sv(1) = MR_r9;
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r6 = MR_r9;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(9), 1);
	if (MR_INT_EQ(MR_sv(6),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_disj_goals_13_0_i8);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_disj_goals_13_0_i8);
	}
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_disj_goals_13_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_sv(5) = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__det_disjunction_canfail_3_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i15);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_sv(5) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_disjunction_canfail_3_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i15);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_disjunction_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i16);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_disj_goals_13_0_i17);
	}
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_disj_goals_13_0_i17);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r6 = MR_sv(5);
	MR_r9 = MR_sv(13);
	MR_r7 = (MR_Integer) 2;
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_disj_goals_13_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i21);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r6 = MR_sv(5);
	MR_r9 = MR_sv(13);
	MR_r7 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_disj_goals_13_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i21);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i23);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module17)
	MR_init_entry1(check_hlds__det_analysis__det_infer_switch_13_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_switch_13_0,2,3,4,7,8,9,10,11)
	MR_init_label2(check_hlds__det_analysis__det_infer_switch_13_0,14,13)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_switch'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_switch_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_tempr3 = MR_r7;
	MR_sv(6) = MR_tempr3;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_r8;
	MR_r7 = (MR_Integer) 1;
	MR_r8 = (MR_Integer) 0;
	MR_tempr1 = MR_r9;
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_switch_cases_14_0,
		check_hlds__det_analysis__det_infer_switch_13_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_switch_13_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_switch_13_0_i4);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_switch_13_0_i4);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r7 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_sv(6) = MR_r2;
	MR_r4 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_r9 = MR_sv(8);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_switch_13_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r7 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_sv(6) = MR_r2;
	MR_r4 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_r9 = MR_sv(8);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r7;
	MR_sv(7) = MR_r5;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,
		check_hlds__det_analysis__det_infer_switch_13_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_canfail_3_0,
		check_hlds__det_analysis__det_infer_switch_13_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_switch_13_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_switch_13_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_switch_13_0_i13);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_switch_13_0_i14);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(7);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_get_vartypes_2_0);
MR_decl_entry(hlds__instmap__bind_var_to_functors_8_0);
MR_decl_entry(check_hlds__det_util__det_info_set_module_info_3_0);
MR_decl_entry(parse_tree__prog_data__det_switch_canfail_3_0);
MR_decl_entry(parse_tree__prog_data__det_switch_maxsoln_3_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module18)
	MR_init_entry1(check_hlds__det_analysis__det_infer_switch_cases_14_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_switch_cases_14_0,4,3,5,6,8,9,10,11)
	MR_init_label5(check_hlds__det_analysis__det_infer_switch_cases_14_0,13,14,15,16,18)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_switch_cases'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_switch_cases_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_switch_cases_14_0_i3);
	}
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r10;
	MR_sv(9) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(10) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_vartypes_2_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__instmap__bind_var_to_functors_8_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_set_module_info_3_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i13);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_canfail_3_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i14);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i15);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(12);
	}
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_switch_cases_14_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i16);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__pre_lambda_update_5_0);
MR_decl_entry(check_hlds__det_report__det_check_lambda_7_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module19)
	MR_init_entry1(check_hlds__det_analysis__det_infer_unify_13_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_unify_13_0,6,5,7,8,9,10,11,3)
	MR_init_label8(check_hlds__det_analysis__det_infer_unify_13_0,2,14,15,17,18,21,36,37)
	MR_init_label8(check_hlds__det_analysis__det_infer_unify_13_0,39,23,24,50,26,28,29,20)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_unify'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_unify_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tag(MR_tempr2);
	if (((MR_tempr1 == MR_mktag((MR_Integer) 0)) || (MR_tempr1 == MR_mktag((MR_Integer) 1)))) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i3);
	}
	MR_sv(15) = MR_ctfield(2, MR_tempr2, 8);
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 7);
	MR_sv(13) = MR_ctfield(2, MR_tempr2, 6);
	MR_sv(12) = MR_ctfield(2, MR_tempr2, 5);
	MR_sv(11) = MR_ctfield(2, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(9) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(14) = MR_tempr1;
	MR_sv(17) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i5);
	}
	MR_sv(16) = (MR_Integer) 1;
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = (MR_Integer) 0;
	MR_r1 = MR_sv(17);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__instmap__pre_lambda_update_5_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(16);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(17);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(4);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_check_lambda_7_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 9);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(11);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(12);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(13);
	MR_tfield(2, MR_tempr1, 7) = MR_sv(14);
	MR_tfield(2, MR_tempr1, 8) = MR_sv(4);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(4) = MR_tempr1;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i2);
	}
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(9) = MR_r9;
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_unify_canfail_2_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i14);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i15);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r8, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r8, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(5);
	MR_r9 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i17);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_unify_13_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i20);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i21);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_13_0_i36) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_13_0_i39) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_13_0_i23) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_unify_13_0_i50));
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__det_analysis__this_file_0_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i37);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("det_infer_unify: can_fail construct", 35);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr5 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_tempr5, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(1, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr4 = MR_tempr3;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr4;
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__det_analysis__this_file_0_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i24);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("det_infer_unify: can_fail assign", 32);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tempr5 = MR_sv(2);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr5, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr5, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr4 = MR_tempr3;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr4;
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(4);
	MR_tempr1 = MR_tag(MR_tempr6);
	MR_r2 = MR_tempr1;
	if (((MR_tempr1 == MR_mktag((MR_Integer) 1)) || (MR_tempr1 == MR_mktag((MR_Integer) 2)))) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i28);
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 1) = MR_ctfield(0, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_r1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr5 = MR_tempr4;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr5;
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__det_analysis__this_file_0_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i29);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("det_infer_unify: complicated_unify but no var", 45);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__det_negation_det_2_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module20)
	MR_init_entry1(check_hlds__det_analysis__det_infer_if_then_else_14_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_if_then_else_14_0,2,3,4,5,8,9,10,11)
	MR_init_label8(check_hlds__det_analysis__det_infer_if_then_else_14_0,12,13,18,20,19,17,23,24)
	MR_init_label4(check_hlds__det_analysis__det_infer_if_then_else_14_0,25,15,27,28)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_if_then_else'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_if_then_else_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i5);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i5);
	}
	MR_r3 = MR_sv(6);
	MR_sv(11) = MR_r2;
	MR_r2 = MR_sv(9);
	MR_sv(10) = MR_r1;
	MR_sv(12) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_sv(11) = MR_r2;
	MR_r2 = MR_sv(9);
	MR_sv(10) = MR_r1;
	MR_sv(12) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(9) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(12) = MR_tempr1;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i13);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i15);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i17);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_data__det_negation_det_2_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i20);
	}
	MR_r2 = MR_sv(6);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_analysis.m", 14);
	MR_r2 = (MR_Word) MR_string_const("cannot find determinism of negated condition", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i19);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i23);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i24);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_canfail_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i25);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(7);
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i28);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(13);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module21)
	MR_init_entry1(check_hlds__det_analysis__det_infer_not_9_0);
	MR_init_label7(check_hlds__det_analysis__det_infer_not_9_0,2,3,5,4,7,10,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_not'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_not_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_not_9_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_not_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__det_negation_det_2_0,
		check_hlds__det_analysis__det_infer_not_9_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_not_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_not_9_0_i5);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_not_9_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_not_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_analysis.m", 14);
	MR_r2 = (MR_Word) MR_string_const("inappropriate determinism inside a negation", 43);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__det_analysis__det_infer_not_9_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_not_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_not_9_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_not_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_not_9_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_not_9_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_not_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__det_analysis__det_infer_not_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module22)
	MR_init_entry1(check_hlds__det_analysis__det_infer_atomic_11_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_atomic_11_0,2,4,5,6,7,8,9,10)
	MR_init_label1(check_hlds__det_analysis__det_infer_atomic_11_0,13)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_atomic'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_atomic_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(5) = MR_tempr3;
	MR_tempr4 = MR_r6;
	MR_sv(6) = MR_tempr4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_atomic_goal_9_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_atomic_11_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_atomic_goal_9_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_canfail_3_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_orelse_goals_12_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, (MR_Integer) MR_r3);
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_r4;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_atomic_11_0_i13);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(fn__hlds__hlds_out__determinism_to_string_1_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module23)
	MR_init_entry1(check_hlds__det_analysis__det_infer_atomic_goal_9_0);
	MR_init_label6(check_hlds__det_analysis__det_infer_atomic_goal_9_0,2,6,4,7,8,22)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_atomic_goal'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_atomic_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_atomic_goal_9_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_goal_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r2 == (MR_Integer) 4) || ((MR_Integer) MR_r2 == (MR_Integer) 0)) || ((MR_Integer) MR_r2 == (MR_Integer) 6)))) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_atomic_goal_9_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1449__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("det_analysis.m", 14);
	MR_r3 = (MR_Word) MR_string_const("det_infer_atomic_goal: GoalFailingContexts != []", 48);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__det_analysis__det_infer_atomic_goal_9_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_goal_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_goal_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_atomic_goal_9_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_goal_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_out__determinism_to_string_1_0,
		check_hlds__det_analysis__det_infer_atomic_goal_9_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_goal_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,41);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,36);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_atomic_goal_9_0_i22);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_goal_9_0,22)
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


MR_BEGIN_MODULE(check_hlds__det_analysis_module24)
	MR_init_entry1(check_hlds__det_analysis__det_infer_orelse_goals_12_0);
	MR_init_label6(check_hlds__det_analysis__det_infer_orelse_goals_12_0,17,4,5,6,7,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_orelse_goals'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_orelse_goals_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_orelse_goals_12_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_orelse_goals_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r6 = MR_r8;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_atomic_goal_9_0,
		check_hlds__det_analysis__det_infer_orelse_goals_12_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_orelse_goals_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_orelse_goals_12_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_orelse_goals_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_canfail_3_0,
		check_hlds__det_analysis__det_infer_orelse_goals_12_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_orelse_goals_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_orelse_goals_12_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_orelse_goals_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(9);
	}
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_orelse_goals_12_0,
		check_hlds__det_analysis__det_infer_orelse_goals_12_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_orelse_goals_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(fn__check_hlds__det_report__lookup_var_name_in_varset_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__parse_tree__error_util__list_to_pieces_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_changed_vars_2_0);
MR_decl_entry(hlds__instmap__var_is_ground_in_instmap_3_0);
MR_decl_entry(set__divide_4_0);
MR_decl_entry(hlds__instmap__var_is_any_in_instmap_3_0);
MR_decl_entry(fn__set__filter_2_0);
MR_decl_entry(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__check_hlds__det_report__promise_solutions_kind_str_1_0);
MR_decl_entry(set__member_2_1);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(check_hlds__det_util__det_info_get_pess_extra_vars_2_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module25)
	MR_init_entry1(check_hlds__det_analysis__det_infer_scope_12_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_scope_12_0,9,10,11,12,16,43,45,46)
	MR_init_label8(check_hlds__det_analysis__det_infer_scope_12_0,47,48,14,53,67,68,69,72)
	MR_init_label8(check_hlds__det_analysis__det_infer_scope_12_0,70,75,76,80,78,101,77,103)
	MR_init_label8(check_hlds__det_analysis__det_infer_scope_12_0,106,107,121,51,13,123,124,125)
	MR_init_label8(check_hlds__det_analysis__det_infer_scope_12_0,128,129,131,132,133,134,135,136)
	MR_init_label8(check_hlds__det_analysis__det_infer_scope_12_0,139,137,142,143,144,148,146,149)
	MR_init_label8(check_hlds__det_analysis__det_infer_scope_12_0,145,155,156,153,158,152,176,179)
	MR_init_label8(check_hlds__det_analysis__det_infer_scope_12_0,180,186,187,188,189,190,196,194)
	MR_init_label8(check_hlds__det_analysis__det_infer_scope_12_0,192,200,201,202,206,204,223,203)
	MR_init_label8(check_hlds__det_analysis__det_infer_scope_12_0,225,228,229,235,264,239,244,245)
	MR_init_label4(check_hlds__det_analysis__det_infer_scope_12_0,259,5,7,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_scope'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_scope_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_scope_12_0_i7) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_scope_12_0_i9) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_scope_12_0_i7) MR_AND
		MR_LABEL_AP(check_hlds__det_analysis__det_infer_scope_12_0_i264));
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r8;
	MR_sv(12) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_get_proc_info_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(11), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(11), 0) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(6) = MR_sv(4);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(15) = MR_sv(12);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i13);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr6 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,48);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr3 = MR_ctfield(1, MR_sv(6), 0);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,50);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr5;
	MR_sv(6) = MR_sv(4);
	MR_sv(4) = MR_tempr6;
	MR_sv(11) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr3 = MR_sv(12);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i43);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i45);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i46);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i47);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i48);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_sv(11), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(11), 0) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i13);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i51);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i53);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,54);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(4) = MR_tempr4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i121);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i67);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i68);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i69);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i72);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i70);
	}
	MR_r1 = MR_sv(2);
	MR_sv(6) = (MR_Integer) 1;
	MR_sv(11) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(15) = MR_sv(12);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i13);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(11) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__det_report__lookup_var_name_in_varset_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i75);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i76);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i78);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i80);
	}
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,0,61);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i103);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,0,66);
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i103);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__det_analysis__this_file_0_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i101);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("det_report_msg: arbitrary_promise_overlap empty", 47);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i77);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i103);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,67);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i106);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i107);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,69);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr2;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i121);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(6) = (MR_Integer) 1;
	MR_sv(11) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i13);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(11) = MR_sv(6);
	MR_sv(6) = (MR_Integer) 1;
	MR_sv(15) = MR_sv(12);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i123);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i124);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i125);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__var_is_ground_in_instmap_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_sv(12);
	MR_sv(12) = MR_tempr3;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(17);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__divide_4_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i128);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i129);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__var_is_any_in_instmap_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__filter_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i131);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i132);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i133);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i134);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i135);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i136);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i139);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i137);
	}
	MR_r3 = MR_sv(7);
	MR_sv(12) = MR_sv(15);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i187);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(13) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__det_report__lookup_var_name_in_varset_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i142);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i143);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__det_report__promise_solutions_kind_str_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i144);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(13),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i146);
	}
	MR_r2 = MR_ctfield(1, MR_sv(13), 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i148);
	}
	MR_r2 = MR_sv(12);
	MR_sv(14) = MR_r1;
	MR_sv(12) = (MR_Word) MR_string_const("a variable that is not listed:", 30);
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i145);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(14) = MR_r1;
	MR_sv(12) = (MR_Word) MR_string_const("some variables that are not listed:", 35);
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i145);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__det_analysis__this_file_0_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i149);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("det_infer_scope: promise_solutions_missing_vars empty", 53);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i145);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(19) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(20));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__det_analysis__det_infer_scope_12_0_i153);
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(set__member_2_1,
		check_hlds__det_analysis__det_infer_scope_12_0_i155);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i156);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(20));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(18);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(19);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i158);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(18);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(19);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i152);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,53);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,52);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i176);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,54);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,52);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i176);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,67);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i179);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i180);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i186);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i188);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i189);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pess_extra_vars_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i190);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i196);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i194);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_10_0);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i192);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_10_0);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__det_report__lookup_var_name_in_varset_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i200);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i201);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__det_report__promise_solutions_kind_str_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i202);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i204);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i206);
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,71);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,52);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i225);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,73);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,52);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i225);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__det_analysis__this_file_0_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i223);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("det_infer_scope: promise_solutions_extra_vars empty", 51);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i203);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i225);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,67);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i228);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i229);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i235);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_10_0);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i7);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i7);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i5);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i239);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,4)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i2);
	}
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i2);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i244);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_out__determinism_to_string_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i245);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,41);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,58);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i259);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r8;
	MR_decr_sp_and_return(21);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_10_0);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module26)
	MR_init_entry1(check_hlds__det_analysis__det_get_soln_context_2_0);
	MR_init_label2(check_hlds__det_analysis__det_get_soln_context_2_0,3,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_get_soln_context'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_analysis__det_get_soln_context_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_get_soln_context_2_0_i3);
MR_def_label(check_hlds__det_analysis__det_get_soln_context_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_get_soln_context_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__det_analysis__det_get_soln_context_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module27)
	MR_init_entry1(check_hlds__det_analysis__get_exported_proc_context_4_0);
	MR_init_label2(check_hlds__det_analysis__get_exported_proc_context_4_0,3,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_exported_proc_context'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__get_exported_proc_context_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__get_exported_proc_context_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_r4 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if ((MR_r2 != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__get_exported_proc_context_4_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	if ((MR_r3 != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__get_exported_proc_context_4_0_i3);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__det_analysis__get_exported_proc_context_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_localtailcall(check_hlds__det_analysis__get_exported_proc_context_4_0);
MR_def_label(check_hlds__det_analysis__get_exported_proc_context_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(check_hlds__det_util__det_info_init_7_0);
MR_decl_entry(check_hlds__det_util__det_info_get_error_specs_2_0);
MR_decl_entry(check_hlds__det_util__det_info_get_has_format_call_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_eval_method_2_0);
MR_decl_entry(fn__hlds__hlds_pred__eval_method_change_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_has_io_state_pair_4_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_pragma_exported_procs_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__add_marker_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module28)
	MR_init_entry1(check_hlds__det_analysis__det_infer_proc_8_0);
	MR_init_label8(check_hlds__det_analysis__det_infer_proc_8_0,2,3,4,5,6,7,8,10)
	MR_init_label8(check_hlds__det_analysis__det_infer_proc_8_0,11,9,14,13,18,19,20,21)
	MR_init_label8(check_hlds__det_analysis__det_infer_proc_8_0,22,23,24,25,26,27,28,29)
	MR_init_label8(check_hlds__det_analysis__det_infer_proc_8_0,30,31,32,33,35,38,39,42)
	MR_init_label8(check_hlds__det_analysis__det_infer_proc_8_0,44,54,55,34,68,69,75,76)
	MR_init_label8(check_hlds__det_analysis__det_infer_proc_8_0,79,80,78,73,81,84,89,90)
	MR_init_label8(check_hlds__det_analysis__det_infer_proc_8_0,82,102,71,105,106,107,108,109)
	MR_init_label6(check_hlds__det_analysis__det_infer_proc_8_0,126,111,112,113,115,116)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'det_infer_proc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_analysis__det_infer_proc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(24);
	MR_sv(24) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(12) = MR_tempr1;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(17) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(18) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_get_soln_context_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i10);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_get_soln_context_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i14);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i13);
	}
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 0;
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i19);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i20);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i21);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_init_7_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i22);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i23);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i24);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_error_specs_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i25);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_has_format_call_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i26);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i28);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_canfail_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i29);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i30);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_proc_8_0_i31);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i32);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__eval_method_change_determinism_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i33);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_has_io_state_pair_4_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i35);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i34);
	}
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i38);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i39);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(9), 0);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i39);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i34);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i42);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i44);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(1,0,26);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,77);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i54);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i55);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,80);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr5, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_sv(14);
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i68);
	}
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_sv(12) = MR_sv(14);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_pragma_exported_procs_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i69);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(22) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(23));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__det_analysis__det_infer_proc_8_0_i73);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(14) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, pragma_exported_proc);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__det_analysis__det_infer_proc_8_0_i75);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2,
		check_hlds__det_analysis__det_infer_proc_8_0_i76);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i79);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i78);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i80);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i78);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(23));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(21);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(22);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i81);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(21);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(22);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i71);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(check_hlds__det_analysis__get_exported_proc_context_4_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i84);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i82);
	}
	MR_sv(9) = MR_r2;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(3,1,39);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(3,1,63);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_out__determinism_to_string_1_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i89);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i90);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_r1 = MR_sv(10);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i106);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__check_hlds__det_analysis__this_file_0_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i102);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Cannot find proc in table of pragma foreign_exported procs", 58);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i105);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r1 = MR_sv(10);
	MR_sv(8) = MR_sv(12);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i106);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i107);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i108);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i109);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i111);
	}
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i115);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i112);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 22;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i113);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i126);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i116);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(24);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_det_3_0);
MR_decl_entry(hlds__hlds_out__write_pred_proc_id_pair_5_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module29)
	MR_init_entry1(check_hlds__det_analysis__global_inference_single_pass_8_0);
	MR_init_label8(check_hlds__det_analysis__global_inference_single_pass_8_0,27,3,4,5,6,9,10,11)
	MR_init_label5(check_hlds__det_analysis__global_inference_single_pass_8_0,12,13,14,15,29)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'global_inference_single_pass'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__global_inference_single_pass_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__global_inference_single_pass_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_proc_8_0,
		check_hlds__det_analysis__global_inference_single_pass_8_0_i4);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__global_inference_single_pass_8_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r8 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r6 = (MR_Word) MR_string_const("old", 3);
	MR_r3 = MR_r7;
	MR_r5 = MR_r8;
	MR_GOTO_LAB(check_hlds__det_analysis__global_inference_single_pass_8_0_i6);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(2) = MR_r3;
	MR_r6 = (MR_Word) MR_string_const("new", 3);
	MR_r3 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	}
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__global_inference_single_pass_8_0_i29);
	}
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r1 = MR_r6;
	MR_r2 = (MR_Word) MR_string_const(" detism ", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_analysis__global_inference_single_pass_8_0_i9);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Inferred ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_analysis__global_inference_single_pass_8_0_i10);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__det_analysis__global_inference_single_pass_8_0_i11);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_det_3_0,
		check_hlds__det_analysis__global_inference_single_pass_8_0_i12);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" for ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__det_analysis__global_inference_single_pass_8_0_i13);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_proc_id_pair_5_0,
		check_hlds__det_analysis__global_inference_single_pass_8_0_i14);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__det_analysis__global_inference_single_pass_8_0_i15);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__det_analysis__global_inference_single_pass_8_0_i27);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__file_util__maybe_write_string_4_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module30)
	MR_init_entry1(check_hlds__det_analysis__global_inference_pass_5_0);
	MR_init_label4(check_hlds__det_analysis__global_inference_pass_5_0,11,2,3,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'global_inference_pass'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__global_inference_pass_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_analysis__global_inference_pass_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__global_inference_single_pass_8_0,
		check_hlds__det_analysis__global_inference_pass_5_0_i2);
MR_def_label(check_hlds__det_analysis__global_inference_pass_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% Inference pass complete\n", 26);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		check_hlds__det_analysis__global_inference_pass_5_0_i3);
MR_def_label(check_hlds__det_analysis__global_inference_pass_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__global_inference_pass_5_0_i5);
	}
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__det_analysis__global_inference_pass_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__det_analysis__global_inference_pass_5_0_i11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module31)
	MR_init_entry1(check_hlds__det_analysis__fold_pred_modes_4_0);
	MR_init_label2(check_hlds__det_analysis__fold_pred_modes_4_0,6,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'fold_pred_modes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__fold_pred_modes_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__fold_pred_modes_4_0_i2);
	}
MR_def_label(check_hlds__det_analysis__fold_pred_modes_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	}
	break; } /* end while */
MR_def_label(check_hlds__det_analysis__fold_pred_modes_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module32)
	MR_init_entry1(check_hlds__det_analysis__get_all_pred_procs_2_4_0);
	MR_init_label5(check_hlds__det_analysis__get_all_pred_procs_2_4_0,12,3,4,5,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_all_pred_procs_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__get_all_pred_procs_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_analysis__get_all_pred_procs_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__get_all_pred_procs_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__det_analysis__get_all_pred_procs_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_analysis__get_all_pred_procs_2_4_0_i4);
MR_def_label(check_hlds__det_analysis__get_all_pred_procs_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__det_analysis__get_all_pred_procs_2_4_0_i5);
MR_def_label(check_hlds__det_analysis__get_all_pred_procs_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__fold_pred_modes_4_0,
		check_hlds__det_analysis__get_all_pred_procs_2_4_0_i6);
MR_def_label(check_hlds__det_analysis__get_all_pred_procs_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__det_analysis__get_all_pred_procs_2_4_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module33)
	MR_init_entry1(check_hlds__det_analysis__segregate_procs_2_8_0);
	MR_init_label8(check_hlds__det_analysis__segregate_procs_2_8_0,55,3,4,5,11,9,14,16)
	MR_init_label8(check_hlds__det_analysis__segregate_procs_2_8_0,13,17,18,8,6,21,22,23)
	MR_init_label1(check_hlds__det_analysis__segregate_procs_2_8_0,25)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'segregate_procs_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__segregate_procs_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i4);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i5);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i11);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i8);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i14);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i13);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i16);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(8) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i8);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i17);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i18);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(6);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i55);
	}
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i21);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i22);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i23);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i55);
	}
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i55);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(check_hlds__det_report__global_checking_pass_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

MR_BEGIN_MODULE(check_hlds__det_analysis_module34)
	MR_init_entry1(check_hlds__det_analysis__determinism_pass_3_0);
	MR_init_label8(check_hlds__det_analysis__determinism_pass_3_0,2,3,4,5,7,8,9,10)
	MR_init_label8(check_hlds__det_analysis__determinism_pass_3_0,12,13,14,15,11,16,17,18)
	MR_init_label3(check_hlds__det_analysis__determinism_pass_3_0,19,20,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'determinism_pass'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_analysis__determinism_pass_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		check_hlds__det_analysis__determinism_pass_3_0_i2);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__det_analysis__determinism_pass_3_0_i3);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__det_analysis__get_all_pred_procs_2_4_0,
		check_hlds__det_analysis__determinism_pass_3_0_i4);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__segregate_procs_2_8_0,
		check_hlds__det_analysis__determinism_pass_3_0_i5);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__det_analysis__determinism_pass_3_0_i7);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__det_analysis__determinism_pass_3_0_i8);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 39;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__det_analysis__determinism_pass_3_0_i9);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 55;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__det_analysis__determinism_pass_3_0_i10);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__determinism_pass_3_0_i12);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(6) = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__det_analysis__determinism_pass_3_0_i11);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Doing determinism inference...\n", 33);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		check_hlds__det_analysis__determinism_pass_3_0_i13);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__det_analysis__global_inference_pass_5_0,
		check_hlds__det_analysis__determinism_pass_3_0_i14);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		check_hlds__det_analysis__determinism_pass_3_0_i15);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Doing determinism checking...\n", 32);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		check_hlds__det_analysis__determinism_pass_3_0_i16);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__det_analysis__global_inference_single_pass_8_0,
		check_hlds__det_analysis__determinism_pass_3_0_i17);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__determinism_pass_3_0_i18);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_report__global_checking_pass_5_0,
		check_hlds__det_analysis__determinism_pass_3_0_i19);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__determinism_pass_3_0_i20);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		check_hlds__det_analysis__determinism_pass_3_0_i21);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module35)
	MR_init_entry1(check_hlds__det_analysis__determinism_check_proc_5_0);
	MR_init_label4(check_hlds__det_analysis__determinism_check_proc_5_0,2,3,6,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'determinism_check_proc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_analysis__determinism_check_proc_5_0);
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
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__det_analysis__determinism_check_proc_5_0_i2);
MR_def_label(check_hlds__det_analysis__determinism_check_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 55;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__det_analysis__determinism_check_proc_5_0_i3);
MR_def_label(check_hlds__det_analysis__determinism_check_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__global_inference_single_pass_8_0,
		check_hlds__det_analysis__determinism_check_proc_5_0_i6);
MR_def_label(check_hlds__det_analysis__determinism_check_proc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__determinism_check_proc_5_0_i7);
MR_def_label(check_hlds__det_analysis__determinism_check_proc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__det_report__global_checking_pass_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module36)
	MR_init_entry1(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0);
	MR_init_label8(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0,2,3,4,5,7,8,9,10)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'set_non_inferred_proc_determinism'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0_i2);
MR_def_label(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0_i3);
MR_def_label(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0_i4);
MR_def_label(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0_i5);
MR_def_label(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0,
		check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0_i8);
MR_def_label(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0_i9);
MR_def_label(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0_i10);
MR_def_label(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_info_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module37)
	MR_init_entry1(__Unify___check_hlds__det_analysis__pess_info_0_0);
	MR_init_label3(__Unify___check_hlds__det_analysis__pess_info_0_0,5,9,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_analysis__pess_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_analysis__pess_info_0_0_i9);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__det_analysis__pess_info_0_0_i5);
MR_def_label(__Unify___check_hlds__det_analysis__pess_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_analysis__pess_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___check_hlds__det_analysis__pess_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__det_analysis__pess_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module38)
	MR_init_entry1(__Compare___check_hlds__det_analysis__pess_info_0_0);
	MR_init_label4(__Compare___check_hlds__det_analysis__pess_info_0_0,3,2,6,22)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_analysis__pess_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_analysis__pess_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__det_analysis__pess_info_0_0_i2);
MR_def_label(__Compare___check_hlds__det_analysis__pess_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__det_analysis__pess_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__det_analysis__pess_info_0_0_i6);
MR_def_label(__Compare___check_hlds__det_analysis__pess_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_analysis__pess_info_0_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___check_hlds__det_analysis__pess_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module39)
	MR_init_entry1(__Unify___check_hlds__det_analysis__soln_context_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_analysis__soln_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module40)
	MR_init_entry1(__Compare___check_hlds__det_analysis__soln_context_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_analysis__soln_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module41)
	MR_init_entry1(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2);
	MR_init_label1(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 0);
	MR_tempr6 = MR_r1;
	MR_tfield(0, MR_tempr6, 0) = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_tempr6, 3) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_tempr6, 4) = MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
	MR_tempr4 = MR_ctfield(0, MR_tempr6, 2);
	MR_r1 = (MR_tempr1 == MR_tempr4);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module42)
	MR_init_entry1(check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1449__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__det_infer_atomic_goal__1449__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1449__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
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

static void mercury__check_hlds__det_analysis_maybe_bunch_0(void)
{
	check_hlds__det_analysis_module0();
	check_hlds__det_analysis_module1();
	check_hlds__det_analysis_module2();
	check_hlds__det_analysis_module3();
	check_hlds__det_analysis_module4();
	check_hlds__det_analysis_module5();
	check_hlds__det_analysis_module6();
	check_hlds__det_analysis_module7();
	check_hlds__det_analysis_module8();
	check_hlds__det_analysis_module9();
	check_hlds__det_analysis_module10();
	check_hlds__det_analysis_module11();
	check_hlds__det_analysis_module12();
	check_hlds__det_analysis_module13();
	check_hlds__det_analysis_module14();
	check_hlds__det_analysis_module15();
	check_hlds__det_analysis_module16();
	check_hlds__det_analysis_module17();
	check_hlds__det_analysis_module18();
	check_hlds__det_analysis_module19();
	check_hlds__det_analysis_module20();
	check_hlds__det_analysis_module21();
	check_hlds__det_analysis_module22();
	check_hlds__det_analysis_module23();
	check_hlds__det_analysis_module24();
	check_hlds__det_analysis_module25();
	check_hlds__det_analysis_module26();
	check_hlds__det_analysis_module27();
	check_hlds__det_analysis_module28();
	check_hlds__det_analysis_module29();
	check_hlds__det_analysis_module30();
	check_hlds__det_analysis_module31();
	check_hlds__det_analysis_module32();
	check_hlds__det_analysis_module33();
	check_hlds__det_analysis_module34();
	check_hlds__det_analysis_module35();
	check_hlds__det_analysis_module36();
	check_hlds__det_analysis_module37();
	check_hlds__det_analysis_module38();
	check_hlds__det_analysis_module39();
}

static void mercury__check_hlds__det_analysis_maybe_bunch_1(void)
{
	check_hlds__det_analysis_module40();
	check_hlds__det_analysis_module41();
	check_hlds__det_analysis_module42();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__det_analysis__init(void);
void mercury__check_hlds__det_analysis__init_type_tables(void);
void mercury__check_hlds__det_analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__det_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__det_analysis__init_complexity_procs(void);
#endif

void mercury__check_hlds__det_analysis__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__det_analysis_maybe_bunch_0();
	mercury__check_hlds__det_analysis_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_analysis__type_ctor_info_pess_info_0,
		check_hlds__det_analysis__pess_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_analysis__type_ctor_info_soln_context_0,
		check_hlds__det_analysis__soln_context_0_0);
	mercury__check_hlds__det_analysis__init_debugger();
}

void mercury__check_hlds__det_analysis__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_analysis__type_ctor_info_pess_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_analysis__type_ctor_info_soln_context_0);
	}
}


void mercury__check_hlds__det_analysis__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__det_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__det_analysis);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__det_analysis__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
