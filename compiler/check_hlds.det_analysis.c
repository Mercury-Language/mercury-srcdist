/*
** Automatically generated from `det_analysis.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__det_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "check_hlds.det_analysis.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "check_hlds.det_analysis.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "check_hlds.det_analysis.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "check_hlds.det_analysis.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.det_analysis.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.det_analysis.c"
#line 49 "check_hlds.det_analysis.c"
#include "check_hlds.det_analysis.mh"

#line 52 "check_hlds.det_analysis.c"
#line 53 "check_hlds.det_analysis.c"
#ifndef CHECK_HLDS__DET_ANALYSIS_DECL_GUARD
#define CHECK_HLDS__DET_ANALYSIS_DECL_GUARD

#line 57 "check_hlds.det_analysis.c"
#line 58 "check_hlds.det_analysis.c"

#endif
#line 61 "check_hlds.det_analysis.c"

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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__det_analysis__type_ctor_info_pess_info_0,
	mercury_data_check_hlds__det_analysis__type_ctor_info_soln_context_0;
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0, 2,3,4,7,9,19,20,26,6,27)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0, 29,32,34,45,51,28,52,56,57,58)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0, 62,69,70,71,76,78,53,79,80,83)
MR_decl_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0, 82)
MR_decl_label10(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0, 5,6,8,9,13,14,17,16,33,35)
MR_decl_label10(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0, 15,52,12,63,64,67,66,83,85,65)
MR_decl_label10(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0, 104,105,106,107,114,116,62,11,118,2)
MR_decl_label1(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0, 3)
MR_decl_label7(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0, 31,5,6,8,3,4,1)
MR_decl_label2(check_hlds__det_analysis__det_get_soln_context_2_0, 3,2)
MR_decl_label10(check_hlds__det_analysis__det_infer_atomic_11_0, 2,4,5,6,7,8,9,10,13,14)
MR_decl_label2(check_hlds__det_analysis__det_infer_atomic_11_0, 15,16)
MR_decl_label6(check_hlds__det_analysis__det_infer_atomic_goal_9_0, 2,6,4,7,8,22)
MR_decl_label10(check_hlds__det_analysis__det_infer_call_11_0, 2,3,4,5,8,10,7,11,12,17)
MR_decl_label10(check_hlds__det_analysis__det_infer_call_11_0, 18,19,20,21,22,24,16,25,26,27)
MR_decl_label10(check_hlds__det_analysis__det_infer_call_11_0, 28,32,39,40,41,46,48,49,13,51)
MR_decl_label2(check_hlds__det_analysis__det_infer_call_11_0, 54,53)
MR_decl_label10(check_hlds__det_analysis__det_infer_conj_11_0, 38,4,5,6,7,10,11,12,14,15)
MR_decl_label3(check_hlds__det_analysis__det_infer_disj_11_0, 2,5,3)
MR_decl_label10(check_hlds__det_analysis__det_infer_disj_goals_13_0, 4,3,5,6,12,7,8,15,16,17)
MR_decl_label2(check_hlds__det_analysis__det_infer_disj_goals_13_0, 21,23)
MR_decl_label10(check_hlds__det_analysis__det_infer_generic_call_9_0, 2,3,7,8,11,19,20,25,27,28)
MR_decl_label3(check_hlds__det_analysis__det_infer_generic_call_9_0, 4,29,31)
MR_decl_label7(check_hlds__det_analysis__det_infer_goal_10_0, 2,3,5,7,12,9,4)
MR_decl_label10(check_hlds__det_analysis__det_infer_goal_1_11_0, 2,8,9,7,6,5,3,13,14,15)
MR_decl_label10(check_hlds__det_analysis__det_infer_goal_1_11_0, 18,16,20,22,21,26,30,31,32,36)
MR_decl_label10(check_hlds__det_analysis__det_infer_goal_1_11_0, 37,80,33,34,47,48,49,45,41,53)
MR_decl_label2(check_hlds__det_analysis__det_infer_goal_1_11_0, 59,54)
MR_decl_label10(check_hlds__det_analysis__det_infer_goal_2_11_0, 4,3,6,5,9,8,12,11,15,18)
MR_decl_label10(check_hlds__det_analysis__det_infer_goal_2_11_0, 13,21,20,24,23,26,25,29,28,34)
MR_decl_label5(check_hlds__det_analysis__det_infer_goal_2_11_0, 33,38,37,146,42)
MR_decl_label10(check_hlds__det_analysis__det_infer_if_then_else_14_0, 2,3,4,5,8,9,10,11,12,13)
MR_decl_label10(check_hlds__det_analysis__det_infer_if_then_else_14_0, 18,20,19,17,23,24,25,15,27,28)
MR_decl_label7(check_hlds__det_analysis__det_infer_not_9_0, 2,3,5,4,7,10,9)
MR_decl_label6(check_hlds__det_analysis__det_infer_orelse_goals_12_0, 20,4,5,6,7,8)
MR_decl_label10(check_hlds__det_analysis__det_infer_par_conj_11_0, 2,4,3,8,9,11,17,10,23,24)
MR_decl_label2(check_hlds__det_analysis__det_infer_par_conj_11_0, 29,31)
MR_decl_label9(check_hlds__det_analysis__det_infer_par_conj_goals_11_0, 23,4,5,6,8,9,10,11,12)
MR_decl_label10(check_hlds__det_analysis__det_infer_proc_8_0, 2,3,4,5,6,7,8,10,11,9)
MR_decl_label10(check_hlds__det_analysis__det_infer_proc_8_0, 14,13,18,19,20,21,22,23,24,25)
MR_decl_label10(check_hlds__det_analysis__det_infer_proc_8_0, 26,27,28,29,30,31,32,33,34,36)
MR_decl_label10(check_hlds__det_analysis__det_infer_proc_8_0, 39,40,43,45,55,56,35,65,66,72)
MR_decl_label10(check_hlds__det_analysis__det_infer_proc_8_0, 73,76,77,75,70,78,81,86,87,79)
MR_decl_label10(check_hlds__det_analysis__det_infer_proc_8_0, 68,101,102,103,104,105,106,108,112,111)
MR_decl_label3(check_hlds__det_analysis__det_infer_proc_8_0, 113,114,115)
MR_decl_label10(check_hlds__det_analysis__det_infer_scope_12_0, 4,5,6,10,37,39,40,41,8,46)
MR_decl_label10(check_hlds__det_analysis__det_infer_scope_12_0, 59,60,61,64,62,68,69,73,71,70)
MR_decl_label10(check_hlds__det_analysis__det_infer_scope_12_0, 95,98,99,113,44,7,115,116,117,119)
MR_decl_label10(check_hlds__det_analysis__det_infer_scope_12_0, 120,122,123,124,125,126,127,130,128,134)
MR_decl_label10(check_hlds__det_analysis__det_infer_scope_12_0, 135,136,140,138,137,146,147,144,149,143)
MR_decl_label10(check_hlds__det_analysis__det_infer_scope_12_0, 167,170,171,177,178,179,180,181,187,185)
MR_decl_label10(check_hlds__det_analysis__det_infer_scope_12_0, 183,192,193,194,198,196,195,216,219,220)
MR_decl_label10(check_hlds__det_analysis__det_infer_scope_12_0, 226,3,231,229,234,237,238,235,240,241)
MR_decl_label4(check_hlds__det_analysis__det_infer_scope_12_0, 255,233,258,257)
MR_decl_label10(check_hlds__det_analysis__det_infer_switch_13_0, 2,3,4,7,8,9,10,11,14,13)
MR_decl_label10(check_hlds__det_analysis__det_infer_switch_cases_14_0, 4,3,5,6,8,9,10,11,13,14)
MR_decl_label3(check_hlds__det_analysis__det_infer_switch_cases_14_0, 15,16,18)
MR_decl_label10(check_hlds__det_analysis__det_infer_unify_13_0, 5,4,6,7,8,9,10,3,2,12)
MR_decl_label10(check_hlds__det_analysis__det_infer_unify_13_0, 13,15,16,19,23,27,21,32,36,40)
MR_decl_label1(check_hlds__det_analysis__det_infer_unify_13_0, 18)
MR_decl_label4(check_hlds__det_analysis__det_infer_unify_canfail_2_0, 3,4,5,6)
MR_decl_label4(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0, 3,4,9,5)
MR_decl_label1(check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0, 2)
MR_decl_label4(check_hlds__det_analysis__determinism_check_proc_5_0, 2,3,6,7)
MR_decl_label10(check_hlds__det_analysis__determinism_pass_3_0, 2,3,4,5,7,8,9,10,12,13)
MR_decl_label9(check_hlds__det_analysis__determinism_pass_3_0, 14,15,11,16,17,18,19,20,21)
MR_decl_label2(check_hlds__det_analysis__fold_pred_modes_4_0, 6,2)
MR_decl_label5(check_hlds__det_analysis__get_all_pred_procs_2_4_0, 12,3,4,5,6)
MR_decl_label2(check_hlds__det_analysis__get_exported_proc_context_4_0, 3,1)
MR_decl_label4(check_hlds__det_analysis__global_inference_pass_5_0, 14,2,3,5)
MR_decl_label10(check_hlds__det_analysis__global_inference_single_pass_8_0, 27,3,4,5,6,9,10,11,12,13)
MR_decl_label3(check_hlds__det_analysis__global_inference_single_pass_8_0, 14,15,29)
MR_decl_label10(check_hlds__det_analysis__segregate_procs_2_8_0, 55,3,4,5,11,9,14,16,13,17)
MR_decl_label7(check_hlds__det_analysis__segregate_procs_2_8_0, 18,8,6,21,22,23,25)
MR_decl_label8(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0, 2,3,4,5,7,8,9,10)
MR_decl_label3(__Unify___check_hlds__det_analysis__pess_info_0_0, 5,9,1)
MR_decl_label1(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2, 1)
MR_decl_label4(__Compare___check_hlds__det_analysis__pess_info_0_0, 3,2,6,28)
MR_decl_static(check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0)
MR_decl_static(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0)
MR_decl_static(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0)
MR_decl_static(check_hlds__det_analysis__det_infer_call_11_0)
MR_decl_static(check_hlds__det_analysis__det_infer_generic_call_9_0)
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
MR_decl_static(check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1496__1_2_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_failing_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[83] =
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
MR_TAG_COMMON(3,1,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,7),
MR_TAG_COMMON(1,0,4)
}
},
{
{
MR_TAG_COMMON(3,1,8),
MR_TAG_COMMON(1,0,5)
}
},
{
{
MR_TAG_COMMON(3,1,9),
MR_TAG_COMMON(1,0,6)
}
},
{
{
MR_TAG_COMMON(3,1,10),
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
MR_TAG_COMMON(3,1,12),
MR_TAG_COMMON(1,0,9)
}
},
{
{
MR_TAG_COMMON(3,1,13),
MR_TAG_COMMON(1,0,10)
}
},
{
{
MR_TAG_COMMON(3,1,14),
MR_TAG_COMMON(1,0,11)
}
},
{
{
MR_TAG_COMMON(3,1,15),
MR_TAG_COMMON(1,0,12)
}
},
{
{
MR_TAG_COMMON(3,1,16),
MR_TAG_COMMON(1,0,13)
}
},
{
{
MR_TAG_COMMON(3,1,17),
MR_TAG_COMMON(1,0,14)
}
},
{
{
MR_TAG_COMMON(2,2,0),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,1,19),
MR_TAG_COMMON(1,0,7)
}
},
{
{
MR_TAG_COMMON(3,1,20),
MR_TAG_COMMON(1,0,18)
}
},
{
{
MR_TAG_COMMON(3,1,12),
MR_TAG_COMMON(1,0,19)
}
},
{
{
MR_TAG_COMMON(3,1,21),
MR_TAG_COMMON(1,0,20)
}
},
{
{
MR_TAG_COMMON(3,1,14),
MR_TAG_COMMON(1,0,21)
}
},
{
{
MR_TAG_COMMON(3,1,15),
MR_TAG_COMMON(1,0,22)
}
},
{
{
MR_TAG_COMMON(3,1,16),
MR_TAG_COMMON(1,0,23)
}
},
{
{
MR_TAG_COMMON(3,1,17),
MR_TAG_COMMON(1,0,24)
}
},
{
{
MR_TAG_COMMON(2,2,1),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,1,27),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,26),
MR_TAG_COMMON(1,0,28)
}
},
{
{
MR_TAG_COMMON(3,1,28),
MR_TAG_COMMON(1,0,28)
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
MR_TAG_COMMON(3,1,31),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,30),
MR_TAG_COMMON(1,0,32)
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
MR_TAG_COMMON(1,0,34)
}
},
{
{
MR_TAG_COMMON(3,1,32),
MR_TAG_COMMON(1,0,35)
}
},
{
{
MR_TAG_COMMON(3,1,36),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,35),
MR_TAG_COMMON(1,0,37)
}
},
{
{
MR_TAG_COMMON(0,2,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,6,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,2,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,6,1),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(1,0,43)
}
},
{
{
MR_TAG_COMMON(3,1,32),
MR_TAG_COMMON(1,0,44)
}
},
{
{
MR_TAG_COMMON(0,2,4),
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
MR_TAG_COMMON(3,1,41),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,40),
MR_TAG_COMMON(1,0,49)
}
},
{
{
MR_TAG_COMMON(3,1,33),
MR_TAG_COMMON(1,0,50)
}
},
{
{
MR_TAG_COMMON(3,1,39),
MR_TAG_COMMON(1,0,51)
}
},
{
{
MR_TAG_COMMON(3,1,32),
MR_TAG_COMMON(1,0,52)
}
},
{
{
MR_TAG_COMMON(3,1,42),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,40),
MR_TAG_COMMON(1,0,54)
}
},
{
{
MR_TAG_COMMON(3,1,33),
MR_TAG_COMMON(1,0,55)
}
},
{
{
MR_TAG_COMMON(3,1,39),
MR_TAG_COMMON(1,0,56)
}
},
{
{
MR_TAG_COMMON(3,1,32),
MR_TAG_COMMON(1,0,57)
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
MR_TAG_COMMON(3,1,44),
MR_TAG_COMMON(1,0,37)
}
},
{
{
MR_TAG_COMMON(0,2,5),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,1,48),
MR_TAG_COMMON(1,0,62)
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
MR_TAG_COMMON(3,1,48),
MR_TAG_COMMON(1,0,64)
}
},
{
{
MR_TAG_COMMON(3,1,52),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,54),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,53),
MR_TAG_COMMON(1,0,67)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,0,68)
}
},
{
{
MR_TAG_COMMON(3,1,1),
MR_TAG_COMMON(1,0,69)
}
},
{
{
MR_TAG_COMMON(3,1,55),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,56),
MR_TAG_COMMON(1,0,71)
}
},
{
{
MR_TAG_COMMON(2,2,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,59),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,58),
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
MR_TAG_COMMON(3,1,63),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,62),
MR_TAG_COMMON(1,0,78)
}
},
{
{
MR_TAG_COMMON(1,8,1),
MR_TAG_COMMON(1,0,79)
}
},
{
{
MR_TAG_COMMON(3,1,61),
MR_TAG_COMMON(1,0,80)
}
},
{
{
MR_TAG_COMMON(3,1,60),
MR_TAG_COMMON(1,0,81)
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
MR_string_const("Error:", 6)
},
{
4,
MR_string_const("you must do it explicitly.)", 27)
},
{
4,
MR_string_const("implicitly. (If that\'s really what you want,", 44)
},
{
4,
MR_string_const("representations, but I\'m not going to do that", 45)
},
{
4,
MR_string_const("backtracking over all possible", 30)
},
{
4,
MR_string_const("a solution to this unification would require", 44)
},
{
4,
MR_string_const("representation. Figuring out whether there is", 45)
},
{
4,
MR_string_const("might depend on the choice of concrete", 38)
},
{
4,
MR_string_const("of this type. The success of this unification", 45)
},
{
4,
MR_string_const("representation for each abstract value", 38)
},
{
4,
MR_string_const("there is more than one possible concrete", 40)
},
{
4,
MR_string_const("equality predicate, I must presume that", 39)
},
{
4,
MR_string_const("Since the type has a user-defined", 33)
},
{
4,
MR_string_const("occurs in a context which requires all solutions.", 49)
},
{
4,
MR_string_const("solutions to this unification would require", 43)
},
{
4,
MR_string_const("representation. Finding all possible", 36)
},
{
4,
MR_string_const("of this type. The results of this unification", 45)
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
MR_string_const("In", 2)
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
MR_string_const("det, cc_multi and erroneous.", 28)
},
{
4,
MR_string_const("Valid determinisms are ", 23)
},
{
4,
MR_string_const("for a procedure that has a determinism of", 41)
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
};

static const struct mercury_type_2 mercury_common_2[7] =
{
{
MR_TAG_COMMON(1,0,15)
},
{
MR_TAG_COMMON(1,0,25)
},
{
MR_TAG_COMMON(1,0,36)
},
{
MR_TAG_COMMON(1,0,38)
},
{
MR_TAG_COMMON(1,0,45)
},
{
MR_TAG_COMMON(1,0,60)
},
{
MR_TAG_COMMON(1,0,72)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
2,
1
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_atomic_goal_9_0_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_analysis__det_infer_atomic_goal_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,31),
MR_COMMON(0,31)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
19,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
((MR_Integer) 19 | ((MR_Integer) 1 << (MR_Integer) 10)),
MR_TAG_COMMON(1,0,39)
},
{
((MR_Integer) 19 | ((MR_Integer) 1 << (MR_Integer) 10)),
MR_TAG_COMMON(1,0,41)
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
static const struct mercury_type_7 mercury_common_7[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,47),
MR_COMMON(0,48),
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
MR_COMMON(0,48)
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
MR_COMMON(0,48)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_analysis__det_infer_scope_12_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,47),
MR_COMMON(0,48),
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
MR_COMMON(0,47),
MR_COMMON(0,48),
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

static const struct mercury_type_8 mercury_common_8[2] =
{
{
MR_string_const("\140:- pragma foreign_export\' declaration", 38)
},
{
MR_string_const("\140will_not_throw_exception\' attribute.", 37)
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_COMMON(7,5),
MR_ENTRY_AP(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0),
0
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
	15,
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
	15,
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
147,
"7"
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
1707,
"275"
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
1666,
"214"
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
1652,
"203"
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
1649,
"199"
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
1611,
"131"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_analysis__det_infer_atomic_goal_9_0_1 = {
{
MR_PREDICATE,
"check_hlds.det_analysis",
"check_hlds.det_analysis",
"lambda_det_analysis_m_1496",
2,
0
},
"check_hlds.det_analysis",
"det_analysis.m",
1496,
"18"
};


MR_decl_entry(check_hlds__det_util__det_info_get_module_info_2_0);
MR_decl_entry(check_hlds__type_util__type_has_user_defined_equality_pred_3_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module0)
	MR_init_entry1(check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0);
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
MR_decl_entry(hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(check_hlds__det_util__det_info_add_error_spec_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_failing_context_0;
MR_decl_entry(fn__check_hlds__det_report__failing_contexts_description_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;

MR_BEGIN_MODULE(check_hlds__det_analysis_module1)
	MR_init_entry1(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_check_for_noncanonical_type_11_0);
	MR_init_label10(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,5,6,8,9,13,14,17,16,33,35)
	MR_init_label10(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,15,52,12,63,64,67,66,83,85,65)
	MR_init_label10(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,104,105,106,107,114,116,62,11,118,2)
	MR_init_label1(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,3)
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
	MR_sv(9) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
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
	MR_sv(6) = MR_r1;
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
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i8);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i9);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i2);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i13);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i14);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i17);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i15);
	}
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i33);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r2 = MR_r1;
	MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i15);
	}
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
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
	}
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i52);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,16);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i116);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i62);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i63);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i64);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i66);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i67);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,17);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_tfield(1, MR_tempr4, 1) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i65);
	}
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tfield(1, MR_sv(5), 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i83);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i85);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,17);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(10);
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i65);
	}
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,17);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_sv(5) = MR_r2;
	}
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,0,25);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i104);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i105);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__det_report__failing_contexts_description_3_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i106);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i107);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,26);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i114);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,114)
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
		check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i116);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i11);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0_i118);
	}
	MR_r1 = (MR_Integer) 3;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,118)
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module2)
	MR_init_entry1(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0);
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
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((MR_tempr2 == MR_r4)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0_i4);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
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
MR_decl_entry(check_hlds__det_util__det_info_set_has_format_call_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module3)
	MR_init_entry1(check_hlds__det_analysis__det_infer_call_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_call_11_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_call_11_0,2,3,4,5,8,10,7,11,12,17)
	MR_init_label10(check_hlds__det_analysis__det_infer_call_11_0,18,19,20,21,22,24,16,25,26,27)
	MR_init_label10(check_hlds__det_analysis__det_infer_call_11_0,28,32,39,40,41,46,48,49,13,51)
	MR_init_label2(check_hlds__det_analysis__det_infer_call_11_0,54,53)
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
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(8) = MR_r6;
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
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__det_analysis__det_infer_call_11_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__det_analysis__det_infer_call_11_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__format_call__is_format_call_3_0,
		check_hlds__det_analysis__det_infer_call_11_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i7);
	}
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_set_has_format_call_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_call_11_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i13);
	}
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i13);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i17);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
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
	MR_sv(6) = MR_r1;
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
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_find_matching_non_cc_mode_2_5_0,
		check_hlds__det_analysis__det_infer_call_11_0_i22);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i16);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_call_11_0_i24);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r2 = MR_r4;
	MR_sv(9) = MR_sv(10);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i51);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_call_11_0_i25);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__det_util__det_get_proc_info_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i26);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_analysis__det_infer_call_11_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		check_hlds__det_analysis__det_infer_call_11_0_i28);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,0,27);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,1,23);
	MR_r1 = MR_r2;
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
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,17);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(7);
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
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__det_report__failing_contexts_description_3_0,
		check_hlds__det_analysis__det_infer_call_11_0_i41);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
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
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_call_11_0_i49);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_r2 = MR_r4;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_call_11_0_i51);
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(5) = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_sv(9) = MR_sv(10);
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
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__det_analysis__det_infer_call_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module4)
	MR_init_entry1(check_hlds__det_analysis__det_infer_generic_call_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_generic_call_9_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_generic_call_9_0,2,3,7,8,11,19,20,25,27,28)
	MR_init_label3(check_hlds__det_analysis__det_infer_generic_call_9_0,4,29,31)
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
	MR_sv(6) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_generic_call_9_0_i4);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_generic_call_9_0_i4);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__det_util__det_get_proc_info_2_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,1,24);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,1,25);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_det_to_string_1_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,17);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i19);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__det_report__failing_contexts_description_3_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i20);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
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
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_generic_call_9_0_i28);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_generic_call_9_0_i29);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(5);
MR_def_label(check_hlds__det_analysis__det_infer_generic_call_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_generic_call_9_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
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


MR_BEGIN_MODULE(check_hlds__det_analysis_module5)
	MR_init_entry1(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_unify_examines_rep_2_0);
	MR_init_label4(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0,3,4,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_infer_unify_examines_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0_i5);
	}
MR_def_label(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module6)
	MR_init_entry1(check_hlds__det_analysis__det_infer_unify_canfail_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_unify_canfail_2_0);
	MR_init_label4(check_hlds__det_analysis__det_infer_unify_canfail_2_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_infer_unify_canfail'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_unify_canfail_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_canfail_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_unify_canfail_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_canfail_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_unify_canfail_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_canfail_2_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 4);
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_unify_canfail_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_canfail_2_0_i6);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_unify_canfail_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module7)
	MR_init_entry1(check_hlds__det_analysis__det_infer_goal_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_goal_10_0);
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_sv(5);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module8)
	MR_init_entry1(check_hlds__det_analysis__det_infer_goal_1_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_goal_1_11_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_goal_1_11_0,2,8,9,7,6,5,3,13,14,15)
	MR_init_label10(check_hlds__det_analysis__det_infer_goal_1_11_0,18,16,20,22,21,26,30,31,32,36)
	MR_init_label10(check_hlds__det_analysis__det_infer_goal_1_11_0,37,80,33,34,47,48,49,45,41,53)
	MR_init_label2(check_hlds__det_analysis__det_infer_goal_1_11_0,59,54)
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
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,5)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i6);
	}
	MR_r9 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_r9,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i8);
	}
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r9 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_r9;
	MR_r4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i7);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i9);
	}
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_r9;
	MR_r4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_tempr1;
	MR_r4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = (MR_Integer) 1;
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r8,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i5);
	}
	MR_r9 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r9;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r7;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r8, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i3);
	}
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_tempr2;
	MR_r4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i13);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_sv(3);
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
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i15);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i16);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i20);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i22);
	}
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i21);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i21);
	}
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i30);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i26);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i26);
	}
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i30);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i31);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i32);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,6)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i34);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_sv(3), 2), 1);
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
	if (MR_INT_EQ(MR_sv(7),3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i33);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i53);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i41);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i41);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i41);
	}
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__det_analysis__det_infer_goal_1_11_0_i45);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i47);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
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
	MR_r1 = MR_sv(8);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i53);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) == MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i54);
	}
	if (MR_RTAGS_TEST(MR_sv(3),3,3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i54);
	}
	if (MR_RTAGS_TEST(MR_sv(3),3,5)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_1_11_0_i54);
	}
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__det_analysis__det_infer_goal_1_11_0_i59);
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_1_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module9)
	MR_init_entry1(check_hlds__det_analysis__det_infer_goal_2_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_goal_2_11_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_goal_2_11_0,4,3,6,5,9,8,12,11,15,18)
	MR_init_label10(check_hlds__det_analysis__det_infer_goal_2_11_0,13,21,20,24,23,26,25,29,28,34)
	MR_init_label5(check_hlds__det_analysis__det_infer_goal_2_11_0,33,38,37,146,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_infer_goal_2'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_goal_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_not_9_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i5);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(2, MR_r1, 0);
	MR_sv(1) = MR_tfield(2, MR_r1, 2);
	MR_sv(4) = MR_tfield(2, MR_r1, 3);
	MR_sv(2) = MR_tfield(2, MR_r1, 4);
	MR_sv(3) = MR_tfield(2, MR_r1, 5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_call_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i8);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 2);
	MR_sv(4) = MR_tfield(1, MR_r1, 3);
	MR_sv(2) = MR_tfield(1, MR_r1, 4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_unify_13_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i11);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i13);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r8 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i15);
	}
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_par_conj_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r8;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_conj_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i20);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_disj_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i21);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i23);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_sv(5), 4);
	MR_r3 = MR_tempr1;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_generic_call_9_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i24);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i25);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 4);
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
		check_hlds__det_analysis__det_infer_goal_2_11_0_i26);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i28);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
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
		check_hlds__det_analysis__det_infer_goal_2_11_0_i29);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i146);
	}
	MR_r8 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r8,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i33);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 6);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_tempr1, 4);
	MR_r2 = MR_tfield(1, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_atomic_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i34);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 4) = MR_r1;
	MR_tfield(1, MR_tempr1, 5) = MR_r2;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_goal_2_11_0_i37);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(5) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_1_11_0,
		check_hlds__det_analysis__det_infer_goal_2_11_0_i38);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_goal_2\'/11", 55);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
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
		check_hlds__det_analysis__det_infer_goal_2_11_0_i42);
MR_def_label(check_hlds__det_analysis__det_infer_goal_2_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module10)
	MR_init_entry1(check_hlds__det_analysis__det_infer_conj_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_conj_11_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_conj_11_0,38,4,5,6,7,10,11,12,14,15)
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
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_conj_11_0_i38);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(8) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__det_analysis__det_infer_conj_11_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	}
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_conj_11_0,
		check_hlds__det_analysis__det_infer_conj_11_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_conj_11_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_conj_11_0_i7);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_conj_11_0_i7);
	}
	MR_r3 = MR_sv(3);
	MR_sv(7) = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_conj_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(7) = (MR_Integer) 0;
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
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
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
	MR_sv(7) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		check_hlds__det_analysis__det_infer_conj_11_0_i14);
MR_def_label(check_hlds__det_analysis__det_infer_conj_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
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
	MR_r2 = MR_sv(7);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module11)
	MR_init_entry1(check_hlds__det_analysis__det_infer_par_conj_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_par_conj_11_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_par_conj_11_0,2,4,3,8,9,11,17,10,23,24)
	MR_init_label2(check_hlds__det_analysis__det_infer_par_conj_11_0,29,31)
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
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
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
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_r2;
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
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_par_conj_11_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_par_conj_11_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_par_conj_11_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,0,29);
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
	MR_r2 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_r5 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_par_conj_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_par_conj\'/11", 57);
	MR_r3 = (MR_Word) MR_string_const("strange determinism error for parallel conjunction", 50);
	MR_np_call_localret_ent(require__unexpected_3_0,
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
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

MR_decl_entry(parse_tree__prog_data__det_conjunction_maxsoln_3_0);
MR_decl_entry(parse_tree__prog_data__det_conjunction_canfail_3_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module12)
	MR_init_entry1(check_hlds__det_analysis__det_infer_par_conj_goals_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_par_conj_goals_11_0);
	MR_init_label9(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,23,4,5,6,8,9,10,11,12)
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
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_r7;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(8);
	}
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_canfail_3_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_par_conj_goals_11_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_par_conj_goals_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module13)
	MR_init_entry1(check_hlds__det_analysis__det_infer_disj_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_disj_11_0);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module14)
	MR_init_entry1(check_hlds__det_analysis__det_infer_disj_goals_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_disj_goals_13_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_disj_goals_13_0,4,3,5,6,12,7,8,15,16,17)
	MR_init_label2(check_hlds__det_analysis__det_infer_disj_goals_13_0,21,23)
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
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
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
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_r9;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(8), 1);
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_disj_goals_13_0_i8);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_disj_goals_13_0_i8);
	}
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
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
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_sv(13) = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__det_disjunction_canfail_3_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i15);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_sv(13) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_disjunction_canfail_3_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i15);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_disjunction_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i16);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_disj_goals_13_0_i17);
	}
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_disj_goals_13_0_i17);
	}
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r8 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_r9 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = (MR_Integer) 2;
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_disj_goals_13_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i21);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r8 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r9 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_disj_goals_13_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i21);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_disj_goals_13_0_i23);
MR_def_label(check_hlds__det_analysis__det_infer_disj_goals_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module15)
	MR_init_entry1(check_hlds__det_analysis__det_infer_switch_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_switch_13_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_switch_13_0,2,3,4,7,8,9,10,11,14,13)
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
	MR_sv(4) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r6;
	MR_sv(7) = MR_tempr2;
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
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_switch_13_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_switch_13_0_i4);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_switch_13_0_i4);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r6 = MR_sv(6);
	MR_r5 = MR_sv(5);
	MR_sv(6) = MR_r2;
	MR_r4 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_r9 = MR_sv(8);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_switch_13_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r6 = MR_sv(6);
	MR_r5 = MR_sv(5);
	MR_sv(6) = MR_r2;
	MR_r4 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_r9 = MR_sv(8);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(3) = MR_r7;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,
		check_hlds__det_analysis__det_infer_switch_13_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_canfail_3_0,
		check_hlds__det_analysis__det_infer_switch_13_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
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
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_switch_13_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_switch_13_0_i13);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
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
	MR_tfield(1, MR_tempr3, 1) = MR_sv(5);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__det_analysis__det_infer_switch_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module16)
	MR_init_entry1(check_hlds__det_analysis__det_infer_switch_cases_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_switch_cases_14_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_switch_cases_14_0,4,3,5,6,8,9,10,11,13,14)
	MR_init_label3(check_hlds__det_analysis__det_infer_switch_cases_14_0,15,16,18)
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
	MR_sv(6) = MR_r9;
	MR_sv(12) = MR_r10;
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
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(12);
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(6) = MR_r9;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r10;
	MR_sv(12) = MR_tempr2;
	MR_sv(8) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
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
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__instmap__bind_var_to_functors_8_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
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
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(12) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(13) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i13);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r2;
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
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i15);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(9);
	}
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_switch_cases_14_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i16);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_switch_cases_14_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_switch_cases_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__pre_lambda_update_5_0);
MR_decl_entry(check_hlds__det_report__det_check_lambda_7_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module17)
	MR_init_entry1(check_hlds__det_analysis__det_infer_unify_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_unify_13_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_unify_13_0,5,4,6,7,8,9,10,3,2,12)
	MR_init_label10(check_hlds__det_analysis__det_infer_unify_13_0,13,15,16,19,23,27,21,32,36,40)
	MR_init_label1(check_hlds__det_analysis__det_infer_unify_13_0,18)
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
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i3);
	}
	MR_sv(13) = MR_tfield(2, MR_r2, 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 5);
	MR_sv(11) = MR_tfield(2, MR_r2, 4);
	MR_sv(10) = MR_tfield(2, MR_r2, 3);
	MR_sv(9) = MR_tfield(2, MR_r2, 2);
	MR_sv(8) = (((MR_Integer) MR_tfield(2, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(7) = (((MR_Integer) MR_tfield(2, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(16) = ((MR_Integer) MR_tfield(2, MR_r2, 0) & (MR_Integer) 3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(15) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(12) = MR_tempr1;
	MR_sv(17) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i4);
	}
	MR_sv(14) = (MR_Integer) 1;
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Integer) 0;
	MR_r1 = MR_sv(17);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(hlds__instmap__pre_lambda_update_5_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(14);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(17);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(15);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_check_lambda_7_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_r2, 0) = ((MR_Integer) MR_sv(16) | (((MR_Integer) MR_sv(7) << (MR_Integer) 2) | ((MR_Integer) MR_sv(8) << (MR_Integer) 3)));
	MR_tfield(2, MR_r2, 2) = MR_sv(9);
	MR_tfield(2, MR_r2, 3) = MR_sv(10);
	MR_tfield(2, MR_r2, 4) = MR_sv(11);
	MR_tfield(2, MR_r2, 5) = MR_sv(12);
	MR_tfield(2, MR_r2, 6) = MR_sv(15);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(15) = MR_r2;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(15) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(7) = MR_r9;
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_unify_canfail_2_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_unify_examines_rep_2_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i13);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r8, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r8, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(3);
	MR_r9 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_check_for_noncanonical_type_11_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i15);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_unify_13_0_i16);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(16),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i18);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_unify_13_0_i19);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i21);
	}
	if (MR_PTAG_TESTR(MR_sv(15),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tempr4 = MR_sv(15);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(15),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tempr4 = MR_sv(15);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(0, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_unify\'/13", 54);
	MR_r3 = (MR_Word) MR_string_const("complicated_unify but no fail context", 37);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i32);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr4 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_tempr4, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_sv(2);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_tempr4, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_unify_13_0_i40);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_unify\'/13", 54);
	MR_r3 = (MR_Word) MR_string_const("can_fail assign", 15);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_unify\'/13", 54);
	MR_r3 = (MR_Word) MR_string_const("can_fail construct", 18);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__det_analysis__det_infer_unify_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__det_negation_det_2_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module18)
	MR_init_entry1(check_hlds__det_analysis__det_infer_if_then_else_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_if_then_else_14_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_if_then_else_14_0,2,3,4,5,8,9,10,11,12,13)
	MR_init_label10(check_hlds__det_analysis__det_infer_if_then_else_14_0,18,20,19,17,23,24,25,15,27,28)
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
	MR_sv(11) = MR_tempr1;
	MR_sv(10) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(12) = MR_r8;
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
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i5);
	}
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i5);
	}
	MR_r3 = MR_sv(8);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i12);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i13);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i15);
	}
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i17);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_data__det_negation_det_2_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_if_then_else_14_0_i20);
	}
	MR_r2 = MR_sv(8);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_if_then_else\'/14", 61);
	MR_r3 = (MR_Word) MR_string_const("cannot find determinism of negated condition", 44);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i19);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i23);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i24);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_canfail_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i25);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		check_hlds__det_analysis__det_infer_if_then_else_14_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_if_then_else_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
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
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(13);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module19)
	MR_init_entry1(check_hlds__det_analysis__det_infer_not_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_not_9_0);
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
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_not_9_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_not_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_not\'/9", 51);
	MR_r3 = (MR_Word) MR_string_const("inappropriate determinism inside a negation", 43);
	MR_np_call_localret_ent(require__unexpected_3_0,
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


MR_BEGIN_MODULE(check_hlds__det_analysis_module20)
	MR_init_entry1(check_hlds__det_analysis__det_infer_atomic_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_atomic_11_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_atomic_11_0,2,4,5,6,7,8,9,10,13,14)
	MR_init_label2(check_hlds__det_analysis__det_infer_atomic_11_0,15,16)
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
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(3) = MR_tempr3;
	MR_tempr4 = MR_r6;
	MR_sv(4) = MR_tempr4;
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
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
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
	MR_sv(6) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_atomic_goal_9_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
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
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_orelse_goals_12_0,
		check_hlds__det_analysis__det_infer_atomic_11_0_i10);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_atomic_11_0_i13);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 3;
	MR_sv(5) = MR_r4;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_atomic_11_0_i16);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_atomic_11_0_i14);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_atomic_11_0_i16);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_atomic_11_0_i15);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_atomic_11_0_i16);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_atomic_11_0_i16);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__expect_4_0);
MR_decl_entry(fn__parse_tree__prog_out__determinism_to_string_1_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module21)
	MR_init_entry1(check_hlds__det_analysis__det_infer_atomic_goal_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_atomic_goal_9_0);
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1496__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r3 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_atomic_goal\'/9", 59);
	MR_r4 = (MR_Word) MR_string_const("GoalFailingContexts != []", 25);
	}
	MR_np_call_localret_ent(require__expect_4_0,
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
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_atomic_goal_9_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_goal_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_analysis__det_infer_atomic_goal_9_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_atomic_goal_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,33);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,29);
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
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
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


MR_BEGIN_MODULE(check_hlds__det_analysis_module22)
	MR_init_entry1(check_hlds__det_analysis__det_infer_orelse_goals_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_orelse_goals_12_0);
	MR_init_label6(check_hlds__det_analysis__det_infer_orelse_goals_12_0,20,4,5,6,7,8)
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
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_orelse_goals_12_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_proceed();
MR_def_label(check_hlds__det_analysis__det_infer_orelse_goals_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_r8;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_atomic_goal_9_0,
		check_hlds__det_analysis__det_infer_orelse_goals_12_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_orelse_goals_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_orelse_goals_12_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_orelse_goals_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
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
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_orelse_goals_12_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_orelse_goals_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(8);
	}
	MR_np_localcall_lab(check_hlds__det_analysis__det_infer_orelse_goals_12_0,
		check_hlds__det_analysis__det_infer_orelse_goals_12_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_orelse_goals_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__set_of_var__list_to_set_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__to_sorted_list_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__intersect_2_0);
MR_decl_entry(parse_tree__set_of_var__is_empty_1_0);
MR_decl_entry(fn__check_hlds__det_report__lookup_var_name_in_varset_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__parse_tree__error_util__list_to_pieces_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_changed_vars_2_0);
MR_decl_entry(hlds__instmap__var_is_ground_in_instmap_3_0);
MR_decl_entry(parse_tree__set_of_var__divide_4_0);
MR_decl_entry(hlds__instmap__var_is_any_in_instmap_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__filter_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__union_2_0);
MR_decl_entry(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_0);
MR_decl_entry(parse_tree__set_of_var__difference_3_0);
MR_decl_entry(fn__check_hlds__det_report__promise_solutions_kind_str_1_0);
MR_decl_entry(parse_tree__set_of_var__member_2_1);
MR_decl_entry(parse_tree__set_of_var__member_2_0);
MR_decl_entry(check_hlds__det_util__det_info_get_pess_extra_vars_2_0);
MR_decl_entry(check_hlds__det_util__det_info_set_has_req_scope_2_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module23)
	MR_init_entry1(check_hlds__det_analysis__det_infer_scope_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_scope_12_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_scope_12_0,4,5,6,10,37,39,40,41,8,46)
	MR_init_label10(check_hlds__det_analysis__det_infer_scope_12_0,59,60,61,64,62,68,69,73,71,70)
	MR_init_label10(check_hlds__det_analysis__det_infer_scope_12_0,95,98,99,113,44,7,115,116,117,119)
	MR_init_label10(check_hlds__det_analysis__det_infer_scope_12_0,120,122,123,124,125,126,127,130,128,134)
	MR_init_label10(check_hlds__det_analysis__det_infer_scope_12_0,135,136,140,138,137,146,147,144,149,143)
	MR_init_label10(check_hlds__det_analysis__det_infer_scope_12_0,167,170,171,177,178,179,180,181,187,185)
	MR_init_label10(check_hlds__det_analysis__det_infer_scope_12_0,183,192,193,194,198,196,195,216,219,220)
	MR_init_label10(check_hlds__det_analysis__det_infer_scope_12_0,226,3,231,229,234,237,238,235,240,241)
	MR_init_label4(check_hlds__det_analysis__det_infer_scope_12_0,255,233,258,257)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_infer_scope'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__det_infer_scope_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_get_proc_info_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(10), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(10), 0) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_sv(9) = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r2, 1);
	MR_sv(15) = MR_sv(1);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,40);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr3 = MR_tfield(1, MR_sv(9), 0);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,42);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr5;
	MR_sv(9) = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_tfield(0, MR_tempr3, 0);
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i37);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i39);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i40);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i41);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_sv(10), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(10), 0) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i44);
	}
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,46);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i113);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i59);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i60);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__intersect_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i61);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__set_of_var__is_empty_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i64);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i62);
	}
	MR_r1 = MR_sv(11);
	MR_sv(9) = (MR_Integer) 1;
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(15) = MR_sv(1);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(10) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__det_report__lookup_var_name_in_varset_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(7);
	MR_sv(13) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i68);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i69);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i71);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i73);
	}
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,0,53);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i95);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,0,58);
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i95);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_scope\'/12", 54);
	MR_r3 = (MR_Word) MR_string_const("arbitrary_promise_overlap empty", 31);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i70);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i95);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,59);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i98);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i99);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,61);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i113);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(9) = (MR_Integer) 1;
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(10) = MR_sv(9);
	MR_sv(9) = (MR_Integer) 1;
	MR_sv(15) = MR_sv(1);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i115);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i116);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i117);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__var_is_ground_in_instmap_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tfield(0, MR_r2, 4) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__divide_4_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i119);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i120);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__var_is_any_in_instmap_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__filter_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i122);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i123);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i124);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i125);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i126);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i127);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__set_of_var__is_empty_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i130);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i128);
	}
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_sv(15);
	MR_r1 = MR_sv(16);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i178);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(14) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tempr3 = MR_sv(16);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(13) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__det_report__lookup_var_name_in_varset_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(7);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i134);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i135);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__check_hlds__det_report__promise_solutions_kind_str_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i136);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(13),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i138);
	}
	MR_r4 = MR_tfield(1, MR_sv(13), 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i140);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(14) = (MR_Word) MR_string_const("a variable that is not listed:", 30);
	MR_r1 = MR_sv(16);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i137);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(14) = (MR_Word) MR_string_const("some variables that are not listed:", 35);
	MR_r1 = MR_sv(16);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i137);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_scope\'/12", 54);
	MR_r3 = (MR_Word) MR_string_const("promise_solutions_missing_vars empty", 36);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i137);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(18) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(19));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__det_analysis__det_infer_scope_12_0_i144);
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_1,
		check_hlds__det_analysis__det_infer_scope_12_0_i146);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i147);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(19));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(17);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(18);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i149);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(17);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(18);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i143);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,46);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,45);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i167);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,47);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,1,45);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i167);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,59);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i170);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i171);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i177);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(16);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i179);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i180);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pess_extra_vars_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i181);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__set_of_var__is_empty_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i187);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i185);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_10_0);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i183);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_10_0);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tempr4 = MR_sv(16);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__det_report__lookup_var_name_in_varset_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(7);
	MR_tempr3 = MR_sv(11);
	MR_sv(11) = MR_tempr2;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i192);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i193);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__check_hlds__det_report__promise_solutions_kind_str_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i194);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i196);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(11);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i198);
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,63);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,45);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_sv(11) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i216);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,65);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,45);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(11);
	MR_sv(11) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i216);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_scope\'/12", 54);
	MR_r3 = (MR_Word) MR_string_const("promise_solutions_extra_vars empty", 34);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i195);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i216);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,59);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i219);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i220);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i226);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_10_0);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i229);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i231);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r8;
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_10_0);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i233);
	}
	MR_sv(11) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i234);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i237);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 4;
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i238);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,6)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i235);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i240);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i241);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,33);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,51);
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
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i255);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(20);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 1)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 0))))) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_scope_12_0_i257);
	}
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_r8;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_set_has_req_scope_2_0,
		check_hlds__det_analysis__det_infer_scope_12_0_i258);
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_10_0);
	}
MR_def_label(check_hlds__det_analysis__det_infer_scope_12_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(check_hlds__det_analysis__det_infer_goal_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module24)
	MR_init_entry1(check_hlds__det_analysis__det_get_soln_context_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_get_soln_context_2_0);
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


MR_BEGIN_MODULE(check_hlds__det_analysis_module25)
	MR_init_entry1(check_hlds__det_analysis__get_exported_proc_context_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__get_exported_proc_context_4_0);
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
	MR_r4 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if ((MR_r2 != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__get_exported_proc_context_4_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	if ((MR_r3 != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__get_exported_proc_context_4_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
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
MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(check_hlds__det_util__det_info_init_7_0);
MR_decl_entry(check_hlds__det_util__det_info_get_error_specs_2_0);
MR_decl_entry(check_hlds__det_util__det_info_get_has_format_call_2_0);
MR_decl_entry(check_hlds__det_util__det_info_get_has_req_scope_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_eval_method_2_0);
MR_decl_entry(fn__hlds__hlds_pred__eval_method_change_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_has_io_state_pair_4_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module26)
	MR_init_entry1(check_hlds__det_analysis__det_infer_proc_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__det_infer_proc_8_0);
	MR_init_label10(check_hlds__det_analysis__det_infer_proc_8_0,2,3,4,5,6,7,8,10,11,9)
	MR_init_label10(check_hlds__det_analysis__det_infer_proc_8_0,14,13,18,19,20,21,22,23,24,25)
	MR_init_label10(check_hlds__det_analysis__det_infer_proc_8_0,26,27,28,29,30,31,32,33,34,36)
	MR_init_label10(check_hlds__det_analysis__det_infer_proc_8_0,39,40,43,45,55,56,35,65,66,72)
	MR_init_label10(check_hlds__det_analysis__det_infer_proc_8_0,73,76,77,75,70,78,81,86,87,79)
	MR_init_label10(check_hlds__det_analysis__det_infer_proc_8_0,68,101,102,103,104,105,106,108,112,111)
	MR_init_label3(check_hlds__det_analysis__det_infer_proc_8_0,113,114,115)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_infer_proc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_analysis__det_infer_proc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(13) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i2);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(18) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i3);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i4);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i5);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i6);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_analysis__det_get_soln_context_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i7);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i8);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i10);
	}
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i9);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_get_soln_context_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i11);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i14);
	}
	if (MR_INT_NE(MR_sv(11),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i13);
	}
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i18);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Integer) 0;
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i19);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i20);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i21);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(13);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_init_7_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i22);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i23);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(11) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i24);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_error_specs_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i25);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_has_format_call_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i26);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_has_req_scope_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i27);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i28);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i29);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_canfail_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i30);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_maxsoln_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i31);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_analysis__det_infer_proc_8_0_i32);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i33);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__eval_method_change_determinism_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i34);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_has_io_state_pair_4_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i36);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i35);
	}
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i39);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i40);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(12), 0);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i40);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i35);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i43);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i45);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,0,66);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,70);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i55);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i56);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,73);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(12);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r2, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(15);
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i65);
	}
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_sv(10) = MR_sv(15);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_pragma_exported_procs_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i66);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(23) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(24));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__det_analysis__det_infer_proc_8_0_i70);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(15) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(13);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, pragma_exported_proc);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__det_analysis__det_infer_proc_8_0_i72);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2,
		check_hlds__det_analysis__det_infer_proc_8_0_i73);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_INT_NE(MR_sv(11),2)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i76);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(13);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i75);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),3)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i77);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(13);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i75);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(24));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(22);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(23);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i78);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(22);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(23);
	MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i68);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_np_call_localret_ent(check_hlds__det_analysis__get_exported_proc_context_4_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i81);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i79);
	}
	MR_sv(12) = MR_r2;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(3,1,32);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(3,1,57);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i86);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i87);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(12);
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
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i102);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(13);
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_analysis", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_analysis.det_infer_proc\'/8", 52);
	MR_r3 = (MR_Word) MR_string_const("Cannot find proc in table of pragma foreign_exported procs", 58);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i101);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_sv(6) = MR_sv(10);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i102);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_inferred_determinism_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i103);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i104);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i105);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i106);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i108);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 24;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i108);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__det_infer_proc_8_0_i111);
	}
	MR_r1 = (MR_Integer) 23;
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i112);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i113);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i113);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i114);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__det_analysis__det_infer_proc_8_0_i115);
MR_def_label(check_hlds__det_analysis__det_infer_proc_8_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_det_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module27)
	MR_init_entry1(check_hlds__det_analysis__global_inference_single_pass_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__global_inference_single_pass_8_0);
	MR_init_label10(check_hlds__det_analysis__global_inference_single_pass_8_0,27,3,4,5,6,9,10,11,12,13)
	MR_init_label3(check_hlds__det_analysis__global_inference_single_pass_8_0,14,15,29)
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
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
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
	MR_r1 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_sv(5) = MR_r3;
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
	MR_r1 = MR_sv(4);
	MR_sv(5) = MR_r3;
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
	MR_sv(4) = MR_r1;
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
	MR_r1 = MR_sv(5);
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
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0,
		check_hlds__det_analysis__global_inference_single_pass_8_0_i14);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__det_analysis__global_inference_single_pass_8_0_i15);
MR_def_label(check_hlds__det_analysis__global_inference_single_pass_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module28)
	MR_init_entry1(check_hlds__det_analysis__global_inference_pass_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__global_inference_pass_5_0);
	MR_init_label4(check_hlds__det_analysis__global_inference_pass_5_0,14,2,3,5)
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
MR_def_label(check_hlds__det_analysis__global_inference_pass_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
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
	MR_GOTO_LAB(check_hlds__det_analysis__global_inference_pass_5_0_i14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module29)
	MR_init_entry1(check_hlds__det_analysis__fold_pred_modes_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__fold_pred_modes_4_0);
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
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	}
	break;
	} /* end while */
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module30)
	MR_init_entry1(check_hlds__det_analysis__get_all_pred_procs_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__get_all_pred_procs_2_4_0);
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
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module31)
	MR_init_entry1(check_hlds__det_analysis__segregate_procs_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__segregate_procs_2_8_0);
	MR_init_label10(check_hlds__det_analysis__segregate_procs_2_8_0,55,3,4,5,11,9,14,16,13,17)
	MR_init_label7(check_hlds__det_analysis__segregate_procs_2_8_0,18,8,6,21,22,23,25)
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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i4);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i5);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
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
	MR_r1 = MR_sv(8);
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
	if ((MR_sv(7) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i8);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__det_analysis__segregate_procs_2_8_0_i17);
MR_def_label(check_hlds__det_analysis__segregate_procs_2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
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
	MR_r1 = MR_sv(8);
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
	MR_r4 = MR_sv(7);
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
	MR_r5 = MR_sv(4);
	MR_r3 = MR_sv(2);
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
	MR_r5 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__det_analysis__segregate_procs_2_8_0_i55);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(check_hlds__det_report__global_checking_pass_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

MR_BEGIN_MODULE(check_hlds__det_analysis_module32)
	MR_init_entry1(check_hlds__det_analysis__determinism_pass_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__determinism_pass_3_0);
	MR_init_label10(check_hlds__det_analysis__determinism_pass_3_0,2,3,4,5,7,8,9,10,12,13)
	MR_init_label9(check_hlds__det_analysis__determinism_pass_3_0,14,15,11,16,17,18,19,20,21)
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
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		check_hlds__det_analysis__determinism_pass_3_0_i2);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
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
	MR_r1 = MR_sv(4);
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
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,9,0);
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
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__det_analysis__determinism_pass_3_0_i9);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 61;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__det_analysis__determinism_pass_3_0_i10);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__det_analysis__determinism_pass_3_0_i12);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(6) = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__det_analysis__determinism_pass_3_0_i11);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% Doing determinism inference...\n", 33);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		check_hlds__det_analysis__determinism_pass_3_0_i13);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__det_analysis__global_inference_pass_5_0,
		check_hlds__det_analysis__determinism_pass_3_0_i14);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		check_hlds__det_analysis__determinism_pass_3_0_i15);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Doing determinism checking...\n", 32);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		check_hlds__det_analysis__determinism_pass_3_0_i16);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
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
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__determinism_pass_3_0_i18);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__det_report__global_checking_pass_5_0,
		check_hlds__det_analysis__determinism_pass_3_0_i19);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
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
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		check_hlds__det_analysis__determinism_pass_3_0_i21);
MR_def_label(check_hlds__det_analysis__determinism_pass_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module33)
	MR_init_entry1(check_hlds__det_analysis__determinism_check_proc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__determinism_check_proc_5_0);
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
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__det_analysis__determinism_check_proc_5_0_i2);
MR_def_label(check_hlds__det_analysis__determinism_check_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 61;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__det_analysis__determinism_check_proc_5_0_i3);
MR_def_label(check_hlds__det_analysis__determinism_check_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__global_inference_single_pass_8_0,
		check_hlds__det_analysis__determinism_check_proc_5_0_i6);
MR_def_label(check_hlds__det_analysis__determinism_check_proc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_analysis__determinism_check_proc_5_0_i7);
MR_def_label(check_hlds__det_analysis__determinism_check_proc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module34)
	MR_init_entry1(check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__set_non_inferred_proc_determinism_3_0);
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
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
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
	MR_r1 = MR_tfield(1, MR_r1, 0);
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
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module35)
	MR_init_entry1(__Unify___check_hlds__det_analysis__pess_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_analysis__pess_info_0_0);
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
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module36)
	MR_init_entry1(__Compare___check_hlds__det_analysis__pess_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_analysis__pess_info_0_0);
	MR_init_label4(__Compare___check_hlds__det_analysis__pess_info_0_0,3,2,6,28)
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
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__det_analysis__pess_info_0_0_i6);
MR_def_label(__Compare___check_hlds__det_analysis__pess_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_analysis__pess_info_0_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___check_hlds__det_analysis__pess_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_analysis_module37)
	MR_init_entry1(__Unify___check_hlds__det_analysis__soln_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_analysis__soln_context_0_0);
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

MR_BEGIN_MODULE(check_hlds__det_analysis_module38)
	MR_init_entry1(__Compare___check_hlds__det_analysis__soln_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_analysis__soln_context_0_0);
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


MR_BEGIN_MODULE(check_hlds__det_analysis_module39)
	MR_init_entry1(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2);
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 3) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 4) = MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_tempr2 = MR_tfield(0, MR_r1, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_analysis__hlds__hlds_module__pragma_exported_proc_0_2_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r1, 2);
	MR_r1 = (MR_tempr1 == MR_r2);
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


MR_BEGIN_MODULE(check_hlds__det_analysis_module40)
	MR_init_entry1(check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1496__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1496__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__det_infer_atomic_goal__1496__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1496__1_2_0)
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

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_throw_exception_1_0);

MR_BEGIN_MODULE(check_hlds__det_analysis_module41)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,2,3,4,7,9,19,20,26,6,27)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,29,32,34,45,51,28,52,56,57,58)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,62,69,70,71,76,78,53,79,80,83)
	MR_init_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,82)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__det_infer_foreign_proc__[4]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(12) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(9) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i6);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i7);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(1,0,66);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,77);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i19);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i20);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i26);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i27);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_throw_exception_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i29);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i28);
	}
	if (MR_INT_NE(MR_sv(8),6)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i28);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i32);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i34);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,82);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i45);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i51);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i52);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i53);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i53);
	}
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i56);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i57);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i58);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,0,27);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,1,23);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_det_to_string_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i62);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,17);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i69);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i70);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__det_report__failing_contexts_description_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i71);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i76);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_add_error_spec_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i78);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 3;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i79);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_sv(11) = MR_r2;
	MR_r2 = MR_sv(5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i80);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i82);
	}
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0_i83);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(13);
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
#ifdef MR_THREADSCOPE
void mercury__check_hlds__det_analysis__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__check_hlds__det_analysis__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
