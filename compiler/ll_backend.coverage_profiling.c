/*
** Automatically generated from `coverage_profiling.m'
** by the Mercury compiler,
** version 11.07-beta-2011-12-16, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__coverage_profiling__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 202 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "ll_backend.coverage_profiling.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 32 "ll_backend.coverage_profiling.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 36 "ll_backend.coverage_profiling.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 40 "ll_backend.coverage_profiling.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 44 "ll_backend.coverage_profiling.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.coverage_profiling.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 52 "ll_backend.coverage_profiling.c"
#line 53 "ll_backend.coverage_profiling.c"
#include "ll_backend.coverage_profiling.mh"

#line 56 "ll_backend.coverage_profiling.c"
#line 57 "ll_backend.coverage_profiling.c"
#ifndef LL_BACKEND__COVERAGE_PROFILING_DECL_GUARD
#define LL_BACKEND__COVERAGE_PROFILING_DECL_GUARD

#line 61 "ll_backend.coverage_profiling.c"
#line 62 "ll_backend.coverage_profiling.c"

#endif
#line 65 "ll_backend.coverage_profiling.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_before_known_0,
	mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0,
	mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0,
	mercury_data_ll_backend__coverage_profiling__type_ctor_info_proc_coverage_info_0;
MR_decl_label2(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0, 3,4)
MR_decl_label7(ll_backend__coverage_profiling__coverage_point_ll_code_3_0, 2,3,4,5,6,7,9)
MR_decl_label10(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0, 3,6,4,9,8,13,11,15,16,17)
MR_decl_label10(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0, 19,20,21,14,23,22,27,25,29,28)
MR_decl_label10(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0, 32,35,31,36,2,39,40,38,42,41)
MR_decl_label4(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0, 45,47,46,52)
MR_decl_label2(ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0, 2,3)
MR_decl_label6(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0, 50,4,5,7,10,11)
MR_decl_label6(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0, 53,4,5,6,9,10)
MR_decl_label6(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0, 42,4,5,10,6,13)
MR_decl_label4(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0, 8,10,2,3)
MR_decl_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0, 81,8,12,10,13,14,15,17,4,19)
MR_decl_label4(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0, 23,21,24,25)
MR_decl_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0, 2,3,4,8,9,10,5,12,14,17)
MR_decl_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0, 16,20,19,22,27,26,29,28,34,33)
MR_decl_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0, 31,36,37,38,35,43,42,13,46,51)
MR_decl_label5(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0, 49,55,56,58,60)
MR_decl_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0, 2,6,7,12,13,11,14,15,17,18)
MR_decl_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0, 19,3,20,21,22,24,25,26,27,32)
MR_decl_label1(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0, 30)
MR_decl_label1(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_0, 3)
MR_decl_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0, 111,7,11,9,5,4,16,17,18,20)
MR_decl_label8(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0, 12,21,22,24,23,28,31,34)
MR_decl_label8(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0, 2,3,4,7,8,9,10,11)
MR_decl_label10(ll_backend__coverage_profiling__coverage_profiling_options_2_0, 2,3,5,4,6,7,8,9,10,11)
MR_decl_label2(ll_backend__coverage_profiling__coverage_profiling_options_2_0, 12,13)
MR_decl_label1(ll_backend__coverage_profiling__goal_trivial_and_3_0, 2)
MR_decl_label4(ll_backend__coverage_profiling__has_port_counts_after_4_0, 4,7,5,3)
MR_decl_label4(ll_backend__coverage_profiling__insert_coverage_point_before_6_0, 2,3,8,10)
MR_decl_label10(ll_backend__coverage_profiling__make_coverage_point_5_0, 2,3,5,6,8,9,10,11,12,23)
MR_decl_label10(ll_backend__coverage_profiling__make_coverage_point_5_0, 25,16,37,38,41,15,44,45,48,49)
MR_decl_label3(ll_backend__coverage_profiling__make_coverage_point_5_0, 50,43,56)
MR_decl_label1(ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_0, 2)
MR_decl_label2(ll_backend__coverage_profiling__proc_static_cons_id_2_0, 2,6)
MR_decl_label2(fn__ll_backend__coverage_profiling__goal_info_get_dp_info_1_0, 2,4)
MR_decl_label2(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0, 4,1)
MR_decl_label9(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0, 4,6,8,10,12,14,16,20,1)
MR_decl_label10(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label1(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0, 77)
MR_decl_label10(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0, 3,2,5,9,13,17,21,25,29,69)
MR_def_extern_entry(ll_backend__coverage_profiling__coverage_profiling_options_2_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0)
MR_decl_static(ll_backend__coverage_profiling__proc_static_cons_id_2_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_point_ll_code_3_0)
MR_decl_static(ll_backend__coverage_profiling__make_coverage_point_5_0)
MR_decl_static(ll_backend__coverage_profiling__insert_coverage_point_before_6_0)
MR_decl_static(fn__ll_backend__coverage_profiling__goal_info_get_dp_info_1_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0)
MR_decl_static(ll_backend__coverage_profiling__goal_trivial_and_3_0)
MR_decl_static(ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_0)
MR_decl_static(ll_backend__coverage_profiling__has_port_counts_after_4_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0)
MR_def_extern_entry(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0)
MR_decl_static(ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0)
MR_decl_static(__Unify___ll_backend__coverage_profiling__coverage_before_known_0_0)
MR_decl_static(__Compare___ll_backend__coverage_profiling__coverage_before_known_0_0)
MR_decl_static(__Unify___ll_backend__coverage_profiling__coverage_data_type_0_0)
MR_decl_static(__Compare___ll_backend__coverage_profiling__coverage_data_type_0_0)
MR_decl_static(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0)
MR_decl_static(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0)
MR_def_extern_entry(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
MR_string_const("\n#ifdef MR_DEEP_PROFILING_COVERAGE_DYNAMIC\n    const MR_CallSiteDynamic *csd;\n    const MR_ProcDynamic *pd;\n\n    MR_enter_instrumentation();\n\n  #ifdef MR_DEEP_P" "ROFILING_LOWLEVEL_DEBUG\n    if (MR_calldebug && MR_lld_print_enabled) {\n        MR_print_deep_prof_vars(stdout, \"increment_coverage_point_count\");\n        print" "f(\", CallSiteDynamic: 0x%x, CPIndex: %d\\n\", \n            MR_current_call_site_dynamic, CPIndex);\n    }\n  #endif\n\n    csd = MR_current_call_site_dynamic;\n\n    MR" "_deep_assert(NULL, NULL, NULL, csd != NULL);\n    pd = csd->MR_csd_callee_ptr;\n\n    MR_deep_assert(csd, NULL, NULL, pd != NULL);\n\n#ifdef MR_DEEP_CHECKS\n    /*\n  " "  ** Check that CPIndex is within bounds.\n    */\n    {\n        const MR_ProcLayout *pl;\n        const MR_ProcStatic *ps;\n\n        pl = pd->MR_pd_proc_layout;\n  " "      MR_deep_assert(csd, NULL, NULL, pl != NULL);\n        ps = pl->MR_sle_proc_static;\n        MR_deep_assert(csd, pl, NULL, ps != NULL);\n        MR_deep_asser" "t(csd, pl, ps, CPIndex >= ps->MR_ps_num_coverage_points);\n    }\n#endif\n\n    MR_deep_assert(csd, NULL, NULL, pd->MR_pd_coverage_points != NULL);\n\n    pd->MR_pd_c" "overage_points[CPIndex]++;\n\n    MR_leave_instrumentation();\n#else\n    MR_fatal_error(\n        \"increment_dynamic_coverage_point_count:  \"\n            \"dynamic d" "eep profiling not enabled\");\n#endif /* MR_DEEP_PROFILING_COVERAGE_DYNAMIC */\n", 1357),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC\n    const MR_ProcLayout *pl;\n    MR_ProcStatic       *ps;\n\n    MR_enter_instrumentation();\n\n  #ifdef MR_DEEP_PROFILING" "_LOWLEVEL_DEBUG\n    if (MR_calldebug && MR_lld_print_enabled) {\n        MR_print_deep_prof_vars(stdout, \"increment_coverage_point_count\");\n        printf(\", Pro" "cLayout: 0x%x, CPIndex: %d\\n\", ProcLayout, CPIndex);\n    }\n  #endif\n\n    pl = (const MR_ProcLayout *) ProcLayout;\n\n    MR_deep_assert(NULL, NULL, NULL, pl != NU" "LL);\n    ps = pl->MR_sle_proc_static;\n    MR_deep_assert(NULL, pl, NULL, ps != NULL);\n\n    MR_deep_assert(NULL, pl, ps, CPIndex >= ps->MR_ps_num_coverage_points" ");\n    MR_deep_assert(NULL, pl, ps, ps->MR_ps_coverage_points != NULL);\n\n    ps->MR_ps_coverage_points[CPIndex]++;\n\n    MR_leave_instrumentation();\n#else\n    MR" "_fatal_error(\n        \"increment_static_coverage_point_count:  \"\n            \"static coverage profiling not enabled\");\n#endif /* MR_DEEP_PROFILING_COVERAGE_STAT" "IC */\n", 966),
MR_tbmkword(0, 0)
},
{
MR_string_const("CPIndex", 7),
MR_TAG_COMMON(0,2,0)
},
{
MR_string_const("ProcLayout", 10),
MR_TAG_COMMON(0,2,0)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
MR_TAG_COMMON(3,1,0),
MR_TAG_COMMON(3,1,0)
}
},
{
{
MR_TAG_COMMON(0,4,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,1),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const struct mercury_type_3 mercury_common_3[3] =
{
{
MR_TAG_COMMON(0,0,2)
},
{
MR_TAG_COMMON(0,0,3)
},
{
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_TAG_COMMON(1,3,0),
0
},
{
MR_TAG_COMMON(1,3,1),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_trivial_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_port_counts_give_coverage_after_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ll_backend__coverage_profiling, coverage_profiling_options),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, goal_trivial),
MR_CTOR0_ADDR(hlds__hlds_goal, goal_trivial),
MR_CTOR0_ADDR(hlds__hlds_goal, port_counts_give_coverage_after),
MR_CTOR0_ADDR(hlds__hlds_goal, port_counts_give_coverage_after)
}
},
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0 = {
	"coverage_before_known",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1 = {
	"coverage_before_unknown",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__coverage_profiling__enum_value_ordered_coverage_before_known_0[] = {
	&mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0,
	&mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__coverage_profiling__enum_name_ordered_coverage_before_known_0[] = {
	&mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_0,
	&mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_before_known_0_1
};

const MR_Integer mercury_data_ll_backend__coverage_profiling__functor_number_map_coverage_before_known_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_before_known_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__coverage_profiling__coverage_before_known_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__coverage_profiling__coverage_before_known_0_0)),
	"ll_backend.coverage_profiling",
	"coverage_before_known",
	{ (void *)mercury_data_ll_backend__coverage_profiling__enum_name_ordered_coverage_before_known_0 },
	{ (void *)mercury_data_ll_backend__coverage_profiling__enum_value_ordered_coverage_before_known_0 },
	2,
	4,
	mercury_data_ll_backend__coverage_profiling__functor_number_map_coverage_before_known_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0 = {
	"static_coverage_data",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1 = {
	"dynamic_coverage_data",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__coverage_profiling__enum_value_ordered_coverage_data_type_0[] = {
	&mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0,
	&mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__coverage_profiling__enum_name_ordered_coverage_data_type_0[] = {
	&mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_1,
	&mercury_data_ll_backend__coverage_profiling__enum_functor_desc_coverage_data_type_0_0
};

const MR_Integer mercury_data_ll_backend__coverage_profiling__functor_number_map_coverage_data_type_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__coverage_profiling__coverage_data_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__coverage_profiling__coverage_data_type_0_0)),
	"ll_backend.coverage_profiling",
	"coverage_data_type",
	{ (void *)mercury_data_ll_backend__coverage_profiling__enum_name_ordered_coverage_data_type_0 },
	{ (void *)mercury_data_ll_backend__coverage_profiling__enum_value_ordered_coverage_data_type_0 },
	2,
	4,
	mercury_data_ll_backend__coverage_profiling__functor_number_map_coverage_data_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__coverage_profiling__field_types_coverage_profiling_options_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_ll_backend__coverage_profiling__field_names_coverage_profiling_options_0_0[] = {
	"cpo_dynamic_coverage",
	"cpo_use_calls",
	"cpo_coverage_after_goal",
	"cpo_branch_ite",
	"cpo_branch_switch",
	"cpo_branch_disj",
	"cpo_use_portcounts",
	"cpo_use_trivial",
	"cpo_run_first_pass"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0 = {
	"coverage_profiling_options",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__coverage_profiling__field_types_coverage_profiling_options_0_0,
	mercury_data_ll_backend__coverage_profiling__field_names_coverage_profiling_options_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0[] = {
	&mercury_data_ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__coverage_profiling__du_stag_ordered_coverage_profiling_options_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__coverage_profiling__du_name_ordered_coverage_profiling_options_0[] = {
	&mercury_data_ll_backend__coverage_profiling__du_functor_desc_coverage_profiling_options_0_0
};

const MR_Integer mercury_data_ll_backend__coverage_profiling__functor_number_map_coverage_profiling_options_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0)),
	"ll_backend.coverage_profiling",
	"coverage_profiling_options",
	{ (void *)mercury_data_ll_backend__coverage_profiling__du_name_ordered_coverage_profiling_options_0 },
	{ (void *)mercury_data_ll_backend__coverage_profiling__du_ptag_ordered_coverage_profiling_options_0 },
	1,
	4,
	mercury_data_ll_backend__coverage_profiling__functor_number_map_coverage_profiling_options_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_set_types_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_deep_recursion_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_deep_recursion_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_deep_recursion_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_set_types_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__coverage_profiling__field_types_proc_coverage_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_coverage_point_info_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_set_types_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
};

const MR_ConstString mercury_data_ll_backend__coverage_profiling__field_names_proc_coverage_info_0_0[] = {
	"ci_coverage_points",
	"ci_cp_index_counter",
	"ci_var_info",
	"ci_module_info",
	"ci_pred_proc_id",
	"ci_maybe_rec_info",
	"ci_coverage_profiling_opts",
	"ci_containing_goal_map"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0 = {
	"proc_coverage_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__coverage_profiling__field_types_proc_coverage_info_0_0,
	mercury_data_ll_backend__coverage_profiling__field_names_proc_coverage_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0[] = {
	&mercury_data_ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__coverage_profiling__du_stag_ordered_proc_coverage_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__coverage_profiling__du_name_ordered_proc_coverage_info_0[] = {
	&mercury_data_ll_backend__coverage_profiling__du_functor_desc_proc_coverage_info_0_0
};

const MR_Integer mercury_data_ll_backend__coverage_profiling__functor_number_map_proc_coverage_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__coverage_profiling__type_ctor_info_proc_coverage_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0)),
	"ll_backend.coverage_profiling",
	"proc_coverage_info",
	{ (void *)mercury_data_ll_backend__coverage_profiling__du_name_ordered_proc_coverage_info_0 },
	{ (void *)mercury_data_ll_backend__coverage_profiling__du_ptag_ordered_proc_coverage_info_0 },
	1,
	4,
	mercury_data_ll_backend__coverage_profiling__functor_number_map_proc_coverage_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.coverage_profiling",
"ll_backend.coverage_profiling",
"coverage_prof_first_pass_conj",
7,
0
},
"ll_backend.coverage_profiling",
"coverage_profiling.m",
909,
"51"
};


MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(bool__or_3_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module0)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_profiling_options_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_profiling_options_2_0);
	MR_init_label10(ll_backend__coverage_profiling__coverage_profiling_options_2_0,2,3,5,4,6,7,8,9,10,11)
	MR_init_label2(ll_backend__coverage_profiling__coverage_profiling_options_2_0,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_profiling_options'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__coverage_profiling__coverage_profiling_options_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__coverage_profiling__coverage_profiling_options_2_0_i2);
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 191;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__coverage_profiling__coverage_profiling_options_2_0_i3);
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_profiling_options_2_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 190;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_profiling_options_2_0_i4);
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 190;
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__coverage_profiling__coverage_profiling_options_2_0_i6);
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 192;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__coverage_profiling__coverage_profiling_options_2_0_i7);
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 193;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__coverage_profiling__coverage_profiling_options_2_0_i8);
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 194;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__coverage_profiling__coverage_profiling_options_2_0_i9);
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 195;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__coverage_profiling__coverage_profiling_options_2_0_i10);
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 196;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__coverage_profiling__coverage_profiling_options_2_0_i11);
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 197;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__coverage_profiling__coverage_profiling_options_2_0_i12);
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__coverage_profiling__coverage_profiling_options_2_0_i13);
MR_def_label(ll_backend__coverage_profiling__coverage_profiling_options_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(6);
	MR_tfield(0, MR_r2, 5) = MR_sv(7);
	MR_tfield(0, MR_r2, 6) = MR_sv(1);
	MR_tfield(0, MR_r2, 7) = MR_sv(8);
	MR_tfield(0, MR_r2, 8) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module1)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0);
	MR_init_label2(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_known_after_goal_with_detism'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0_i4);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module2)
	MR_init_entry1(ll_backend__coverage_profiling__proc_static_cons_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__proc_static_cons_id_2_0);
	MR_init_label2(ll_backend__coverage_profiling__proc_static_cons_id_2_0,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_static_cons_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__proc_static_cons_id_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r1, 4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 5);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__proc_static_cons_id_2_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__proc_static_cons_id_2_0_i2);
	}
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		ll_backend__coverage_profiling__proc_static_cons_id_2_0_i6);
MR_def_label(ll_backend__coverage_profiling__proc_static_cons_id_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		ll_backend__coverage_profiling__proc_static_cons_id_2_0_i6);
MR_def_label(ll_backend__coverage_profiling__proc_static_cons_id_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__default_attributes_1_0);
MR_decl_entry(parse_tree__prog_data__set_thread_safe_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mercury_3_0);
MR_decl_entry(parse_tree__prog_data__set_purity_3_0);
MR_decl_entry(parse_tree__prog_data__set_terminates_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_throw_exception_3_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module3)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_point_ll_code_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_point_ll_code_3_0);
	MR_init_label7(ll_backend__coverage_profiling__coverage_point_ll_code_3_0,2,3,4,5,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_point_ll_code'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_point_ll_code_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		ll_backend__coverage_profiling__coverage_point_ll_code_3_0_i2);
MR_def_label(ll_backend__coverage_profiling__coverage_point_ll_code_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		ll_backend__coverage_profiling__coverage_point_ll_code_3_0_i3);
MR_def_label(ll_backend__coverage_profiling__coverage_point_ll_code_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		ll_backend__coverage_profiling__coverage_point_ll_code_3_0_i4);
MR_def_label(ll_backend__coverage_profiling__coverage_point_ll_code_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		ll_backend__coverage_profiling__coverage_point_ll_code_3_0_i5);
MR_def_label(ll_backend__coverage_profiling__coverage_point_ll_code_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_terminates_3_0,
		ll_backend__coverage_profiling__coverage_point_ll_code_3_0_i6);
MR_def_label(ll_backend__coverage_profiling__coverage_point_ll_code_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_throw_exception_3_0,
		ll_backend__coverage_profiling__coverage_point_ll_code_3_0_i7);
MR_def_label(ll_backend__coverage_profiling__coverage_point_ll_code_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_point_ll_code_3_0_i9);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__coverage_profiling__coverage_point_ll_code_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__int_type_0_0);
MR_decl_entry(ll_backend__deep_profiling__generate_var_5_0);
MR_decl_entry(ll_backend__deep_profiling__generate_deep_const_unify_3_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0);
MR_decl_entry(hlds__hlds_goal__make_foreign_args_4_0);
MR_decl_entry(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0);
MR_decl_entry(fn__hlds__hlds_goal__impure_init_goal_info_3_0);
MR_decl_entry(ll_backend__deep_profiling__generate_deep_call_7_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module4)
	MR_init_entry1(ll_backend__coverage_profiling__make_coverage_point_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__make_coverage_point_5_0);
	MR_init_label10(ll_backend__coverage_profiling__make_coverage_point_5_0,2,3,5,6,8,9,10,11,12,23)
	MR_init_label10(ll_backend__coverage_profiling__make_coverage_point_5_0,25,16,37,38,41,15,44,45,48,49)
	MR_init_label3(ll_backend__coverage_profiling__make_coverage_point_5_0,50,43,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_coverage_point'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__make_coverage_point_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i2);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i3);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i5);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("CPIndex", 7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i6);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_const_unify_3_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i8);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i9);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ProcLayout", 10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_var_5_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i10);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__proc_static_cons_id_2_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i11);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_const_unify_3_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i12);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(7) = MR_tempr1;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr4, 7);
	MR_tempr5 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr5, 0);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__make_coverage_point_5_0_i16);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,2,1);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i23);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_foreign_args_4_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i25);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("increment_dynamic_coverage_point_count", 38);
	MR_r4 = MR_r5;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__coverage_profiling__make_coverage_point_5_0_i15);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_sv(7), 3);
	MR_sv(5) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,2,2);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i37);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i38);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,38)
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
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_foreign_args_4_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i41);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("increment_static_coverage_point_count", 37);
	MR_r4 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__make_coverage_point_5_0_i43);
	}
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i44);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_point_ll_code_3_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i45);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 7) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i48);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i49);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__impure_init_goal_info_3_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i50);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__deep_profiling__generate_deep_call_7_0,
		ll_backend__coverage_profiling__make_coverage_point_5_0_i56);
MR_def_label(ll_backend__coverage_profiling__make_coverage_point_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__goal_util__create_conj_from_list_3_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module5)
	MR_init_entry1(ll_backend__coverage_profiling__insert_coverage_point_before_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__insert_coverage_point_before_6_0);
	MR_init_label4(ll_backend__coverage_profiling__insert_coverage_point_before_6_0,2,3,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_coverage_point_before'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__insert_coverage_point_before_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ll_backend__coverage_profiling__make_coverage_point_5_0,
		ll_backend__coverage_profiling__insert_coverage_point_before_6_0_i2);
MR_def_label(ll_backend__coverage_profiling__insert_coverage_point_before_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__insert_coverage_point_before_6_0_i3);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__insert_coverage_point_before_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__coverage_profiling__insert_coverage_point_before_6_0_i8);
MR_def_label(ll_backend__coverage_profiling__insert_coverage_point_before_6_0,3)
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
		ll_backend__coverage_profiling__insert_coverage_point_before_6_0_i8);
MR_def_label(ll_backend__coverage_profiling__insert_coverage_point_before_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_util__create_conj_from_list_3_0,
		ll_backend__coverage_profiling__insert_coverage_point_before_6_0_i10);
MR_def_label(ll_backend__coverage_profiling__insert_coverage_point_before_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_maybe_dp_info_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module6)
	MR_init_entry1(fn__ll_backend__coverage_profiling__goal_info_get_dp_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__coverage_profiling__goal_info_get_dp_info_1_0);
	MR_init_label2(fn__ll_backend__coverage_profiling__goal_info_get_dp_info_1_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_dp_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__coverage_profiling__goal_info_get_dp_info_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_maybe_dp_info_1_0,
		fn__ll_backend__coverage_profiling__goal_info_get_dp_info_1_0_i2);
MR_def_label(fn__ll_backend__coverage_profiling__goal_info_get_dp_info_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__coverage_profiling__goal_info_get_dp_info_1_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__ll_backend__coverage_profiling__goal_info_get_dp_info_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.coverage_profiling", 29);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.coverage_profiling.goal_info_get_dp_info\'/1", 64);
	MR_r3 = (MR_Word) MR_string_const("MaybeDPInfo = no", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_goal__add_impurity_if_needed_3_0);
MR_decl_entry(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module7)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0);
	MR_init_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,2,3,4,8,9,10,5,12,14,17)
	MR_init_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,16,20,19,22,27,26,29,28,34,33)
	MR_init_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,31,36,37,38,35,43,42,13,46,51)
	MR_init_label5(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,49,55,56,58,60)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_second_pass_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i2);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i3);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_sv(9), 6);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ll_backend__coverage_profiling__goal_info_get_dp_info_1_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i4);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i5);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i5);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i8);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i9);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Coverage information is unknown for goal_id ", 44);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i10);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.coverage_profiling", 29);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.coverage_profiling.coverage_prof_second_pass_goal\'/7", 74);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i12);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_tag(MR_sv(2)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(2), 0) == (MR_Integer) 0)) || (MR_tag(MR_sv(2)) == MR_mktag((MR_Integer) 0))))) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i14);
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i34);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(1) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_sv(1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i17);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(10) = MR_r3;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i13);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i19);
	}
	MR_r1 = MR_sv(7);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i20);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(10) = MR_r3;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i13);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(2), 0);
	if (!(((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i33);
	}
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i34);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i26);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	MR_r4 = MR_tfield(3, MR_tempr2, 3);
	MR_r5 = MR_tfield(3, MR_tempr2, 4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i27);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(10) = MR_r3;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i13);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i28);
	}
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i29);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_sv(1) = (MR_Integer) 1;
	MR_r1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(10) = MR_r3;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i13);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i33);
	}
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_known_after_goal_with_detism_3_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i34);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(3) = MR_sv(2);
	MR_sv(10) = MR_sv(9);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i13);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(1) = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 0;
	MR_sv(3) = MR_sv(2);
	MR_sv(10) = MR_sv(9);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i13);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i35);
	}
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_sv(2), 1);
	MR_sv(2) = MR_tfield(3, MR_sv(2), 2);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i36);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i37);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(4))) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_sv(9);
	MR_r1 = MR_sv(2);
	MR_sv(3) = MR_tempr1;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i13);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_sv(1) = (MR_Integer) 1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = MR_tempr1;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i13);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i42);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_sv(1) = MR_tfield(3, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i43);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(10) = MR_r3;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i13);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.coverage_profiling", 29);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.coverage_profiling.coverage_prof_second_pass_goal\'/7", 74);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i13);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__add_impurity_if_needed_3_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i46);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i51);
	}
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i49);
	}
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_r5;
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(6), 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i55);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r5;
	MR_r1 = MR_tfield(0, MR_sv(10), 7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i56);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = ((MR_Integer) MR_cp_type_coverage_after);
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__make_coverage_point_5_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i58);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__goal_util__create_conj_from_list_3_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0_i60);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module8)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0);
	MR_init_label6(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0,42,4,5,10,6,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_second_pass_conj'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0_i42);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0_i4);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0_i5);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0_i6);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0_i6);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0_i10);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0_i13);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0_i13);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_conj_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module9)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0);
	MR_init_label4(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0,8,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_second_pass_disj'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0_i3);
	}
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0_i8);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0_i10);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bool__or_2_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module10)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0);
	MR_init_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,81,8,12,10,13,14,15,17,4,19)
	MR_init_label4(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,23,21,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_second_pass_disj_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i81);
	}
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_r4 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_tempr2 = MR_tfield(0, MR_tfield(0, MR_tempr4, 6), 5);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i4);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i4);
	}
	MR_tempr2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_tempr4, 6);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr4;
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i8);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i10);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i13);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i13);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i13);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i14);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(3), 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i15);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = ((MR_Integer) MR_cp_type_branch_arm);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__insert_coverage_point_before_6_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i17);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r6;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i19);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i21);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i23);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i24);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i24);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i24);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0_i25);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_disj_2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module11)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_0);
	MR_init_label1(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_second_pass_switchcase'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_0_i3);
	}
	MR_r6 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module12)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0);
	MR_init_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,111,7,11,9,5,4,16,17,18,20)
	MR_init_label8(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,12,21,22,24,23,28,31,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_second_pass_switchcase_2'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i111);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_r8 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i5);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r9 = MR_tempr3;
	MR_r3 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_tfield(1, MR_r9, 0);
	MR_r10 = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = (MR_Integer) 1;
	MR_sv(10) = MR_tfield(0, MR_r3, 6);
	MR_r4 = MR_tfield(0, MR_sv(10), 4);
	MR_r5 = MR_tfield(0, MR_sv(1), 0);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i4);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i9);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r9 = MR_r3;
	MR_r3 = MR_r7;
	MR_sv(6) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r9, 0);
	MR_r10 = MR_tempr1;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = (MR_Integer) 0;
	MR_sv(10) = MR_tfield(0, MR_r3, 6);
	MR_r4 = MR_tfield(0, MR_sv(10), 4);
	MR_r5 = MR_tfield(0, MR_sv(1), 0);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i4);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r9 = MR_r3;
	MR_r3 = MR_r7;
	MR_sv(6) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r9, 0);
	MR_r10 = MR_tempr1;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = (MR_Integer) 1;
	MR_sv(10) = MR_tfield(0, MR_r3, 6);
	MR_r4 = MR_tfield(0, MR_sv(10), 4);
	MR_r5 = MR_tfield(0, MR_sv(1), 0);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i4);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r9 = MR_r3;
	MR_r3 = MR_r7;
	MR_sv(6) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r9, 0);
	MR_r10 = MR_tempr1;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = (MR_Integer) 1;
	MR_sv(10) = MR_tfield(0, MR_r3, 6);
	MR_r4 = MR_tfield(0, MR_sv(10), 4);
	MR_r5 = MR_tfield(0, MR_sv(1), 0);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i4);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r7;
	MR_sv(6) = MR_r8;
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = (MR_Integer) 1;
	MR_sv(10) = MR_tfield(0, MR_r3, 6);
	MR_r4 = MR_tfield(0, MR_sv(10), 4);
	MR_r5 = MR_tfield(0, MR_sv(1), 0);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i12);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i12);
	}
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i12);
	}
	MR_sv(9) = MR_r1;
	MR_sv(11) = (MR_Integer) 0;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i16);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i17);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(13), 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i18);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = ((MR_Integer) MR_cp_type_branch_arm);
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__insert_coverage_point_before_6_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i20);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r9 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_sv(1) = MR_r8;
	MR_sv(2) = (MR_Integer) 1;
	MR_r7 = MR_r9;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i22);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i21);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(12) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i24);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i24);
	}
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i23);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Integer) 1;
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i28);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i28);
	}
	MR_r5 = (MR_Integer) 0;
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i31);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = (MR_Integer) 1;
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i31);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0_i34);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_switchcase_2_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module13)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0);
	MR_init_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,2,6,7,12,13,11,14,15,17,18)
	MR_init_label10(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,19,3,20,21,22,24,25,26,27,32)
	MR_init_label1(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_second_pass_ite'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i2);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 6);
	MR_tempr1 = MR_tfield(0, MR_sv(7), 3);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i3);
	}
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(9) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i6);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i7);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_cp_type_branch_arm);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i11);
	}
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i12);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i13);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_r4;
	MR_r6 = MR_r3;
	MR_r3 = MR_r5;
	MR_r1 = MR_sv(9);
	MR_r4 = MR_r6;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i22);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i14);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_reverse_path_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i15);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_cp_type_branch_arm);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i17);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i18);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__insert_coverage_point_before_6_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i19);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i22);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i20);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i21);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r4 = MR_tempr2;
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i24);
	}
	MR_sv(6) = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_np_call_localret_ent(fn__bool__or_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i26);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(1, MR_sv(6), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__insert_coverage_point_before_6_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i25);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__bool__or_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i26);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i27);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i30);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0_i32);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_second_pass_ite_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module14)
	MR_init_entry1(ll_backend__coverage_profiling__goal_trivial_and_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__goal_trivial_and_3_0);
	MR_init_label1(ll_backend__coverage_profiling__goal_trivial_and_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_trivial_and'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__goal_trivial_and_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__goal_trivial_and_3_0_i2);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__goal_trivial_and_3_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__coverage_profiling__goal_trivial_and_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module15)
	MR_init_entry1(ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_0);
	MR_init_label1(ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'port_counts_give_coverage_after_and'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_0_i2);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module16)
	MR_init_entry1(ll_backend__coverage_profiling__has_port_counts_after_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__has_port_counts_after_4_0);
	MR_init_label4(ll_backend__coverage_profiling__has_port_counts_after_4_0,4,7,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'has_port_counts_after'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__has_port_counts_after_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__has_port_counts_after_4_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__coverage_profiling__has_port_counts_after_4_0_i4);
MR_def_label(ll_backend__coverage_profiling__has_port_counts_after_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__has_port_counts_after_4_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__coverage_profiling__has_port_counts_after_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__has_port_counts_after_4_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__coverage_profiling__has_port_counts_after_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__coverage_profiling__has_port_counts_after_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_trivial_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_port_counts_give_coverage_after_0;
MR_decl_entry(list__map_foldl2_7_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_maybe_dp_info_3_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module17)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_first_pass_5_0);
	MR_init_label10(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,3,6,4,9,8,13,11,15,16,17)
	MR_init_label10(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,19,20,21,14,23,22,27,25,29,28)
	MR_init_label10(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,32,35,31,36,2,39,40,38,42,41)
	MR_init_label4(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,45,47,46,52)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_first_pass'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 7);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(5) = MR_tfield(3, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_trivial);
	MR_tempr2 = MR_tempr3;
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, port_counts_give_coverage_after);
	MR_r6 = MR_tfield(3, MR_tempr2, 2);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i6);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r3;
	MR_tempr2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 7);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i9);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r3;
	MR_tempr2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 7);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	MR_r5 = MR_tempr1;
	if (!(((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i13);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_sv(6) = MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 7);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 0;
	MR_sv(6) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 7);
	MR_r3 = MR_tfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 4);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i15);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_tfield(0, MR_r2, 0);
	MR_sv(9) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i16);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_r2, 0);
	MR_sv(10) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i17);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_sv(7) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__goal_trivial_and_3_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i19);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__goal_trivial_and_3_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i20);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__port_counts_give_coverage_after_and_3_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i21);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 7);
	MR_r3 = MR_tfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r4, 1);
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i23);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_tempr2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 7);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_r5 = MR_tfield(1, MR_tempr2, 3);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i27);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_sv(6) = MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 7);
	MR_r3 = MR_tfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 0;
	MR_sv(6) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 7);
	MR_r3 = MR_tfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i29);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_tempr2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 7);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i31);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i32);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i35);
	}
	MR_r1 = MR_sv(4);
	MR_sv(5) = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 7);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(6) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 7);
	MR_r3 = MR_tfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i36);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_sv(6) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 7);
	MR_r3 = MR_tfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.coverage_profiling", 29);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.coverage_profiling.coverage_prof_first_pass\'/5", 68);
	MR_sv(3) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i2);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i39);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i38);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__has_port_counts_after_4_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i40);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i41);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_maybe_dp_info_1_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i45);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_maybe_dp_info_3_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i52);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.coverage_profiling", 29);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.coverage_profiling.coverage_prof_first_pass\'/5", 68);
	MR_r3 = (MR_Word) MR_string_const("goal_dp_info not present", 24);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i46);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_maybe_dp_info_3_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_5_0_i52);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
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


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module18)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0);
	MR_init_label6(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0,50,4,5,7,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_first_pass_disj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0_i50);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0_i4);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0_i5);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0_i7);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0_i7);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0_i10);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 1;
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0_i11);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0_i11);
	}
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_disj_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module19)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0);
	MR_init_label6(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0,53,4,5,6,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_first_pass_switchcase'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0_i53);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0_i4);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0_i5);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0_i6);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0_i6);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0_i9);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0_i10);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0_i10);
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
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_switchcase_5_0,10)
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

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__counter__init_1_0);
MR_decl_entry(map__to_sorted_assoc_list_2_0);
MR_decl_entry(assoc_list__values_2_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module20)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0);
	MR_init_label8(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0,2,3,4,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_transform_proc_body'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_profiling_options_2_0,
		ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0_i2);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0_i3);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0_i4);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 8);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0_i9);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,
		ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0_i8);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_second_pass_goal_7_0,
		ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0_i9);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r3, 2);
	MR_sv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(map__to_sorted_assoc_list_2_0,
		ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0_i10);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__values_2_0,
		ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0_i11);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_0,11)
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


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module21)
	MR_init_entry1(ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0);
	MR_init_label2(ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coverage_prof_first_pass_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ll_backend__coverage_profiling__coverage_prof_first_pass_5_0,
		ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0_i2);
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__coverage_profiling__coverage_prof_first_pass_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module22)
	MR_init_entry1(__Unify___ll_backend__coverage_profiling__coverage_before_known_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__coverage_profiling__coverage_before_known_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__coverage_profiling__coverage_before_known_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module23)
	MR_init_entry1(__Compare___ll_backend__coverage_profiling__coverage_before_known_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__coverage_profiling__coverage_before_known_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__coverage_profiling__coverage_before_known_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module24)
	MR_init_entry1(__Unify___ll_backend__coverage_profiling__coverage_data_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__coverage_profiling__coverage_data_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__coverage_profiling__coverage_data_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module25)
	MR_init_entry1(__Compare___ll_backend__coverage_profiling__coverage_data_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__coverage_profiling__coverage_data_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__coverage_profiling__coverage_data_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module26)
	MR_init_entry1(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0);
	MR_init_label2(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tfield(0, MR_tempr2, 7);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 8);
	MR_r2 = MR_tfield(0, MR_tempr2, 8);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__coverage_profiling_module27)
	MR_init_entry1(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0);
	MR_init_label10(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label1(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,77)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i2);
MR_def_label(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i5);
MR_def_label(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i9);
MR_def_label(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i13);
MR_def_label(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i17);
MR_def_label(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i21);
MR_def_label(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i25);
MR_def_label(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i29);
MR_def_label(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i33);
MR_def_label(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0_i77);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___counter__counter_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__prog_var_set_types_0_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module28)
	MR_init_entry1(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0);
	MR_init_label9(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0,4,6,8,10,12,14,16,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i20);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i4);
MR_def_label(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i6);
MR_def_label(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__prog_var_set_types_0_0,
		__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i8);
MR_def_label(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i10);
MR_def_label(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i12);
MR_def_label(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, deep_recursion_info);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i14);
MR_def_label(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___ll_backend__coverage_profiling__coverage_profiling_options_0_0,
		__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i16);
MR_def_label(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__coverage_profiling__proc_coverage_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___counter__counter_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__prog_var_set_types_0_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__coverage_profiling_module29)
	MR_init_entry1(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0);
	MR_init_label10(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0,3,2,5,9,13,17,21,25,29,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i2);
MR_def_label(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i5);
MR_def_label(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i9);
MR_def_label(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__prog_var_set_types_0_0,
		__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i13);
MR_def_label(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i17);
MR_def_label(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i21);
MR_def_label(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, deep_recursion_info);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i25);
MR_def_label(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___ll_backend__coverage_profiling__coverage_profiling_options_0_0,
		__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i29);
MR_def_label(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___ll_backend__coverage_profiling__proc_coverage_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__coverage_profiling_maybe_bunch_0(void)
{
	ll_backend__coverage_profiling_module0();
	ll_backend__coverage_profiling_module1();
	ll_backend__coverage_profiling_module2();
	ll_backend__coverage_profiling_module3();
	ll_backend__coverage_profiling_module4();
	ll_backend__coverage_profiling_module5();
	ll_backend__coverage_profiling_module6();
	ll_backend__coverage_profiling_module7();
	ll_backend__coverage_profiling_module8();
	ll_backend__coverage_profiling_module9();
	ll_backend__coverage_profiling_module10();
	ll_backend__coverage_profiling_module11();
	ll_backend__coverage_profiling_module12();
	ll_backend__coverage_profiling_module13();
	ll_backend__coverage_profiling_module14();
	ll_backend__coverage_profiling_module15();
	ll_backend__coverage_profiling_module16();
	ll_backend__coverage_profiling_module17();
	ll_backend__coverage_profiling_module18();
	ll_backend__coverage_profiling_module19();
	ll_backend__coverage_profiling_module20();
	ll_backend__coverage_profiling_module21();
	ll_backend__coverage_profiling_module22();
	ll_backend__coverage_profiling_module23();
	ll_backend__coverage_profiling_module24();
	ll_backend__coverage_profiling_module25();
	ll_backend__coverage_profiling_module26();
	ll_backend__coverage_profiling_module27();
	ll_backend__coverage_profiling_module28();
	ll_backend__coverage_profiling_module29();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__coverage_profiling__init(void);
void mercury__ll_backend__coverage_profiling__init_type_tables(void);
void mercury__ll_backend__coverage_profiling__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__coverage_profiling__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__coverage_profiling__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__coverage_profiling__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__coverage_profiling__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__coverage_profiling_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_before_known_0,
		ll_backend__coverage_profiling__coverage_before_known_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0,
		ll_backend__coverage_profiling__coverage_data_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0,
		ll_backend__coverage_profiling__coverage_profiling_options_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__coverage_profiling__type_ctor_info_proc_coverage_info_0,
		ll_backend__coverage_profiling__proc_coverage_info_0_0);
	mercury__ll_backend__coverage_profiling__init_debugger();
}

void mercury__ll_backend__coverage_profiling__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_before_known_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_data_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__coverage_profiling__type_ctor_info_coverage_profiling_options_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__coverage_profiling__type_ctor_info_proc_coverage_info_0);
	}
}


void mercury__ll_backend__coverage_profiling__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__coverage_profiling__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__coverage_profiling);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__coverage_profiling__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__coverage_profiling__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
