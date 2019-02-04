/*
** Automatically generated from `modecheck_conj.m'
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
INIT mercury__check_hlds__modecheck_conj__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.modecheck_conj.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "check_hlds.modecheck_conj.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "check_hlds.modecheck_conj.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "check_hlds.modecheck_conj.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "check_hlds.modecheck_conj.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "check_hlds.modecheck_conj.c"
#line 49 "check_hlds.modecheck_conj.c"
#include "check_hlds.modecheck_conj.mh"

#line 52 "check_hlds.modecheck_conj.c"
#line 53 "check_hlds.modecheck_conj.c"
#ifndef CHECK_HLDS__MODECHECK_CONJ_DECL_GUARD
#define CHECK_HLDS__MODECHECK_CONJ_DECL_GUARD

#line 57 "check_hlds.modecheck_conj.c"
#line 58 "check_hlds.modecheck_conj.c"

#endif
#line 61 "check_hlds.modecheck_conj.c"

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
	MR_Word * f3[6];
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
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__modecheck_conj__type_ctor_info_impurity_errors_0;
MR_decl_label10(check_hlds__modecheck_conj__candidate_init_vars_3_6_0, 3,4,5,6,7,8,11,12,13,14)
MR_decl_label10(check_hlds__modecheck_conj__candidate_init_vars_3_6_0, 2,20,22,18,26,24,30,33,29,37)
MR_decl_label10(check_hlds__modecheck_conj__candidate_init_vars_3_6_0, 39,36,42,41,44,45,16,48,50,180)
MR_decl_label10(check_hlds__modecheck_conj__candidate_init_vars_3_6_0, 52,54,51,57,58,59,61,62,63,64)
MR_decl_label2(check_hlds__modecheck_conj__candidate_init_vars_3_6_0, 65,56)
MR_decl_label10(check_hlds__modecheck_conj__candidate_init_vars_call_7_0, 64,3,6,7,14,9,21,37,20,23)
MR_decl_label1(check_hlds__modecheck_conj__candidate_init_vars_call_7_0, 15)
MR_decl_label10(check_hlds__modecheck_conj__check_for_impurity_error_6_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label10(check_hlds__modecheck_conj__check_for_impurity_error_6_0, 13,14,15,16,17,18,20,21,22,23)
MR_decl_label2(check_hlds__modecheck_conj__check_for_impurity_error_6_0, 26,27)
MR_decl_label3(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0, 10,3,4)
MR_decl_label3(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0, 6,3,1)
MR_decl_label10(check_hlds__modecheck_conj__modecheck_conj_list_5_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(check_hlds__modecheck_conj__modecheck_conj_list_5_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(check_hlds__modecheck_conj__modecheck_conj_list_5_0, 24,25,26,23,28,30,32,33,34,36)
MR_decl_label1(check_hlds__modecheck_conj__modecheck_conj_list_5_0, 37)
MR_decl_label4(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0, 37,3,8,4)
MR_decl_label10(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0, 2,5,4,3,6,7,8,9,10,11)
MR_decl_label10(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0, 14,13,15,16,17,18,20,24,25,28)
MR_decl_label10(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0, 29,31,33,35,36,37,40,42,39,43)
MR_decl_label5(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0, 44,49,47,46,54)
MR_decl_label10(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0, 41,5,6,7,8,9,11,12,13,14)
MR_decl_label8(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0, 15,16,17,19,20,21,22,18)
MR_decl_label10(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0, 69,6,7,8,9,10,11,16,15,17)
MR_decl_label10(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0, 18,19,20,25,28,29,24,32,34,35)
MR_decl_label10(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0, 36,37,38,39,40,41,42,43,44,4)
MR_decl_label3(check_hlds__modecheck_conj__non_solver_var_3_0, 3,6,1)
MR_decl_label3(check_hlds__modecheck_conj__redelay_goals_3_0, 10,3,4)
MR_decl_label5(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0, 31,3,6,4,9)
MR_decl_static(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0)
MR_decl_static(check_hlds__modecheck_conj__candidate_init_vars_2_6_0)
MR_decl_static(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0)
MR_decl_static(check_hlds__modecheck_conj__redelay_goals_3_0)
MR_decl_static(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0)
MR_decl_static(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0)
MR_decl_static(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0)
MR_decl_static(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0)
MR_decl_static(check_hlds__modecheck_conj__check_for_impurity_error_6_0)
MR_def_extern_entry(check_hlds__modecheck_conj__modecheck_conj_list_5_0)
MR_decl_static(check_hlds__modecheck_conj__candidate_init_vars_call_7_0)
MR_decl_static(check_hlds__modecheck_conj__candidate_init_vars_3_6_0)
MR_decl_static(check_hlds__modecheck_conj__non_solver_var_3_0)
MR_decl_static(fn__check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_0)
MR_decl_static(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0)
MR_decl_static(__Unify___check_hlds__modecheck_conj__impurity_errors_0_0)
MR_decl_static(__Compare___check_hlds__modecheck_conj__impurity_errors_0_0)
MR_decl_static(check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__635__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,0)
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
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_TAG_COMMON(0,0,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,0)
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
mercury_data__closure_layout__check_hlds__modecheck_conj__candidate_init_vars_2_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_mode_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_2;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_conj__candidate_init_vars_2_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_may_init_solver_vars_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__check_for_impurity_error_6_0_1;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__mode_info, may_init_solver_vars),
MR_CTOR0_ADDR(check_hlds__mode_info, may_init_solver_vars)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_conj__check_for_impurity_error_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,4),
MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal)
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__candidate_init_vars_3_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_conj__candidate_init_vars_3_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(4,0),
MR_COMMON(0,5)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modecheck_conj__type_ctor_info_impurity_errors_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modecheck_conj__impurity_errors_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modecheck_conj__impurity_errors_0_0)),
	"check_hlds.modecheck_conj",
	"impurity_errors",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__candidate_init_vars_3_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.modecheck_conj",
"check_hlds.modecheck_conj",
"non_solver_var",
3,
0
},
"check_hlds.modecheck_conj",
"modecheck_conj.m",
508,
"57"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__check_for_impurity_error_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.modecheck_conj",
"check_hlds.modecheck_conj",
"is_headvar_unification_goal",
2,
0
},
"check_hlds.modecheck_conj",
"modecheck_conj.m",
716,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_2 = {
{
MR_PREDICATE,
"check_hlds.modecheck_conj",
"check_hlds.modecheck_conj",
"lambda_modecheck_conj_m_635",
2,
0
},
"check_hlds.modecheck_conj",
"modecheck_conj.m",
635,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_1 = {
{
MR_FUNCTION,
"check_hlds.modecheck_conj",
"check_hlds.modecheck_conj",
"hlds_goal_from_delayed_goal",
2,
0
},
"check_hlds.modecheck_conj",
"modecheck_conj.m",
628,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_2 = {
{
MR_PREDICATE,
"check_hlds.modecheck_conj",
"check_hlds.modecheck_conj",
"candidate_init_vars_3",
6,
0
},
"check_hlds.modecheck_conj",
"modecheck_conj.m",
434,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_1 = {
{
MR_FUNCTION,
"check_hlds.modecheck_conj",
"check_hlds.modecheck_conj",
"hlds_goal_from_delayed_goal",
2,
0
},
"check_hlds.modecheck_conj",
"modecheck_conj.m",
335,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_conj__candidate_init_vars_2_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.modecheck_conj",
"check_hlds.modecheck_conj",
"candidate_init_vars_3",
6,
0
},
"check_hlds.modecheck_conj",
"modecheck_conj.m",
434,
"8"
};



MR_BEGIN_MODULE(check_hlds__modecheck_conj_module0)
	MR_init_entry1(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0);
	MR_init_label5(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0,31,3,6,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'non_free_vars_in_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0_i6);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0_i31);
	}
MR_def_label(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0_i4);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0_i31);
MR_def_label(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0,
		fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0_i9);
MR_def_label(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__foldl2_6_7);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module1)
	MR_init_entry1(check_hlds__modecheck_conj__candidate_init_vars_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__candidate_init_vars_2_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_init_vars_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__candidate_init_vars_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_conj__candidate_init_vars_3_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_np_tailcall_ent(list__foldl2_6_7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__union_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module2)
	MR_init_entry1(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0);
	MR_init_label3(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_all_waiting_vars_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0_i4);
MR_def_label(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__delay_info__delay_info_delay_goal_4_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module3)
	MR_init_entry1(check_hlds__modecheck_conj__redelay_goals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__redelay_goals_3_0);
	MR_init_label3(check_hlds__modecheck_conj__redelay_goals_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'redelay_goals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__redelay_goals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_conj__redelay_goals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__redelay_goals_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(check_hlds__modecheck_conj__redelay_goals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_delay_goal_4_0,
		check_hlds__modecheck_conj__redelay_goals_3_0_i4);
MR_def_label(check_hlds__modecheck_conj__redelay_goals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(check_hlds__modecheck_conj__redelay_goals_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module4)
	MR_init_entry1(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__modecheck_conj_list_2_7_0);
	MR_init_label4(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0,37,3,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_conj_list_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r2, 1);
	MR_r6 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r6, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_2_7_0_i8);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0_i37);
	}
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_get_purity_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_delay_info_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_get_nonlocals_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_remove_live_vars_3_0);
MR_decl_entry(check_hlds__modecheck_goal__modecheck_goal_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_errors_2_0);
MR_decl_entry(check_hlds__delay_info__delay_info_wakeup_goals_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_errors_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_instmap_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_add_live_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_context_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_mode_context_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_delay_info_3_0);
MR_decl_entry(check_hlds__mode_debug__mode_checkpoint_4_0);
MR_decl_entry(hlds__instmap__instmap_is_unreachable_1_0);
MR_decl_entry(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module5)
	MR_init_entry1(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__modecheck_conj_list_3_8_0);
	MR_init_label10(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,2,5,4,3,6,7,8,9,10,11)
	MR_init_label10(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,14,13,15,16,17,18,20,24,25,28)
	MR_init_label10(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,29,31,33,35,36,37,40,42,39,43)
	MR_init_label5(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,44,49,47,46,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_conj_list_3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_purity_1_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i2);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i4);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__modecheck_conj__check_for_impurity_error_6_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i5);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 1;
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i3);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i6);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i7);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i8);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i9);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i10);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i11);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i13);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i14);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_sv(11);
	MR_sv(1) = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_wakeup_goals_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i28);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i15);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i16);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i17);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_delay_goal_4_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i18);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i20);
	}
	MR_sv(1) = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_wakeup_goals_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i28);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(11);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_r2, 1) = MR_tempr3;
	MR_tfield(0, MR_r2, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(4) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i24);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_mode_context_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i25);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_wakeup_goals_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i28);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i29);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i31);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i36);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(9), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i33);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const("goal", 4);
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i35);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const("goals", 5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i35);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i36);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i37);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_is_unreachable_1_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i40);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i39);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i42);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i44);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i43);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i47);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if ((MR_sv(7) != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i47);
	}
	MR_sv(7) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i49);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i54);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i54);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_3_8_0_i54);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_3_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__instmap__instmap_to_assoc_list_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__list_to_set_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__init_0_0);
MR_decl_entry(fn__parse_tree__set_of_var__difference_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_module_info_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_var_types_2_0);
MR_decl_entry(parse_tree__set_of_var__member_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(check_hlds__mode_info__mode_info_solver_init_is_supported_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__to_sorted_list_1_0);
MR_decl_entry(check_hlds__modecheck_util__construct_initialisation_calls_4_0);
MR_decl_entry(check_hlds__delay_info__delay_info_enter_conj_2_0);
MR_decl_entry(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0);
MR_decl_entry(check_hlds__delay_info__delay_info_leave_conj_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module6)
	MR_init_entry1(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0);
	MR_init_label10(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,69,6,7,8,9,10,11,16,15,17)
	MR_init_label10(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,18,19,20,25,28,29,24,32,34,35)
	MR_init_label10(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,36,37,38,39,40,41,42,43,44,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_delayed_goals_try_det'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i69);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i6);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i7);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_to_assoc_list_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i8);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i9);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i10);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i11);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_conj__candidate_init_vars_3_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i15);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_r2;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_6_7,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i16);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i17);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i4);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__difference_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i18);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i19);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i20);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i24);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_1,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i25);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i28);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i29);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(14));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i4);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_solver_init_is_supported_1_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i32);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i34);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modecheck_util__construct_initialisation_calls_4_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i35);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i36);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i37);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_enter_conj_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i38);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i39);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i40);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i41);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i42);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_leave_conj_3_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i43);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0_i44);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_0);
MR_decl_entry(require__expect_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module7)
	MR_init_entry1(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0);
	MR_init_label10(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,41,5,6,7,8,9,11,12,13,14)
	MR_init_label8(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,15,16,17,19,20,21,22,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_delayed_goals_eager'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i41);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i5);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i6);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_enter_conj_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i7);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i8);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i9);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__635__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("check_hlds.modecheck_conj", 25);
	MR_r3 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_conj.modecheck_delayed_goals_eager\'/8", 69);
	MR_r4 = (MR_Word) MR_string_const("may init solver vars", 20);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i11);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i12);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i13);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i14);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i15);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_leave_conj_3_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i16);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i17);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i19);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i20);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i21);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0_i22);
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_pred_id_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0);
MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module8)
	MR_init_entry1(check_hlds__modecheck_conj__check_for_impurity_error_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__check_for_impurity_error_6_0);
	MR_init_label10(check_hlds__modecheck_conj__check_for_impurity_error_6_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label10(check_hlds__modecheck_conj__check_for_impurity_error_6_0,13,14,15,16,17,18,20,21,22,23)
	MR_init_label2(check_hlds__modecheck_conj__check_for_impurity_error_6_0,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_for_impurity_error'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__check_for_impurity_error_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i2);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_leave_conj_3_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i3);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i4);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i5);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_pred_id_2_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i6);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i7);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i8);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i9);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(list__filter_4_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i11);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i12);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i13);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i14);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i15);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_enter_conj_2_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i16);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__redelay_goals_3_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i17);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i18);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__check_for_impurity_error_6_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i21);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i22);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i23);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i26);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_mode_context_2_0,
		check_hlds__modecheck_conj__check_for_impurity_error_6_0_i27);
MR_def_label(check_hlds__modecheck_conj__check_for_impurity_error_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_live_vars_2_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_live_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_add_error_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_error_4_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module9)
	MR_init_entry1(check_hlds__modecheck_conj__modecheck_conj_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__modecheck_conj_list_5_0);
	MR_init_label10(check_hlds__modecheck_conj__modecheck_conj_list_5_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(check_hlds__modecheck_conj__modecheck_conj_list_5_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(check_hlds__modecheck_conj__modecheck_conj_list_5_0,24,25,26,23,28,30,32,33,34,36)
	MR_init_label1(check_hlds__modecheck_conj__modecheck_conj_list_5_0,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_conj_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_conj__modecheck_conj_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i2);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i3);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i4);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i5);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_enter_conj_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i6);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i7);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_live_vars_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i8);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i9);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i10);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__modecheck_conj_list_2_7_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i11);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i12);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_leave_conj_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i13);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i14);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i15);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i16);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i17);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i18);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i19);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i20);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i21);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_5_0_i23);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i24);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i25);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i26);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i36);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_live_vars_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i28);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__modecheck_conj_list_5_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(8), 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_error_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i36);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i32);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i33);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__get_all_waiting_vars_2_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i34);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i36);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0,
		check_hlds__modecheck_conj__modecheck_conj_list_5_0_i37);
MR_def_label(check_hlds__modecheck_conj__modecheck_conj_list_5_0,37)
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

MR_decl_entry(check_hlds__mode_util__mode_get_insts_semidet_4_0);
MR_decl_entry(parse_tree__set_of_var__insert_3_0);
MR_decl_entry(parse_tree__set_of_var__contains_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module10)
	MR_init_entry1(check_hlds__modecheck_conj__candidate_init_vars_call_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__candidate_init_vars_call_7_0);
	MR_init_label10(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,64,3,6,7,14,9,21,37,20,23)
	MR_init_label1(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_init_vars_call'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__candidate_init_vars_call_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i37);
	}
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i37);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i6);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_semidet_4_0,
		check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i7);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i37);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i9);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i14);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i64);
	}
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i15);
	}
	if (MR_PTAG_TEST(MR_r3,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i15);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__set_of_var__contains_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i21);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i20);
	}
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i23);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i64);
	}
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_call_7_0_i64);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(check_hlds__mode_info__mode_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(map__values_2_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(parse_tree__set_of_var__member_2_0);
MR_decl_entry(parse_tree__set_of_var__insert_list_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__filter_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module11)
	MR_init_entry1(check_hlds__modecheck_conj__candidate_init_vars_3_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__candidate_init_vars_3_6_0);
	MR_init_label10(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,3,4,5,6,7,8,11,12,13,14)
	MR_init_label10(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,2,20,22,18,26,24,30,33,29,37)
	MR_init_label10(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,39,36,42,41,44,45,16,48,50,180)
	MR_init_label10(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,52,54,51,57,58,59,61,62,63,64)
	MR_init_label2(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,65,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'candidate_init_vars_3'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__candidate_init_vars_3_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i2);
	}
	MR_mkframe("pred check_hlds.modecheck_conj.candidate_init_vars_3/6-0", 7,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_fv(5) = MR_tfield(2, MR_tempr1, 0);
	MR_fv(6) = MR_r3;
	MR_fv(7) = MR_r4;
	MR_fv(2) = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_preds_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i3);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_fv(5);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i4);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i5);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__values_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i6);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i7);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i8);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i11);
	}
	MR_r1 = MR_fv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i13);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i12);
	}
	MR_r1 = MR_fv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i13);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_fv(6);
	MR_r5 = MR_fv(7);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i14);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_succeed();
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i16);
	}
	MR_mkframe("pred check_hlds.modecheck_conj.candidate_init_vars_3/6-0", 7,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i18);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_fv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_tempr4 = MR_r3;
	MR_fv(6) = MR_tempr4;
	MR_fv(7) = MR_r4;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i20);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_fv(5);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(6);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i22);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_fv(1);
	MR_r3 = MR_fv(7);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i45);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r5, 0);
	MR_tempr2 = MR_r3;
	MR_fv(6) = MR_tempr2;
	MR_fv(7) = MR_r4;
	MR_fv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i26);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(6);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i39);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r5, 0);
	MR_fv(1) = MR_tfield(0, MR_r6, 0);
	MR_tempr2 = MR_r3;
	MR_fv(6) = MR_tempr2;
	MR_fv(7) = MR_r4;
	MR_fv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i30);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_fv(6);
	MR_r3 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i33);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_fv(1);
	MR_r3 = MR_fv(6);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i39);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_fv(6);
	MR_r3 = MR_fv(1);
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i37);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i36);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(6);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i39);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(7);
	MR_succeed();
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i41);
	MR_fv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_fv(5);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(6);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i42);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_fv(1);
	MR_r3 = MR_fv(7);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i45);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(1);
	MR_fv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_fv(6);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i44);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(7);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i45);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(5);
	MR_r2 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i48);
	}
	MR_r2 = MR_tfield(3, MR_r5, 2);
	MR_np_tailcall_ent(check_hlds__modecheck_conj__candidate_init_vars_2_6_0);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i50);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i51);
	}
	MR_mkframe("pred check_hlds.modecheck_conj.candidate_init_vars_3/6-0", 7,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r6 = MR_tfield(3, MR_tempr1, 3);
	MR_r7 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_r7,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i52);
	}
	MR_GOTO(MR_ENTRY(MR_do_fail));
	}
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r6;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__candidate_init_vars_call_7_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i54);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_succeed();
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i56);
	}
	MR_mkframe("pred check_hlds.modecheck_conj.candidate_init_vars_3/6-0", 7,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_fv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_fv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_fv(6) = MR_r3;
	MR_fv(7) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_tempr1, 2), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i57);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i58);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i59);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_conj__non_solver_var_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_fv(4);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_fv(3);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__filter_2_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i61);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_fv(6);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i62);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(4);
	MR_r4 = MR_fv(7);
	MR_np_localcall_lab(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i63);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_r1 = MR_fv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i64);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i65);
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(3);
	MR_succeed();
MR_def_label(check_hlds__modecheck_conj__candidate_init_vars_3_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__candidate_init_vars_3_6_0_i180);
	}
	MR_r2 = MR_tfield(3, MR_r5, 2);
	MR_np_localtailcall(check_hlds__modecheck_conj__candidate_init_vars_3_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(check_hlds__type_util__type_is_solver_type_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module12)
	MR_init_entry1(check_hlds__modecheck_conj__non_solver_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__non_solver_var_3_0);
	MR_init_label3(check_hlds__modecheck_conj__non_solver_var_3_0,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'non_solver_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__non_solver_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modecheck_conj__non_solver_var_3_0_i3);
MR_def_label(check_hlds__modecheck_conj__non_solver_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_2_0,
		check_hlds__modecheck_conj__non_solver_var_3_0_i6);
MR_def_label(check_hlds__modecheck_conj__non_solver_var_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__non_solver_var_3_0_i1);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_conj__non_solver_var_3_0,1)
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


MR_BEGIN_MODULE(check_hlds__modecheck_conj_module13)
	MR_init_entry1(fn__check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'hlds_goal_from_delayed_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module14)
	MR_init_entry1(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__is_headvar_unification_goal_2_0);
	MR_init_label3(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0,6,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_headvar_unification_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r2, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0_i1);
	}
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modecheck_conj__is_headvar_unification_goal_2_0_i6);
MR_def_label(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0_i3);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_def_label(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_conj__is_headvar_unification_goal_2_0,1)
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

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module15)
	MR_init_entry1(__Unify___check_hlds__modecheck_conj__impurity_errors_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__modecheck_conj__impurity_errors_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__modecheck_conj__impurity_errors_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
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

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_conj_module16)
	MR_init_entry1(__Compare___check_hlds__modecheck_conj__impurity_errors_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__modecheck_conj__impurity_errors_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__modecheck_conj__impurity_errors_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_conj_module17)
	MR_init_entry1(check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__635__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__635__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__modecheck_delayed_goals_eager__635__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__635__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__modecheck_conj_maybe_bunch_0(void)
{
	check_hlds__modecheck_conj_module0();
	check_hlds__modecheck_conj_module1();
	check_hlds__modecheck_conj_module2();
	check_hlds__modecheck_conj_module3();
	check_hlds__modecheck_conj_module4();
	check_hlds__modecheck_conj_module5();
	check_hlds__modecheck_conj_module6();
	check_hlds__modecheck_conj_module7();
	check_hlds__modecheck_conj_module8();
	check_hlds__modecheck_conj_module9();
	check_hlds__modecheck_conj_module10();
	check_hlds__modecheck_conj_module11();
	check_hlds__modecheck_conj_module12();
	check_hlds__modecheck_conj_module13();
	check_hlds__modecheck_conj_module14();
	check_hlds__modecheck_conj_module15();
	check_hlds__modecheck_conj_module16();
	check_hlds__modecheck_conj_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__modecheck_conj__init(void);
void mercury__check_hlds__modecheck_conj__init_type_tables(void);
void mercury__check_hlds__modecheck_conj__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__modecheck_conj__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__modecheck_conj__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__modecheck_conj__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__modecheck_conj__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__modecheck_conj_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modecheck_conj__type_ctor_info_impurity_errors_0,
		check_hlds__modecheck_conj__impurity_errors_0_0);
	mercury__check_hlds__modecheck_conj__init_debugger();
}

void mercury__check_hlds__modecheck_conj__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modecheck_conj__type_ctor_info_impurity_errors_0);
	}
}


void mercury__check_hlds__modecheck_conj__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__modecheck_conj__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__modecheck_conj);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__modecheck_conj__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__modecheck_conj__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
