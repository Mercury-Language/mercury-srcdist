/*
** Automatically generated from `modes.m'
** by the Mercury compiler,
** version rotd-2011-09-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__modes__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "check_hlds.modes.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "check_hlds.modes.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "check_hlds.modes.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "check_hlds.modes.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.modes.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.modes.c"
#line 49 "check_hlds.modes.c"
#include "check_hlds.modes.mh"

#line 52 "check_hlds.modes.c"
#line 53 "check_hlds.modes.c"
#ifndef CHECK_HLDS__MODES_DECL_GUARD
#define CHECK_HLDS__MODES_DECL_GUARD

#line 57 "check_hlds.modes.c"
#line 58 "check_hlds.modes.c"

#endif
#line 61 "check_hlds.modes.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[11];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__modes__type_ctor_info_clause_form_0,
	mercury_data_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0;
MR_decl_label10(check_hlds__modes__check_final_insts_12_0, 133,2,10,12,15,13,18,20,22,24)
MR_decl_label10(check_hlds__modes__check_final_insts_12_0, 26,17,31,30,35,34,39,41,28,6)
MR_decl_label10(check_hlds__modes__check_pred_modes_6_0, 2,3,4,5,10,12,13,9,15,16)
MR_decl_label5(check_hlds__modes__check_pred_modes_6_0, 7,17,18,19,20)
MR_decl_label10(check_hlds__modes__copy_pred_body_4_0, 2,4,5,3,7,8,9,10,13,14)
MR_decl_label4(check_hlds__modes__copy_proc_body_4_0, 2,3,4,5)
MR_decl_label10(check_hlds__modes__do_modecheck_proc_body_14_0, 2,3,4,5,6,7,8,12,15,14)
MR_decl_label10(check_hlds__modes__do_modecheck_proc_body_14_0, 21,22,25,26,28,29,32,31,34,35)
MR_decl_label10(check_hlds__modes__do_modecheck_proc_body_14_0, 40,39,45,37,47,48,49,51,52,53)
MR_decl_label10(check_hlds__modes__do_modecheck_proc_body_14_0, 54,57,59,60,61,62,58,65,66,56)
MR_decl_label10(check_hlds__modes__do_modecheck_proc_body_14_0, 69,36,71,72,73,74,9,10,76,78)
MR_decl_label3(check_hlds__modes__do_modecheck_proc_body_14_0, 80,81,82)
MR_decl_label4(check_hlds__modes__maybe_clobber_insts_3_0, 3,10,12,8)
MR_decl_label10(check_hlds__modes__maybe_modecheck_pred_9_0, 2,3,9,7,13,11,15,16,4,18)
MR_decl_label10(check_hlds__modes__maybe_modecheck_pred_9_0, 20,23,19,25,26,27,30,35,36,34)
MR_decl_label10(check_hlds__modes__maybe_modecheck_pred_9_0, 39,29,41,42,43,44,45,46,47,48)
MR_decl_label4(check_hlds__modes__maybe_modecheck_pred_9_0, 50,51,52,53)
MR_decl_label10(check_hlds__modes__maybe_modecheck_proc_9_0, 2,3,5,6,7,8,9,10,11,12)
MR_decl_label10(check_hlds__modes__maybe_modecheck_proc_9_0, 13,16,15,14,17,19,20,21,22,23)
MR_decl_label10(check_hlds__modes__maybe_modecheck_proc_9_0, 24,25,27,26,29,30,31,32,34,35)
MR_decl_label10(check_hlds__modes__maybe_modecheck_proc_9_0, 37,38,39,33,40,44,46,48,45,49)
MR_decl_label10(check_hlds__modes__maybe_modecheck_proc_9_0, 51,52,53,42,54,55,56,57,58,59)
MR_decl_label10(check_hlds__modes__maybe_modecheck_proc_9_0, 60,61,62,63,64,82,66,65,68,69)
MR_decl_label5(check_hlds__modes__maybe_modecheck_proc_9_0, 70,71,72,73,74)
MR_decl_label5(check_hlds__modes__modecheck_clause_disj_8_0, 2,3,4,5,6)
MR_decl_label10(check_hlds__modes__modecheck_clause_switch_9_0, 2,3,4,5,8,10,11,6,12,14)
MR_decl_label2(check_hlds__modes__modecheck_clause_switch_9_0, 15,16)
MR_decl_label10(check_hlds__modes__modecheck_final_insts_8_0, 2,3,6,5,7,4,8,9,11,14)
MR_decl_label10(check_hlds__modes__modecheck_final_insts_8_0, 13,15,16,17,18,19,20,21,22,26)
MR_decl_label1(check_hlds__modes__modecheck_final_insts_8_0, 27)
MR_decl_label1(check_hlds__modes__modecheck_lambda_final_insts_6_0, 2)
MR_decl_label6(check_hlds__modes__modecheck_module_2_0, 2,3,4,5,7,8)
MR_decl_label1(check_hlds__modes__modecheck_proc_6_0, 2)
MR_decl_label1(check_hlds__modes__modecheck_proc_general_8_0, 2)
MR_decl_label4(check_hlds__modes__modecheck_procs_10_0, 11,3,4,5)
MR_decl_label10(check_hlds__modes__modecheck_queued_procs_7_0, 2,3,5,7,8,9,11,13,14,70)
MR_decl_label10(check_hlds__modes__modecheck_queued_procs_7_0, 16,18,20,21,15,23,24,25,26,27)
MR_decl_label10(check_hlds__modes__modecheck_queued_procs_7_0, 28,29,30,31,32,33,34,38,39,40)
MR_decl_label10(check_hlds__modes__modecheck_queued_procs_7_0, 41,42,43,44,45,46,47,48,49,50)
MR_decl_label10(check_hlds__modes__modecheck_queued_procs_7_0, 52,53,54,55,56,57,58,59,60,61)
MR_decl_label7(check_hlds__modes__modecheck_queued_procs_7_0, 36,62,10,64,65,66,4)
MR_decl_label10(check_hlds__modes__modecheck_to_fixpoint_8_0, 85,2,5,6,7,8,9,10,12,16)
MR_decl_label10(check_hlds__modes__modecheck_to_fixpoint_8_0, 17,15,41,62,43,44,45,46,42,50)
MR_decl_label6(check_hlds__modes__modecheck_to_fixpoint_8_0, 51,49,52,55,56,14)
MR_decl_label10(check_hlds__modes__only_fully_in_out_modes_2_0, 42,4,8,6,10,15,14,17,2,1)
MR_decl_label6(check_hlds__modes__only_nonunique_modes_2_0, 24,4,5,7,2,1)
MR_decl_label6(check_hlds__modes__pred_check_eval_methods_4_0, 13,3,4,5,6,7)
MR_decl_label10(check_hlds__modes__proc_check_eval_methods_5_0, 199,3,4,5,6,8,12,14,15,16)
MR_decl_label10(check_hlds__modes__proc_check_eval_methods_5_0, 18,19,7,39,43,45,46,47,49,50)
MR_decl_label10(check_hlds__modes__proc_check_eval_methods_5_0, 38,68,70,72,74,81,82,84,85,88)
MR_decl_label9(check_hlds__modes__proc_check_eval_methods_5_0, 89,91,93,92,95,96,77,98,69)
MR_decl_label7(check_hlds__modes__unique_modecheck_clause_disj_11_0, 2,3,4,5,6,7,8)
MR_decl_label10(check_hlds__modes__unique_modecheck_clause_switch_9_0, 2,3,4,5,8,10,7,11,12,13)
MR_decl_label3(check_hlds__modes__unique_modecheck_clause_switch_9_0, 14,15,16)
MR_decl_label4(__Unify___check_hlds__modes__clause_form_0_0, 18,5,10,1)
MR_decl_label8(__Compare___check_hlds__modes__clause_form_0_0, 3,2,7,5,10,12,16,54)
MR_decl_static(check_hlds__modes__maybe_clobber_insts_3_0)
MR_decl_static(check_hlds__modes__check_final_insts_12_0)
MR_decl_static(check_hlds__modes__modecheck_final_insts_8_0)
MR_decl_static(check_hlds__modes__do_modecheck_proc_body_14_0)
MR_decl_static(check_hlds__modes__maybe_modecheck_proc_9_0)
MR_def_extern_entry(check_hlds__modes__modecheck_proc_general_8_0)
MR_def_extern_entry(check_hlds__modes__modecheck_proc_6_0)
MR_decl_static(check_hlds__modes__modecheck_queued_procs_7_0)
MR_decl_static(check_hlds__modes__modecheck_to_fixpoint_8_0)
MR_decl_static(check_hlds__modes__only_fully_in_out_modes_2_0)
MR_decl_static(check_hlds__modes__only_nonunique_modes_2_0)
MR_decl_static(check_hlds__modes__proc_check_eval_methods_5_0)
MR_decl_static(check_hlds__modes__pred_check_eval_methods_4_0)
MR_def_extern_entry(check_hlds__modes__check_pred_modes_6_0)
MR_def_extern_entry(check_hlds__modes__modecheck_module_2_0)
MR_def_extern_entry(check_hlds__modes__modecheck_lambda_final_insts_6_0)
MR_decl_static(check_hlds__modes__copy_pred_body_4_0)
MR_decl_static(check_hlds__modes__copy_proc_body_4_0)
MR_decl_static(check_hlds__modes__modecheck_procs_10_0)
MR_decl_static(check_hlds__modes__maybe_modecheck_pred_9_0)
MR_decl_static(check_hlds__modes__modecheck_clause_disj_8_0)
MR_decl_static(check_hlds__modes__modecheck_clause_switch_9_0)
MR_decl_static(check_hlds__modes__unique_modecheck_clause_disj_11_0)
MR_decl_static(check_hlds__modes__unique_modecheck_clause_switch_9_0)
MR_decl_static(__Unify___check_hlds__modes__clause_form_0_0)
MR_decl_static(__Compare___check_hlds__modes__clause_form_0_0)
MR_def_extern_entry(__Unify___check_hlds__modes__modes_safe_to_continue_0_0)
MR_def_extern_entry(__Compare___check_hlds__modes__modes_safe_to_continue_0_0)
MR_decl_static(check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__996__1_2_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
1,
3,
MR_tbmkword(0, 0)
},
{
1,
1,
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bag__type_ctor_info_bag_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const struct mercury_type_1 mercury_common_1[26] =
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(1,1)
}
},
{
{
MR_CTOR1_ADDR(bag, bag),
MR_COMMON(1,1)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
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
MR_TAG_COMMON(3,8,5),
MR_TAG_COMMON(1,1,9)
}
},
{
{
MR_TAG_COMMON(3,8,8),
MR_TAG_COMMON(1,1,9)
}
},
{
{
MR_TAG_COMMON(3,8,7),
MR_TAG_COMMON(1,1,11)
}
},
{
{
MR_TAG_COMMON(3,8,9),
MR_TAG_COMMON(1,1,9)
}
},
{
{
MR_TAG_COMMON(3,8,10),
MR_TAG_COMMON(1,1,13)
}
},
{
{
MR_TAG_COMMON(3,8,11),
MR_TAG_COMMON(1,1,14)
}
},
{
{
MR_TAG_COMMON(2,11,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,13),
MR_TAG_COMMON(1,1,9)
}
},
{
{
MR_TAG_COMMON(3,8,7),
MR_TAG_COMMON(1,1,17)
}
},
{
{
MR_TAG_COMMON(3,8,14),
MR_TAG_COMMON(1,1,9)
}
},
{
{
MR_TAG_COMMON(3,8,15),
MR_TAG_COMMON(1,1,19)
}
},
{
{
MR_TAG_COMMON(3,8,16),
MR_TAG_COMMON(1,1,20)
}
},
{
{
MR_TAG_COMMON(3,8,17),
MR_TAG_COMMON(1,1,21)
}
},
{
{
MR_TAG_COMMON(2,11,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,18),
MR_TAG_COMMON(1,1,9)
}
},
{
{
MR_TAG_COMMON(0,11,2),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_2 mercury_common_2[5] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
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
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_mode_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info),
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_9_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_errors, mode_warning_info),
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(1,3),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(1,4),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_how_to_check_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_may_change_called_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_3,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(1,3),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(1,4),
MR_COMMON(1,2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_6,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(1,3),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(1,4),
MR_COMMON(1,2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_8_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(check_hlds__mode_info, how_to_check_goal),
MR_CTOR0_ADDR(check_hlds__mode_info, may_change_called_proc),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_COMMON(1,7),
MR_COMMON(1,7)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_5;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_4,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(1,3),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(1,4),
MR_CTOR0_ADDR(parse_tree__prog_data, determinism),
MR_COMMON(1,5),
MR_COMMON(1,6),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_5,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(1,3),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(1,4),
MR_CTOR0_ADDR(parse_tree__prog_data, determinism),
MR_COMMON(1,5),
MR_COMMON(1,6),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_queued_procs_7_0_1;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_queued_procs_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,7),
MR_COMMON(1,7)
},
};

static const struct mercury_type_8 mercury_common_8[19] =
{
{
4,
MR_string_const("Mode analysis iteration limit exceeded.", 39)
},
{
4,
MR_string_const("You may need to declare the modes explicitly", 44)
},
{
4,
MR_string_const("or use the \140--mode-inference-iteration-limit\' option", 52)
},
{
4,
MR_string_const("to increase the limit.", 22)
},
{
4,
MR_string_const("(The current limit is", 21)
},
{
4,
MR_string_const("iterations.)", 12)
},
{
4,
MR_string_const("Sorry, not implemented:", 23)
},
{
4,
MR_string_const("declaration not allowed for procedure", 37)
},
{
4,
MR_string_const("with partially instantiated modes.", 34)
},
{
4,
MR_string_const("is not currently implemented.", 29)
},
{
4,
MR_string_const("with partially instantiated modes", 33)
},
{
4,
MR_string_const("Tabling of predicates/functions", 31)
},
{
4,
MR_string_const("Error:", 6)
},
{
4,
MR_string_const("with unique modes.", 18)
},
{
4,
MR_string_const("in them no longer being unique.", 31)
},
{
4,
MR_string_const("of the unique arguments which would result", 42)
},
{
4,
MR_string_const("is not allowed as this would lead to a copying", 46)
},
{
4,
MR_string_const("Tabling of predicates/functions with unique modes", 49)
},
{
4,
MR_string_const("Error: main/2 must have mode \140(di, uo)\'.", 40)
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__copy_pred_body_4_0_1;
static const struct mercury_type_10 mercury_common_10[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_8_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,1),
MR_INT_CTOR_ADDR,
MR_COMMON(2,1),
MR_COMMON(2,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__copy_pred_body_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_INT_CTOR_ADDR,
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
};

static const struct mercury_type_11 mercury_common_11[3] =
{
{
MR_TAG_COMMON(1,1,15)
},
{
MR_TAG_COMMON(1,1,22)
},
{
MR_TAG_COMMON(1,1,24)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__modes__field_types_clause_form_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_0 = {
	"clause_disj",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__modes__field_types_clause_form_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_can_fail_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_case_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_can_fail_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__modes__field_types_clause_form_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_can_fail_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_1 = {
	"clause_switch",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__modes__field_types_clause_form_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_stag_ordered_clause_form_0_0[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_stag_ordered_clause_form_0_1[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__modes__du_ptag_ordered_clause_form_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__modes__du_stag_ordered_clause_form_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__modes__du_stag_ordered_clause_form_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_name_ordered_clause_form_0[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_0,
	&mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_1
};

const MR_Integer mercury_data_check_hlds__modes__functor_number_map_clause_form_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modes__type_ctor_info_clause_form_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modes__clause_form_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modes__clause_form_0_0)),
	"check_hlds.modes",
	"clause_form",
	{ (void *)mercury_data_check_hlds__modes__du_name_ordered_clause_form_0 },
	{ (void *)mercury_data_check_hlds__modes__du_ptag_ordered_clause_form_0 },
	2,
	4,
	mercury_data_check_hlds__modes__functor_number_map_clause_form_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0 = {
	"modes_safe_to_continue",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1 = {
	"modes_unsafe_to_continue",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0[] = {
	&mercury_data_check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
	&mercury_data_check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0[] = {
	&mercury_data_check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_0,
	&mercury_data_check_hlds__modes__enum_functor_desc_modes_safe_to_continue_0_1
};

const MR_Integer mercury_data_check_hlds__modes__functor_number_map_modes_safe_to_continue_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modes__modes_safe_to_continue_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modes__modes_safe_to_continue_0_0)),
	"check_hlds.modes",
	"modes_safe_to_continue",
	{ (void *)mercury_data_check_hlds__modes__enum_name_ordered_modes_safe_to_continue_0 },
	{ (void *)mercury_data_check_hlds__modes__enum_value_ordered_modes_safe_to_continue_0 },
	2,
	4,
	mercury_data_check_hlds__modes__functor_number_map_modes_safe_to_continue_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__copy_pred_body_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"copy_proc_body",
4,
0
},
"check_hlds.modes",
"modes.m",
388,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_8_0_2 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"copy_pred_body",
4,
0
},
"check_hlds.modes",
"modes.m",
362,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"maybe_modecheck_pred",
9,
0
},
"check_hlds.modes",
"modes.m",
259,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_queued_procs_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"lambda_modes_m_996",
2,
0
},
"check_hlds.modes",
"modes.m",
996,
"48"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_9_0_2 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"mode_warning_info_to_spec",
3,
0
},
"check_hlds.modes",
"modes.m",
674,
"68"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_9_0_1 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"mode_error_info_to_spec",
3,
0
},
"check_hlds.modes",
"modes.m",
654,
"55"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_6 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"unique_modecheck_clause_switch",
9,
0
},
"check_hlds.modes",
"modes.m",
836,
"100"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_5 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"unique_modecheck_clause_disj",
11,
0
},
"check_hlds.modes",
"modes.m",
828,
"92"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_4 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"unique_modecheck_clause_disj",
11,
0
},
"check_hlds.modes",
"modes.m",
828,
"92"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_3 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"modecheck_clause_switch",
9,
0
},
"check_hlds.modes",
"modes.m",
802,
"56"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_2 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"modecheck_clause_disj",
8,
0
},
"check_hlds.modes",
"modes.m",
795,
"48"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__do_modecheck_proc_body_14_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"is_solver_var",
3,
0
},
"check_hlds.modes",
"modes.m",
777,
"30"
};


MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module0)
	MR_init_entry1(check_hlds__modes__maybe_clobber_insts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__maybe_clobber_insts_3_0);
	MR_init_label4(check_hlds__modes__maybe_clobber_insts_3_0,3,10,12,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_clobber_insts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__maybe_clobber_insts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_clobber_insts_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_clobber_insts_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modes__maybe_clobber_insts_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_clobber_insts_3_0_i8);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_clobber_insts_3_0_i10);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(check_hlds__modes__maybe_clobber_insts_3_0,
		check_hlds__modes__maybe_clobber_insts_3_0_i12);
MR_def_label(check_hlds__modes__maybe_clobber_insts_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(check_hlds__modes__maybe_clobber_insts_3_0,
		check_hlds__modes__maybe_clobber_insts_3_0_i12);
MR_def_label(check_hlds__modes__maybe_clobber_insts_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(check_hlds__modes__maybe_clobber_insts_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modes", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modes.maybe_clobber_insts\'/3", 50);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_var_types_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_final_typed_4_0);
MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_any_2_0);
MR_decl_entry(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_solver_init_is_supported_1_0);
MR_decl_entry(check_hlds__modecheck_util__prepend_initialisation_call_7_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_initial_4_0);
MR_decl_entry(parse_tree__set_of_var__init_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_error_4_0);

MR_BEGIN_MODULE(check_hlds__modes_module1)
	MR_init_entry1(check_hlds__modes__check_final_insts_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__check_final_insts_12_0);
	MR_init_label10(check_hlds__modes__check_final_insts_12_0,133,2,10,12,15,13,18,20,22,24)
	MR_init_label10(check_hlds__modes__check_final_insts_12_0,26,17,31,30,35,34,39,41,28,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_final_insts'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__check_final_insts_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__check_final_insts_12_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i2);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_decr_sp_and_return(15);
MR_def_label(check_hlds__modes__check_final_insts_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i6);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(11) = MR_r7;
	MR_sv(12) = MR_r8;
	MR_tempr2 = MR_r9;
	MR_sv(13) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__check_final_insts_12_0_i10);
MR_def_label(check_hlds__modes__check_final_insts_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__check_final_insts_12_0_i12);
MR_def_label(check_hlds__modes__check_final_insts_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_typed_4_0,
		check_hlds__modes__check_final_insts_12_0_i15);
MR_def_label(check_hlds__modes__check_final_insts_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i13);
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r8 = MR_sv(12);
	MR_r7 = MR_sv(11);
	MR_r9 = MR_sv(13);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i133);
MR_def_label(check_hlds__modes__check_final_insts_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__modes__check_final_insts_12_0_i18);
MR_def_label(check_hlds__modes__check_final_insts_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_any_2_0,
		check_hlds__modes__check_final_insts_12_0_i20);
MR_def_label(check_hlds__modes__check_final_insts_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0,
		check_hlds__modes__check_final_insts_12_0_i22);
MR_def_label(check_hlds__modes__check_final_insts_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i17);
	}
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_solver_init_is_supported_1_0,
		check_hlds__modes__check_final_insts_12_0_i24);
MR_def_label(check_hlds__modes__check_final_insts_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i17);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__modecheck_util__prepend_initialisation_call_7_0,
		check_hlds__modes__check_final_insts_12_0_i26);
MR_def_label(check_hlds__modes__check_final_insts_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r8 = (MR_Integer) 1;
	MR_r7 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i133);
	}
MR_def_label(check_hlds__modes__check_final_insts_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i28);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_4_0,
		check_hlds__modes__check_final_insts_12_0_i31);
MR_def_label(check_hlds__modes__check_final_insts_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i30);
	}
	MR_sv(10) = (MR_Integer) 0;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__set_of_var__init_1_0,
		check_hlds__modes__check_final_insts_12_0_i39);
MR_def_label(check_hlds__modes__check_final_insts_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_4_0,
		check_hlds__modes__check_final_insts_12_0_i35);
MR_def_label(check_hlds__modes__check_final_insts_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i34);
	}
	MR_sv(10) = (MR_Integer) 1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__set_of_var__init_1_0,
		check_hlds__modes__check_final_insts_12_0_i39);
MR_def_label(check_hlds__modes__check_final_insts_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Integer) 2;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__set_of_var__init_1_0,
		check_hlds__modes__check_final_insts_12_0_i39);
MR_def_label(check_hlds__modes__check_final_insts_12_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_sv(8);
	MR_tfield(3, MR_r2, 4) = MR_sv(6);
	MR_tfield(3, MR_r2, 5) = MR_sv(10);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modes__check_final_insts_12_0_i41);
MR_def_label(check_hlds__modes__check_final_insts_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r8 = (MR_Integer) 1;
	MR_r7 = MR_sv(11);
	MR_r9 = MR_tempr1;
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i133);
	}
MR_def_label(check_hlds__modes__check_final_insts_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r8 = (MR_Integer) 1;
	MR_r7 = MR_sv(11);
	MR_r9 = MR_sv(13);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i133);
MR_def_label(check_hlds__modes__check_final_insts_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modes", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modes.check_final_insts\'/12", 49);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_module_info_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_errors_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(hlds__instmap__init_unreachable_1_0);
MR_decl_entry(hlds__instmap__instmap_lookup_vars_3_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(check_hlds__mode_util__normalise_insts_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_pred_id_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_proc_id_2_0);
MR_decl_entry(hlds__hlds_module__module_info_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_arglives_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_changed_flag_2_0);
MR_decl_entry(bool__or_list_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_changed_flag_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module2)
	MR_init_entry1(check_hlds__modes__modecheck_final_insts_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__modecheck_final_insts_8_0);
	MR_init_label10(check_hlds__modes__modecheck_final_insts_8_0,2,3,6,5,7,4,8,9,11,14)
	MR_init_label10(check_hlds__modes__modecheck_final_insts_8_0,13,15,16,17,18,19,20,21,22,26)
	MR_init_label1(check_hlds__modes__modecheck_final_insts_8_0,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_final_insts'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_final_insts_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(9) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i2);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i3);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_final_insts_8_0_i5);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i6);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 0;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__modes__modecheck_final_insts_8_0_i4);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modes__modecheck_final_insts_8_0_i7);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i8);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_vars_3_0,
		check_hlds__modes__modecheck_final_insts_8_0_i9);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__modes__modecheck_final_insts_8_0_i11);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_final_insts_8_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(9);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__modes__check_final_insts_12_0,
		check_hlds__modes__modecheck_final_insts_8_0_i14);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__normalise_insts_4_0,
		check_hlds__modes__modecheck_final_insts_8_0_i15);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_pred_id_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i16);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_proc_id_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i17);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		check_hlds__modes__modecheck_final_insts_8_0_i18);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arglives_3_0,
		check_hlds__modes__modecheck_final_insts_8_0_i19);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__maybe_clobber_insts_3_0,
		check_hlds__modes__modecheck_final_insts_8_0_i20);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(9);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__modes__check_final_insts_12_0,
		check_hlds__modes__modecheck_final_insts_8_0_i21);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_changed_flag_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i22);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_list_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i26);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_changed_flag_3_0,
		check_hlds__modes__modecheck_final_insts_8_0_i27);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,27)
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

MR_decl_entry(fn__hlds__hlds_pred__pred_id_to_int_1_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(check_hlds__type_util__is_solver_var_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__to_sorted_list_1_0);
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_context_3_0);
MR_decl_entry(fn__hlds__goal_util__flatten_disjs_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_mode_info_0;
MR_decl_entry(list__map_foldl_5_1);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(check_hlds__mode_info__mode_info_get_nondet_live_vars_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(fn__bag__init_0_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_add_live_vars_3_0);
MR_decl_entry(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_remove_live_vars_3_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(fn__hlds__instmap__instmap_from_assoc_list_1_0);
MR_decl_entry(hlds__instmap__compute_instmap_delta_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);
MR_decl_entry(check_hlds__mode_debug__mode_checkpoint_4_0);
MR_decl_entry(check_hlds__modecheck_goal__modecheck_goal_4_0);
MR_decl_entry(check_hlds__unique_modes__unique_modes_check_goal_4_0);

MR_BEGIN_MODULE(check_hlds__modes_module3)
	MR_init_entry1(check_hlds__modes__do_modecheck_proc_body_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__do_modecheck_proc_body_14_0);
	MR_init_label10(check_hlds__modes__do_modecheck_proc_body_14_0,2,3,4,5,6,7,8,12,15,14)
	MR_init_label10(check_hlds__modes__do_modecheck_proc_body_14_0,21,22,25,26,28,29,32,31,34,35)
	MR_init_label10(check_hlds__modes__do_modecheck_proc_body_14_0,40,39,45,37,47,48,49,51,52,53)
	MR_init_label10(check_hlds__modes__do_modecheck_proc_body_14_0,54,57,59,60,61,62,58,65,66,56)
	MR_init_label10(check_hlds__modes__do_modecheck_proc_body_14_0,69,36,71,72,73,74,9,10,76,78)
	MR_init_label3(check_hlds__modes__do_modecheck_proc_body_14_0,80,81,82)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_modecheck_proc_body'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__do_modecheck_proc_body_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(12) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r10;
	MR_sv(1) = MR_r11;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_id_to_int_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i2);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i3);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i4);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i5);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i6);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i7);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("procedure_", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i8);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 21;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i12);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i15);
	}
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i9);
	}
	MR_tag_alloc_heap(MR_sv(8), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(8), 0) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i14);
	}
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r2, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(8) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_r2, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(3, MR_r2, 2);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	}
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i21);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i22);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__is_solver_var_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(12);
	MR_sv(12) = MR_tempr1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i25);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i26);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i9);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i28);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i29);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i32);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i31);
	}
	MR_sv(2) = MR_sv(1);
	MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i35);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_context_3_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i34);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i37);
	}
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i39);
	}
	MR_r1 = MR_tfield(0, MR_sv(8), 0);
	MR_np_call_localret_ent(fn__hlds__goal_util__flatten_disjs_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i40);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__modecheck_clause_disj_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_info, mode_info);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__modes__do_modecheck_proc_body_14_0_i66);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__modecheck_clause_switch_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(10) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_info, mode_info);
	MR_r5 = MR_tfield(1, MR_tempr2, 2);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__modes__do_modecheck_proc_body_14_0_i45);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_sv(12) = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i36);
	}
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_nondet_live_vars_2_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i47);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i48);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i49);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i51);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 == (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i54);
	}
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__bag__init_0_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i52);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i53);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i56);
	}
	MR_r1 = MR_tfield(0, MR_sv(8), 0);
	MR_np_call_localret_ent(fn__hlds__goal_util__flatten_disjs_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i57);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i59);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i58);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i60);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i61);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i62);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__unique_modecheck_clause_disj_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(12);
	MR_r6 = MR_r1;
	MR_r5 = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_info, mode_info);
	MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i65);
	}
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__unique_modecheck_clause_disj_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(12);
	MR_r6 = MR_sv(2);
	MR_r5 = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_info, mode_info);
	}
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__modes__do_modecheck_proc_body_14_0_i66);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(12) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i36);
	}
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__unique_modecheck_clause_switch_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(10) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_info, mode_info);
	MR_r5 = MR_tfield(1, MR_tempr2, 2);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__modes__do_modecheck_proc_body_14_0_i69);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_sv(12) = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	}
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i71);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_from_assoc_list_1_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i72);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__instmap__compute_instmap_delta_4_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i73);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i74);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i76);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(check_hlds__modes__do_modecheck_proc_body_14_0_i78);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i80);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i80);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(12) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i81);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__do_modecheck_proc_body_14_0_i82);
MR_def_label(check_hlds__modes__do_modecheck_proc_body_14_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_can_process_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_initial_insts_3_0);
MR_decl_entry(check_hlds__modecheck_util__get_live_vars_3_0);
MR_decl_entry(parse_tree__set_of_var__list_to_set_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_init_9_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_final_insts_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_had_from_ground_term_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_0);
MR_decl_entry(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_statevar_warnings_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_warnings_2_0);
MR_decl_entry(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(parse_tree__prog_mode__inst_lists_to_mode_list_3_0);
MR_decl_entry(fn__f_104_108_100_115_95_95_104_108_100_115_95_112_114_101_100_95_95_109_111_100_101_95_101_114_114_111_114_115_32_58_61_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_varset_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_need_to_requantify_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_argmodes_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(map__set_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module4)
	MR_init_entry1(check_hlds__modes__maybe_modecheck_proc_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__maybe_modecheck_proc_9_0);
	MR_init_label10(check_hlds__modes__maybe_modecheck_proc_9_0,2,3,5,6,7,8,9,10,11,12)
	MR_init_label10(check_hlds__modes__maybe_modecheck_proc_9_0,13,16,15,14,17,19,20,21,22,23)
	MR_init_label10(check_hlds__modes__maybe_modecheck_proc_9_0,24,25,27,26,29,30,31,32,34,35)
	MR_init_label10(check_hlds__modes__maybe_modecheck_proc_9_0,37,38,39,33,40,44,46,48,45,49)
	MR_init_label10(check_hlds__modes__maybe_modecheck_proc_9_0,51,52,53,42,54,55,56,57,58,59)
	MR_init_label10(check_hlds__modes__maybe_modecheck_proc_9_0,60,61,62,63,64,82,66,65,68,69)
	MR_init_label5(check_hlds__modes__maybe_modecheck_proc_9_0,70,71,72,73,74)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_modecheck_proc'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__maybe_modecheck_proc_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i2);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_can_process_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i3);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i5);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(17);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i6);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i7);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arglives_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i8);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i9);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i10);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i11);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i12);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i13);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i15);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i16);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i14);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(10);
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 3);
	}
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i17);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i19);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_from_assoc_list_1_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i20);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__get_live_vars_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i21);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__list_to_set_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i22);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_init_9_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i23);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_changed_flag_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i24);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i25);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i27);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i26);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(10);
	MR_sv(8) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i29);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(10);
	MR_sv(8) = (MR_Integer) 0;
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i30);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(11);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__modes__do_modecheck_proc_body_14_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i31);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(15) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(16) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i32);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i34);
	}
	MR_sv(5) = MR_sv(1);
	MR_sv(4) = MR_sv(15);
	MR_r1 = MR_sv(16);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i33);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_had_from_ground_term_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i35);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i37);
	}
	MR_sv(5) = MR_sv(1);
	MR_sv(4) = MR_sv(15);
	MR_r1 = MR_sv(16);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i33);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i38);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(11);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__do_modecheck_proc_body_14_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i39);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r3;
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i40);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i42);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i44);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i46);
	}
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i45);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_statevar_warnings_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i48);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_warnings_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i49);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_warning_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i51);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i52);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i53);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_sv(11) = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i55);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_112_114_101_100_95_95_109_111_100_101_95_101_114_114_111_114_115_32_58_61_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i54);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i55);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_changed_flag_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i56);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i57);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i58);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i59);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_need_to_requantify_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i60);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i61);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i62);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i63);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_argmodes_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i64);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i66);
	}
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_9_0_i65);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i82);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i68);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i69);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i70);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i71);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i72);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__set_4_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i73);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__modes__maybe_modecheck_proc_9_0_i74);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module5)
	MR_init_entry1(check_hlds__modes__modecheck_proc_general_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__modecheck_proc_general_8_0);
	MR_init_label1(check_hlds__modes__modecheck_proc_general_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_proc_general'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_proc_general_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__modes__maybe_modecheck_proc_9_0,
		check_hlds__modes__modecheck_proc_general_8_0_i2);
MR_def_label(check_hlds__modes__modecheck_proc_general_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module6)
	MR_init_entry1(check_hlds__modes__modecheck_proc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__modecheck_proc_6_0);
	MR_init_label1(check_hlds__modes__modecheck_proc_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_proc_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(check_hlds__modes__maybe_modecheck_proc_9_0,
		check_hlds__modes__modecheck_proc_6_0_i2);
MR_def_label(check_hlds__modes__modecheck_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_proc_requests_2_0);
MR_decl_entry(check_hlds__unify_proc__get_req_queue_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(queue__get_3_0);
MR_decl_entry(check_hlds__unify_proc__set_req_queue_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_proc_requests_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_can_process_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(fn__parse_tree__error_util__contains_errors_2_0);
MR_decl_entry(fn__check_hlds__switch_detection__init_switch_detect_info_1_0);
MR_decl_entry(check_hlds__switch_detection__detect_switches_in_proc_3_0);
MR_decl_entry(check_hlds__cse_detection__detect_cse_in_proc_4_0);
MR_decl_entry(check_hlds__det_analysis__determinism_check_proc_5_0);
MR_decl_entry(require__expect_4_0);
MR_decl_entry(check_hlds__unique_modes__unique_modes_check_proc_6_0);
MR_decl_entry(bool__or_3_0);
MR_decl_entry(hlds__hlds_module__module_info_remove_predid_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module7)
	MR_init_entry1(check_hlds__modes__modecheck_queued_procs_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__modecheck_queued_procs_7_0);
	MR_init_label10(check_hlds__modes__modecheck_queued_procs_7_0,2,3,5,7,8,9,11,13,14,70)
	MR_init_label10(check_hlds__modes__modecheck_queued_procs_7_0,16,18,20,21,15,23,24,25,26,27)
	MR_init_label10(check_hlds__modes__modecheck_queued_procs_7_0,28,29,30,31,32,33,34,38,39,40)
	MR_init_label10(check_hlds__modes__modecheck_queued_procs_7_0,41,42,43,44,45,46,47,48,49,50)
	MR_init_label10(check_hlds__modes__modecheck_queued_procs_7_0,52,53,54,55,56,57,58,59,60,61)
	MR_init_label7(check_hlds__modes__modecheck_queued_procs_7_0,36,62,10,64,65,66,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_queued_procs'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_queued_procs_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_proc_requests_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i2);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__unify_proc__get_req_queue_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i3);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(queue__get_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i5);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_queued_procs_7_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__set_req_queue_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i7);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_proc_requests_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i8);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i9);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,9)
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
		check_hlds__modes__modecheck_queued_procs_7_0_i11);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_queued_procs_7_0_i10);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i13);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 42;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i14);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_queued_procs_7_0_i16);
	}
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__modes__modecheck_queued_procs_7_0_i15);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_queued_procs_7_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("% Mode-analyzing ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i20);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Analyzing modes, determinism, and unique-modes for\n% ", 55);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i20);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i21);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i70);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i23);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i24);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i25);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i26);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_can_process_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i27);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i28);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i29);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i30);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i31);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(check_hlds__modes__maybe_modecheck_proc_9_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i32);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i33);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i34);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_queued_procs_7_0_i36);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_queued_procs_7_0_i38);
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_sv(11);
	MR_sv(1) = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_localcall_lab(check_hlds__modes__modecheck_queued_procs_7_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i64);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i39);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i40);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i41);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i42);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__check_hlds__switch_detection__init_switch_detect_info_1_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i43);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_proc_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i44);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i45);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i46);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i47);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i48);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__cse_detection__detect_cse_in_proc_4_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i49);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__determinism_check_proc_5_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i50);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__996__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("check_hlds.modes", 16);
	MR_r3 = (MR_Word) MR_string_const("predicate \140check_hlds.modes.modecheck_queued_proc\'/8", 52);
	MR_r4 = (MR_Word) MR_string_const("found detism error", 18);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i52);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i53);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i54);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i55);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i56);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i57);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i58);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_proc_6_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i59);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i60);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i61);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_localcall_lab(check_hlds__modes__modecheck_queued_procs_7_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i64);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_remove_predid_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i62);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_sv(11);
	MR_sv(1) = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__modes__modecheck_queued_procs_7_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i64);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 0;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(check_hlds__modes__modecheck_queued_procs_7_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i64);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i65);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__modecheck_queued_procs_7_0_i66);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__modes__modecheck_queued_procs_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(list__foldl3_8_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0);
MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);
MR_decl_entry(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0);
MR_decl_entry(check_hlds__clause_to_proc__introduce_exists_casts_3_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(check_hlds__modes_module8)
	MR_init_entry1(check_hlds__modes__modecheck_to_fixpoint_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__modecheck_to_fixpoint_8_0);
	MR_init_label10(check_hlds__modes__modecheck_to_fixpoint_8_0,85,2,5,6,7,8,9,10,12,16)
	MR_init_label10(check_hlds__modes__modecheck_to_fixpoint_8_0,17,15,41,62,43,44,45,46,42,50)
	MR_init_label6(check_hlds__modes__modecheck_to_fixpoint_8_0,51,49,52,55,56,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_to_fixpoint'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_to_fixpoint_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i2);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__maybe_modecheck_pred_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr2;
	MR_r8 = (MR_Integer) 0;
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i5);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_queued_procs_7_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i6);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i7);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i8);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i9);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i10);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_8_0_i12);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_8_0_i14);
	}
	if (MR_INT_GT(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_8_0_i15);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i16);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 159;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i17);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,8,4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,8,3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,8,2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,8,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,8,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 55;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i41);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_8_0_i43);
	}
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_8_0_i42);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i44);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Inferences by current iteration:\n", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i45);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i46);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("End of inferences.\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i62);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_8_0_i49);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i50);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__clause_to_proc__introduce_exists_casts_3_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i51);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_8_0_i85);
	}
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i52);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__copy_pred_body_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i55);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__modes__modecheck_to_fixpoint_8_0_i56);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_8_0_i85);
	}
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_get_insts_4_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module9)
	MR_init_entry1(check_hlds__modes__only_fully_in_out_modes_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__only_fully_in_out_modes_2_0);
	MR_init_label10(check_hlds__modes__only_fully_in_out_modes_2_0,42,4,8,6,10,15,14,17,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'only_fully_in_out_modes'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__only_fully_in_out_modes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__modes__only_fully_in_out_modes_2_0_i4);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		check_hlds__modes__only_fully_in_out_modes_2_0_i8);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i42);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__modes__only_fully_in_out_modes_2_0_i10);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__modes__only_fully_in_out_modes_2_0_i15);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i14);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i42);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		check_hlds__modes__only_fully_in_out_modes_2_0_i17);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i42);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_not_partly_unique_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module10)
	MR_init_entry1(check_hlds__modes__only_nonunique_modes_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__only_nonunique_modes_2_0);
	MR_init_label6(check_hlds__modes__only_nonunique_modes_2_0,24,4,5,7,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'only_nonunique_modes'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__only_nonunique_modes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__only_nonunique_modes_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__modes__only_nonunique_modes_2_0_i4);
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_not_partly_unique_2_0,
		check_hlds__modes__only_nonunique_modes_2_0_i5);
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_nonunique_modes_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_not_partly_unique_2_0,
		check_hlds__modes__only_nonunique_modes_2_0_i7);
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_nonunique_modes_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__modes__only_nonunique_modes_2_0_i24);
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_eval_method_2_0);
MR_decl_entry(fn__hlds__hlds_pred__eval_method_requires_ground_args_1_0);
MR_decl_entry(fn__parse_tree__prog_out__eval_method_to_string_1_0);
MR_decl_entry(fn__hlds__hlds_pred__eval_method_destroys_uniqueness_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_exported_1_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(check_hlds__modes_module11)
	MR_init_entry1(check_hlds__modes__proc_check_eval_methods_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__proc_check_eval_methods_5_0);
	MR_init_label10(check_hlds__modes__proc_check_eval_methods_5_0,199,3,4,5,6,8,12,14,15,16)
	MR_init_label10(check_hlds__modes__proc_check_eval_methods_5_0,18,19,7,39,43,45,46,47,49,50)
	MR_init_label10(check_hlds__modes__proc_check_eval_methods_5_0,38,68,70,72,74,81,82,84,85,88)
	MR_init_label9(check_hlds__modes__proc_check_eval_methods_5_0,89,91,93,92,95,96,77,98,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_check_eval_methods'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__proc_check_eval_methods_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i4);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i5);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i6);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__eval_method_requires_ground_args_1_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i8);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i7);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__modes__only_fully_in_out_modes_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i12);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i14);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i15);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__eval_method_to_string_1_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i16);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,8,6);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i18);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140pragma ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i19);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,16);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(8);
	MR_r1 = MR_sv(6);
	MR_sv(8) = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__eval_method_destroys_uniqueness_1_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i39);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__eval_method_destroys_uniqueness_1_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i39);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i38);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__modes__only_nonunique_modes_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i43);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i38);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i45);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i46);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__eval_method_to_string_1_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i47);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,8,12);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i49);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140pragma ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i50);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,18);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(9);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,23);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_tempr4, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr4;
	MR_tfield(1, MR_r2, 1) = MR_sv(8);
	MR_r1 = MR_sv(4);
	MR_sv(8) = MR_r2;
	MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i68);
	}
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i70);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i72);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_exported_1_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i74);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i69);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i77);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i77);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i77);
	}
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i81);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i82);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i84);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i85);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i77);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i88);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i89);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i77);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i91);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i93);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i92);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i77);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i95);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i96);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i69);
	}
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__modes__proc_check_eval_methods_5_0_i98);
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,25);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(8);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i199);
	}
MR_def_label(check_hlds__modes__proc_check_eval_methods_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_5_0_i199);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);

MR_BEGIN_MODULE(check_hlds__modes_module12)
	MR_init_entry1(check_hlds__modes__pred_check_eval_methods_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__pred_check_eval_methods_4_0);
	MR_init_label6(check_hlds__modes__pred_check_eval_methods_4_0,13,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_check_eval_methods'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__pred_check_eval_methods_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__pred_check_eval_methods_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__pred_check_eval_methods_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__modes__pred_check_eval_methods_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__modes__pred_check_eval_methods_4_0_i4);
MR_def_label(check_hlds__modes__pred_check_eval_methods_4_0,4)
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
		check_hlds__modes__pred_check_eval_methods_4_0_i5);
MR_def_label(check_hlds__modes__pred_check_eval_methods_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__modes__pred_check_eval_methods_4_0_i6);
MR_def_label(check_hlds__modes__pred_check_eval_methods_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__modes__proc_check_eval_methods_5_0,
		check_hlds__modes__pred_check_eval_methods_4_0_i7);
MR_def_label(check_hlds__modes__pred_check_eval_methods_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__modes__pred_check_eval_methods_4_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0);

MR_BEGIN_MODULE(check_hlds__modes_module13)
	MR_init_entry1(check_hlds__modes__check_pred_modes_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__check_pred_modes_6_0);
	MR_init_label10(check_hlds__modes__check_pred_modes_6_0,2,3,4,5,10,12,13,9,15,16)
	MR_init_label5(check_hlds__modes__check_pred_modes_6_0,7,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_pred_modes'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__check_pred_modes_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		check_hlds__modes__check_pred_modes_6_0_i2);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__check_pred_modes_6_0_i3);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 159;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		check_hlds__modes__check_pred_modes_6_0_i4);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_to_fixpoint_8_0,
		check_hlds__modes__check_pred_modes_6_0_i5);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modes__check_pred_modes_6_0_i7);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_pred_modes_6_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 259;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__modes__check_pred_modes_6_0_i10);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_pred_modes_6_0_i12);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__delay_partial_inst_preds_4_0,
		check_hlds__modes__check_pred_modes_6_0_i13);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__modes__modecheck_to_fixpoint_8_0);
	}
MR_def_label(check_hlds__modes__check_pred_modes_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,
		check_hlds__modes__check_pred_modes_6_0_i15);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__check_pred_modes_6_0_i16);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__modes__check_pred_modes_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,
		check_hlds__modes__check_pred_modes_6_0_i17);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__check_pred_modes_6_0_i18);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		check_hlds__modes__check_pred_modes_6_0_i19);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__pred_check_eval_methods_4_0,
		check_hlds__modes__check_pred_modes_6_0_i20);
MR_def_label(check_hlds__modes__check_pred_modes_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__file_util__maybe_write_string_4_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module14)
	MR_init_entry1(check_hlds__modes__modecheck_module_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__modecheck_module_2_0);
	MR_init_label6(check_hlds__modes__modecheck_module_2_0,2,3,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_module'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_module_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__modecheck_module_2_0_i2);
MR_def_label(check_hlds__modes__modecheck_module_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__modes__modecheck_module_2_0_i3);
MR_def_label(check_hlds__modes__modecheck_module_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("% Mode-checking clauses...\n", 27);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		check_hlds__modes__modecheck_module_2_0_i4);
MR_def_label(check_hlds__modes__modecheck_module_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__modes__check_pred_modes_6_0,
		check_hlds__modes__modecheck_module_2_0_i5);
MR_def_label(check_hlds__modes__modecheck_module_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 51;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__modes__modecheck_module_2_0_i7);
MR_def_label(check_hlds__modes__modecheck_module_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__modes__modecheck_module_2_0_i8);
MR_def_label(check_hlds__modes__modecheck_module_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module15)
	MR_init_entry1(check_hlds__modes__modecheck_lambda_final_insts_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__modecheck_lambda_final_insts_6_0);
	MR_init_label1(check_hlds__modes__modecheck_lambda_final_insts_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_lambda_final_insts'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_lambda_final_insts_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__modecheck_lambda_final_insts_6_0_i2);
MR_def_label(check_hlds__modes__modecheck_lambda_final_insts_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module16)
	MR_init_entry1(check_hlds__modes__copy_pred_body_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__copy_pred_body_4_0);
	MR_init_label10(check_hlds__modes__copy_pred_body_4_0,2,4,5,3,7,8,9,10,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_pred_body'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__copy_pred_body_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__copy_pred_body_4_0_i2);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__modes__copy_pred_body_4_0_i4);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__modes__copy_pred_body_4_0_i5);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__copy_pred_body_4_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__copy_pred_body_4_0_i7);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__copy_pred_body_4_0_i8);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__copy_pred_body_4_0_i9);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__modes__copy_pred_body_4_0_i10);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__copy_proc_body_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__modes__copy_pred_body_4_0_i13);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__modes__copy_pred_body_4_0_i14);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module17)
	MR_init_entry1(check_hlds__modes__copy_proc_body_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__copy_proc_body_4_0);
	MR_init_label4(check_hlds__modes__copy_proc_body_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_proc_body'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__copy_proc_body_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__copy_proc_body_4_0_i2);
MR_def_label(check_hlds__modes__copy_proc_body_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__modes__copy_proc_body_4_0_i3);
MR_def_label(check_hlds__modes__copy_proc_body_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__copy_proc_body_4_0_i4);
MR_def_label(check_hlds__modes__copy_proc_body_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__modes__copy_proc_body_4_0_i5);
MR_def_label(check_hlds__modes__copy_proc_body_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__error_util__accumulate_error_specs_for_proc_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module18)
	MR_init_entry1(check_hlds__modes__modecheck_procs_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__modecheck_procs_10_0);
	MR_init_label4(check_hlds__modes__modecheck_procs_10_0,11,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_procs'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_procs_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__modecheck_procs_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_procs_10_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__modes__modecheck_procs_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r7;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__modes__maybe_modecheck_proc_9_0,
		check_hlds__modes__modecheck_procs_10_0_i4);
MR_def_label(check_hlds__modes__modecheck_procs_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__error_util__accumulate_error_specs_for_proc_3_0,
		check_hlds__modes__modecheck_procs_10_0_i5);
MR_def_label(check_hlds__modes__modecheck_procs_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modes__modecheck_procs_10_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0);
MR_decl_entry(hlds__passes_aux__write_pred_progress_message_5_0);
MR_decl_entry(map__member_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0);
MR_decl_entry(fn__parse_tree__error_util__init_error_spec_accumulator_0_0);
MR_decl_entry(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0);

MR_BEGIN_MODULE(check_hlds__modes_module19)
	MR_init_entry1(check_hlds__modes__maybe_modecheck_pred_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__maybe_modecheck_pred_9_0);
	MR_init_label10(check_hlds__modes__maybe_modecheck_pred_9_0,2,3,9,7,13,11,15,16,4,18)
	MR_init_label10(check_hlds__modes__maybe_modecheck_pred_9_0,20,23,19,25,26,27,30,35,36,34)
	MR_init_label10(check_hlds__modes__maybe_modecheck_pred_9_0,39,29,41,42,43,44,45,46,47,48)
	MR_init_label4(check_hlds__modes__maybe_modecheck_pred_9_0,50,51,52,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_modecheck_pred'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__maybe_modecheck_pred_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i2);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,2)
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
		check_hlds__modes__maybe_modecheck_pred_9_0_i3);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i9);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i13);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i11);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i15);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i16);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i4);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i18);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i20);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i19);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i23);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_string_const("% Mode-analysing ", 17);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i26);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_string_const("% Unique-mode-analysing ", 24);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i26);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i25);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_string_const("% Mode-checking ", 16);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i26);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_string_const("% Unique-mode-checking ", 23);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i27);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i29);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i30);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modes__maybe_modecheck_pred_9_0_i34);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__member_3_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i35);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i36);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i29);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i39);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i41);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i41);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__error_util__init_error_spec_accumulator_0_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i42);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_procs_10_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i43);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i44);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i45);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i46);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i47);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i48);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_9_0_i50);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_sv(6);
	MR_r2 = (MR_Integer) 52;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i52);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_remove_predid_3_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i51);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Integer) 52;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i52);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__modes__maybe_modecheck_pred_9_0_i53);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_set_instmap_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module20)
	MR_init_entry1(check_hlds__modes__modecheck_clause_disj_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__modecheck_clause_disj_8_0);
	MR_init_label5(check_hlds__modes__modecheck_clause_disj_8_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_clause_disj'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_clause_disj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modes__modecheck_clause_disj_8_0_i2);
MR_def_label(check_hlds__modes__modecheck_clause_disj_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_clause_disj_8_0_i3);
MR_def_label(check_hlds__modes__modecheck_clause_disj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modes__modecheck_clause_disj_8_0_i4);
MR_def_label(check_hlds__modes__modecheck_clause_disj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modes__modecheck_clause_disj_8_0_i5);
MR_def_label(check_hlds__modes__modecheck_clause_disj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__modecheck_clause_disj_8_0_i6);
MR_def_label(check_hlds__modes__modecheck_clause_disj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__modecheck_util__modecheck_functors_test_5_0);
MR_decl_entry(hlds__instmap__instmap_is_reachable_1_0);
MR_decl_entry(check_hlds__mode_util__fixup_instmap_switch_var_5_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);

MR_BEGIN_MODULE(check_hlds__modes_module21)
	MR_init_entry1(check_hlds__modes__modecheck_clause_switch_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__modecheck_clause_switch_9_0);
	MR_init_label10(check_hlds__modes__modecheck_clause_switch_9_0,2,3,4,5,8,10,11,6,12,14)
	MR_init_label2(check_hlds__modes__modecheck_clause_switch_9_0,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_clause_switch'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_clause_switch_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i2);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i3);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_functors_test_5_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i4);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i5);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i8);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_clause_switch_9_0_i6);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i10);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i11);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__fixup_instmap_switch_var_5_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i14);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i12);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_sv(10) = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__fixup_instmap_switch_var_5_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i14);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i15);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__modecheck_clause_switch_9_0_i16);
MR_def_label(check_hlds__modes__modecheck_clause_switch_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__unique_modes__prepare_for_disjunct_5_0);

MR_BEGIN_MODULE(check_hlds__modes_module22)
	MR_init_entry1(check_hlds__modes__unique_modecheck_clause_disj_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__unique_modecheck_clause_disj_11_0);
	MR_init_label7(check_hlds__modes__unique_modecheck_clause_disj_11_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modecheck_clause_disj'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__unique_modecheck_clause_disj_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_r9;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modes__unique_modecheck_clause_disj_11_0_i2);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__unique_modecheck_clause_disj_11_0_i3);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0,
		check_hlds__modes__unique_modecheck_clause_disj_11_0_i4);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__prepare_for_disjunct_5_0,
		check_hlds__modes__unique_modecheck_clause_disj_11_0_i5);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__modes__unique_modecheck_clause_disj_11_0_i6);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modes__unique_modecheck_clause_disj_11_0_i7);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__unique_modecheck_clause_disj_11_0_i8);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module23)
	MR_init_entry1(check_hlds__modes__unique_modecheck_clause_switch_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__unique_modecheck_clause_switch_9_0);
	MR_init_label10(check_hlds__modes__unique_modecheck_clause_switch_9_0,2,3,4,5,8,10,7,11,12,13)
	MR_init_label3(check_hlds__modes__unique_modecheck_clause_switch_9_0,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modecheck_clause_switch'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__unique_modecheck_clause_switch_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modes__unique_modecheck_clause_switch_9_0_i2);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__unique_modecheck_clause_switch_9_0_i3);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_functors_test_5_0,
		check_hlds__modes__unique_modecheck_clause_switch_9_0_i4);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__unique_modecheck_clause_switch_9_0_i5);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__modes__unique_modecheck_clause_switch_9_0_i8);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__unique_modecheck_clause_switch_9_0_i7);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__modes__unique_modecheck_clause_switch_9_0_i10);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__modes__unique_modecheck_clause_switch_9_0_i12);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__modes__unique_modecheck_clause_switch_9_0_i11);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__unique_modecheck_clause_switch_9_0_i13);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__fixup_instmap_switch_var_5_0,
		check_hlds__modes__unique_modecheck_clause_switch_9_0_i14);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modes__unique_modecheck_clause_switch_9_0_i15);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__unique_modecheck_clause_switch_9_0_i16);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__modes_module24)
	MR_init_entry1(__Unify___check_hlds__modes__clause_form_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__modes__clause_form_0_0);
	MR_init_label4(__Unify___check_hlds__modes__clause_form_0_0,18,5,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__modes__clause_form_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i18);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___check_hlds__modes__clause_form_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__modes__clause_form_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__modes__clause_form_0_0_i10);
MR_def_label(__Unify___check_hlds__modes__clause_form_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__modes__clause_form_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module25)
	MR_init_entry1(__Compare___check_hlds__modes__clause_form_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__modes__clause_form_0_0);
	MR_init_label8(__Compare___check_hlds__modes__clause_form_0_0,3,2,7,5,10,12,16,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__modes__clause_form_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i2);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__modes__clause_form_0_0_i12);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i54);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__modes__clause_form_0_0_i16);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module26)
	MR_init_entry1(__Unify___check_hlds__modes__modes_safe_to_continue_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__modes__modes_safe_to_continue_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__modes__modes_safe_to_continue_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module27)
	MR_init_entry1(__Compare___check_hlds__modes__modes_safe_to_continue_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__modes__modes_safe_to_continue_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__modes__modes_safe_to_continue_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module28)
	MR_init_entry1(check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__996__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__996__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__modecheck_queued_proc__996__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__IntroducedFrom__pred__modecheck_queued_proc__996__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
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

static void mercury__check_hlds__modes_maybe_bunch_0(void)
{
	check_hlds__modes_module0();
	check_hlds__modes_module1();
	check_hlds__modes_module2();
	check_hlds__modes_module3();
	check_hlds__modes_module4();
	check_hlds__modes_module5();
	check_hlds__modes_module6();
	check_hlds__modes_module7();
	check_hlds__modes_module8();
	check_hlds__modes_module9();
	check_hlds__modes_module10();
	check_hlds__modes_module11();
	check_hlds__modes_module12();
	check_hlds__modes_module13();
	check_hlds__modes_module14();
	check_hlds__modes_module15();
	check_hlds__modes_module16();
	check_hlds__modes_module17();
	check_hlds__modes_module18();
	check_hlds__modes_module19();
	check_hlds__modes_module20();
	check_hlds__modes_module21();
	check_hlds__modes_module22();
	check_hlds__modes_module23();
	check_hlds__modes_module24();
	check_hlds__modes_module25();
	check_hlds__modes_module26();
	check_hlds__modes_module27();
	check_hlds__modes_module28();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__modes__init(void);
void mercury__check_hlds__modes__init_type_tables(void);
void mercury__check_hlds__modes__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__modes__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__modes__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__modes__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__modes__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__modes_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modes__type_ctor_info_clause_form_0,
		check_hlds__modes__clause_form_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0,
		check_hlds__modes__modes_safe_to_continue_0_0);
	mercury__check_hlds__modes__init_debugger();
}

void mercury__check_hlds__modes__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modes__type_ctor_info_clause_form_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0);
	}
}


void mercury__check_hlds__modes__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__modes__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__modes);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__modes__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__modes__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
