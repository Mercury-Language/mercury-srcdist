/*
** Automatically generated from `transform_hlds.ctgc.structure_reuse.indirect.m'
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
INIT mercury__transform_hlds__ctgc__structure_reuse__indirect__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 39 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 48 "transform_hlds.ctgc.structure_reuse.indirect.c"
#include "transform_hlds.ctgc.structure_reuse.indirect.mh"

#line 51 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 52 "transform_hlds.ctgc.structure_reuse.indirect.c"
#ifndef TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__INDIRECT_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__STRUCTURE_REUSE__INDIRECT_DECL_GUARD

#line 56 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 57 "transform_hlds.ctgc.structure_reuse.indirect.c"

#endif
#line 60 "transform_hlds.ctgc.structure_reuse.indirect.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[12];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[13];
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_verify_indirect_reuse_reason_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_fixpoint_table_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_dep_procs_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_conditional_reuse_handling_0;
MR_decl_label3(transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0, 1,3,4)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0, 2,3,8,6,12,5,14,15)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0, 17,19)
MR_decl_label4(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0, 22,4,7,5)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_0, 3)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_0, 3)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0, 4,5,6,7,3,11,13,16)
MR_decl_label6(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0, 15,18,19,20,21,23)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0, 85,95,53,59,71,79,50,51)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0, 48,73,96,97,78,98,5,6)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0, 7,99,10,100,16,17,103,23)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0, 24,26,27,30,102,34,104,38)
MR_decl_label3(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0, 101,43,44)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0, 2,15,14,18,19,12,4,6)
MR_decl_label6(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0, 5,9,10,3,26,27)
MR_decl_label3(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0, 2,3,4)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0, 2,3,4,5,9,8,12,13)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0, 14,15,7,18,19,20,21,22)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0, 26,25,29,30,31,32,33,34)
MR_decl_label7(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0, 35,36,24,39,40,41,42)
MR_decl_label5(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0, 4,2,7,8,10)
MR_decl_label5(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0, 17,6,8,7,10)
MR_decl_label7(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0, 2,3,6,8,9,10,5)
MR_decl_label4(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0, 2,3,5,6)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0, 4,2,6,8,9,11,12,14)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0, 14,5)
MR_decl_label7(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0, 2,3,4,6,7,8,9)
MR_decl_label3(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0, 3,2,6)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0, 3,2,6,8,11,12,16,19)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0, 10)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0, 13,14,15,16,19,20,18,34)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0, 36)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_0, 2)
MR_decl_label4(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0, 3,5,9,2)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0, 2,5,7,3,10,12,16,17)
MR_decl_label7(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0, 8,21,23,24,20,19,27)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0, 2,5,7,8,9,11,13,15)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0, 10,17,16,20,22,24,3,31)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0, 33,37,29,40,42,46,47,39)
MR_decl_label1(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0, 48)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0, 2,3,4,6,7,8,9,10)
MR_decl_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0, 11,14,15,16,17,19,13,21)
MR_decl_label2(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0, 23,24)
MR_decl_label3(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0, 3,2,5)
MR_decl_label3(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0, 2,3,5)
MR_decl_label7(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0, 2,3,4,5,6,7,8)
MR_decl_label7(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0, 3,2,5,7,9,6,11)
MR_decl_label8(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0, 4,6,9,11,13,15,19,1)
MR_decl_label8(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0, 4,6,8,10,12,14,17,19)
MR_decl_label1(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0, 1)
MR_decl_label3(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0, 4,8,1)
MR_decl_label3(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0, 9,16,1)
MR_decl_label8(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0, 3,2,5,9,13,18,22,26)
MR_decl_label2(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0, 30,70)
MR_decl_label8(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label4(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0, 30,34,38,86)
MR_decl_label4(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0, 3,2,5,21)
MR_decl_label8(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0, 50,57,5,14,23,32,41,45)
MR_decl_label2(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0, 46,47)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__indirect__this_file_0_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0)
MR_def_extern_entry(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_0)
MR_decl_static(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_0)
MR_decl_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__conditional_reuse_handling_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__conditional_reuse_handling_0_0)
MR_decl_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__dep_procs_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__dep_procs_0_0)
MR_decl_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0)
MR_decl_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0)
MR_decl_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_0_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0)
MR_decl_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0)
MR_decl_static(transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as_and_status)
}
},
{
{
MR_CTOR_ADDR(transform_hlds__ctgc__fixpoint_table, fixpoint_table, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status)
}
},
{
{
MR_CTOR_ADDR(transform_hlds__ctgc__fixpoint_table, fixpoint_table, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[9] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request)
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request)
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
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0_1,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0_1,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0_1,
(MR_Word *) (MR_Integer) 0
},
13,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_2;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_COMMON(0,3),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_background_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,7),
MR_CTOR0_ADDR(parse_tree__prog_data, datastruct)
},
};

MR_decl_entry(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0);
static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(fn__transform_hlds__ctgc__datastruct__datastruct_init_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_background_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_background_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_background_info),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0 = {
	"callee_has_no_reuses",
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

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1 = {
	"callee_has_only_unconditional_reuse",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2 = {
	"current_sharing_is_top",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_types_verify_indirect_reuse_reason_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3 = {
	"reuse_is_unsafe",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_types_verify_indirect_reuse_reason_0_3,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4 = {
	"reuse_is_unconditional",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5 = {
	"reuse_is_conditional",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0,
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1,
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2,
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4,
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_1[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3

};

const MR_DuPtagLayout mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_verify_indirect_reuse_reason_0[] = {
	{ 5, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_verify_indirect_reuse_reason_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0,
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1,
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2,
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5,
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4,
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3
};

const MR_Integer mercury_data_transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_verify_indirect_reuse_reason_0[] = {
	0,
	1,
	2,
	5,
	4,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_verify_indirect_reuse_reason_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0)),
	"transform_hlds.ctgc.structure_reuse.indirect",
	"verify_indirect_reuse_reason",
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_verify_indirect_reuse_reason_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_verify_indirect_reuse_reason_0 },
	6,
	4,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_verify_indirect_reuse_reason_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_types_sr_request_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_names_sr_request_0_0[] = {
	"srreq_ppid",
	"srreq_args"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0 = {
	"sr_request",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_types_sr_request_0_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_names_sr_request_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_sr_request_0_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_sr_request_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_sr_request_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_sr_request_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0
};

const MR_Integer mercury_data_transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_sr_request_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0)),
	"transform_hlds.ctgc.structure_reuse.indirect",
	"sr_request",
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_sr_request_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_sr_request_0 },
	1,
	4,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_sr_request_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
	&mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_fixpoint_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_0_0)),
	"transform_hlds.ctgc.structure_reuse.indirect",
	"sr_fixpoint_table",
	{ 0 },
	{ (void *)&mercury_data_transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_background_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_background_info_0_0[] = {
	"module_info",
	"pred_proc_id",
	"pred_info",
	"proc_info",
	"sharing_table",
	"reuse_table",
	"headvars",
	"max_conditions",
	"very_verbose",
	"debug_indirect"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0 = {
	"ir_background_info",
	10,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_background_info_0_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_background_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_background_info_0_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_background_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_background_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_background_info_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0
};

const MR_Integer mercury_data_transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_background_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0)),
	"transform_hlds.ctgc.structure_reuse.indirect",
	"ir_background_info",
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_background_info_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_background_info_0 },
	1,
	4,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_background_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_status_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_status_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_analysis_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0,
	(MR_PseudoTypeInfo) &mercury_data_analysis__type_ctor_info_analysis_status_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0
};

const MR_ConstString mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_analysis_info_0_0[] = {
	"sharing_as",
	"reuse_as",
	"analysis_status",
	"static_vars",
	"fptable",
	"dep_procs",
	"requests",
	"inter_requests"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0 = {
	"ir_analysis_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_analysis_info_0_0,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_analysis_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_analysis_info_0_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_analysis_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_analysis_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_analysis_info_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0
};

const MR_Integer mercury_data_transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_analysis_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0)),
	"transform_hlds.ctgc.structure_reuse.indirect",
	"ir_analysis_info",
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_analysis_info_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_analysis_info_0 },
	1,
	4,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_analysis_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_dep_procs_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__indirect__dep_procs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__dep_procs_0_0)),
	"transform_hlds.ctgc.structure_reuse.indirect",
	"dep_procs",
	{ 0 },
	{ (void *)&mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0 = {
	"allow_conditional_reuse",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1 = {
	"ignore_conditional_reuse",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__indirect__enum_value_ordered_conditional_reuse_handling_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0,
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__structure_reuse__indirect__enum_name_ordered_conditional_reuse_handling_0[] = {
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0,
	&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1
};

const MR_Integer mercury_data_transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_conditional_reuse_handling_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_conditional_reuse_handling_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__structure_reuse__indirect__conditional_reuse_handling_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__conditional_reuse_handling_0_0)),
	"transform_hlds.ctgc.structure_reuse.indirect",
	"conditional_reuse_handling",
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__indirect__enum_name_ordered_conditional_reuse_handling_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__structure_reuse__indirect__enum_value_ordered_conditional_reuse_handling_0 },
	2,
	4,
	mercury_data_transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_conditional_reuse_handling_0
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"indirect_reuse_analyse_scc",
12,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
115,
"d1;c11;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"indirect_reuse_rerun_analyse_scc",
12,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
155,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"indirect_reuse_analyse_pred_proc",
13,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
208,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"get_reuse_as",
3,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
1185,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"update_reuse_in_table",
4,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
139,
"d1;c13;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"lambda_structure_reuse_indirect_m_188",
3,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
188,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_2 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"get_reuse_as",
3,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
1185,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_3 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"update_reuse_in_table",
4,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
179,
"d1;c13;e;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"ir_analysis_info_lub",
4,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
411,
"d1;c6;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.datastruct",
"transform_hlds.ctgc.datastruct",
"datastruct_init",
2,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
927,
"d1;c23;d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"indirect_reuse_analyse_goal",
5,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
461,
"d1;c10;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"indirect_reuse_analyse_disj",
7,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
504,
"d1;c10;d5;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_3 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.indirect",
"transform_hlds.ctgc.structure_reuse.indirect",
"indirect_reuse_analyse_case",
7,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
512,
"d1;c10;d6;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.structure_reuse.domain",
"transform_hlds.ctgc.structure_reuse.domain",
"reuse_as_and_status_subsumed_by",
4,
0
},
"transform_hlds.ctgc.structure_reuse.indirect",
"structure_reuse.indirect.m",
1198,
"d1;c7;"
};


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module0)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__indirect__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__indirect__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("structure_reuse.indirect.m", 26);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_maybe_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(list__foldl5_12_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module1)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0);
	MR_init_label7(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0,2,3,6,8,9,10,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_maybe_dependency_info_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r6 = MR_r5;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_sv(6);
	MR_r13 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl5_12_0);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("structure_reuse.indirect.m", 26);
	MR_r2 = (MR_Word) MR_string_const("No dependency information.", 26);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module2)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0);
	MR_init_label4(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0,2,3,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r6 = MR_r5;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(6);
	MR_r12 = MR_tempr1;
	MR_r13 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl5_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0);
MR_decl_entry(transform_hlds__ctgc__fixpoint_table__new_run_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module3)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0);
	MR_init_label5(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0,17,6,8,7,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr7 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr7;
	MR_tempr8 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr8;
	MR_sv(1) = MR_tempr7;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr3 = MR_r5;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_tempr4 = MR_r6;
	MR_r6 = MR_r5;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr6 = MR_r8;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_r12 = MR_tempr5;
	MR_r13 = MR_tempr6;
	}
	MR_np_call_localret_ent(list__foldl5_12_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__ctgc__fixpoint_table__new_run_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0_i17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0);
MR_decl_entry(fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module4)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0);
	MR_init_label5(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0,4,2,7,8,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_tempr4 = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0);
	MR_tfield(0, MR_tempr5, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr5, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_tempr5;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module5)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_0);
	MR_init_label1(transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bimap__forward_map_1_0);
MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module6)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0,4,2,6,8,9,11,12,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_tempr4 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__bimap__forward_map_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_table);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(fn__parse_tree__prog_type__remove_typeinfo_vars_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module7)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0);
	MR_init_label7(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0)
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
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0_i2);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0_i3);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__remove_typeinfo_vars_2_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0_i4);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0_i5);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 381;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0_i6);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 37;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0_i7);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 68;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0_i8);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module8)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0);
	MR_init_label3(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0,2,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0_i2);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0_i3);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0_i5);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module9)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0);
	MR_init_label2(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0,14,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0_i14);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_4_0);
MR_decl_entry(fn__analysis__lub_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__set__union_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module10)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0);
	MR_init_label7(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0,2,3,4,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_r4 = MR_ctfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_sv(7), 1);
	MR_r4 = MR_ctfield(0, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(7), 2);
	MR_r2 = MR_ctfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(fn__analysis__lub_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_ctfield(0, MR_sv(7), 3);
	MR_r4 = MR_ctfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers);
	MR_r2 = MR_ctfield(0, MR_sv(7), 5);
	MR_r3 = MR_ctfield(0, MR_sv(1), 5);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request);
	MR_r2 = MR_ctfield(0, MR_sv(7), 6);
	MR_r3 = MR_ctfield(0, MR_sv(1), 6);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request);
	MR_r2 = MR_ctfield(0, MR_sv(7), 7);
	MR_r3 = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_sv(7), 4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module11)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0);
	MR_init_label4(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0,3,5,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r5 = MR_ctfield(0, MR_r1, 9);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("\tsharing is now top\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_8_0);
MR_decl_entry(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0);
MR_decl_entry(fn__transform_hlds__ctgc__livedata__livedata_project_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_lfu_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_lbu_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_datastruct_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module12)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,2,3,4,6,7,8,9,10)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,11,14,15,16,17,19,13,21)
	MR_init_label2(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_8_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__livedata__livedata_init_at_goal_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__livedata__livedata_project_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i13);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lfu_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_lbu_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, datastruct);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_ctfield(0, MR_sv(1), 6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i21);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(1));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i24);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0_i24);
	}
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(14);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_const_mask_field(MR_sv(1), 0);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_reuse_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_out__write_pred_proc_id_4_0);
MR_decl_entry(parse_tree__prog_out__write_context_3_0);
MR_decl_entry(io__write_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_reuse_description_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_vars_5_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module13)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,4,5,6,7,8,9,10,11)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,13,14,15,16,19,20,18,34)
	MR_init_label1(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 9);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i36);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_reuse_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tcall to ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_proc_id_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\tfrom ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__write_context_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\twith NoClobbers = ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\t\treuse: ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, reuse_description);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(io__write_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\t\treason: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i18);
	}
	MR_sv(1) = MR_ctfield(1, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_string_const("reuse_is_unsafe(", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i34);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, verify_indirect_reuse_reason);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(io__write_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0_i34);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module14)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0);
	MR_init_label4(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0,22,4,7,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(fn__set__insert_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module15)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,2,3,8,6,12,5,14,15)
	MR_init_label2(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,17,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0_i6);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0_i5);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request);
	MR_r2 = MR_ctfield(0, MR_sv(5), 6);
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 298;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request);
	MR_r2 = MR_ctfield(0, MR_sv(5), 7);
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module16)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module17)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0);
	MR_init_label3(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0,3,2,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0_i3);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0_i5);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_not_external_1_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module18)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0,3,2,6,8,11,12,16,19)
	MR_init_label1(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 0);
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__analysis__lub_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = MR_ctfield(0, MR_sv(5), 2);
	MR_np_call_localret_ent(fn__analysis__lub_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_not_external_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers);
	MR_r2 = MR_ctfield(0, MR_sv(5), 5);
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module19)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0);
	MR_init_label3(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0,3,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0_i2);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("structure_reuse.indirect.m", 26);
	MR_r2 = (MR_Word) MR_string_const("lookup_reuse_as", 15);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_reuse_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module20)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,2,5,7,3,10,12,16,17)
	MR_init_label7(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,8,21,23,24,20,19,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r4 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_6_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i8);
	}
	MR_r1 = MR_ctfield(0, MR_sv(8), 1);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(4) = MR_tempr1;
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 1);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r1 = MR_sv(8);
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i19);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i21);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 2);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i24);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0_i27);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__sort_and_remove_dups_1_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module21)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,2,5,7,8,9,11,13,15)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,10,17,16,20,22,24,3,31)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,33,37,29,40,42,46,47,39)
	MR_init_label1(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r6;
	MR_sv(7) = MR_tempr2;
	MR_tempr3 = MR_r7;
	MR_sv(8) = MR_tempr3;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(2);
	MR_tempr1 = MR_r5;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i3);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__sort_and_remove_dups_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__add_request_6_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i22);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i24);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i24);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_sv(1) = MR_r4;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i47);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i31);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i29);
	}
	MR_r1 = MR_ctfield(0, MR_sv(8), 1);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i33);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(4) = MR_tempr1;
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i37);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 3);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i47);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i40);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_r3 = MR_ctfield(0, MR_sv(8), 1);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i42);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(4) = MR_tempr1;
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reuse_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i46);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 4);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i47);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__indirect__this_file_0_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0_i48);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("verify_indirect_reuse_conditional: unknown NewReuseAs", 53);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module22)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,2,15,14,18,19,12,4,6)
	MR_init_label6(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,5,9,10,3,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 4);
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(11) = MR_tempr3;
	MR_sv(12) = MR_r3;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_reuse_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i4);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i12);
	}
	MR_sv(11) = MR_ctfield(0, MR_sv(1), 7);
	MR_r1 = MR_ctfield(0, MR_sv(12), 1);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_r1 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_r7 = MR_sv(12);
	MR_r5 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i18);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_r1 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_r7 = MR_sv(12);
	MR_r5 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_r4;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r9 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r10 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_tempr2;
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i3);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_r8 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_sv(11);
	MR_sv(4) = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i3);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_ctfield(0, MR_sv(1), 7);
	MR_r1 = MR_ctfield(0, MR_sv(12), 1);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_r1 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_r5 = (MR_Integer) 1;
	MR_r7 = MR_sv(12);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i9);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_r1 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_sv(12);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_r4;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r8;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i26);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0_i27);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__context_to_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module23)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,4,5,6,7,3,11,13,16)
	MR_init_label6(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,15,18,19,20,21,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (!(((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_out__context_to_string_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("generic call (", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_sv(6), 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_r6;
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i11);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i15);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_out__context_to_string_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("generic call (", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i21);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_sv(6), 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_0);
MR_decl_entry(transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__map2_foldl_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module24)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,85,95,53,59,71,79,50,51)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,48,73,96,97,78,98,5,6)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,7,99,10,100,16,17,103,23)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,24,26,27,30,102,34,104,38)
	MR_init_label3(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,101,43,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i95) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i96) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i97) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i78));
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r6 = MR_ctfield(0, MR_r4, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i53) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i79) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i79) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i71));
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r6;
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	if (MR_INT_NE(MR_tag(MR_r4),1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i79);
	}
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 3);
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_tempr1;
	MR_sv(8) = MR_tempr3;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_ctfield(0, MR_r3, 3);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i59);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tempr2;
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i48);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r6, 0),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i50);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(8) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(1), 3);
	MR_r4 = MR_ctfield(0, MR_sv(8), 1);
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r6;
	MR_r5 = MR_ctfield(0, MR_sv(3), 0);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i48);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_r6;
	MR_sv(8) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__indirect__this_file_0_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i51);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("complicated unification in indirect structure sharing analysis.", 63);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i48);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i73);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(2, MR_tempr2, 1);
	MR_r4 = MR_ctfield(2, MR_r4, 2);
	MR_r5 = MR_ctfield(0, MR_sv(8), 1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i98) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i99) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i100) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i101) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i30) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i102) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i103) MR_AND
		MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i104));
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(3, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(3, MR_tempr2, 3);
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 4);
	MR_tempr4 = MR_r2;
	MR_sv(8) = MR_tempr4;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_sv(9), 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i6);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i85);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	MR_tempr4 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info);
	MR_tempr3 = MR_tempr4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_tempr3, 2);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i10);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,10)
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
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_sv(1) = MR_tempr3;
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	MR_sv(9) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info);
	MR_tempr2 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r6 = MR_ctfield(3, MR_tempr2, 1);
	MR_r7 = MR_ctfield(0, MR_sv(9), 4);
	}
	MR_np_call_localret_ent(list__map2_foldl_6_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i16);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i17);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(9) = MR_r3;
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i23);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i24);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i26);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i27);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i34);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,34)
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
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__indirect__this_file_0_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i38);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("indirect_reuse_analyse_goal: shorthand", 38);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_sv(1) = MR_tempr3;
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	MR_tempr5 = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_tempr5, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(9) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, ir_analysis_info);
	MR_tempr2 = MR_tempr5;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r6 = MR_ctfield(3, MR_tempr2, 3);
	MR_r7 = MR_ctfield(0, MR_sv(9), 4);
	}
	MR_np_call_localret_ent(list__map2_foldl_6_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i43);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0_i44);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__ctgc__fixpoint_table__which_run_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module25)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__transform_hlds__ctgc__fixpoint_table__which_run_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__structure_reuse__domain__reuse_as_and_status_subsumed_by_4_0);
MR_decl_entry(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module26)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__structure_reuse__domain__reuse_as_and_status_subsumed_by_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_np_tailcall_ent(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__ctgc__fixpoint_table__is_recursive_1_0);
MR_decl_entry(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_0);
MR_decl_entry(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module27)
	MR_init_entry1(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0);
	MR_init_label7(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0,3,2,5,7,9,6,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__ctgc__fixpoint_table__is_recursive_1_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0_i3);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0_i2);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_string_const("(rec)", 5);
	MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0_i5);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_string_const("(non-rec)", 9);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_np_call_localret_ent(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0_i7);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0_i6);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0_i9);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0_i11);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_string_const("-", 1);
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0_i11);
MR_def_label(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);
MR_decl_entry(hlds__hlds_out__write_pred_proc_id_pair_5_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_5_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module28)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0);
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,2,3,4,5,9,8,12,13)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,14,15,7,18,19,20,21,22)
	MR_init_label8(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,26,25,29,30,31,32,33,34)
	MR_init_label7(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,35,36,24,39,40,41,42)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 37;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 68;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i5);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i9);
	}
	MR_sv(8) = MR_r1;
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i8);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i7);
	}
	MR_sv(8) = MR_r1;
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Indirect reuse analysis (run ", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i12);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__write_int_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i13);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i14);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_proc_id_pair_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i15);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i7);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i18);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i19);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i20);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i21);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i22);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 6);
	MR_r3 = MR_ctfield(0, MR_tempr1, 5);
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i25);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% FPT: ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i29);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i30);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i31);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i32);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i33);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Number of conditions: ", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i34);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i35);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i36);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(9);
	MR_r5 = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i39);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r5 = MR_sv(11);
	}
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i40);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i41);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0_i42);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(10);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module29)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0);
	MR_init_label3(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0_i2);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module30)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_0);
	MR_init_label1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r4;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r2, 4);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module31)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_0);
	MR_init_label1(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r4;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_r2 = MR_ctfield(0, MR_tempr3, 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_0,
		transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r2, 4);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module32)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__indirect__conditional_reuse_handling_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__conditional_reuse_handling_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module33)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__indirect__conditional_reuse_handling_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__conditional_reuse_handling_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module34)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__indirect__dep_procs_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__dep_procs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module35)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__indirect__dep_procs_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__dep_procs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___transform_hlds__ctgc__structure_sharing__domain__sharing_as_0_0);
MR_decl_entry(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0);
MR_decl_entry(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module36)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0);
	MR_init_label8(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,4,6,9,11,13,15,19,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i19);
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
	MR_np_call_localret_ent(__Unify___transform_hlds__ctgc__structure_sharing__domain__sharing_as_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i9);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i11);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i13);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i15);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___transform_hlds__ctgc__structure_sharing__domain__sharing_as_0_0);
MR_decl_entry(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0);
MR_decl_entry(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module37)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0);
	MR_init_label8(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,3,2,5,9,13,18,22,26)
	MR_init_label2(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,30,70)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___transform_hlds__ctgc__structure_sharing__domain__sharing_as_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i70);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i70);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i70);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i18);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i70);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i22);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i70);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i26);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i70);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i30);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0_i70);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__indirect, sr_request);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__proc_info_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module38)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0);
	MR_init_label8(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,4,6,8,10,12,14,17,19)
	MR_init_label1(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i19);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
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
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(18) = MR_ctfield(0, MR_tempr2, 9);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_info_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__proc_info_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as_and_status);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i12);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i14);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i17);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(16))) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i1);
	}
	MR_r1 = (MR_sv(9) == MR_sv(18));
	MR_decr_sp_and_return(19);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module39)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0);
	MR_init_label8(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label4(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,30,34,38,86)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i3);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i86);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i86);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_info_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i86);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__proc_info_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i86);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_sharing__domain, sharing_as_and_status);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i86);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i25);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i86);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i30);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i86);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i34);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i86);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i38);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0_i86);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module40)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module41)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, reuse_as_and_status);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module42)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0);
	MR_init_label3(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0_i4);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module43)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0);
	MR_init_label4(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0_i2);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0_i5);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module44)
	MR_init_entry1(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0);
	MR_init_label3(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,9,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module45)
	MR_init_entry1(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0);
	MR_init_label8(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,50,57,5,14,23,32,41,45)
	MR_init_label2(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,46,47)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i50);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i14) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i23) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i32));
	}
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i57);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46));
	}
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i47);
	}
	MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46);
	}
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i47) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46));
	}
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i47) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46));
	}
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),4)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i47);
	}
	MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45);
	}
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i47) MR_AND
		MR_LABEL_AP(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0_i46));
	}
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(list__member_2_1);
MR_decl_entry(map__member_3_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__ctgc__structure_reuse__indirect_module46)
	MR_init_entry1(transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0);
	MR_init_label3(transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0,1,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred transform_hlds.ctgc.structure_reuse.indirect.IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1/3-0", 3,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0_i1);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_fv(3), 0, (MR_Integer) 2);
	MR_tfield(0, MR_fv(3), 0) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__structure_reuse__domain, ppid_no_clobbers);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_fv(1);
	MR_np_call_localret_ent(map__member_3_0,
		transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0_i3);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_fv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_fv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0_i4);
MR_def_label(transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__188__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__structure_reuse__indirect_maybe_bunch_0(void)
{
	transform_hlds__ctgc__structure_reuse__indirect_module0();
	transform_hlds__ctgc__structure_reuse__indirect_module1();
	transform_hlds__ctgc__structure_reuse__indirect_module2();
	transform_hlds__ctgc__structure_reuse__indirect_module3();
	transform_hlds__ctgc__structure_reuse__indirect_module4();
	transform_hlds__ctgc__structure_reuse__indirect_module5();
	transform_hlds__ctgc__structure_reuse__indirect_module6();
	transform_hlds__ctgc__structure_reuse__indirect_module7();
	transform_hlds__ctgc__structure_reuse__indirect_module8();
	transform_hlds__ctgc__structure_reuse__indirect_module9();
	transform_hlds__ctgc__structure_reuse__indirect_module10();
	transform_hlds__ctgc__structure_reuse__indirect_module11();
	transform_hlds__ctgc__structure_reuse__indirect_module12();
	transform_hlds__ctgc__structure_reuse__indirect_module13();
	transform_hlds__ctgc__structure_reuse__indirect_module14();
	transform_hlds__ctgc__structure_reuse__indirect_module15();
	transform_hlds__ctgc__structure_reuse__indirect_module16();
	transform_hlds__ctgc__structure_reuse__indirect_module17();
	transform_hlds__ctgc__structure_reuse__indirect_module18();
	transform_hlds__ctgc__structure_reuse__indirect_module19();
	transform_hlds__ctgc__structure_reuse__indirect_module20();
	transform_hlds__ctgc__structure_reuse__indirect_module21();
	transform_hlds__ctgc__structure_reuse__indirect_module22();
	transform_hlds__ctgc__structure_reuse__indirect_module23();
	transform_hlds__ctgc__structure_reuse__indirect_module24();
	transform_hlds__ctgc__structure_reuse__indirect_module25();
	transform_hlds__ctgc__structure_reuse__indirect_module26();
	transform_hlds__ctgc__structure_reuse__indirect_module27();
	transform_hlds__ctgc__structure_reuse__indirect_module28();
	transform_hlds__ctgc__structure_reuse__indirect_module29();
	transform_hlds__ctgc__structure_reuse__indirect_module30();
	transform_hlds__ctgc__structure_reuse__indirect_module31();
	transform_hlds__ctgc__structure_reuse__indirect_module32();
	transform_hlds__ctgc__structure_reuse__indirect_module33();
	transform_hlds__ctgc__structure_reuse__indirect_module34();
	transform_hlds__ctgc__structure_reuse__indirect_module35();
	transform_hlds__ctgc__structure_reuse__indirect_module36();
	transform_hlds__ctgc__structure_reuse__indirect_module37();
	transform_hlds__ctgc__structure_reuse__indirect_module38();
	transform_hlds__ctgc__structure_reuse__indirect_module39();
}

static void mercury__transform_hlds__ctgc__structure_reuse__indirect_maybe_bunch_1(void)
{
	transform_hlds__ctgc__structure_reuse__indirect_module40();
	transform_hlds__ctgc__structure_reuse__indirect_module41();
	transform_hlds__ctgc__structure_reuse__indirect_module42();
	transform_hlds__ctgc__structure_reuse__indirect_module43();
	transform_hlds__ctgc__structure_reuse__indirect_module44();
	transform_hlds__ctgc__structure_reuse__indirect_module45();
	transform_hlds__ctgc__structure_reuse__indirect_module46();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__structure_reuse__indirect__init(void);
void mercury__transform_hlds__ctgc__structure_reuse__indirect__init_type_tables(void);
void mercury__transform_hlds__ctgc__structure_reuse__indirect__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__structure_reuse__indirect__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__structure_reuse__indirect__init_complexity_procs(void);
#endif

void mercury__transform_hlds__ctgc__structure_reuse__indirect__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__structure_reuse__indirect_maybe_bunch_0();
	mercury__transform_hlds__ctgc__structure_reuse__indirect_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_verify_indirect_reuse_reason_0,
		transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_reason_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0,
		transform_hlds__ctgc__structure_reuse__indirect__sr_request_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_fixpoint_table_0,
		transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0,
		transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0,
		transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_dep_procs_0,
		transform_hlds__ctgc__structure_reuse__indirect__dep_procs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_conditional_reuse_handling_0,
		transform_hlds__ctgc__structure_reuse__indirect__conditional_reuse_handling_0_0);
	mercury__transform_hlds__ctgc__structure_reuse__indirect__init_debugger();
}

void mercury__transform_hlds__ctgc__structure_reuse__indirect__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_verify_indirect_reuse_reason_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_fixpoint_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_dep_procs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_conditional_reuse_handling_0);
	}
}


void mercury__transform_hlds__ctgc__structure_reuse__indirect__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__structure_reuse__indirect__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__ctgc__structure_reuse__indirect);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__structure_reuse__indirect__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
