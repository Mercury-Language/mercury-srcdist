/*
** Automatically generated from `assertion.m'
** by the Mercury compiler,
** version rotd-2011-08-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__assertion__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.assertion.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "hlds.assertion.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "hlds.assertion.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "hlds.assertion.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "hlds.assertion.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "hlds.assertion.c"
#line 49 "hlds.assertion.c"
#include "hlds.assertion.mh"

#line 52 "hlds.assertion.c"
#line 53 "hlds.assertion.c"
#ifndef HLDS__ASSERTION_DECL_GUARD
#define HLDS__ASSERTION_DECL_GUARD

#line 57 "hlds.assertion.c"
#line 58 "hlds.assertion.c"

#endif
#line 61 "hlds.assertion.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__assertion__type_ctor_info_subst_0;
MR_decl_label1(hlds__assertion__IntroducedFrom__pred__predicate_call__426__1_1_0, 2)
MR_decl_label2(hlds__assertion__IntroducedFrom__pred__process_one_side__294__1_1_0, 3,1)
MR_decl_label2(hlds__assertion__IntroducedFrom__pred__update__340__1_1_0, 4,1)
MR_decl_label6(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0, 2,3,5,6,24,1)
MR_decl_label9(hlds__assertion__assert_id_goal_3_0, 2,3,4,5,6,7,11,12,8)
MR_decl_label10(hlds__assertion__associative_5_0, 3,4,6,10,12,14,16,19,21,23)
MR_decl_label10(hlds__assertion__associative_5_0, 26,28,30,32,34,36,38,41,43,46)
MR_decl_label2(hlds__assertion__associative_5_0, 48,2)
MR_decl_label5(hlds__assertion__commutative_var_ordering_4_0, 36,6,5,10,1)
MR_decl_label7(hlds__assertion__commutative_var_ordering_2_6_0, 62,6,5,11,13,15,1)
MR_decl_label10(hlds__assertion__equal_goal_exprs_4_0, 3,7,13,11,19,27,29,17,32,36)
MR_decl_label10(hlds__assertion__equal_goal_exprs_4_0, 42,40,48,50,52,46,58,56,328,67)
MR_decl_label2(hlds__assertion__equal_goal_exprs_4_0, 318,1)
MR_decl_label7(hlds__assertion__equal_goals_cases_4_0, 38,3,7,9,10,12,1)
MR_decl_label4(hlds__assertion__equal_goals_list_4_0, 28,3,6,1)
MR_decl_label2(hlds__assertion__equal_goals_shorthand_4_0, 4,1)
MR_decl_label8(hlds__assertion__equal_reason_4_0, 3,7,114,15,17,13,111,1)
MR_decl_label8(hlds__assertion__equal_unification_4_0, 5,3,11,13,15,9,119,1)
MR_decl_label4(hlds__assertion__equal_var_4_0, 4,6,2,1)
MR_decl_label7(hlds__assertion__equal_vars_4_0, 56,3,8,10,6,13,1)
MR_decl_label10(hlds__assertion__goal_is_equivalence_3_0, 8,12,14,17,20,25,27,30,33,35)
MR_decl_label2(hlds__assertion__goal_is_equivalence_3_0, 37,1)
MR_decl_label6(hlds__assertion__is_associativity_assertion_5_0, 2,3,5,6,18,1)
MR_decl_label3(hlds__assertion__is_commutativity_assertion_4_0, 2,3,1)
MR_decl_label10(hlds__assertion__is_construction_equivalence_assertion_4_0, 2,3,11,17,19,21,22,16,13,5)
MR_decl_label3(hlds__assertion__is_construction_equivalence_assertion_4_0, 6,31,1)
MR_decl_label3(hlds__assertion__normalise_cases_2_0, 19,4,7)
MR_decl_label3(hlds__assertion__normalise_conj_2_0, 17,4,5)
MR_decl_label1(hlds__assertion__normalise_goal_2_0, 2)
MR_decl_label10(hlds__assertion__normalise_goal_expr_2_0, 4,3,8,11,6,14,13,17,19,21)
MR_decl_label10(hlds__assertion__normalise_goal_expr_2_0, 16,25,24,31,32,30,36,37,35,40)
MR_decl_label3(hlds__assertion__normalise_goal_expr_2_0, 28,44,123)
MR_decl_label3(hlds__assertion__normalise_goals_2_0, 18,4,6)
MR_decl_label7(hlds__assertion__predicate_call_2_0, 6,8,10,11,5,2,1)
MR_decl_label9(hlds__assertion__process_one_side_6_0, 8,9,10,11,12,14,17,18,1)
MR_decl_label7(hlds__assertion__process_two_linked_calls_6_0, 8,9,10,11,12,14,1)
MR_decl_label1(hlds__assertion__record_preds_used_in_4_0, 3)
MR_decl_label5(hlds__assertion__reorder_4_0, 3,4,2,5,6)
MR_decl_label10(hlds__assertion__update_5_0, 1,2,4,8,11,12,14,16,18,20)
MR_decl_label9(hlds__assertion__update_5_0, 23,25,27,29,31,33,35,38,40)
MR_decl_label4(hlds__assertion__update_pred_info_4_0, 2,3,4,5)
MR_decl_static(hlds__assertion__normalise_conj_2_0)
MR_def_extern_entry(hlds__assertion__normalise_goal_2_0)
MR_decl_static(hlds__assertion__normalise_goal_expr_2_0)
MR_decl_static(hlds__assertion__normalise_cases_2_0)
MR_decl_static(hlds__assertion__normalise_goals_2_0)
MR_def_extern_entry(hlds__assertion__assert_id_goal_3_0)
MR_def_extern_entry(hlds__assertion__record_preds_used_in_4_0)
MR_decl_static(hlds__assertion__commutative_var_ordering_2_6_0)
MR_decl_static(hlds__assertion__commutative_var_ordering_4_0)
MR_decl_static(hlds__assertion__equal_var_4_0)
MR_decl_static(hlds__assertion__equal_vars_4_0)
MR_decl_static(hlds__assertion__equal_reason_4_0)
MR_decl_static(hlds__assertion__equal_goals_4_0)
MR_decl_static(hlds__assertion__equal_goal_exprs_4_0)
MR_decl_static(hlds__assertion__equal_goals_shorthand_4_0)
MR_decl_static(hlds__assertion__equal_unification_4_0)
MR_decl_static(hlds__assertion__equal_goals_list_4_0)
MR_decl_static(hlds__assertion__equal_goals_cases_4_0)
MR_decl_static(hlds__assertion__goal_is_equivalence_3_0)
MR_def_extern_entry(hlds__assertion__is_commutativity_assertion_4_0)
MR_decl_static(hlds__assertion__reorder_4_0)
MR_decl_static(hlds__assertion__process_two_linked_calls_6_0)
MR_decl_static(hlds__assertion__process_one_side_6_0)
MR_decl_static(hlds__assertion__associative_5_0)
MR_def_extern_entry(hlds__assertion__is_associativity_assertion_5_0)
MR_def_extern_entry(hlds__assertion__is_update_assertion_5_0)
MR_decl_static(hlds__assertion__predicate_call_2_0)
MR_def_extern_entry(hlds__assertion__is_construction_equivalence_assertion_4_0)
MR_decl_static(hlds__assertion__update_5_0)
MR_decl_static(hlds__assertion__update_pred_info_4_0)
MR_decl_static(__Unify___hlds__assertion__subst_0_0)
MR_decl_static(__Compare___hlds__assertion__subst_0_0)
MR_decl_static(hlds__assertion__IntroducedFrom__pred__associative__252__1_2_0)
MR_decl_static(hlds__assertion__IntroducedFrom__pred__associative__254__1_2_0)
MR_decl_static(hlds__assertion__IntroducedFrom__pred__associative__256__1_2_0)
MR_decl_static(hlds__assertion__IntroducedFrom__pred__process_one_side__294__1_1_0)
MR_decl_static(hlds__assertion__IntroducedFrom__pred__update__340__1_1_0)
MR_decl_static(hlds__assertion__IntroducedFrom__pred__update__351__1_2_0)
MR_decl_static(hlds__assertion__IntroducedFrom__pred__update__353__1_2_0)
MR_decl_static(hlds__assertion__IntroducedFrom__pred__predicate_call__426__1_1_0)
MR_def_extern_entry(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0)

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__record_preds_used_in_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__equal_goal_exprs_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__equal_goal_exprs_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__associative_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__associative_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__associative_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__update_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__update_5_0_3;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__record_preds_used_in_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__equal_goal_exprs_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(2,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__equal_goal_exprs_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(2,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__associative_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,1),
MR_COMMON(4,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__associative_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,1),
MR_COMMON(4,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__associative_5_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,1),
MR_COMMON(4,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__update_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,1),
MR_COMMON(4,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__update_5_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,1),
MR_COMMON(4,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__record_preds_used_in_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__record_preds_used_in_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_2 mercury_common_2[6] =
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
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(2,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(2,2)
}
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_3 mercury_common_3[6] =
{
{
MR_COMMON(0,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(hlds__assertion__IntroducedFrom__pred__process_one_side__294__1_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(hlds__assertion__IntroducedFrom__pred__predicate_call__426__1_1_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(hlds__assertion__IntroducedFrom__pred__predicate_call__426__1_1_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(hlds__assertion__IntroducedFrom__pred__update__340__1_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_4 mercury_common_4[5] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,2,0),
MR_TAG_COMMON(0,2,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(2,2),
MR_COMMON(2,2)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,4,0),
MR_TAG_COMMON(0,4,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(2,2),
MR_COMMON(2,2)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(4,3),
MR_COMMON(4,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__process_one_side_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__predicate_call_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__is_construction_equivalence_assertion_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__update_5_0_1;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__process_one_side_6_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(4,1)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__predicate_call_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__is_construction_equivalence_assertion_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__assertion__update_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(4,4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_2;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,3),
MR_COMMON(2,3),
MR_COMMON(2,4),
MR_COMMON(2,5),
MR_COMMON(4,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,3),
MR_COMMON(2,3),
MR_COMMON(2,4),
MR_COMMON(2,5),
MR_COMMON(4,1)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__assertion__type_ctor_info_subst_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__assertion__subst_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__assertion__subst_0_0)),
	"hlds.assertion",
	"subst",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_2 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"update",
5,
0
},
"hlds.assertion",
"assertion.m",
322,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_1 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"update",
5,
0
},
"hlds.assertion",
"assertion.m",
322,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__update_5_0_3 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"lambda_assertion_m_353",
2,
0
},
"hlds.assertion",
"assertion.m",
353,
"40"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__update_5_0_2 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"lambda_assertion_m_351",
2,
0
},
"hlds.assertion",
"assertion.m",
351,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__update_5_0_1 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"lambda_assertion_m_340",
1,
0
},
"hlds.assertion",
"assertion.m",
340,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__is_construction_equivalence_assertion_4_0_1 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"lambda_assertion_m_426",
1,
0
},
"hlds.assertion",
"assertion.m",
425,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__predicate_call_2_0_1 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"lambda_assertion_m_426",
1,
0
},
"hlds.assertion",
"assertion.m",
425,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__associative_5_0_3 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"lambda_assertion_m_256",
2,
0
},
"hlds.assertion",
"assertion.m",
256,
"45"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__associative_5_0_2 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"lambda_assertion_m_254",
2,
0
},
"hlds.assertion",
"assertion.m",
254,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__associative_5_0_1 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"lambda_assertion_m_252",
2,
0
},
"hlds.assertion",
"assertion.m",
252,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__process_one_side_6_0_1 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"lambda_assertion_m_294",
1,
0
},
"hlds.assertion",
"assertion.m",
294,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__equal_goal_exprs_4_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"hlds.assertion",
"assertion.m",
556,
"58"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__equal_goal_exprs_4_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"hlds.assertion",
"assertion.m",
555,
"56"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__record_preds_used_in_4_0_2 = {
{
MR_PREDICATE,
"hlds.assertion",
"hlds.assertion",
"update_pred_info",
4,
0
},
"hlds.assertion",
"assertion.m",
647,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__assertion__record_preds_used_in_4_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"goal_calls_pred_id",
2,
1
},
"hlds.assertion",
"assertion.m",
645,
"6"
};


MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(hlds__assertion_module0)
	MR_init_entry1(hlds__assertion__normalise_conj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__normalise_conj_2_0);
	MR_init_label3(hlds__assertion__normalise_conj_2_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalise_conj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__normalise_conj_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__normalise_conj_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__assertion__normalise_conj_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__assertion__normalise_conj_2_0_i4);
MR_def_label(hlds__assertion__normalise_conj_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(hlds__assertion__normalise_conj_2_0,
		hlds__assertion__normalise_conj_2_0_i5);
MR_def_label(hlds__assertion__normalise_conj_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module1)
	MR_init_entry1(hlds__assertion__normalise_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__normalise_goal_2_0);
	MR_init_label1(hlds__assertion__normalise_goal_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalise_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__assertion__normalise_goal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__assertion__normalise_goal_expr_2_0,
		hlds__assertion__normalise_goal_2_0_i2);
MR_def_label(hlds__assertion__normalise_goal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module2)
	MR_init_entry1(hlds__assertion__normalise_goal_expr_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__normalise_goal_expr_2_0);
	MR_init_label10(hlds__assertion__normalise_goal_expr_2_0,4,3,8,11,6,14,13,17,19,21)
	MR_init_label10(hlds__assertion__normalise_goal_expr_2_0,16,25,24,31,32,30,36,37,35,40)
	MR_init_label3(hlds__assertion__normalise_goal_expr_2_0,28,44,123)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalise_goal_expr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__normalise_goal_expr_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__assertion__normalise_goal_expr_2_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r2 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_localcall_lab(hlds__assertion__normalise_goal_expr_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i4);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r2);
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__assertion__normalise_goal_expr_2_0_i6);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__assertion__normalise_goal_expr_2_0_i8);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(hlds__assertion__normalise_goals_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i11);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(hlds__assertion__normalise_conj_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i11);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(5);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__assertion__normalise_goal_expr_2_0_i13);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(hlds__assertion__normalise_goals_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i14);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(hlds__assertion__normalise_goal_expr_2_0_i16);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_r2 = MR_tfield(3, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_localcall_lab(hlds__assertion__normalise_goal_expr_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i17);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__assertion__normalise_goal_expr_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i19);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__assertion__normalise_goal_expr_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i21);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_sv(5);
	MR_tfield(3, MR_r1, 2) = MR_sv(4);
	MR_tfield(3, MR_r1, 3) = MR_sv(1);
	MR_tfield(3, MR_r1, 4) = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(hlds__assertion__normalise_goal_expr_2_0_i24);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_localcall_lab(hlds__assertion__normalise_goal_expr_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i25);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = MR_sv(5);
	MR_tfield(3, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(hlds__assertion__normalise_goal_expr_2_0_i28);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__assertion__normalise_goal_expr_2_0_i30);
	}
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_tfield(1, MR_r2, 2);
	MR_sv(3) = MR_tfield(1, MR_r2, 5);
	MR_sv(2) = MR_tfield(1, MR_r2, 6);
	MR_sv(6) = MR_tfield(1, MR_r2, 3);
	MR_r1 = MR_tfield(1, MR_r2, 4);
	MR_np_call_localret_ent(hlds__assertion__normalise_goal_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i31);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__assertion__normalise_goals_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i32);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 7);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_tfield(1, MR_r2, 2) = MR_sv(1);
	MR_tfield(1, MR_r2, 3) = MR_sv(6);
	MR_tfield(1, MR_r2, 4) = MR_sv(3);
	MR_tfield(1, MR_r2, 5) = MR_r1;
	MR_tfield(1, MR_r2, 6) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__assertion__normalise_goal_expr_2_0_i35);
	}
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__assertion__normalise_goal_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i36);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__assertion__normalise_goal_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i37);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(2, MR_r2, 0);
	MR_sv(4) = MR_tfield(2, MR_r2, 1);
	MR_r1 = MR_tfield(2, MR_r2, 2);
	MR_np_call_localret_ent(hlds__assertion__normalise_goal_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i40);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(5);
	MR_tfield(2, MR_r2, 1) = MR_sv(4);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__assertion__normalise_goal_expr_2_0_i123);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_call_localret_ent(hlds__assertion__normalise_cases_2_0,
		hlds__assertion__normalise_goal_expr_2_0_i44);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(5);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__normalise_goal_expr_2_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module3)
	MR_init_entry1(hlds__assertion__normalise_cases_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__normalise_cases_2_0);
	MR_init_label3(hlds__assertion__normalise_cases_2_0,19,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalise_cases'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__normalise_cases_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__normalise_cases_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__assertion__normalise_cases_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__assertion__normalise_goal_expr_2_0,
		hlds__assertion__normalise_cases_2_0_i4);
MR_def_label(hlds__assertion__normalise_cases_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_localcall_lab(hlds__assertion__normalise_cases_2_0,
		hlds__assertion__normalise_cases_2_0_i7);
MR_def_label(hlds__assertion__normalise_cases_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module4)
	MR_init_entry1(hlds__assertion__normalise_goals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__normalise_goals_2_0);
	MR_init_label3(hlds__assertion__normalise_goals_2_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalise_goals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__normalise_goals_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__normalise_goals_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__assertion__normalise_goals_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__assertion__normalise_goal_expr_2_0,
		hlds__assertion__normalise_goals_2_0_i4);
MR_def_label(hlds__assertion__normalise_goals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__assertion__normalise_goals_2_0,
		hlds__assertion__normalise_goals_2_0_i6);
MR_def_label(hlds__assertion__normalise_goals_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_assertion_table_2_0);
MR_decl_entry(hlds__hlds_data__assertion_table_lookup_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_2_0);
MR_decl_entry(fn__hlds__hlds_clauses__clause_body_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__assertion_module5)
	MR_init_entry1(hlds__assertion__assert_id_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__assert_id_goal_3_0);
	MR_init_label9(hlds__assertion__assert_id_goal_3_0,2,3,4,5,6,7,11,12,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assert_id_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__assertion__assert_id_goal_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_assertion_table_2_0,
		hlds__assertion__assert_id_goal_3_0_i2);
MR_def_label(hlds__assertion__assert_id_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_data__assertion_table_lookup_3_0,
		hlds__assertion__assert_id_goal_3_0_i3);
MR_def_label(hlds__assertion__assert_id_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__assertion__assert_id_goal_3_0_i4);
MR_def_label(hlds__assertion__assert_id_goal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__assertion__assert_id_goal_3_0_i5);
MR_def_label(hlds__assertion__assert_id_goal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		hlds__assertion__assert_id_goal_3_0_i6);
MR_def_label(hlds__assertion__assert_id_goal_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		hlds__assertion__assert_id_goal_3_0_i7);
MR_def_label(hlds__assertion__assert_id_goal_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__assert_id_goal_3_0_i8);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__assertion__assert_id_goal_3_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_body_1_0,
		hlds__assertion__assert_id_goal_3_0_i11);
MR_def_label(hlds__assertion__assert_id_goal_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__assertion__normalise_goal_expr_2_0,
		hlds__assertion__assert_id_goal_3_0_i12);
MR_def_label(hlds__assertion__assert_id_goal_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__assertion__assert_id_goal_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.assertion", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.assertion.assert_id_goal\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("goal is not an assertion", 24);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__goal_calls_pred_id_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(solutions__solutions_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(hlds__assertion_module6)
	MR_init_entry1(hlds__assertion__record_preds_used_in_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__record_preds_used_in_4_0);
	MR_init_label1(hlds__assertion__record_preds_used_in_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_preds_used_in'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__assertion__record_preds_used_in_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__goal_calls_pred_id_2_1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		hlds__assertion__record_preds_used_in_4_0_i3);
MR_def_label(hlds__assertion__record_preds_used_in_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__assertion__update_pred_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(hlds__assertion_module7)
	MR_init_entry1(hlds__assertion__commutative_var_ordering_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__commutative_var_ordering_2_6_0);
	MR_init_label7(hlds__assertion__commutative_var_ordering_2_6_0,62,6,5,11,13,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'commutative_var_ordering_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__commutative_var_ordering_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__assertion__commutative_var_ordering_2_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_2_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_2_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_r5;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr5 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr5, 0);
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__commutative_var_ordering_2_6_0_i6);
MR_def_label(hlds__assertion__commutative_var_ordering_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_2_6_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_2_6_0_i62);
MR_def_label(hlds__assertion__commutative_var_ordering_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_sv(8);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__commutative_var_ordering_2_6_0_i11);
MR_def_label(hlds__assertion__commutative_var_ordering_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_2_6_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__commutative_var_ordering_2_6_0_i13);
MR_def_label(hlds__assertion__commutative_var_ordering_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_2_6_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__commutative_var_ordering_2_6_0_i15);
MR_def_label(hlds__assertion__commutative_var_ordering_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_2_6_0_i1);
	}
	MR_r2 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__assertion__commutative_var_ordering_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module8)
	MR_init_entry1(hlds__assertion__commutative_var_ordering_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__commutative_var_ordering_4_0);
	MR_init_label5(hlds__assertion__commutative_var_ordering_4_0,36,6,5,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'commutative_var_ordering'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__commutative_var_ordering_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__assertion__commutative_var_ordering_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_4_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_4_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__commutative_var_ordering_4_0_i6);
MR_def_label(hlds__assertion__commutative_var_ordering_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_4_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_4_0_i36);
MR_def_label(hlds__assertion__commutative_var_ordering_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(hlds__assertion__commutative_var_ordering_2_6_0,
		hlds__assertion__commutative_var_ordering_4_0_i10);
MR_def_label(hlds__assertion__commutative_var_ordering_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__commutative_var_ordering_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__assertion__commutative_var_ordering_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__assertion_module9)
	MR_init_entry1(hlds__assertion__equal_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__equal_var_4_0);
	MR_init_label4(hlds__assertion__equal_var_4_0,4,6,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__equal_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__assertion__equal_var_4_0_i4);
MR_def_label(hlds__assertion__equal_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_var_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__equal_var_4_0_i6);
MR_def_label(hlds__assertion__equal_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_var_4_0_i1);
	}
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__assertion__equal_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_def_label(hlds__assertion__equal_var_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module10)
	MR_init_entry1(hlds__assertion__equal_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__equal_vars_4_0);
	MR_init_label7(hlds__assertion__equal_vars_4_0,56,3,8,10,6,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__equal_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__assertion__equal_vars_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_vars_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_vars_4_0_i1);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__equal_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_vars_4_0_i1);
	}
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__assertion__equal_vars_4_0_i8);
MR_def_label(hlds__assertion__equal_vars_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_vars_4_0_i6);
	}
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__equal_vars_4_0_i10);
MR_def_label(hlds__assertion__equal_vars_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_vars_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__assertion__equal_vars_4_0_i56);
MR_def_label(hlds__assertion__equal_vars_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__assertion__equal_vars_4_0_i13);
MR_def_label(hlds__assertion__equal_vars_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_vars_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__assertion__equal_vars_4_0_i56);
	}
MR_def_label(hlds__assertion__equal_vars_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module11)
	MR_init_entry1(hlds__assertion__equal_reason_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__equal_reason_4_0);
	MR_init_label8(hlds__assertion__equal_reason_4_0,3,7,114,15,17,13,111,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_reason'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__equal_reason_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i111);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(hlds__assertion__equal_vars_4_0);
MR_def_label(hlds__assertion__equal_reason_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i7);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i111);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_tfield(3, MR_r2, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i111);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__assertion__equal_reason_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i114);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i111);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_tfield(3, MR_r2, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i111);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__assertion__equal_reason_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	MR_tempr2 = MR_tfield(3, MR_r2, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i1);
	}
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r5 = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__assertion__equal_reason_4_0_i15);
MR_def_label(hlds__assertion__equal_reason_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i13);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__equal_reason_4_0_i17);
MR_def_label(hlds__assertion__equal_reason_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_reason_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__assertion__equal_reason_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_def_label(hlds__assertion__equal_reason_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__assertion__equal_reason_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module12)
	MR_init_entry1(hlds__assertion__equal_goals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__equal_goals_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_goals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__equal_goals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(hlds__assertion__equal_goal_exprs_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(__Unify___hlds__hlds_goal__generic_call_0_0);

MR_BEGIN_MODULE(hlds__assertion_module13)
	MR_init_entry1(hlds__assertion__equal_goal_exprs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__equal_goal_exprs_4_0);
	MR_init_label10(hlds__assertion__equal_goal_exprs_4_0,3,7,13,11,19,27,29,17,32,36)
	MR_init_label10(hlds__assertion__equal_goal_exprs_4_0,42,40,48,50,52,46,58,56,328,67)
	MR_init_label2(hlds__assertion__equal_goal_exprs_4_0,318,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_goal_exprs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__equal_goal_exprs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i318);
	}
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_r2 = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_np_tailcall_ent(hlds__assertion__equal_goals_4_0);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i7);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i318);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	MR_tempr2 = MR_tfield(2, MR_r2, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i318);
	}
	MR_r1 = MR_tfield(2, MR_r1, 2);
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_tailcall_ent(hlds__assertion__equal_vars_4_0);
	}
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i11);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__assertion__equal_var_4_0,
		hlds__assertion__equal_goal_exprs_4_0_i13);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__assertion__equal_unification_4_0);
	}
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i17);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 5);
	MR_sv(3) = MR_tfield(3, MR_r1, 6);
	MR_sv(4) = MR_tfield(3, MR_r2, 4);
	MR_sv(5) = MR_tfield(3, MR_r2, 5);
	MR_sv(6) = MR_tfield(3, MR_r2, 6);
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_tfield(3, MR_r1, 2);
	MR_sv(9) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0,
		hlds__assertion__equal_goal_exprs_4_0_i19);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	if ((MR_sv(8) != MR_sv(9))) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__assertion__equal_goal_exprs_4_0_i27);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__assertion__equal_goal_exprs_4_0_i29);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__assertion__equal_vars_4_0);
	}
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i32);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i318);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_tfield(3, MR_r2, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i318);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_tailcall_ent(hlds__assertion__equal_goals_list_4_0);
	}
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i36);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i318);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(hlds__assertion__equal_goals_list_4_0);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i40);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_sv(7) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__generic_call_0_0,
		hlds__assertion__equal_goal_exprs_4_0_i42);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__assertion__equal_vars_4_0);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i46);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(5) = MR_tfield(3, MR_r2, 3);
	MR_sv(6) = MR_tfield(3, MR_r2, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(hlds__assertion__equal_vars_4_0,
		hlds__assertion__equal_goal_exprs_4_0_i48);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__assertion__equal_goals_4_0,
		hlds__assertion__equal_goal_exprs_4_0_i50);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__assertion__equal_goals_4_0,
		hlds__assertion__equal_goal_exprs_4_0_i52);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__assertion__equal_goals_4_0);
	}
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i56);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(hlds__assertion__equal_reason_4_0,
		hlds__assertion__equal_goal_exprs_4_0_i58);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__assertion__equal_goals_4_0);
	}
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i328);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i318);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(hlds__assertion__equal_goals_shorthand_4_0);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_sv(7) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__equal_goal_exprs_4_0_i67);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(hlds__assertion__equal_goal_exprs_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__assertion__equal_goals_cases_4_0);
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__assertion__equal_goal_exprs_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module14)
	MR_init_entry1(hlds__assertion__equal_goals_shorthand_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__equal_goals_shorthand_4_0);
	MR_init_label2(hlds__assertion__equal_goals_shorthand_4_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_goals_shorthand'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__equal_goals_shorthand_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_shorthand_4_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_shorthand_4_0_i1);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r2, 0), 0);
	MR_np_call_localret_ent(hlds__assertion__equal_goal_exprs_4_0,
		hlds__assertion__equal_goals_shorthand_4_0_i4);
MR_def_label(hlds__assertion__equal_goals_shorthand_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_shorthand_4_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__assertion__equal_goal_exprs_4_0);
	}
MR_def_label(hlds__assertion__equal_goals_shorthand_4_0,1)
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

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;

MR_BEGIN_MODULE(hlds__assertion_module15)
	MR_init_entry1(hlds__assertion__equal_unification_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__equal_unification_4_0);
	MR_init_label8(hlds__assertion__equal_unification_4_0,5,3,11,13,15,9,119,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_unification'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__equal_unification_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 2);
	MR_sv(4) = MR_tfield(1, MR_r2, 2);
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		hlds__assertion__equal_unification_4_0_i5);
MR_def_label(hlds__assertion__equal_unification_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i1);
	}
	if ((MR_sv(2) != MR_sv(8))) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__assertion__equal_vars_4_0);
MR_def_label(hlds__assertion__equal_unification_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i9);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_tfield(2, MR_r1, 0) & (MR_Integer) 3);
	MR_tempr2 = ((MR_Integer) MR_tfield(2, MR_r2, 0) & (MR_Integer) 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i1);
	}
	MR_tempr1 = (((MR_Integer) MR_tfield(2, MR_r1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(2, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i1);
	}
	MR_tempr1 = (((MR_Integer) MR_tfield(2, MR_r1, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(2, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r1, 2);
	MR_sv(3) = MR_tfield(2, MR_r1, 3);
	MR_sv(4) = MR_tfield(2, MR_r1, 5);
	MR_sv(8) = MR_tfield(2, MR_r1, 6);
	MR_sv(5) = MR_tfield(2, MR_r2, 2);
	MR_sv(6) = MR_tfield(2, MR_r2, 3);
	MR_sv(7) = MR_tfield(2, MR_r2, 6);
	MR_sv(9) = MR_tfield(2, MR_r2, 5);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 4);
	MR_r3 = MR_tfield(2, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__equal_unification_4_0_i11);
MR_def_label(hlds__assertion__equal_unification_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i1);
	}
	if ((MR_sv(4) != MR_sv(9))) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__assertion__equal_vars_4_0,
		hlds__assertion__equal_unification_4_0_i13);
MR_def_label(hlds__assertion__equal_unification_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__assertion__equal_vars_4_0,
		hlds__assertion__equal_unification_4_0_i15);
MR_def_label(hlds__assertion__equal_unification_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(8), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(7), 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__assertion__equal_goal_exprs_4_0);
	}
MR_def_label(hlds__assertion__equal_unification_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_unification_4_0_i119);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_np_tailcall_ent(hlds__assertion__equal_vars_4_0);
	}
MR_def_label(hlds__assertion__equal_unification_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__assertion__equal_unification_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module16)
	MR_init_entry1(hlds__assertion__equal_goals_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__equal_goals_list_4_0);
	MR_init_label4(hlds__assertion__equal_goals_list_4_0,28,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_goals_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__equal_goals_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__assertion__equal_goals_list_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_list_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_list_4_0_i1);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__assertion__equal_goals_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_list_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	MR_np_call_localret_ent(hlds__assertion__equal_goal_exprs_4_0,
		hlds__assertion__equal_goals_list_4_0_i6);
MR_def_label(hlds__assertion__equal_goals_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_list_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__assertion__equal_goals_list_4_0_i28);
	}
MR_def_label(hlds__assertion__equal_goals_list_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
MR_decl_entry(list__sort_2_0);

MR_BEGIN_MODULE(hlds__assertion_module17)
	MR_init_entry1(hlds__assertion__equal_goals_cases_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__equal_goals_cases_4_0);
	MR_init_label7(hlds__assertion__equal_goals_cases_4_0,38,3,7,9,10,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_goals_cases'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__equal_goals_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__assertion__equal_goals_cases_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_cases_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_cases_4_0_i1);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(hlds__assertion__equal_goals_cases_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_cases_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		hlds__assertion__equal_goals_cases_4_0_i7);
MR_def_label(hlds__assertion__equal_goals_cases_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_np_call_localret_ent(list__sort_2_0,
		hlds__assertion__equal_goals_cases_4_0_i9);
MR_def_label(hlds__assertion__equal_goals_cases_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__equal_goals_cases_4_0_i10);
MR_def_label(hlds__assertion__equal_goals_cases_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_cases_4_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(4), 0);
	MR_r2 = MR_tfield(0, MR_sv(6), 0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__assertion__equal_goal_exprs_4_0,
		hlds__assertion__equal_goals_cases_4_0_i12);
MR_def_label(hlds__assertion__equal_goals_cases_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__equal_goals_cases_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__assertion__equal_goals_cases_4_0_i38);
	}
MR_def_label(hlds__assertion__equal_goals_cases_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(fn__list__reverse_1_0);

MR_BEGIN_MODULE(hlds__assertion_module18)
	MR_init_entry1(hlds__assertion__goal_is_equivalence_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__goal_is_equivalence_3_0);
	MR_init_label10(hlds__assertion__goal_is_equivalence_3_0,8,12,14,17,20,25,27,30,33,35)
	MR_init_label2(hlds__assertion__goal_is_equivalence_3_0,37,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_is_equivalence'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__goal_is_equivalence_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(map__init_1_0,
		hlds__assertion__goal_is_equivalence_3_0_i8);
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_sv(3), 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__assertion__goal_is_equivalence_3_0_i12);
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i14);
	}
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i14);
	}
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r4;
	MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i20);
	}
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__assertion__goal_is_equivalence_3_0_i17);
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	}
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_tempr4 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_body((MR_Integer) MR_tempr2, (MR_Integer) 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,2)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_tempr2 = MR_tempr4;
	MR_sv(1) = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__assertion__goal_is_equivalence_3_0_i25);
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i27);
	}
	MR_r6 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i27);
	}
	MR_r3 = MR_sv(2);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_r5;
	MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i33);
	}
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__assertion__goal_is_equivalence_3_0_i30);
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_sv(4) = MR_tempr2;
	}
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(5), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_r2 = MR_tfield(0, MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0), 0);
	}
	MR_np_call_localret_ent(hlds__assertion__equal_goal_exprs_4_0,
		hlds__assertion__goal_is_equivalence_3_0_i35);
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(4), 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__assertion__equal_goal_exprs_4_0,
		hlds__assertion__goal_is_equivalence_3_0_i37);
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__goal_is_equivalence_3_0_i1);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__assertion__goal_is_equivalence_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module19)
	MR_init_entry1(hlds__assertion__is_commutativity_assertion_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__is_commutativity_assertion_4_0);
	MR_init_label3(hlds__assertion__is_commutativity_assertion_4_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_commutativity_assertion'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__assertion__is_commutativity_assertion_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(hlds__assertion__assert_id_goal_3_0,
		hlds__assertion__is_commutativity_assertion_4_0_i2);
MR_def_label(hlds__assertion__is_commutativity_assertion_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__assertion__goal_is_equivalence_3_0,
		hlds__assertion__is_commutativity_assertion_4_0_i3);
MR_def_label(hlds__assertion__is_commutativity_assertion_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__is_commutativity_assertion_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__assertion__is_commutativity_assertion_4_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(hlds__assertion__is_commutativity_assertion_4_0_i1);
	}
	MR_tempr3 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(2, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(hlds__assertion__is_commutativity_assertion_4_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	MR_r2 = MR_tfield(2, MR_tempr2, 2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__assertion__commutative_var_ordering_4_0);
	}
MR_def_label(hlds__assertion__is_commutativity_assertion_4_0,1)
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

MR_decl_entry(list__perm_2_0);
MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(hlds__assertion_module20)
	MR_init_entry1(hlds__assertion__reorder_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__reorder_4_0);
	MR_init_label5(hlds__assertion__reorder_4_0,3,4,2,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reorder'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__reorder_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.assertion.reorder/4-0", 4,
		MR_LABEL_AP(hlds__assertion__reorder_4_0_i2));
	MR_fv(2) = MR_r1;
	MR_fv(1) = MR_r2;
	MR_fv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(2);
	MR_np_call_localret_ent(list__perm_2_0,
		hlds__assertion__reorder_4_0_i3);
MR_def_label(hlds__assertion__reorder_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_r1;
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(list__perm_2_0,
		hlds__assertion__reorder_4_0_i4);
MR_def_label(hlds__assertion__reorder_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(hlds__assertion__reorder_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_fv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(2);
	MR_np_call_localret_ent(list__perm_2_0,
		hlds__assertion__reorder_4_0_i5);
MR_def_label(hlds__assertion__reorder_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(list__perm_2_0,
		hlds__assertion__reorder_4_0_i6);
MR_def_label(hlds__assertion__reorder_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__singleton_set_2_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(hlds__assertion_module21)
	MR_init_entry1(hlds__assertion__process_two_linked_calls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__process_two_linked_calls_6_0);
	MR_init_label7(hlds__assertion__process_two_linked_calls_6_0,8,9,10,11,12,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_two_linked_calls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__process_two_linked_calls_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__process_two_linked_calls_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__assertion__process_two_linked_calls_6_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__assertion__process_two_linked_calls_6_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__assertion__process_two_linked_calls_6_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr3,2)) {
		MR_GOTO_LAB(hlds__assertion__process_two_linked_calls_6_0_i1);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(2, MR_tempr3, 0);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(hlds__assertion__process_two_linked_calls_6_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr3, 2);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		hlds__assertion__process_two_linked_calls_6_0_i8);
MR_def_label(hlds__assertion__process_two_linked_calls_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		hlds__assertion__process_two_linked_calls_6_0_i9);
MR_def_label(hlds__assertion__process_two_linked_calls_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__assertion__process_two_linked_calls_6_0_i10);
MR_def_label(hlds__assertion__process_two_linked_calls_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__assertion__process_two_linked_calls_6_0_i11);
MR_def_label(hlds__assertion__process_two_linked_calls_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_0,
		hlds__assertion__process_two_linked_calls_6_0_i12);
MR_def_label(hlds__assertion__process_two_linked_calls_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__process_two_linked_calls_6_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		hlds__assertion__process_two_linked_calls_6_0_i14);
MR_def_label(hlds__assertion__process_two_linked_calls_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__assertion__process_two_linked_calls_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);
MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(hlds__assertion_module22)
	MR_init_entry1(hlds__assertion__process_one_side_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__process_one_side_6_0);
	MR_init_label9(hlds__assertion__process_one_side_6_0,8,9,10,11,12,14,17,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_one_side'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__process_one_side_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__assertion__process_one_side_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__assertion__process_one_side_6_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__assertion__process_one_side_6_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__assertion__process_one_side_6_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr3,2)) {
		MR_GOTO_LAB(hlds__assertion__process_one_side_6_0_i1);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(2, MR_tempr3, 0);
	if ((MR_tempr2 != MR_tempr4)) {
		MR_GOTO_LAB(hlds__assertion__process_one_side_6_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_sv(5) = MR_tfield(2, MR_tempr3, 2);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		hlds__assertion__process_one_side_6_0_i8);
MR_def_label(hlds__assertion__process_one_side_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		hlds__assertion__process_one_side_6_0_i9);
MR_def_label(hlds__assertion__process_one_side_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__assertion__process_one_side_6_0_i10);
MR_def_label(hlds__assertion__process_one_side_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__assertion__process_one_side_6_0_i11);
MR_def_label(hlds__assertion__process_one_side_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_0,
		hlds__assertion__process_one_side_6_0_i12);
MR_def_label(hlds__assertion__process_one_side_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__process_one_side_6_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		hlds__assertion__process_one_side_6_0_i14);
MR_def_label(hlds__assertion__process_one_side_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__assertion__process_one_side_6_0_i17);
MR_def_label(hlds__assertion__process_one_side_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__assertion__process_one_side_6_0_i18);
MR_def_label(hlds__assertion__process_one_side_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__process_one_side_6_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__assertion__process_one_side_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(hlds__assertion_module23)
	MR_init_entry1(hlds__assertion__associative_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__associative_5_0);
	MR_init_label10(hlds__assertion__associative_5_0,3,4,6,10,12,14,16,19,21,23)
	MR_init_label10(hlds__assertion__associative_5_0,26,28,30,32,34,36,38,41,43,46)
	MR_init_label2(hlds__assertion__associative_5_0,48,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'associative'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__associative_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(15) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(16) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(17));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__assertion__associative_5_0_i2);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(hlds__assertion__reorder_4_0,
		hlds__assertion__associative_5_0_i3);
MR_def_label(hlds__assertion__associative_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__assertion__process_one_side_6_0,
		hlds__assertion__associative_5_0_i4);
MR_def_label(hlds__assertion__associative_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__assertion__process_one_side_6_0,
		hlds__assertion__associative_5_0_i6);
MR_def_label(hlds__assertion__associative_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_sv(9) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(5) = MR_r3;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		hlds__assertion__associative_5_0_i10);
MR_def_label(hlds__assertion__associative_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,4,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__perm_2_0,
		hlds__assertion__associative_5_0_i12);
MR_def_label(hlds__assertion__associative_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(1, MR_r1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__associative_5_0_i14);
MR_def_label(hlds__assertion__associative_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__associative_5_0_i16);
MR_def_label(hlds__assertion__associative_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__associative_5_0_i19);
MR_def_label(hlds__assertion__associative_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_sv(6);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__associative_5_0_i21);
MR_def_label(hlds__assertion__associative_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__associative_5_0_i23);
MR_def_label(hlds__assertion__associative_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__associative_5_0_i26);
MR_def_label(hlds__assertion__associative_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__associative_5_0_i28);
MR_def_label(hlds__assertion__associative_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__associative_5_0_i30);
MR_def_label(hlds__assertion__associative_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__associative_5_0_i32);
MR_def_label(hlds__assertion__associative_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		hlds__assertion__associative_5_0_i34);
MR_def_label(hlds__assertion__associative_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__assertion__IntroducedFrom__pred__associative__252__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__assertion__associative_5_0_i36);
MR_def_label(hlds__assertion__associative_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__associative_5_0_i38);
MR_def_label(hlds__assertion__associative_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__assertion__IntroducedFrom__pred__associative__254__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(9);
	MR_sv(8) = MR_tfield(0, MR_sv(8), 1);
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__assertion__associative_5_0_i41);
MR_def_label(hlds__assertion__associative_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(9) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__associative_5_0_i43);
MR_def_label(hlds__assertion__associative_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(0,5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__assertion__IntroducedFrom__pred__associative__256__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(10);
	MR_sv(9) = MR_tfield(0, MR_sv(9), 1);
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__assertion__associative_5_0_i46);
MR_def_label(hlds__assertion__associative_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(10) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__associative_5_0_i48);
MR_def_label(hlds__assertion__associative_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(10), 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(8);
	MR_restore_maxfr(MR_sv(17));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__assertion__associative_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);

MR_BEGIN_MODULE(hlds__assertion_module24)
	MR_init_entry1(hlds__assertion__is_associativity_assertion_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__is_associativity_assertion_5_0);
	MR_init_label6(hlds__assertion__is_associativity_assertion_5_0,2,3,5,6,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_associativity_assertion'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__assertion__is_associativity_assertion_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(hlds__assertion__assert_id_goal_3_0,
		hlds__assertion__is_associativity_assertion_5_0_i2);
MR_def_label(hlds__assertion__is_associativity_assertion_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__assertion__goal_is_equivalence_3_0,
		hlds__assertion__is_associativity_assertion_5_0_i3);
MR_def_label(hlds__assertion__is_associativity_assertion_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__assertion__is_associativity_assertion_5_0_i5);
MR_def_label(hlds__assertion__is_associativity_assertion_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i6);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(3, MR_tempr1, 2), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i6);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i6);
	}
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i6);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(3, MR_tempr1, 2), 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,2)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i6);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i6);
	}
	MR_r4 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(hlds__assertion__associative_5_0,
		hlds__assertion__is_associativity_assertion_5_0_i18);
MR_def_label(hlds__assertion__is_associativity_assertion_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i1);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i1);
	}
	MR_r4 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(hlds__assertion__associative_5_0,
		hlds__assertion__is_associativity_assertion_5_0_i18);
MR_def_label(hlds__assertion__is_associativity_assertion_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__is_associativity_assertion_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__assertion__is_associativity_assertion_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module25)
	MR_init_entry1(hlds__assertion__is_update_assertion_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__is_update_assertion_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_update_assertion'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__assertion__is_update_assertion_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_decl_entry(list__delete_3_1);

MR_BEGIN_MODULE(hlds__assertion_module26)
	MR_init_entry1(hlds__assertion__predicate_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__predicate_call_2_0);
	MR_init_label7(hlds__assertion__predicate_call_2_0,6,8,10,11,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predicate_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__predicate_call_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__assertion__predicate_call_2_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__assertion__predicate_call_2_0_i2);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__assertion__predicate_call_2_0_i5);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__assertion__predicate_call_2_0_i6);
MR_def_label(hlds__assertion__predicate_call_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r5 = MR_tfield(2, MR_tempr1, 0);
	if ((MR_sv(1) != MR_r5)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__delete_3_1,
		hlds__assertion__predicate_call_2_0_i8);
MR_def_label(hlds__assertion__predicate_call_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__assertion__predicate_call_2_0_i10);
MR_def_label(hlds__assertion__predicate_call_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__predicate_call_2_0_i11);
MR_def_label(hlds__assertion__predicate_call_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__predicate_call_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__assertion__predicate_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__assertion__predicate_call_2_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
	}
MR_def_label(hlds__assertion__predicate_call_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__prim_data__match_sym_name_2_0);

MR_BEGIN_MODULE(hlds__assertion_module27)
	MR_init_entry1(hlds__assertion__is_construction_equivalence_assertion_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__is_construction_equivalence_assertion_4_0);
	MR_init_label10(hlds__assertion__is_construction_equivalence_assertion_4_0,2,3,11,17,19,21,22,16,13,5)
	MR_init_label3(hlds__assertion__is_construction_equivalence_assertion_4_0,6,31,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_construction_equivalence_assertion'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__assertion__is_construction_equivalence_assertion_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(hlds__assertion__assert_id_goal_3_0,
		hlds__assertion__is_construction_equivalence_assertion_4_0_i2);
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__assertion__goal_is_equivalence_3_0,
		hlds__assertion__is_construction_equivalence_assertion_4_0_i3);
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i6);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i6);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i6);
	}
	if (MR_RTAGS_TESTR(MR_sv(4),3,2)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i6);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr4 = MR_sv(4);
	MR_tempr3 = MR_tfield(3, MR_tempr4, 2);
	if ((MR_tempr2 != MR_tempr3)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i6);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__match_sym_name_2_0,
		hlds__assertion__is_construction_equivalence_assertion_4_0_i11);
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i13);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i13);
	}
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__assertion__is_construction_equivalence_assertion_4_0_i16);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__assertion__is_construction_equivalence_assertion_4_0_i17);
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r5 = MR_tfield(2, MR_tempr1, 0);
	if ((MR_sv(1) != MR_r5)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__delete_3_1,
		hlds__assertion__is_construction_equivalence_assertion_4_0_i19);
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__assertion__is_construction_equivalence_assertion_4_0_i21);
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__is_construction_equivalence_assertion_4_0_i22);
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i1);
	}
	MR_r2 = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_sv(1) == MR_r2);
	MR_decr_sp_and_return(8);
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_sv(4),3,2)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr4 = MR_sv(4);
	MR_tempr3 = MR_tfield(3, MR_tempr4, 2);
	if ((MR_tempr2 != MR_tempr3)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__match_sym_name_2_0,
		hlds__assertion__is_construction_equivalence_assertion_4_0_i31);
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__assertion__is_construction_equivalence_assertion_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__assertion__predicate_call_2_0);
MR_def_label(hlds__assertion__is_construction_equivalence_assertion_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(hlds__assertion_module28)
	MR_init_entry1(hlds__assertion__update_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__update_5_0);
	MR_init_label10(hlds__assertion__update_5_0,1,2,4,8,11,12,14,16,18,20)
	MR_init_label9(hlds__assertion__update_5_0,23,25,27,29,31,33,35,38,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__update_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.assertion.update/5-0", 12,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r3;
	MR_fv(2) = MR_r4;
	MR_np_call_localret_ent(hlds__assertion__reorder_4_0,
		hlds__assertion__update_5_0_i1);
MR_def_label(hlds__assertion__update_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(6) = MR_r2;
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(hlds__assertion__process_two_linked_calls_6_0,
		hlds__assertion__update_5_0_i2);
MR_def_label(hlds__assertion__update_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(6);
	MR_fv(6) = MR_r2;
	MR_fv(3) = MR_r3;
	MR_fv(5) = MR_r4;
	MR_fv(4) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_fv(1);
	}
	MR_np_call_localret_ent(hlds__assertion__process_two_linked_calls_6_0,
		hlds__assertion__update_5_0_i4);
MR_def_label(hlds__assertion__update_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_fv(6) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(5);
	MR_fv(5) = MR_r3;
	MR_fv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_fv(11) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_fv(12) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = MR_fv(12);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		hlds__assertion__update_5_0_i8);
MR_def_label(hlds__assertion__update_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(10) = (MR_Word) MR_TAG_COMMON(0,4,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__assertion__update_5_0_i11);
MR_def_label(hlds__assertion__update_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(6) = MR_r1;
	MR_r1 = MR_fv(10);
	MR_r2 = MR_fv(6);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__assertion__update_5_0_i12);
MR_def_label(hlds__assertion__update_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(10);
	MR_r2 = MR_fv(6);
	MR_np_call_localret_ent(list__perm_2_0,
		hlds__assertion__update_5_0_i14);
MR_def_label(hlds__assertion__update_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_fv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_fv(8) = MR_tfield(1, MR_r1, 1);
	MR_fv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_fv(9);
	MR_r2 = MR_fv(3);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__update_5_0_i16);
MR_def_label(hlds__assertion__update_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(7);
	MR_fv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_fv(9);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__update_5_0_i18);
MR_def_label(hlds__assertion__update_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(9);
	MR_r2 = MR_fv(6);
	MR_r3 = MR_fv(7);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__update_5_0_i20);
MR_def_label(hlds__assertion__update_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_LTAGS_TEST(MR_fv(8),0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(8);
	MR_fv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_fv(10);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__update_5_0_i23);
MR_def_label(hlds__assertion__update_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_fv(8);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_fv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_fv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_fv(9);
	MR_r2 = MR_fv(3);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__update_5_0_i25);
MR_def_label(hlds__assertion__update_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_fv(8);
	MR_tempr2 = MR_fv(7);
	MR_fv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_fv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__update_5_0_i27);
MR_def_label(hlds__assertion__update_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(9);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(8);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__update_5_0_i29);
MR_def_label(hlds__assertion__update_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(11);
	MR_r2 = MR_r1;
	MR_r3 = MR_fv(4);
	MR_r4 = MR_fv(2);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		hlds__assertion__update_5_0_i31);
MR_def_label(hlds__assertion__update_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(0,6);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__assertion__IntroducedFrom__pred__update__351__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_fv(6);
	MR_fv(6) = MR_r1;
	MR_r1 = MR_fv(12);
	MR_r3 = MR_fv(6);
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__assertion__update_5_0_i33);
MR_def_label(hlds__assertion__update_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_fv(8) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(12);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__update_5_0_i35);
MR_def_label(hlds__assertion__update_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(0,7);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__assertion__IntroducedFrom__pred__update__353__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_fv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(6);
	MR_fv(6) = MR_tfield(0, MR_fv(8), 1);
	MR_r1 = MR_fv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		hlds__assertion__update_5_0_i38);
MR_def_label(hlds__assertion__update_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_fv(8) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(12);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__assertion__update_5_0_i40);
MR_def_label(hlds__assertion__update_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_fv(6);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_fv(8), 1);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_assertions_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_assert_id_0;
MR_decl_entry(set__insert_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_assertions_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(hlds__assertion_module29)
	MR_init_entry1(hlds__assertion__update_pred_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__update_pred_info_4_0);
	MR_init_label4(hlds__assertion__update_pred_info_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_pred_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__update_pred_info_4_0)
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
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__assertion__update_pred_info_4_0_i2);
MR_def_label(hlds__assertion__update_pred_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_assertions_2_0,
		hlds__assertion__update_pred_info_4_0_i3);
MR_def_label(hlds__assertion__update_pred_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		hlds__assertion__update_pred_info_4_0_i4);
MR_def_label(hlds__assertion__update_pred_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_assertions_3_0,
		hlds__assertion__update_pred_info_4_0_i5);
MR_def_label(hlds__assertion__update_pred_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_info_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__assertion_module30)
	MR_init_entry1(__Unify___hlds__assertion__subst_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__assertion__subst_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__assertion__subst_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
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

MR_BEGIN_MODULE(hlds__assertion_module31)
	MR_init_entry1(__Compare___hlds__assertion__subst_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__assertion__subst_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__assertion__subst_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module32)
	MR_init_entry1(hlds__assertion__IntroducedFrom__pred__associative__252__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__IntroducedFrom__pred__associative__252__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__associative__252__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__IntroducedFrom__pred__associative__252__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module33)
	MR_init_entry1(hlds__assertion__IntroducedFrom__pred__associative__254__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__IntroducedFrom__pred__associative__254__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__associative__254__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__IntroducedFrom__pred__associative__254__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module34)
	MR_init_entry1(hlds__assertion__IntroducedFrom__pred__associative__256__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__IntroducedFrom__pred__associative__256__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__associative__256__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__IntroducedFrom__pred__associative__256__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module35)
	MR_init_entry1(hlds__assertion__IntroducedFrom__pred__process_one_side__294__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__IntroducedFrom__pred__process_one_side__294__1_1_0);
	MR_init_label2(hlds__assertion__IntroducedFrom__pred__process_one_side__294__1_1_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_one_side__294__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__IntroducedFrom__pred__process_one_side__294__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__assertion__IntroducedFrom__pred__process_one_side__294__1_1_0_i3);
MR_def_label(hlds__assertion__IntroducedFrom__pred__process_one_side__294__1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__assertion__IntroducedFrom__pred__process_one_side__294__1_1_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__assertion__IntroducedFrom__pred__process_one_side__294__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(hlds__assertion_module36)
	MR_init_entry1(hlds__assertion__IntroducedFrom__pred__update__340__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__IntroducedFrom__pred__update__340__1_1_0);
	MR_init_label2(hlds__assertion__IntroducedFrom__pred__update__340__1_1_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__update__340__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__IntroducedFrom__pred__update__340__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		hlds__assertion__IntroducedFrom__pred__update__340__1_1_0_i4);
MR_def_label(hlds__assertion__IntroducedFrom__pred__update__340__1_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__assertion__IntroducedFrom__pred__update__340__1_1_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__assertion__IntroducedFrom__pred__update__340__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module37)
	MR_init_entry1(hlds__assertion__IntroducedFrom__pred__update__351__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__IntroducedFrom__pred__update__351__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__update__351__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__IntroducedFrom__pred__update__351__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module38)
	MR_init_entry1(hlds__assertion__IntroducedFrom__pred__update__353__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__IntroducedFrom__pred__update__353__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__update__353__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__IntroducedFrom__pred__update__353__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module39)
	MR_init_entry1(hlds__assertion__IntroducedFrom__pred__predicate_call__426__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__assertion__IntroducedFrom__pred__predicate_call__426__1_1_0);
	MR_init_label1(hlds__assertion__IntroducedFrom__pred__predicate_call__426__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__predicate_call__426__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__assertion__IntroducedFrom__pred__predicate_call__426__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__assertion__IntroducedFrom__pred__predicate_call__426__1_1_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_tag(MR_r1) != MR_mktag((MR_Integer) 1));
	MR_proceed();
MR_def_label(hlds__assertion__IntroducedFrom__pred__predicate_call__426__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__assertion_module40)
	MR_init_entry1(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0);
	MR_init_label6(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0,2,3,5,6,24,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__is_update_assertion__[3]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(hlds__assertion__assert_id_goal_3_0,
		f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i2);
MR_def_label(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__assertion__goal_is_equivalence_3_0,
		f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i3);
MR_def_label(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i5);
MR_def_label(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i6);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(3, MR_tempr1, 2), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i6);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i6);
	}
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i6);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(3, MR_tempr1, 2), 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i6);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__assertion__update_5_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_r2, 3) = MR_tfield(3, MR_tempr2, 2);
	MR_tfield(0, MR_r2, 4) = MR_tfield(3, MR_tempr3, 2);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_tfield(0, MR_r2, 6) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i24);
MR_def_label(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i1);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__assertion__update_5_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_r2, 3) = MR_tfield(3, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 4) = MR_tfield(3, MR_tempr2, 2);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_tfield(0, MR_r2, 6) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i24);
MR_def_label(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_104_108_100_115_95_95_97_115_115_101_114_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_112_100_97_116_101_95_97_115_115_101_114_116_105_111_110_95_95_91_51_93_95_48_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__assertion_maybe_bunch_0(void)
{
	hlds__assertion_module0();
	hlds__assertion_module1();
	hlds__assertion_module2();
	hlds__assertion_module3();
	hlds__assertion_module4();
	hlds__assertion_module5();
	hlds__assertion_module6();
	hlds__assertion_module7();
	hlds__assertion_module8();
	hlds__assertion_module9();
	hlds__assertion_module10();
	hlds__assertion_module11();
	hlds__assertion_module12();
	hlds__assertion_module13();
	hlds__assertion_module14();
	hlds__assertion_module15();
	hlds__assertion_module16();
	hlds__assertion_module17();
	hlds__assertion_module18();
	hlds__assertion_module19();
	hlds__assertion_module20();
	hlds__assertion_module21();
	hlds__assertion_module22();
	hlds__assertion_module23();
	hlds__assertion_module24();
	hlds__assertion_module25();
	hlds__assertion_module26();
	hlds__assertion_module27();
	hlds__assertion_module28();
	hlds__assertion_module29();
	hlds__assertion_module30();
	hlds__assertion_module31();
	hlds__assertion_module32();
	hlds__assertion_module33();
	hlds__assertion_module34();
	hlds__assertion_module35();
	hlds__assertion_module36();
	hlds__assertion_module37();
	hlds__assertion_module38();
	hlds__assertion_module39();
}

static void mercury__hlds__assertion_maybe_bunch_1(void)
{
	hlds__assertion_module40();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__assertion__init(void);
void mercury__hlds__assertion__init_type_tables(void);
void mercury__hlds__assertion__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__assertion__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__assertion__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__assertion__init_threadscope_string_table(void);
#endif

void mercury__hlds__assertion__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__assertion_maybe_bunch_0();
	mercury__hlds__assertion_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__assertion__type_ctor_info_subst_0,
		hlds__assertion__subst_0_0);
	mercury__hlds__assertion__init_debugger();
}

void mercury__hlds__assertion__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__assertion__type_ctor_info_subst_0);
	}
}


void mercury__hlds__assertion__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__assertion__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__assertion);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__assertion__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__assertion__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
