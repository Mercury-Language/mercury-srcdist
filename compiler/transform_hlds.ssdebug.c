/*
** Automatically generated from `ssdebug.m'
** by the Mercury compiler,
** version 10.04.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__ssdebug__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 539 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.ssdebug.c"
#line 547 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.ssdebug.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.ssdebug.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.ssdebug.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "transform_hlds.ssdebug.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "transform_hlds.ssdebug.c"
#line 49 "transform_hlds.ssdebug.c"
#include "transform_hlds.ssdebug.mh"

#line 52 "transform_hlds.ssdebug.c"
#line 53 "transform_hlds.ssdebug.c"
#ifndef TRANSFORM_HLDS__SSDEBUG_DECL_GUARD
#define TRANSFORM_HLDS__SSDEBUG_DECL_GUARD

#line 57 "transform_hlds.ssdebug.c"
#line 58 "transform_hlds.ssdebug.c"

#endif
#line 61 "transform_hlds.ssdebug.c"

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
	MR_Word * f3[5];
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
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ssdebug__type_ctor_info_proxy_map_0;
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0, 2,9,15,13,17,11,8,20,22,24)
MR_decl_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0, 26,28,4)
MR_decl_label10(transform_hlds__ssdebug__commit_goal_changes_10_0, 2,3,4,5,8,9,10,11,15,16)
MR_decl_label6(transform_hlds__ssdebug__commit_goal_changes_10_0, 17,18,19,20,22,23)
MR_decl_label10(transform_hlds__ssdebug__create_proxy_proc_6_0, 2,3,4,6,7,8,10,11,12,13)
MR_decl_label1(transform_hlds__ssdebug__first_pass_in_case_8_0, 2)
MR_decl_label10(transform_hlds__ssdebug__first_pass_in_goal_8_0, 8,4,15,11,19,18,21,22,23,20)
MR_decl_label10(transform_hlds__ssdebug__first_pass_in_goal_8_0, 27,26,34,36,37,38,39,35,43,30)
MR_decl_label10(transform_hlds__ssdebug__first_pass_in_goal_8_0, 45,44,52,48,59,60,62,64,191,70)
MR_decl_label1(transform_hlds__ssdebug__first_pass_in_goal_8_0, 182)
MR_decl_label2(transform_hlds__ssdebug__first_pass_in_pred_5_0, 2,3)
MR_decl_label5(transform_hlds__ssdebug__first_pass_in_proc_6_0, 2,3,4,5,6)
MR_decl_label10(transform_hlds__ssdebug__insert_context_update_call_5_0, 2,3,4,6,8,9,10,13,14,15)
MR_decl_label1(transform_hlds__ssdebug__insert_context_update_call_5_0, 20)
MR_decl_label10(transform_hlds__ssdebug__lookup_proxy_pred_6_0, 4,2,6,7,10,12,13,14,16,17)
MR_decl_label10(transform_hlds__ssdebug__lookup_proxy_pred_6_0, 18,19,20,22,23,24,25,9,29,30)
MR_decl_label10(transform_hlds__ssdebug__make_arg_list_18_0, 4,5,7,8,11,14,3,16,18,23)
MR_decl_label10(transform_hlds__ssdebug__make_arg_list_18_0, 24,22,26,27,20,31,30,33,34,35)
MR_decl_label6(transform_hlds__ssdebug__make_arg_list_18_0, 36,37,38,46,48,49)
MR_decl_label4(transform_hlds__ssdebug__make_handle_event_9_0, 2,3,4,5)
MR_decl_label10(transform_hlds__ssdebug__make_proc_id_construction_8_0, 2,3,7,8,9,10,12,14,15,18)
MR_decl_label3(transform_hlds__ssdebug__make_proc_id_construction_8_0, 20,22,25)
MR_decl_label8(transform_hlds__ssdebug__make_recursive_call_6_0, 2,3,5,7,8,9,10,11)
MR_decl_label4(transform_hlds__ssdebug__make_retry_var_6_0, 2,5,6,8)
MR_decl_label9(transform_hlds__ssdebug__make_switch_goal_4_0, 2,14,15,16,17,18,19,20,21)
MR_decl_label10(transform_hlds__ssdebug__make_var_value_18_0, 2,5,6,8,10,11,14,16,17,18)
MR_decl_label10(transform_hlds__ssdebug__make_var_value_18_0, 19,21,22,23,24,25,28,31,29,38)
MR_decl_label7(transform_hlds__ssdebug__make_var_value_18_0, 43,45,49,50,12,54,57)
MR_decl_label10(transform_hlds__ssdebug__process_proc_det_6_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label10(transform_hlds__ssdebug__process_proc_det_6_0, 13,16,17,18,19,20,23,24,22,25)
MR_decl_label6(transform_hlds__ssdebug__process_proc_det_6_0, 26,27,31,32,33,45)
MR_decl_label10(transform_hlds__ssdebug__process_proc_erroneous_6_0, 2,3,4,5,6,7,8,10,11,12)
MR_decl_label2(transform_hlds__ssdebug__process_proc_erroneous_6_0, 15,22)
MR_decl_label10(transform_hlds__ssdebug__process_proc_failure_6_0, 2,3,4,5,6,7,8,10,11,12)
MR_decl_label10(transform_hlds__ssdebug__process_proc_failure_6_0, 15,16,20,21,22,23,24,28,33,41)
MR_decl_label10(transform_hlds__ssdebug__process_proc_nondet_6_0, 2,3,4,5,6,7,8,10,11,12)
MR_decl_label10(transform_hlds__ssdebug__process_proc_nondet_6_0, 15,16,17,18,19,22,23,24,28,33)
MR_decl_label10(transform_hlds__ssdebug__process_proc_nondet_6_0, 43,45,47,51,52,53,54,60,62,67)
MR_decl_label1(transform_hlds__ssdebug__process_proc_nondet_6_0, 70)
MR_decl_label10(transform_hlds__ssdebug__process_proc_semi_6_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label10(transform_hlds__ssdebug__process_proc_semi_6_0, 13,16,17,18,19,20,21,25,26,27)
MR_decl_label10(transform_hlds__ssdebug__process_proc_semi_6_0, 28,32,33,34,35,38,39,37,40,41)
MR_decl_label8(transform_hlds__ssdebug__process_proc_semi_6_0, 36,43,49,52,53,59,62,71)
MR_decl_label7(transform_hlds__ssdebug__rename_outputs_9_0, 2,3,4,5,6,7,8)
MR_decl_label3(transform_hlds__ssdebug__transform_module_4_0, 2,4,7)
MR_decl_label2(fn__transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__921__1_3_0, 2,1)
MR_decl_label3(fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0, 2,3,4)
MR_decl_label2(fn__transform_hlds__ssdebug__impure_goal_info_1_0, 2,3)
MR_decl_label3(fn__transform_hlds__ssdebug__list_var_value_type_0_0, 2,5,6)
MR_def_extern_entry(transform_hlds__ssdebug__transform_module_4_0)
MR_decl_static(transform_hlds__ssdebug__first_pass_in_pred_5_0)
MR_decl_static(transform_hlds__ssdebug__lookup_proxy_pred_6_0)
MR_decl_static(transform_hlds__ssdebug__insert_context_update_call_5_0)
MR_decl_static(fn__transform_hlds__ssdebug__this_file_0_0)
MR_decl_static(transform_hlds__ssdebug__first_pass_in_goal_8_0)
MR_decl_static(transform_hlds__ssdebug__first_pass_in_proc_6_0)
MR_decl_static(transform_hlds__ssdebug__first_pass_in_case_8_0)
MR_decl_static(transform_hlds__ssdebug__create_proxy_proc_6_0)
MR_decl_static(transform_hlds__ssdebug__get_output_args_4_0)
MR_decl_static(transform_hlds__ssdebug__rename_outputs_9_0)
MR_decl_static(transform_hlds__ssdebug__add_promise_equivalent_solutions_3_0)
MR_decl_static(transform_hlds__ssdebug__make_retry_var_6_0)
MR_decl_static(transform_hlds__ssdebug__make_recursive_call_6_0)
MR_decl_static(transform_hlds__ssdebug__make_switch_goal_4_0)
MR_decl_static(fn__transform_hlds__ssdebug__impure_goal_info_1_0)
MR_decl_static(transform_hlds__ssdebug__commit_goal_changes_10_0)
MR_decl_static(transform_hlds__ssdebug__make_handle_event_9_0)
MR_decl_static(transform_hlds__ssdebug__make_proc_id_construction_8_0)
MR_decl_static(fn__transform_hlds__ssdebug__list_var_value_type_0_0)
MR_decl_static(transform_hlds__ssdebug__make_var_value_18_0)
MR_decl_static(transform_hlds__ssdebug__make_arg_list_18_0)
MR_decl_static(transform_hlds__ssdebug__process_proc_det_6_0)
MR_decl_static(transform_hlds__ssdebug__process_proc_semi_6_0)
MR_decl_static(fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0)
MR_decl_static(transform_hlds__ssdebug__process_proc_nondet_6_0)
MR_decl_static(transform_hlds__ssdebug__process_proc_failure_6_0)
MR_decl_static(transform_hlds__ssdebug__process_proc_erroneous_6_0)
MR_decl_static(transform_hlds__ssdebug__process_proc_7_0)
MR_decl_static(__Unify___transform_hlds__ssdebug__proxy_map_0_0)
MR_decl_static(__Compare___transform_hlds__ssdebug__proxy_map_0_0)
MR_decl_static(fn__transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__921__1_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0)

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
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

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(0,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__transform_module_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ssdebug__transform_module_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const struct mercury_type_3 mercury_common_3[5] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__ssdebug__first_pass_in_pred_5_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__ssdebug__process_proc_7_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(transform_hlds__ssdebug__first_pass_in_goal_8_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(transform_hlds__ssdebug__first_pass_in_goal_8_0),
0
},
{
MR_COMMON(8,2),
MR_ENTRY_AP(transform_hlds__ssdebug__first_pass_in_case_8_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__transform_module_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ssdebug__transform_module_4_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
3,
MR_TAG_COMMON(0,3,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_pred_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__lookup_proxy_pred_6_0_1;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_pred_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ssdebug__lookup_proxy_pred_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const struct mercury_type_7 mercury_common_7[7] =
{
{
MR_string_const("FileName", 8)
},
{
MR_string_const("LineNumber", 10)
},
{
MR_string_const("ModuleName", 10)
},
{
MR_string_const("PredName", 8)
},
{
MR_string_const("VarName", 7)
},
{
MR_string_const("VarPos", 6)
},
{
MR_string_const("list", 4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_goal_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_goal_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_goal_8_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_8 mercury_common_8[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_goal_8_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_goal_8_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_goal_8_0_3,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_COMMON(1,1),
MR_COMMON(1,1),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__get_output_args_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ssdebug__get_output_args_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(0,2)
}
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_TAG_COMMON(0,7,6),
MR_string_const("[|]", 3)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ssdebug__type_ctor_info_proxy_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ssdebug__proxy_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ssdebug__proxy_map_0_0)),
	"transform_hlds.ssdebug",
	"proxy_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0maybe__ti_maybe_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__get_output_args_4_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ssdebug",
"transform_hlds.ssdebug",
"lambda_ssdebug_m_921",
4,
0
},
"transform_hlds.ssdebug",
"ssdebug.m",
921,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_goal_8_0_3 = {
{
MR_PREDICATE,
"transform_hlds.ssdebug",
"transform_hlds.ssdebug",
"first_pass_in_case",
8,
0
},
"transform_hlds.ssdebug",
"ssdebug.m",
336,
"d1;c10;d7;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_goal_8_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ssdebug",
"transform_hlds.ssdebug",
"first_pass_in_goal",
8,
0
},
"transform_hlds.ssdebug",
"ssdebug.m",
330,
"d1;c10;d6;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_goal_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ssdebug",
"transform_hlds.ssdebug",
"first_pass_in_goal",
8,
0
},
"transform_hlds.ssdebug",
"ssdebug.m",
324,
"d1;c10;d5;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__lookup_proxy_pred_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ssdebug",
"transform_hlds.ssdebug",
"create_proxy_proc",
6,
0
},
"transform_hlds.ssdebug",
"ssdebug.m",
403,
"d1;c5;q;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__first_pass_in_pred_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ssdebug",
"transform_hlds.ssdebug",
"first_pass_in_proc",
6,
0
},
"transform_hlds.ssdebug",
"ssdebug.m",
248,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__transform_module_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.ssdebug",
"transform_hlds.ssdebug",
"process_proc",
7,
0
},
"transform_hlds.ssdebug",
"ssdebug.m",
226,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ssdebug__transform_module_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ssdebug",
"transform_hlds.ssdebug",
"first_pass_in_pred",
5,
0
},
"transform_hlds.ssdebug",
"ssdebug.m",
240,
"d1;c4;"
};


MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(fn__map__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(hlds__passes_aux__process_all_nonimported_procs_5_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module0)
	MR_init_entry1(transform_hlds__ssdebug__transform_module_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__transform_module_4_0);
	MR_init_label3(transform_hlds__ssdebug__transform_module_4_0,2,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_module'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ssdebug__transform_module_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__ssdebug__transform_module_4_0_i2);
MR_def_label(transform_hlds__ssdebug__transform_module_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__transform_module_4_0_i4);
MR_def_label(transform_hlds__ssdebug__transform_module_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__ssdebug__transform_module_4_0_i7);
MR_def_label(transform_hlds__ssdebug__transform_module_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__passes_aux__process_all_nonimported_procs_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_all_non_imported_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__ssdebug_module1)
	MR_init_entry1(transform_hlds__ssdebug__first_pass_in_pred_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__first_pass_in_pred_5_0);
	MR_init_label2(transform_hlds__ssdebug__first_pass_in_pred_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_pass_in_pred'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__first_pass_in_pred_5_0)
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
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__first_pass_in_pred_5_0_i2);
MR_def_label(transform_hlds__ssdebug__first_pass_in_pred_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_non_imported_procids_1_0,
		transform_hlds__ssdebug__first_pass_in_pred_5_0_i3);
MR_def_label(transform_hlds__ssdebug__first_pass_in_pred_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ssdebug__first_pass_in_proc_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(parse_tree__file_names__mercury_std_library_module_name_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_import_status_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_name_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_origin_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module2)
	MR_init_entry1(transform_hlds__ssdebug__lookup_proxy_pred_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__lookup_proxy_pred_6_0);
	MR_init_label10(transform_hlds__ssdebug__lookup_proxy_pred_6_0,4,2,6,7,10,12,13,14,16,17)
	MR_init_label10(transform_hlds__ssdebug__lookup_proxy_pred_6_0,18,19,20,22,23,24,25,9,29,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_proxy_pred'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__lookup_proxy_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i4);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__lookup_proxy_pred_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i6);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i7);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i10);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__lookup_proxy_pred_6_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i12);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_import_status_3_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i13);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i14);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ssdebug__create_proxy_proc_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i16);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i17);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("SSDBPR__", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i18);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_name_3_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i19);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i20);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_origin_3_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i22);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i23);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i24);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i25);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__ssdebug__lookup_proxy_pred_6_0_i29);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		transform_hlds__ssdebug__lookup_proxy_pred_6_0_i30);
MR_def_label(transform_hlds__ssdebug__lookup_proxy_pred_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_goal__make_string_const_construction_alloc_8_0);
MR_decl_entry(hlds__hlds_goal__make_int_const_construction_alloc_8_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_init_reachable_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module3)
	MR_init_entry1(transform_hlds__ssdebug__insert_context_update_call_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__insert_context_update_call_5_0);
	MR_init_label10(transform_hlds__ssdebug__insert_context_update_call_5_0,2,3,4,6,8,9,10,13,14,15)
	MR_init_label1(transform_hlds__ssdebug__insert_context_update_call_5_0,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_context_update_call'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__insert_context_update_call_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__ssdebug__insert_context_update_call_5_0_i2);
MR_def_label(transform_hlds__ssdebug__insert_context_update_call_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__insert_context_update_call_5_0_i3);
MR_def_label(transform_hlds__ssdebug__insert_context_update_call_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__insert_context_update_call_5_0_i4);
MR_def_label(transform_hlds__ssdebug__insert_context_update_call_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_string_const_construction_alloc_8_0,
		transform_hlds__ssdebug__insert_context_update_call_5_0_i6);
MR_def_label(transform_hlds__ssdebug__insert_context_update_call_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_alloc_8_0,
		transform_hlds__ssdebug__insert_context_update_call_5_0_i8);
MR_def_label(transform_hlds__ssdebug__insert_context_update_call_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__ssdebug__insert_context_update_call_5_0_i9);
MR_def_label(transform_hlds__ssdebug__insert_context_update_call_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__ssdebug__insert_context_update_call_5_0_i10);
MR_def_label(transform_hlds__ssdebug__insert_context_update_call_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_sv(9) = MR_r1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		transform_hlds__ssdebug__insert_context_update_call_5_0_i13);
MR_def_label(transform_hlds__ssdebug__insert_context_update_call_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		transform_hlds__ssdebug__insert_context_update_call_5_0_i14);
MR_def_label(transform_hlds__ssdebug__insert_context_update_call_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("set_context", 11);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__ssdebug__insert_context_update_call_5_0_i15);
MR_def_label(transform_hlds__ssdebug__insert_context_update_call_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__ssdebug__insert_context_update_call_5_0_i20);
MR_def_label(transform_hlds__ssdebug__insert_context_update_call_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ssdebug_module4)
	MR_init_entry1(fn__transform_hlds__ssdebug__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ssdebug__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ssdebug__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdebug.m", 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(list__map_foldl3_9_1);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0);
MR_decl_entry(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module5)
	MR_init_entry1(transform_hlds__ssdebug__first_pass_in_goal_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__first_pass_in_goal_8_0);
	MR_init_label10(transform_hlds__ssdebug__first_pass_in_goal_8_0,8,4,15,11,19,18,21,22,23,20)
	MR_init_label10(transform_hlds__ssdebug__first_pass_in_goal_8_0,27,26,34,36,37,38,39,35,43,30)
	MR_init_label10(transform_hlds__ssdebug__first_pass_in_goal_8_0,45,44,52,48,59,60,62,64,191,70)
	MR_init_label1(transform_hlds__ssdebug__first_pass_in_goal_8_0,182)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_pass_in_goal'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__first_pass_in_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TEST(MR_tempr1,3,0)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i182);
	}
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i4);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_tempr6 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr6, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_tempr4 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr5 = MR_tempr6;
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r7 = MR_tfield(3, MR_tempr5, 2);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i8);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i11);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(1) = MR_r5;
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r7 = MR_tfield(3, MR_sv(1), 1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i15);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i18);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_sv(7) = MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__insert_context_update_call_5_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i19);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i20);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__ssdebug__first_pass_in_goal_8_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i21);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__ssdebug__first_pass_in_goal_8_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i22);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__ssdebug__first_pass_in_goal_8_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i23);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i26);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_np_localcall_lab(transform_hlds__ssdebug__first_pass_in_goal_8_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i27);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r5, 3);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i182);
	}
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i182);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 4);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(10) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__lookup_proxy_pred_6_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i34);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i36);
	}
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i35);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i37);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i38);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i39);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 4) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 5) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r1 = MR_sv(8);
	}
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__ssdebug__insert_context_update_call_5_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i43);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i44);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__ssdebug__first_pass_in_goal_8_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i45);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i48);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr4 = MR_tempr5;
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r7 = MR_tfield(3, MR_tempr4, 3);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i52);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i191);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r5, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i182);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i182);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i59);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__lookup_proxy_pred_6_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i60);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__first_pass_in_goal_8_0_i62);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i64);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr4 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__this_file_0_0,
		transform_hlds__ssdebug__first_pass_in_goal_8_0_i70);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("create_proxies_in_goal: unexpected shorthand", 44);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__ssdebug__first_pass_in_goal_8_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module6)
	MR_init_entry1(transform_hlds__ssdebug__first_pass_in_proc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__first_pass_in_proc_6_0);
	MR_init_label5(transform_hlds__ssdebug__first_pass_in_proc_6_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_pass_in_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__first_pass_in_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__ssdebug__first_pass_in_proc_6_0_i2);
MR_def_label(transform_hlds__ssdebug__first_pass_in_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__first_pass_in_proc_6_0_i3);
MR_def_label(transform_hlds__ssdebug__first_pass_in_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__ssdebug__first_pass_in_goal_8_0,
		transform_hlds__ssdebug__first_pass_in_proc_6_0_i4);
MR_def_label(transform_hlds__ssdebug__first_pass_in_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__ssdebug__first_pass_in_proc_6_0_i5);
MR_def_label(transform_hlds__ssdebug__first_pass_in_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		transform_hlds__ssdebug__first_pass_in_proc_6_0_i6);
MR_def_label(transform_hlds__ssdebug__first_pass_in_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ssdebug_module7)
	MR_init_entry1(transform_hlds__ssdebug__first_pass_in_case_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__first_pass_in_case_8_0);
	MR_init_label1(transform_hlds__ssdebug__first_pass_in_case_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_pass_in_case'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__first_pass_in_case_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(transform_hlds__ssdebug__first_pass_in_goal_8_0,
		transform_hlds__ssdebug__first_pass_in_case_8_0_i2);
MR_def_label(transform_hlds__ssdebug__first_pass_in_case_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_proc_info_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_sym_name_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_proc_info_4_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module8)
	MR_init_entry1(transform_hlds__ssdebug__create_proxy_proc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__create_proxy_proc_6_0);
	MR_init_label10(transform_hlds__ssdebug__create_proxy_proc_6_0,2,3,4,6,7,8,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_proxy_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__create_proxy_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_proc_info_3_0,
		transform_hlds__ssdebug__create_proxy_proc_6_0_i2);
MR_def_label(transform_hlds__ssdebug__create_proxy_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ssdebug__create_proxy_proc_6_0_i3);
MR_def_label(transform_hlds__ssdebug__create_proxy_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_sym_name_2_0,
		transform_hlds__ssdebug__create_proxy_proc_6_0_i4);
MR_def_label(transform_hlds__ssdebug__create_proxy_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tfield(1, MR_r2, 2) = MR_sv(3);
	MR_tfield(1, MR_r2, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__create_proxy_proc_6_0_i6);
MR_def_label(transform_hlds__ssdebug__create_proxy_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		transform_hlds__ssdebug__create_proxy_proc_6_0_i7);
MR_def_label(transform_hlds__ssdebug__create_proxy_proc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__create_proxy_proc_6_0_i8);
MR_def_label(transform_hlds__ssdebug__create_proxy_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__ssdebug__create_proxy_proc_6_0_i10);
MR_def_label(transform_hlds__ssdebug__create_proxy_proc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__ssdebug__create_proxy_proc_6_0_i11);
MR_def_label(transform_hlds__ssdebug__create_proxy_proc_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__ssdebug__create_proxy_proc_6_0_i12);
MR_def_label(transform_hlds__ssdebug__create_proxy_proc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0,
		transform_hlds__ssdebug__create_proxy_proc_6_0_i13);
MR_def_label(transform_hlds__ssdebug__create_proxy_proc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(fn__list__filter_map_corresponding_3_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module9)
	MR_init_entry1(transform_hlds__ssdebug__get_output_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__get_output_args_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_output_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__get_output_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__921__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_r1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(fn__list__filter_map_corresponding_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__get_hlds_goal_info_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__goal_util__create_renaming_9_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(hlds__hlds_goal__rename_some_vars_in_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module10)
	MR_init_entry1(transform_hlds__ssdebug__rename_outputs_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__rename_outputs_9_0);
	MR_init_label7(transform_hlds__ssdebug__rename_outputs_9_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_outputs'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__rename_outputs_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__get_hlds_goal_info_1_0,
		transform_hlds__ssdebug__rename_outputs_9_0_i2);
MR_def_label(transform_hlds__ssdebug__rename_outputs_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__ssdebug__rename_outputs_9_0_i3);
MR_def_label(transform_hlds__ssdebug__rename_outputs_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__goal_util__create_renaming_9_0,
		transform_hlds__ssdebug__rename_outputs_9_0_i4);
MR_def_label(transform_hlds__ssdebug__rename_outputs_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__ssdebug__rename_outputs_9_0_i5);
MR_def_label(transform_hlds__ssdebug__rename_outputs_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__rename_outputs_9_0_i6);
MR_def_label(transform_hlds__ssdebug__rename_outputs_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__ssdebug__rename_outputs_9_0_i7);
MR_def_label(transform_hlds__ssdebug__rename_outputs_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		transform_hlds__ssdebug__rename_outputs_9_0_i8);
MR_def_label(transform_hlds__ssdebug__rename_outputs_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ssdebug_module11)
	MR_init_entry1(transform_hlds__ssdebug__add_promise_equivalent_solutions_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__add_promise_equivalent_solutions_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_promise_equivalent_solutions'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__add_promise_equivalent_solutions_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__construct_type_3_0);
MR_decl_entry(svvarset__new_named_var_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module12)
	MR_init_entry1(transform_hlds__ssdebug__make_retry_var_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_retry_var_6_0);
	MR_init_label4(transform_hlds__ssdebug__make_retry_var_6_0,2,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_retry_var'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_retry_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		transform_hlds__ssdebug__make_retry_var_6_0_i2);
MR_def_label(transform_hlds__ssdebug__make_retry_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("ssdb_retry", 10);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__ssdebug__make_retry_var_6_0_i5);
MR_def_label(transform_hlds__ssdebug__make_retry_var_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__ssdebug__make_retry_var_6_0_i6);
MR_def_label(transform_hlds__ssdebug__make_retry_var_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_retry_var_6_0_i8);
MR_def_label(transform_hlds__ssdebug__make_retry_var_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__builtin_state_4_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module13)
	MR_init_entry1(transform_hlds__ssdebug__make_recursive_call_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_recursive_call_6_0);
	MR_init_label8(transform_hlds__ssdebug__make_recursive_call_6_0,2,3,5,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_recursive_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_recursive_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i2);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i3);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__builtin_state_4_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i5);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_proc_info_3_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i7);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i8);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__get_hlds_goal_info_1_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i9);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i10);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i11);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__det_switch_detism_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module14)
	MR_init_entry1(transform_hlds__ssdebug__make_switch_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_switch_goal_4_0);
	MR_init_label9(transform_hlds__ssdebug__make_switch_goal_4_0,2,14,15,16,17,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_switch_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_switch_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		transform_hlds__ssdebug__make_switch_goal_4_0_i2);
MR_def_label(transform_hlds__ssdebug__make_switch_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_string_const("ssdb_retry", 10);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_string_const("do_retry", 8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r1;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_string_const("do_not_retry", 12);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_tempr4;
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr5 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 3) = MR_tempr3;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__get_hlds_goal_info_1_0,
		transform_hlds__ssdebug__make_switch_goal_4_0_i14);
MR_def_label(transform_hlds__ssdebug__make_switch_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__get_hlds_goal_info_1_0,
		transform_hlds__ssdebug__make_switch_goal_4_0_i15);
MR_def_label(transform_hlds__ssdebug__make_switch_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__ssdebug__make_switch_goal_4_0_i16);
MR_def_label(transform_hlds__ssdebug__make_switch_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__ssdebug__make_switch_goal_4_0_i17);
MR_def_label(transform_hlds__ssdebug__make_switch_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_switch_detism_3_0,
		transform_hlds__ssdebug__make_switch_goal_4_0_i18);
MR_def_label(transform_hlds__ssdebug__make_switch_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__ssdebug__make_switch_goal_4_0_i19);
MR_def_label(transform_hlds__ssdebug__make_switch_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__make_switch_goal_4_0_i20);
MR_def_label(transform_hlds__ssdebug__make_switch_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__ssdebug__make_switch_goal_4_0_i21);
MR_def_label(transform_hlds__ssdebug__make_switch_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ssdebug_module15)
	MR_init_entry1(fn__transform_hlds__ssdebug__impure_goal_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ssdebug__impure_goal_info_1_0);
	MR_init_label2(fn__transform_hlds__ssdebug__impure_goal_info_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'impure_goal_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ssdebug__impure_goal_info_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		fn__transform_hlds__ssdebug__impure_goal_info_1_0_i2);
MR_def_label(fn__transform_hlds__ssdebug__impure_goal_info_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		fn__transform_hlds__ssdebug__impure_goal_info_1_0_i3);
MR_def_label(fn__transform_hlds__ssdebug__impure_goal_info_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_set_determinism_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(check_hlds__purity__repuritycheck_proc_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module16)
	MR_init_entry1(transform_hlds__ssdebug__commit_goal_changes_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__commit_goal_changes_10_0);
	MR_init_label10(transform_hlds__ssdebug__commit_goal_changes_10_0,2,3,4,5,8,9,10,11,15,16)
	MR_init_label6(transform_hlds__ssdebug__commit_goal_changes_10_0,17,18,19,20,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'commit_goal_changes'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__commit_goal_changes_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i2);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i3);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i4);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i5);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i8);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i9);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i10);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i11);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(6);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i15);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i16);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i17);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i18);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i19);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i20);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__purity__repuritycheck_proc_4_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i22);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i23);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,23)
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

MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_no_var_0_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module17)
	MR_init_entry1(transform_hlds__ssdebug__make_handle_event_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_handle_event_9_0);
	MR_init_label4(transform_hlds__ssdebug__make_handle_event_9_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_handle_event'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_handle_event_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		transform_hlds__ssdebug__make_handle_event_9_0_i2);
MR_def_label(transform_hlds__ssdebug__make_handle_event_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		transform_hlds__ssdebug__make_handle_event_9_0_i3);
MR_def_label(transform_hlds__ssdebug__make_handle_event_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__ssdebug__make_handle_event_9_0_i4);
MR_def_label(transform_hlds__ssdebug__make_handle_event_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(2);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__ssdebug__make_handle_event_9_0_i5);
MR_def_label(transform_hlds__ssdebug__make_handle_event_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(hlds__hlds_goal__construct_functor_4_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module18)
	MR_init_entry1(transform_hlds__ssdebug__make_proc_id_construction_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_proc_id_construction_8_0);
	MR_init_label10(transform_hlds__ssdebug__make_proc_id_construction_8_0,2,3,7,8,9,10,12,14,15,18)
	MR_init_label3(transform_hlds__ssdebug__make_proc_id_construction_8_0,20,22,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_proc_id_construction'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_proc_id_construction_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i2);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_proc_id_construction_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,4)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_proc_id_construction_8_0_i3);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i7);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i8);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i9);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i10);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_string_const_construction_alloc_8_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i12);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,3);
	MR_np_call_localret_ent(hlds__hlds_goal__make_string_const_construction_alloc_8_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i14);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i15);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("ssdb_proc_id", 12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("ProcId", 6);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i18);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i20);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i22);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_proc_id_construction_8_0_i25);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_list_module_0_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module19)
	MR_init_entry1(fn__transform_hlds__ssdebug__list_var_value_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ssdebug__list_var_value_type_0_0);
	MR_init_label3(fn__transform_hlds__ssdebug__list_var_value_type_0_0,2,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_var_value_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ssdebug__list_var_value_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		fn__transform_hlds__ssdebug__list_var_value_type_0_0_i2);
MR_def_label(fn__transform_hlds__ssdebug__list_var_value_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("var_value", 9);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		fn__transform_hlds__ssdebug__list_var_value_type_0_0_i5);
MR_def_label(fn__transform_hlds__ssdebug__list_var_value_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_list_module_0_0,
		fn__transform_hlds__ssdebug__list_var_value_type_0_0_i6);
MR_def_label(fn__transform_hlds__ssdebug__list_var_value_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("list", 4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_type__construct_type_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(hlds__instmap__var_is_ground_in_instmap_3_0);
MR_decl_entry(check_hlds__polymorphism__create_poly_info_4_0);
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0);
MR_decl_entry(check_hlds__polymorphism__poly_info_extract_6_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(hlds__hlds_goal__rename_vars_in_goals_4_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module20)
	MR_init_entry1(transform_hlds__ssdebug__make_var_value_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_var_value_18_0);
	MR_init_label10(transform_hlds__ssdebug__make_var_value_18_0,2,5,6,8,10,11,14,16,17,18)
	MR_init_label10(transform_hlds__ssdebug__make_var_value_18_0,19,21,22,23,24,25,28,31,29,38)
	MR_init_label7(transform_hlds__ssdebug__make_var_value_18_0,43,45,49,50,12,54,57)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_var_value'/18 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_var_value_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_sv(13) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		transform_hlds__ssdebug__make_var_value_18_0_i2);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("var_value", 9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i5);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(18) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i6);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__make_string_const_construction_alloc_8_0,
		transform_hlds__ssdebug__make_var_value_18_0_i8);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_alloc_8_0,
		transform_hlds__ssdebug__make_var_value_18_0_i10);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(14) = MR_r4;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Word) MR_string_const("VarDesc", 7);
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i11);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__instmap__var_is_ground_in_instmap_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i14);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_var_value_18_0_i12);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i16);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i17);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i18);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		transform_hlds__ssdebug__make_var_value_18_0_i19);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(20);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i21);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		transform_hlds__ssdebug__make_var_value_18_0_i22);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		transform_hlds__ssdebug__make_var_value_18_0_i23);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__make_var_value_18_0_i24);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__make_var_value_18_0_i25);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("bound_head_var", 14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(5) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 3;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(6);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(20);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i28);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__is_empty_1_0,
		transform_hlds__ssdebug__make_var_value_18_0_i31);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_var_value_18_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i43);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i38);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i43);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(12);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_goal__rename_vars_in_goals_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i45);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__make_var_value_18_0_i49);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(17);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i50);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(15);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("unbound_head_var", 16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tempr3 = MR_sv(18);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(14);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i54);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i57);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(17);
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__io_state_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__io_io_type_0_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module21)
	MR_init_entry1(transform_hlds__ssdebug__make_arg_list_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_arg_list_18_0);
	MR_init_label10(transform_hlds__ssdebug__make_arg_list_18_0,4,5,7,8,11,14,3,16,18,23)
	MR_init_label10(transform_hlds__ssdebug__make_arg_list_18_0,24,22,26,27,20,31,30,33,34,35)
	MR_init_label6(transform_hlds__ssdebug__make_arg_list_18_0,36,37,38,46,48,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_arg_list'/18 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_arg_list_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_arg_list_18_0_i3);
	}
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("EmptyVarList", 12);
	MR_r3 = MR_r8;
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i4);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__list_var_value_type_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i5);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i7);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_list_module_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i8);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_string_const("list", 4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_list_module_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i11);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("[]", 2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 2) = MR_sv(8);
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i14);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_decr_sp_and_return(17);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r3, 0);
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i16);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(12) = MR_tempr1;
	MR_sv(13) = MR_r8;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i18);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i23);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i24);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_arg_list_18_0_i22);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_decr_sp_and_return(17);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_io_type_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i26);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i27);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_arg_list_18_0_i20);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_decr_sp_and_return(17);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i31);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_arg_list_18_0_i30);
	}
	MR_sv(2) = MR_sv(6);
	MR_sv(3) = MR_sv(7);
	MR_sv(4) = MR_sv(10);
	MR_sv(7) = MR_sv(13);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r3 = MR_r4;
	MR_sv(6) = MR_sv(12);
	MR_r2 = (MR_Word) MR_string_const("FullListVar", 11);
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(transform_hlds__ssdebug__make_arg_list_18_0_i34);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(13);
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_var_value_18_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i33);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_r8;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_r3 = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("FullListVar", 11);
	MR_r1 = MR_sv(14);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i35);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__list_var_value_type_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i36);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i37);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_list_module_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i38);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("list", 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 2;
	MR_tfield(1, MR_r2, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i46);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i48);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i49);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(hlds__goal_util__update_instmap_3_0);
MR_decl_entry(fn__list__condense_1_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module22)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_det_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_det_6_0);
	MR_init_label10(transform_hlds__ssdebug__process_proc_det_6_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label10(transform_hlds__ssdebug__process_proc_det_6_0,13,16,17,18,19,20,23,24,22,25)
	MR_init_label6(transform_hlds__ssdebug__process_proc_det_6_0,26,27,31,32,33,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc_det'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__process_proc_det_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(9) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i2);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i3);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i4);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i5);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i6);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i7);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_proc_id_construction_8_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i8);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i9);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(20) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(20);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i11);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i12);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i13);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r8;
	MR_sv(15) = MR_r4;
	MR_sv(16) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_call", 17);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i16);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__get_output_args_4_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i17);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__rename_outputs_9_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i18);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_sv(18) = MR_r4;
	MR_sv(19) = MR_r5;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i19);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i20);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__process_proc_det_6_0_i22);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i23);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(transform_hlds__ssdebug__add_promise_equivalent_solutions_3_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i24);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i25);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_sv(3) = MR_sv(12);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i25);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(18);
	MR_r9 = MR_sv(19);
	MR_r10 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i26);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r3;
	MR_sv(14) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("DoRetry", 7);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_retry_var_6_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i27);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("handle_event_exit", 17);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i31);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(15) = MR_r4;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_recursive_call_6_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i32);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_switch_goal_4_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i33);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r1;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__ssdebug__process_proc_det_6_0_i45);
MR_def_label(transform_hlds__ssdebug__process_proc_det_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(15);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(transform_hlds__ssdebug__commit_goal_changes_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__fail_goal_0_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module23)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_semi_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_semi_6_0);
	MR_init_label10(transform_hlds__ssdebug__process_proc_semi_6_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label10(transform_hlds__ssdebug__process_proc_semi_6_0,13,16,17,18,19,20,21,25,26,27)
	MR_init_label10(transform_hlds__ssdebug__process_proc_semi_6_0,28,32,33,34,35,38,39,37,40,41)
	MR_init_label8(transform_hlds__ssdebug__process_proc_semi_6_0,36,43,49,52,53,59,62,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc_semi'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__process_proc_semi_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(26);
	MR_sv(26) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(9) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i2);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i3);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i4);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i5);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i6);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i7);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_proc_id_construction_8_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i8);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i9);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(25) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(25);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i11);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i12);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i13);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r8;
	MR_sv(15) = MR_r4;
	MR_sv(16) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_call", 17);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i16);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__get_output_args_4_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i17);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__rename_outputs_9_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i18);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_sv(18) = MR_r4;
	MR_sv(19) = MR_r5;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i19);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(18);
	MR_r9 = MR_sv(19);
	MR_r10 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i20);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_sv(17) = MR_r4;
	MR_sv(18) = MR_r5;
	MR_sv(19) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("DoRetryA", 8);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_retry_var_6_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i21);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("handle_event_exit", 17);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(19);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i25);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_sv(20) = MR_r3;
	MR_sv(21) = MR_r4;
	MR_r1 = MR_sv(18);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_recursive_call_6_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i26);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(19);
	MR_r6 = MR_sv(17);
	MR_r7 = MR_sv(18);
	MR_r8 = MR_sv(20);
	MR_r9 = MR_sv(21);
	MR_r10 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i27);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(20) = MR_r4;
	MR_sv(18) = MR_r3;
	MR_sv(22) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("DoRetryB", 8);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_retry_var_6_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i28);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("handle_event_fail", 17);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i32);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(21) = MR_r2;
	MR_sv(23) = MR_r3;
	MR_sv(24) = MR_r4;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i33);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__impure_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i34);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i35);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r2 == (MR_Integer) 3) || ((MR_Integer) MR_r2 == (MR_Integer) 2)))) {
		MR_GOTO_LAB(transform_hlds__ssdebug__process_proc_semi_6_0_i37);
	}
	MR_r1 = MR_sv(25);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i38);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(transform_hlds__ssdebug__add_promise_equivalent_solutions_3_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i39);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ssdebug__process_proc_semi_6_0_i36);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__process_proc_semi_6_0_i40);
	}
	MR_r3 = MR_sv(13);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(8);
	MR_sv(11) = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__ssdebug__process_proc_semi_6_0_i36);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__this_file_0_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i41);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("process_proc_semi: zero solutions", 33);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i36);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_switch_goal_4_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i43);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(16);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i49);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(19);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_0_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i52);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_switch_goal_4_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i53);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(17);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i59);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(19);
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i62);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__ssdebug__process_proc_semi_6_0_i71);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(22);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(21);
	MR_r7 = MR_sv(23);
	MR_r8 = MR_sv(24);
	MR_succip_word = MR_sv(26);
	MR_decr_sp(26);
	MR_np_tailcall_ent(transform_hlds__ssdebug__commit_goal_changes_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module24)
	MR_init_entry1(fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0);
	MR_init_label3(fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'impure_backtrack_goal_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0_i2);
MR_def_label(fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0_i3);
MR_def_label(fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0_i4);
MR_def_label(fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 6;
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


MR_BEGIN_MODULE(transform_hlds__ssdebug_module25)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_nondet_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_nondet_6_0);
	MR_init_label10(transform_hlds__ssdebug__process_proc_nondet_6_0,2,3,4,5,6,7,8,10,11,12)
	MR_init_label10(transform_hlds__ssdebug__process_proc_nondet_6_0,15,16,17,18,19,22,23,24,28,33)
	MR_init_label10(transform_hlds__ssdebug__process_proc_nondet_6_0,43,45,47,51,52,53,54,60,62,67)
	MR_init_label1(transform_hlds__ssdebug__process_proc_nondet_6_0,70)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc_nondet'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__process_proc_nondet_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i2);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i3);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i4);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i5);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i6);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_proc_id_construction_8_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i7);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i8);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i10);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i11);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i12);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(8) = MR_r8;
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_call_nondet", 24);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i15);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i16);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i17);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i18);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(14) = MR_tempr1;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r6;
	MR_sv(15) = MR_r7;
	MR_sv(18) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i19);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("handle_event_exit_nondet", 24);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(15);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i22);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("handle_event_redo_nondet", 24);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i23);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r4;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_0_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i24);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(11) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = (MR_Integer) 7;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i28);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(11);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_r2;
	MR_r1 = (MR_Integer) 3;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__impure_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i33);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(13);
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i43);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__impure_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i45);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("DoRetry", 7);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_retry_var_6_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i47);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("handle_event_fail_nondet", 24);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(15);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i51);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r1 = MR_sv(18);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_recursive_call_6_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i52);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_0_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i53);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_switch_goal_4_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i54);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(13);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i60);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i62);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__impure_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i67);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_nondet_6_0_i70);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(18);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(transform_hlds__ssdebug__commit_goal_changes_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ssdebug_module26)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_failure_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_failure_6_0);
	MR_init_label10(transform_hlds__ssdebug__process_proc_failure_6_0,2,3,4,5,6,7,8,10,11,12)
	MR_init_label10(transform_hlds__ssdebug__process_proc_failure_6_0,15,16,20,21,22,23,24,28,33,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc_failure'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__process_proc_failure_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i2);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i3);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i4);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i5);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i6);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_proc_id_construction_8_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i7);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i8);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i10);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i11);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i12);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_call", 17);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i15);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("DoRetry", 7);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_retry_var_6_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i16);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("handle_event_fail", 17);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i20);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_recursive_call_6_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i21);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_0_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i22);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_switch_goal_4_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i23);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i24);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__impure_backtrack_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i28);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__impure_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i33);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__ssdebug__process_proc_failure_6_0_i41);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(transform_hlds__ssdebug__commit_goal_changes_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ssdebug_module27)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_erroneous_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_erroneous_6_0);
	MR_init_label10(transform_hlds__ssdebug__process_proc_erroneous_6_0,2,3,4,5,6,7,8,10,11,12)
	MR_init_label2(transform_hlds__ssdebug__process_proc_erroneous_6_0,15,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc_erroneous'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__process_proc_erroneous_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i2);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i3);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i4);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i5);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i6);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_proc_id_construction_8_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i7);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i8);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i10);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i11);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i12);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_call", 17);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i15);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__ssdebug__process_proc_erroneous_6_0_i22);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(transform_hlds__ssdebug__commit_goal_changes_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ssdebug_module28)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__process_proc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module29)
	MR_init_entry1(__Unify___transform_hlds__ssdebug__proxy_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__ssdebug__proxy_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ssdebug__proxy_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
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

MR_BEGIN_MODULE(transform_hlds__ssdebug_module30)
	MR_init_entry1(__Compare___transform_hlds__ssdebug__proxy_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__ssdebug__proxy_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ssdebug__proxy_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module31)
	MR_init_entry1(fn__transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__921__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__921__1_3_0);
	MR_init_label2(fn__transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__921__1_3_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__get_output_args__921__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__921__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		fn__transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__921__1_3_0_i2);
MR_def_label(fn__transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__921__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__921__1_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__921__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_decl_entry(check_hlds__mode_util__mode_is_fully_input_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(check_hlds__mode_util__mode_is_fully_output_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module32)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0);
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,2,9,15,13,17,11,8,20,22,24)
	MR_init_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,26,28,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__process_proc__[3]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i15);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i13);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_output_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i11);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i20);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__ssdebug__process_proc_erroneous_6_0);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__ssdebug__process_proc_failure_6_0);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r1 == (MR_Integer) 4) || ((MR_Integer) MR_r1 == (MR_Integer) 0)))) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__ssdebug__process_proc_det_6_0);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r1 == (MR_Integer) 5) || ((MR_Integer) MR_r1 == (MR_Integer) 1)))) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__ssdebug__process_proc_semi_6_0);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(transform_hlds__ssdebug__process_proc_nondet_6_0);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_115_100_101_98_117_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_112_114_111_99_95_95_91_51_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ssdebug_maybe_bunch_0(void)
{
	transform_hlds__ssdebug_module0();
	transform_hlds__ssdebug_module1();
	transform_hlds__ssdebug_module2();
	transform_hlds__ssdebug_module3();
	transform_hlds__ssdebug_module4();
	transform_hlds__ssdebug_module5();
	transform_hlds__ssdebug_module6();
	transform_hlds__ssdebug_module7();
	transform_hlds__ssdebug_module8();
	transform_hlds__ssdebug_module9();
	transform_hlds__ssdebug_module10();
	transform_hlds__ssdebug_module11();
	transform_hlds__ssdebug_module12();
	transform_hlds__ssdebug_module13();
	transform_hlds__ssdebug_module14();
	transform_hlds__ssdebug_module15();
	transform_hlds__ssdebug_module16();
	transform_hlds__ssdebug_module17();
	transform_hlds__ssdebug_module18();
	transform_hlds__ssdebug_module19();
	transform_hlds__ssdebug_module20();
	transform_hlds__ssdebug_module21();
	transform_hlds__ssdebug_module22();
	transform_hlds__ssdebug_module23();
	transform_hlds__ssdebug_module24();
	transform_hlds__ssdebug_module25();
	transform_hlds__ssdebug_module26();
	transform_hlds__ssdebug_module27();
	transform_hlds__ssdebug_module28();
	transform_hlds__ssdebug_module29();
	transform_hlds__ssdebug_module30();
	transform_hlds__ssdebug_module31();
	transform_hlds__ssdebug_module32();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ssdebug__init(void);
void mercury__transform_hlds__ssdebug__init_type_tables(void);
void mercury__transform_hlds__ssdebug__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ssdebug__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ssdebug__init_complexity_procs(void);
#endif

void mercury__transform_hlds__ssdebug__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ssdebug_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ssdebug__type_ctor_info_proxy_map_0,
		transform_hlds__ssdebug__proxy_map_0_0);
	mercury__transform_hlds__ssdebug__init_debugger();
}

void mercury__transform_hlds__ssdebug__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ssdebug__type_ctor_info_proxy_map_0);
	}
}


void mercury__transform_hlds__ssdebug__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ssdebug__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__ssdebug);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ssdebug__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
