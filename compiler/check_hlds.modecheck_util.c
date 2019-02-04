/*
** Automatically generated from `modecheck_util.m'
** by the Mercury compiler,
** version rotd-2010-01-31, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__modecheck_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "check_hlds.modecheck_util.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "check_hlds.modecheck_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 36 "check_hlds.modecheck_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 40 "check_hlds.modecheck_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.modecheck_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.modecheck_util.c"
#line 49 "check_hlds.modecheck_util.c"
#include "check_hlds.modecheck_util.mh"

#line 52 "check_hlds.modecheck_util.c"
#line 53 "check_hlds.modecheck_util.c"
#ifndef CHECK_HLDS__MODECHECK_UTIL_DECL_GUARD
#define CHECK_HLDS__MODECHECK_UTIL_DECL_GUARD

#line 57 "check_hlds.modecheck_util.c"
#line 58 "check_hlds.modecheck_util.c"

#endif
#line 61 "check_hlds.modecheck_util.c"

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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__modecheck_util__type_ctor_info_after_goals_0,
	mercury_data_check_hlds__modecheck_util__type_ctor_info_extra_goals_0;
MR_decl_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0, 3,6)
MR_decl_label4(check_hlds__modecheck_util__append_extra_goals_3_0, 3,6,7,20)
MR_decl_label10(check_hlds__modecheck_util__build_call_11_0, 2,3,4,5,6,7,8,10,11,12)
MR_decl_label10(check_hlds__modecheck_util__build_call_11_0, 13,14,15,16,17,18,19,20,21,23)
MR_decl_label8(check_hlds__modecheck_util__build_call_11_0, 24,25,26,27,28,29,30,1)
MR_decl_label3(check_hlds__modecheck_util__compute_arg_offset_2_0, 2,3,4)
MR_decl_label7(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0, 5,6,2,7,8,9,11)
MR_decl_label10(check_hlds__modecheck_util__construct_initialisation_call_8_0, 3,5,7,9,10,6,12,15,18,20)
MR_decl_label1(check_hlds__modecheck_util__construct_initialisation_call_8_0, 2)
MR_decl_label6(check_hlds__modecheck_util__construct_initialisation_calls_4_0, 18,4,6,7,8,9)
MR_decl_label4(check_hlds__modecheck_util__get_live_vars_3_0, 3,9,8,39)
MR_decl_label10(check_hlds__modecheck_util__handle_extra_goals_9_0, 47,4,6,9,11,12,13,14,15,16)
MR_decl_label10(check_hlds__modecheck_util__handle_extra_goals_9_0, 18,19,20,22,23,24,25,26,27,28)
MR_decl_label3(check_hlds__modecheck_util__handle_extra_goals_9_0, 30,31,5)
MR_decl_label3(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0, 15,4,6)
MR_decl_label10(check_hlds__modecheck_util__handle_implied_mode_8_0, 2,3,4,5,7,10,8,15,17,18)
MR_decl_label10(check_hlds__modecheck_util__handle_implied_mode_8_0, 19,24,26,28,30,32,23,36,38,12)
MR_decl_label10(check_hlds__modecheck_util__handle_implied_mode_8_0, 13,42,44,46,40,47,48,49,50,51)
MR_decl_label2(check_hlds__modecheck_util__handle_implied_mode_8_0, 52,55)
MR_decl_label5(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0, 24,3,4,5,8)
MR_decl_label5(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0, 28,3,4,8,9)
MR_decl_label9(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0, 28,4,5,6,7,10,12,9,14)
MR_decl_label5(check_hlds__modecheck_util__modecheck_functor_test_4_0, 2,3,5,6,7)
MR_decl_label4(check_hlds__modecheck_util__modecheck_functors_test_5_0, 2,3,5,8)
MR_decl_label7(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0, 2,3,4,7,8,5,12)
MR_decl_label10(check_hlds__modecheck_util__modecheck_set_var_inst_5_0, 2,3,6,8,9,11,10,14,15,16)
MR_decl_label10(check_hlds__modecheck_util__modecheck_set_var_inst_5_0, 18,20,21,23,19,27,29,26,35,37)
MR_decl_label10(check_hlds__modecheck_util__modecheck_set_var_inst_5_0, 42,44,39,40,46,32,49,50,51,52)
MR_decl_label6(check_hlds__modecheck_util__modecheck_set_var_inst_5_0, 5,57,62,64,60,58)
MR_decl_label2(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0, 3,2)
MR_decl_label10(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0, 55,8,9,12,14,15,16,18,17,20)
MR_decl_label4(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0, 11,23,56,1)
MR_decl_label1(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_0, 3)
MR_decl_label10(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0, 48,3,9,10,11,12,14,15,18,17)
MR_decl_label3(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0, 21,23,8)
MR_decl_label1(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0, 3)
MR_decl_label10(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0, 48,3,9,10,11,12,14,15,18,17)
MR_decl_label3(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0, 21,23,8)
MR_decl_label8(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0, 40,3,9,10,11,13,15,8)
MR_decl_label8(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0, 47,3,9,10,15,17,11,8)
MR_decl_label4(check_hlds__modecheck_util__prepend_initialisation_call_7_0, 2,3,4,6)
MR_decl_label2(fn__check_hlds__modecheck_util__cons_id_to_bound_inst_3_0, 2,3)
MR_decl_label4(__Unify___check_hlds__modecheck_util__after_goals_0_0, 14,5,7,1)
MR_decl_label4(__Unify___check_hlds__modecheck_util__extra_goals_0_0, 14,5,7,1)
MR_decl_label6(__Compare___check_hlds__modecheck_util__after_goals_0_0, 24,7,5,9,11,16)
MR_decl_label6(__Compare___check_hlds__modecheck_util__extra_goals_0_0, 24,7,5,9,11,16)
MR_def_extern_entry(check_hlds__modecheck_util__append_extra_goals_3_0)
MR_def_extern_entry(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0)
MR_def_extern_entry(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0)
MR_decl_static(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0)
MR_decl_static(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0)
MR_def_extern_entry(check_hlds__modecheck_util__handle_extra_goals_9_0)
MR_def_extern_entry(check_hlds__modecheck_util__compute_arg_offset_2_0)
MR_def_extern_entry(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0)
MR_def_extern_entry(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0)
MR_decl_static(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0)
MR_def_extern_entry(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_0)
MR_decl_static(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0)
MR_def_extern_entry(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0)
MR_def_extern_entry(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0)
MR_def_extern_entry(check_hlds__modecheck_util__modecheck_set_var_inst_5_0)
MR_def_extern_entry(check_hlds__modecheck_util__mode_context_to_unify_context_3_0)
MR_decl_static(check_hlds__modecheck_util__build_call_11_0)
MR_def_extern_entry(check_hlds__modecheck_util__construct_initialisation_call_8_0)
MR_decl_static(check_hlds__modecheck_util__handle_implied_mode_8_0)
MR_decl_static(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0)
MR_def_extern_entry(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0)
MR_decl_static(fn__check_hlds__modecheck_util__cons_id_to_bound_inst_3_0)
MR_def_extern_entry(check_hlds__modecheck_util__modecheck_functor_test_4_0)
MR_def_extern_entry(check_hlds__modecheck_util__modecheck_functors_test_5_0)
MR_def_extern_entry(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0)
MR_def_extern_entry(check_hlds__modecheck_util__construct_initialisation_calls_4_0)
MR_def_extern_entry(check_hlds__modecheck_util__prepend_initialisation_call_7_0)
MR_def_extern_entry(check_hlds__modecheck_util__get_live_vars_3_0)
MR_def_extern_entry(__Unify___check_hlds__modecheck_util__after_goals_0_0)
MR_def_extern_entry(__Compare___check_hlds__modecheck_util__after_goals_0_0)
MR_def_extern_entry(__Unify___check_hlds__modecheck_util__extra_goals_0_0)
MR_def_extern_entry(__Compare___check_hlds__modecheck_util__extra_goals_0_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
static const struct mercury_type_0 mercury_common_0[2] =
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
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_util__modecheck_functors_test_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_util__modecheck_functors_test_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst)
}
},
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modecheck_util__du_functor_desc_after_goals_0_0 = {
	"no_after_goals",
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__modecheck_util__field_types_after_goals_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__instmap__type_ctor_info_instmap_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

const MR_ConstString mercury_data_check_hlds__modecheck_util__field_names_after_goals_0_1[] = {
	"after_instmap",
	"after_goals"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modecheck_util__du_functor_desc_after_goals_0_1 = {
	"after_goals",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__modecheck_util__field_types_after_goals_0_1,
	mercury_data_check_hlds__modecheck_util__field_names_after_goals_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0[] = {
	&mercury_data_check_hlds__modecheck_util__du_functor_desc_after_goals_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1[] = {
	&mercury_data_check_hlds__modecheck_util__du_functor_desc_after_goals_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__modecheck_util__du_ptag_ordered_after_goals_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modecheck_util__du_name_ordered_after_goals_0[] = {
	&mercury_data_check_hlds__modecheck_util__du_functor_desc_after_goals_0_1,
	&mercury_data_check_hlds__modecheck_util__du_functor_desc_after_goals_0_0
};

const MR_Integer mercury_data_check_hlds__modecheck_util__functor_number_map_after_goals_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modecheck_util__type_ctor_info_after_goals_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modecheck_util__after_goals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modecheck_util__after_goals_0_0)),
	"check_hlds.modecheck_util",
	"after_goals",
	{ (void *)mercury_data_check_hlds__modecheck_util__du_name_ordered_after_goals_0 },
	{ (void *)mercury_data_check_hlds__modecheck_util__du_ptag_ordered_after_goals_0 },
	2,
	4,
	mercury_data_check_hlds__modecheck_util__functor_number_map_after_goals_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0 = {
	"no_extra_goals",
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

const MR_PseudoTypeInfo mercury_data_check_hlds__modecheck_util__field_types_extra_goals_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

const MR_ConstString mercury_data_check_hlds__modecheck_util__field_names_extra_goals_0_1[] = {
	"extra_before_main",
	"extra_after_main"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1 = {
	"extra_goals",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__modecheck_util__field_types_extra_goals_0_1,
	mercury_data_check_hlds__modecheck_util__field_names_extra_goals_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0[] = {
	&mercury_data_check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1[] = {
	&mercury_data_check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modecheck_util__du_name_ordered_extra_goals_0[] = {
	&mercury_data_check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1,
	&mercury_data_check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0
};

const MR_Integer mercury_data_check_hlds__modecheck_util__functor_number_map_extra_goals_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modecheck_util__type_ctor_info_extra_goals_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modecheck_util__extra_goals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modecheck_util__extra_goals_0_0)),
	"check_hlds.modecheck_util",
	"extra_goals",
	{ (void *)mercury_data_check_hlds__modecheck_util__du_name_ordered_extra_goals_0 },
	{ (void *)mercury_data_check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0 },
	2,
	4,
	mercury_data_check_hlds__modecheck_util__functor_number_map_extra_goals_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_util__modecheck_functors_test_5_0_1 = {
{
MR_FUNCTION,
"check_hlds.modecheck_util",
"check_hlds.modecheck_util",
"cons_id_to_bound_inst",
4,
0
},
"check_hlds.modecheck_util",
"modecheck_util.m",
376,
"d1;c10;"
};


MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module0)
	MR_init_entry1(check_hlds__modecheck_util__append_extra_goals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__append_extra_goals_3_0);
	MR_init_label4(check_hlds__modecheck_util__append_extra_goals_3_0,3,6,7,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_extra_goals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__append_extra_goals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__append_extra_goals_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_util__append_extra_goals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__append_extra_goals_3_0_i20);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_util__append_extra_goals_3_0_i6);
MR_def_label(check_hlds__modecheck_util__append_extra_goals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_util__append_extra_goals_3_0_i7);
MR_def_label(check_hlds__modecheck_util__append_extra_goals_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__modecheck_util__append_extra_goals_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_get_nonlocals_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_add_live_vars_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module1)
	MR_init_entry1(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0);
	MR_init_label5(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0,24,3,4,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_info_add_goals_live_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0,
		check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0_i4);
MR_def_label(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if ((MR_sv(1) != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0_i5);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0_i24);
	}
MR_def_label(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0_i8);
MR_def_label(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_remove_live_vars_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module2)
	MR_init_entry1(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0);
	MR_init_label5(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0,28,3,4,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_info_remove_goals_live_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0_i4);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0,
		check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0_i9);
MR_def_label(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0_i8);
MR_def_label(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0_i9);
MR_def_label(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0_i28);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__modecheck_goal__modecheck_goal_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(hlds__instmap__instmap_is_unreachable_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module3)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0);
	MR_init_label9(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,28,4,5,6,7,10,12,9,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_conj_list_no_delay'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0_i4);
MR_def_label(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0_i5);
MR_def_label(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0_i6);
MR_def_label(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0_i7);
MR_def_label(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_is_unreachable_1_0,
		check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0_i10);
MR_def_label(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0,
		check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0_i12);
MR_def_label(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,
		check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0_i14);
MR_def_label(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,14)
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

MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module4)
	MR_init_entry1(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__handle_extra_goals_contexts_3_0);
	MR_init_label3(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0,15,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_extra_goals_contexts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__modecheck_util__handle_extra_goals_contexts_3_0_i4);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0,
		check_hlds__modecheck_util__handle_extra_goals_contexts_3_0_i6);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_errors_2_0);
MR_decl_entry(hlds__instmap__instmap_is_reachable_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_may_change_called_proc_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_checking_extra_goals_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_may_change_called_proc_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_instmap_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module5)
	MR_init_entry1(check_hlds__modecheck_util__handle_extra_goals_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__handle_extra_goals_9_0);
	MR_init_label10(check_hlds__modecheck_util__handle_extra_goals_9_0,47,4,6,9,11,12,13,14,15,16)
	MR_init_label10(check_hlds__modecheck_util__handle_extra_goals_9_0,18,19,20,22,23,24,25,26,27,28)
	MR_init_label3(check_hlds__modecheck_util__handle_extra_goals_9_0,30,31,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_extra_goals'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__handle_extra_goals_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_extra_goals_9_0_i47);
	}
	MR_r2 = MR_r7;
	MR_proceed();
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i4);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i6);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_extra_goals_9_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_extra_goals_9_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i9);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i11);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i12);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i13);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i14);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i15);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i16);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i18);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i19);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__handle_extra_goals_contexts_3_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i20);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i22);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_may_change_called_proc_2_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i23);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_checking_extra_goals_3_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i24);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_change_called_proc_3_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i25);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i26);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i27);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i28);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_checking_extra_goals_3_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i30);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_change_called_proc_3_0,
		check_hlds__modecheck_util__handle_extra_goals_9_0_i31);
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__modecheck_util__handle_extra_goals_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module6)
	MR_init_entry1(check_hlds__modecheck_util__compute_arg_offset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__compute_arg_offset_2_0);
	MR_init_label3(check_hlds__modecheck_util__compute_arg_offset_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_arg_offset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__compute_arg_offset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__modecheck_util__compute_arg_offset_2_0_i2);
MR_def_label(check_hlds__modecheck_util__compute_arg_offset_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		check_hlds__modecheck_util__compute_arg_offset_2_0_i3);
MR_def_label(check_hlds__modecheck_util__compute_arg_offset_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__modecheck_util__compute_arg_offset_2_0_i4);
MR_def_label(check_hlds__modecheck_util__compute_arg_offset_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_set_call_arg_context_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_var_is_live_3_0);
MR_decl_entry(set__singleton_set_2_1);
MR_decl_entry(check_hlds__mode_info__mode_info_error_4_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module7)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0);
	MR_init_label8(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0,40,3,9,10,11,13,15,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_var_list_is_live_exact_match'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0_i8);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0_i8);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0_i9);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_live_3_0,
		check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0_i10);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(1))) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0_i11);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0_i40);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0_i13);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0_i15);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0_i40);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modecheck_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("modecheck_var_list_is_live_exact_match: length mismatch", 55);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_util_module8)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0);
	MR_init_label8(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,47,3,9,10,15,17,11,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_var_list_is_live_no_exact_match'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0_i8);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0_i8);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0_i9);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_live_3_0,
		check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0_i10);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0_i11);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0_i15);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0_i17);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0_i47);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0_i47);
MR_def_label(check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modecheck_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("modecheck_var_list_is_live_no_exact_match: length mismatch", 58);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_var_types_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_module_info_2_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_module_info_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module9)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0);
	MR_init_label10(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,48,3,9,10,11,12,14,15,18,17)
	MR_init_label3(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,21,23,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_var_has_inst_list_exact_match_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i8);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i8);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i9);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i10);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i11);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i12);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i14);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i15);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i18);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i17);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i23);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i21);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_tfield(3, MR_r2, 2) = MR_sv(8);
	MR_tfield(3, MR_r2, 3) = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i23);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0_i48);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modecheck_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("modecheck_var_has_inst_list_exact_match_2: length mismatch", 58);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module10)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_0);
	MR_init_label1(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_var_has_inst_list_exact_match'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_0_i3);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_matches_initial_sub_7_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module11)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0);
	MR_init_label10(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,48,3,9,10,11,12,14,15,18,17)
	MR_init_label3(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,21,23,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_var_has_inst_list_no_exact_match_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i8);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i8);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i9);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i10);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i11);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i12);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i14);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i15);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_sub_7_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i18);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i17);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i23);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i21);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_tfield(3, MR_r2, 2) = MR_sv(8);
	MR_tfield(3, MR_r2, 3) = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i23);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0_i48);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modecheck_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("modecheck_var_has_inst_list_no_exact_match_2: length mismatch", 61);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_util_module12)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0);
	MR_init_label1(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_var_has_inst_list_no_exact_match'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0_i3);
MR_def_label(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_util_module13)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0);
	MR_init_label7(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0,2,3,4,7,8,5,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_introduced_type_info_var_has_inst_no_exact_match'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0);
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
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0_i2);
MR_def_label(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0_i3);
MR_def_label(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0_i4);
MR_def_label(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0_i7);
MR_def_label(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_sub_7_0,
		check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0_i8);
MR_def_label(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0_i5);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_module_info_3_0);
MR_def_label(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0_i12);
MR_def_label(check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_error_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_parallel_vars_2_0);
MR_decl_entry(check_hlds__inst_util__abstractly_unify_inst_8_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_decl_entry(hlds__instmap__init_unreachable_1_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_initial_4_0);
MR_decl_entry(hlds__instmap__instmap_set_var_4_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_binding_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_var_is_locked_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_at_least_as_instantiated_4_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_binding_allow_any_any_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_delay_info_2_0);
MR_decl_entry(check_hlds__delay_info__delay_info_bind_var_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_delay_info_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_parallel_vars_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module14)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_set_var_inst_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_set_var_inst_5_0);
	MR_init_label10(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,2,3,6,8,9,11,10,14,15,16)
	MR_init_label10(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,18,20,21,23,19,27,29,26,35,37)
	MR_init_label10(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,42,44,39,40,46,32,49,50,51,52)
	MR_init_label6(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,5,57,62,64,60,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_set_var_inst'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__modecheck_set_var_inst_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_parallel_vars_2_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i2);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i3);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i6);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i8);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i9);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_8_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i11);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i10);
	}
	MR_r1 = MR_r4;
	MR_r3 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r3;
	MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i14);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modecheck_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("modecheck_set_var_inst: unify_inst failed", 41);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i14);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i15);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i16);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i18);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i20);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i21);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i19);
	}
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i23);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i57);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_4_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i27);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i29);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i57);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_binding_4_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i35);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i32);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_locked_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i37);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i32);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_at_least_as_instantiated_4_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i42);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i39);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_binding_allow_any_any_4_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i44);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i32);
	}
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i46);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tfield(3, MR_r2, 3) = MR_sv(6);
	MR_tfield(3, MR_r2, 4) = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i57);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i49);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i50);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i51);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_bind_var_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i52);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i57);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i58);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i62);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i60);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_5_0_i64);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_parallel_vars_3_0);
	}
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_parallel_vars_3_0);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_util_module15)
	MR_init_entry1(check_hlds__modecheck_util__mode_context_to_unify_context_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__mode_context_to_unify_context_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_context_to_unify_context'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__mode_context_to_unify_context_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_pred_id_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_proc_id_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_head_type_params_2_0);
MR_decl_entry(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(check_hlds__polymorphism__create_poly_info_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_process_new_call_12_0);
MR_decl_entry(check_hlds__polymorphism__poly_info_extract_6_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_varset_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_var_types_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module16)
	MR_init_entry1(check_hlds__modecheck_util__build_call_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__build_call_11_0);
	MR_init_label10(check_hlds__modecheck_util__build_call_11_0,2,3,4,5,6,7,8,10,11,12)
	MR_init_label10(check_hlds__modecheck_util__build_call_11_0,13,14,15,16,17,18,19,20,21,23)
	MR_init_label8(check_hlds__modecheck_util__build_call_11_0,24,25,26,27,28,29,30,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_call'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_util__build_call_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(19) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_util__build_call_11_0_i2);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_pred_id_2_0,
		check_hlds__modecheck_util__build_call_11_0_i3);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_proc_id_2_0,
		check_hlds__modecheck_util__build_call_11_0_i4);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__modecheck_util__build_call_11_0_i5);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__modecheck_util__build_call_11_0_i6);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		check_hlds__modecheck_util__build_call_11_0_i7);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_head_type_params_2_0,
		check_hlds__modecheck_util__build_call_11_0_i8);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__pred_table__get_pred_id_and_proc_id_by_types_11_0,
		check_hlds__modecheck_util__build_call_11_0_i10);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__modecheck_util__build_call_11_0_i11);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__modecheck_util__build_call_11_0_i12);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_util__build_call_11_0_i13);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__modecheck_util__build_call_11_0_i14);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__modecheck_util__build_call_11_0_i15);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		check_hlds__modecheck_util__build_call_11_0_i16);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__modecheck_util__build_call_11_0_i17);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__modecheck_util__build_call_11_0_i18);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__modecheck_util__build_call_11_0_i19);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modecheck_util__build_call_11_0_i20);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__modecheck_util__build_call_11_0_i21);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__build_call_11_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(5)) != 0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__build_call_11_0_i1);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(1);
	MR_r10 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_process_new_call_12_0,
		check_hlds__modecheck_util__build_call_11_0_i23);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		check_hlds__modecheck_util__build_call_11_0_i24);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		check_hlds__modecheck_util__build_call_11_0_i25);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__modecheck_util__build_call_11_0_i26);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__modecheck_util__build_call_11_0_i27);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(19);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_varset_3_0,
		check_hlds__modecheck_util__build_call_11_0_i28);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_var_types_3_0,
		check_hlds__modecheck_util__build_call_11_0_i29);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__modecheck_util__build_call_11_0_i30);
MR_def_label(check_hlds__modecheck_util__build_call_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_util__build_call_11_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(fn__hlds__special_pred__special_pred_name_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_need_to_requantify_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module17)
	MR_init_entry1(check_hlds__modecheck_util__construct_initialisation_call_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__construct_initialisation_call_8_0);
	MR_init_label10(check_hlds__modecheck_util__construct_initialisation_call_8_0,3,5,7,9,10,6,12,15,18,20)
	MR_init_label1(check_hlds__modecheck_util__construct_initialisation_call_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_initialisation_call'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__construct_initialisation_call_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__modecheck_util__construct_initialisation_call_8_0_i3);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_call_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__construct_initialisation_call_8_0_i2);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__hlds__special_pred__special_pred_name_2_0,
		check_hlds__modecheck_util__construct_initialisation_call_8_0_i5);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_call_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(6), 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__construct_initialisation_call_8_0_i7);
	}
	MR_r2 = MR_sv(1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(check_hlds__modecheck_util__construct_initialisation_call_8_0_i6);
	}
MR_def_label(check_hlds__modecheck_util__construct_initialisation_call_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_util__construct_initialisation_call_8_0_i9);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_call_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		check_hlds__modecheck_util__construct_initialisation_call_8_0_i10);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_call_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_call_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__modecheck_util__construct_initialisation_call_8_0_i12);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_call_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__modecheck_util__construct_initialisation_call_8_0_i15);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_call_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__build_call_11_0,
		check_hlds__modecheck_util__construct_initialisation_call_8_0_i18);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_call_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__construct_initialisation_call_8_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_need_to_requantify_3_0,
		check_hlds__modecheck_util__construct_initialisation_call_8_0_i20);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_call_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__modecheck_util__construct_initialisation_call_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modecheck_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("construct_initialisation_call", 29);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0);
MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_context_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_mode_context_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_may_init_solver_vars_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_solver_init_is_supported_1_0);
MR_decl_entry(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_bound_2_0);
MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(check_hlds__modecheck_unify__create_var_var_unification_5_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module18)
	MR_init_entry1(check_hlds__modecheck_util__handle_implied_mode_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__handle_implied_mode_8_0);
	MR_init_label10(check_hlds__modecheck_util__handle_implied_mode_8_0,2,3,4,5,7,10,8,15,17,18)
	MR_init_label10(check_hlds__modecheck_util__handle_implied_mode_8_0,19,24,26,28,30,32,23,36,38,12)
	MR_init_label10(check_hlds__modecheck_util__handle_implied_mode_8_0,13,42,44,46,40,47,48,49,50,51)
	MR_init_label2(check_hlds__modecheck_util__handle_implied_mode_8_0,52,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_implied_mode'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_util__handle_implied_mode_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(9) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i2);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i3);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i4);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i5);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i7);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i10);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_implied_mode_8_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_implied_mode_8_0_i13);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i15);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_implied_mode_8_0_i12);
	}
	MR_sv(3) = MR_sv(1);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i17);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_mode_context_2_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i18);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i19);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(8), 0) = MR_tempr1;
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i24);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_implied_mode_8_0_i23);
	}
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_may_init_solver_vars_1_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i26);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_implied_mode_8_0_i23);
	}
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_solver_init_is_supported_1_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i28);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_implied_mode_8_0_i23);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i30);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_implied_mode_8_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__modecheck_util__construct_initialisation_call_8_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i32);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__append_extra_goals_3_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i55);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i36);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i38);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i42);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__handle_implied_mode_8_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i44);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i46);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i47);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i48);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i49);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_varset_3_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i50);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_var_types_3_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i51);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_unify__create_var_var_unification_5_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i52);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__append_extra_goals_3_0,
		check_hlds__modecheck_util__handle_implied_mode_8_0_i55);
MR_def_label(check_hlds__modecheck_util__handle_implied_mode_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module19)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0);
	MR_init_label10(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,55,8,9,12,14,15,16,18,17,20)
	MR_init_label4(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,11,23,56,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_set_var_inst_list_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i55);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i56);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i56);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i1);
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(8) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i8);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i9);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i12);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i11);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i14);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__handle_implied_mode_8_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i15);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i16);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i18);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i23);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_set_var_inst_5_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i20);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i23);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(9);
	}
	MR_np_localcall_lab(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i23);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_util_module20)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0);
	MR_init_label2(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_set_var_inst_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_0,
		check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0_i3);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modecheck_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("modecheck_set_var_inst_list: length mismatch", 44);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0);
MR_decl_entry(list__duplicate_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module21)
	MR_init_entry1(fn__check_hlds__modecheck_util__cons_id_to_bound_inst_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__modecheck_util__cons_id_to_bound_inst_3_0);
	MR_init_label2(fn__check_hlds__modecheck_util__cons_id_to_bound_inst_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_id_to_bound_inst'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__modecheck_util__cons_id_to_bound_inst_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,
		fn__check_hlds__modecheck_util__cons_id_to_bound_inst_3_0_i2);
MR_def_label(fn__check_hlds__modecheck_util__cons_id_to_bound_inst_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__check_hlds__modecheck_util__cons_id_to_bound_inst_3_0_i3);
MR_def_label(fn__check_hlds__modecheck_util__cons_id_to_bound_inst_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_util_module22)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_functor_test_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_functor_test_4_0);
	MR_init_label5(check_hlds__modecheck_util__modecheck_functor_test_4_0,2,3,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_functor_test'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__modecheck_functor_test_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_util__modecheck_functor_test_4_0_i2);
MR_def_label(check_hlds__modecheck_util__modecheck_functor_test_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_util__modecheck_functor_test_4_0_i3);
MR_def_label(check_hlds__modecheck_util__modecheck_functor_test_4_0,3)
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
		check_hlds__modecheck_util__modecheck_functor_test_4_0_i5);
MR_def_label(check_hlds__modecheck_util__modecheck_functor_test_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,
		check_hlds__modecheck_util__modecheck_functor_test_4_0_i6);
MR_def_label(check_hlds__modecheck_util__modecheck_functor_test_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		check_hlds__modecheck_util__modecheck_functor_test_4_0_i7);
MR_def_label(check_hlds__modecheck_util__modecheck_functor_test_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 2) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__modecheck_util__modecheck_set_var_inst_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module23)
	MR_init_entry1(check_hlds__modecheck_util__modecheck_functors_test_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__modecheck_functors_test_5_0);
	MR_init_label4(check_hlds__modecheck_util__modecheck_functors_test_5_0,2,3,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_functors_test'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__modecheck_functors_test_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_util__modecheck_functors_test_5_0_i2);
MR_def_label(check_hlds__modecheck_util__modecheck_functors_test_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_util__modecheck_functors_test_5_0_i3);
MR_def_label(check_hlds__modecheck_util__modecheck_functors_test_5_0,3)
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
		check_hlds__modecheck_util__modecheck_functors_test_5_0_i5);
MR_def_label(check_hlds__modecheck_util__modecheck_functors_test_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__modecheck_util__cons_id_to_bound_inst_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__modecheck_util__modecheck_functors_test_5_0_i8);
MR_def_label(check_hlds__modecheck_util__modecheck_functors_test_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__modecheck_util__modecheck_set_var_inst_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_init_reachable_1_0);
MR_decl_entry(hlds__instmap__compute_instmap_delta_4_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module24)
	MR_init_entry1(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__compute_goal_instmap_delta_6_0);
	MR_init_label7(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,5,6,2,7,8,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_goal_instmap_delta'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__compute_goal_instmap_delta_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		check_hlds__modecheck_util__compute_goal_instmap_delta_6_0_i5);
MR_def_label(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_util__compute_goal_instmap_delta_6_0_i6);
MR_def_label(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modecheck_util__compute_goal_instmap_delta_6_0_i11);
MR_def_label(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modecheck_util__compute_goal_instmap_delta_6_0_i7);
MR_def_label(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_util__compute_goal_instmap_delta_6_0_i8);
MR_def_label(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__instmap__compute_instmap_delta_4_0,
		check_hlds__modecheck_util__compute_goal_instmap_delta_6_0_i9);
MR_def_label(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modecheck_util__compute_goal_instmap_delta_6_0_i11);
MR_def_label(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__context_init_0_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module25)
	MR_init_entry1(check_hlds__modecheck_util__construct_initialisation_calls_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__construct_initialisation_calls_4_0);
	MR_init_label6(check_hlds__modecheck_util__construct_initialisation_calls_4_0,18,4,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_initialisation_calls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__construct_initialisation_calls_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__construct_initialisation_calls_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modecheck_util__construct_initialisation_calls_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_util__construct_initialisation_calls_4_0_i4);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_calls_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_util__construct_initialisation_calls_4_0_i6);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_calls_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__modecheck_util__construct_initialisation_calls_4_0_i7);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_calls_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__construct_initialisation_call_8_0,
		check_hlds__modecheck_util__construct_initialisation_calls_4_0_i8);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_calls_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(check_hlds__modecheck_util__construct_initialisation_calls_4_0,
		check_hlds__modecheck_util__construct_initialisation_calls_4_0_i9);
MR_def_label(check_hlds__modecheck_util__construct_initialisation_calls_4_0,9)
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

MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module26)
	MR_init_entry1(check_hlds__modecheck_util__prepend_initialisation_call_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__prepend_initialisation_call_7_0);
	MR_init_label4(check_hlds__modecheck_util__prepend_initialisation_call_7_0,2,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepend_initialisation_call'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__prepend_initialisation_call_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_r5;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__modecheck_util__prepend_initialisation_call_7_0_i2);
MR_def_label(check_hlds__modecheck_util__prepend_initialisation_call_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__construct_initialisation_call_8_0,
		check_hlds__modecheck_util__prepend_initialisation_call_7_0_i3);
MR_def_label(check_hlds__modecheck_util__prepend_initialisation_call_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__modecheck_util__prepend_initialisation_call_7_0_i4);
MR_def_label(check_hlds__modecheck_util__prepend_initialisation_call_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__modecheck_util__prepend_initialisation_call_7_0_i6);
MR_def_label(check_hlds__modecheck_util__prepend_initialisation_call_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_util_module27)
	MR_init_entry1(check_hlds__modecheck_util__get_live_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_util__get_live_vars_3_0);
	MR_init_label4(check_hlds__modecheck_util__get_live_vars_3_0,3,9,8,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_live_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_util__get_live_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__get_live_vars_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__get_live_vars_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modecheck_util__get_live_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__get_live_vars_3_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(check_hlds__modecheck_util__get_live_vars_3_0,
		check_hlds__modecheck_util__get_live_vars_3_0_i9);
MR_def_label(check_hlds__modecheck_util__get_live_vars_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__modecheck_util__get_live_vars_3_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(check_hlds__modecheck_util__get_live_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modecheck_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_live_vars: length mismatch", 30);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__modecheck_util__get_live_vars_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__instmap__instmap_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module28)
	MR_init_entry1(__Unify___check_hlds__modecheck_util__after_goals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__modecheck_util__after_goals_0_0);
	MR_init_label4(__Unify___check_hlds__modecheck_util__after_goals_0_0,14,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__modecheck_util__after_goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_util__after_goals_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_util__after_goals_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__modecheck_util__after_goals_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__modecheck_util__after_goals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_util__after_goals_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__instmap__instmap_0_0,
		__Unify___check_hlds__modecheck_util__after_goals_0_0_i7);
MR_def_label(__Unify___check_hlds__modecheck_util__after_goals_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_util__after_goals_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__modecheck_util__after_goals_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__instmap__instmap_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_util_module29)
	MR_init_entry1(__Compare___check_hlds__modecheck_util__after_goals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__modecheck_util__after_goals_0_0);
	MR_init_label6(__Compare___check_hlds__modecheck_util__after_goals_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__modecheck_util__after_goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_util__after_goals_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_util__after_goals_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_util__after_goals_0_0_i7);
	}
MR_def_label(__Compare___check_hlds__modecheck_util__after_goals_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modecheck_util__after_goals_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modecheck_util__after_goals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_util__after_goals_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modecheck_util__after_goals_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__instmap__instmap_0_0,
		__Compare___check_hlds__modecheck_util__after_goals_0_0_i11);
MR_def_label(__Compare___check_hlds__modecheck_util__after_goals_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_util__after_goals_0_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__modecheck_util__after_goals_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_util_module30)
	MR_init_entry1(__Unify___check_hlds__modecheck_util__extra_goals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__modecheck_util__extra_goals_0_0);
	MR_init_label4(__Unify___check_hlds__modecheck_util__extra_goals_0_0,14,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__modecheck_util__extra_goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_util__extra_goals_0_0_i14);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_util__extra_goals_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__modecheck_util__extra_goals_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__modecheck_util__extra_goals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_util__extra_goals_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__modecheck_util__extra_goals_0_0_i7);
MR_def_label(__Unify___check_hlds__modecheck_util__extra_goals_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_util__extra_goals_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__modecheck_util__extra_goals_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_util_module31)
	MR_init_entry1(__Compare___check_hlds__modecheck_util__extra_goals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__modecheck_util__extra_goals_0_0);
	MR_init_label6(__Compare___check_hlds__modecheck_util__extra_goals_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__modecheck_util__extra_goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_util__extra_goals_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_util__extra_goals_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_util__extra_goals_0_0_i7);
	}
MR_def_label(__Compare___check_hlds__modecheck_util__extra_goals_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modecheck_util__extra_goals_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modecheck_util__extra_goals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_util__extra_goals_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modecheck_util__extra_goals_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__modecheck_util__extra_goals_0_0_i11);
MR_def_label(__Compare___check_hlds__modecheck_util__extra_goals_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_util__extra_goals_0_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__modecheck_util__extra_goals_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_util_module32)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0);
	MR_init_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mode_context_to_unify_context__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tag(MR_r1);
	if ((MR_r2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0_i6);
	}
	if ((MR_r2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("modecheck_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("mode_context_to_unify_context: uninitialized context", 52);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(2, MR_r2, 1) = MR_tfield(1, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__modecheck_util_maybe_bunch_0(void)
{
	check_hlds__modecheck_util_module0();
	check_hlds__modecheck_util_module1();
	check_hlds__modecheck_util_module2();
	check_hlds__modecheck_util_module3();
	check_hlds__modecheck_util_module4();
	check_hlds__modecheck_util_module5();
	check_hlds__modecheck_util_module6();
	check_hlds__modecheck_util_module7();
	check_hlds__modecheck_util_module8();
	check_hlds__modecheck_util_module9();
	check_hlds__modecheck_util_module10();
	check_hlds__modecheck_util_module11();
	check_hlds__modecheck_util_module12();
	check_hlds__modecheck_util_module13();
	check_hlds__modecheck_util_module14();
	check_hlds__modecheck_util_module15();
	check_hlds__modecheck_util_module16();
	check_hlds__modecheck_util_module17();
	check_hlds__modecheck_util_module18();
	check_hlds__modecheck_util_module19();
	check_hlds__modecheck_util_module20();
	check_hlds__modecheck_util_module21();
	check_hlds__modecheck_util_module22();
	check_hlds__modecheck_util_module23();
	check_hlds__modecheck_util_module24();
	check_hlds__modecheck_util_module25();
	check_hlds__modecheck_util_module26();
	check_hlds__modecheck_util_module27();
	check_hlds__modecheck_util_module28();
	check_hlds__modecheck_util_module29();
	check_hlds__modecheck_util_module30();
	check_hlds__modecheck_util_module31();
	check_hlds__modecheck_util_module32();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__modecheck_util__init(void);
void mercury__check_hlds__modecheck_util__init_type_tables(void);
void mercury__check_hlds__modecheck_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__modecheck_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__modecheck_util__init_complexity_procs(void);
#endif

void mercury__check_hlds__modecheck_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__modecheck_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modecheck_util__type_ctor_info_after_goals_0,
		check_hlds__modecheck_util__after_goals_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modecheck_util__type_ctor_info_extra_goals_0,
		check_hlds__modecheck_util__extra_goals_0_0);
	mercury__check_hlds__modecheck_util__init_debugger();
}

void mercury__check_hlds__modecheck_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modecheck_util__type_ctor_info_after_goals_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modecheck_util__type_ctor_info_extra_goals_0);
	}
}


void mercury__check_hlds__modecheck_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__modecheck_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__modecheck_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__modecheck_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
