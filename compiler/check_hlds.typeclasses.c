/*
** Automatically generated from `typeclasses.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__typeclasses__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "check_hlds.typeclasses.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "check_hlds.typeclasses.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "check_hlds.typeclasses.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "check_hlds.typeclasses.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "check_hlds.typeclasses.c"
#line 44 "check_hlds.typeclasses.c"
#include "check_hlds.typeclasses.mh"

#line 47 "check_hlds.typeclasses.c"
#line 48 "check_hlds.typeclasses.c"
#ifndef CHECK_HLDS__TYPECLASSES_DECL_GUARD
#define CHECK_HLDS__TYPECLASSES_DECL_GUARD

#line 52 "check_hlds.typeclasses.c"
#line 53 "check_hlds.typeclasses.c"

#endif
#line 56 "check_hlds.typeclasses.c"

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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[11];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[10];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];
MR_decl_label3(check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0, 2,3,4)
MR_decl_label3(check_hlds__typeclasses__add_superclass_proofs_4_0, 11,4,3)
MR_decl_label1(check_hlds__typeclasses__apply_class_rules_7_0, 2)
MR_decl_label8(check_hlds__typeclasses__apply_class_rules_2_8_0, 4,6,8,9,10,5,11,3)
MR_decl_label4(check_hlds__typeclasses__apply_improvement_rules_9_0, 2,3,4,5)
MR_decl_label1(check_hlds__typeclasses__apply_instance_rules_13_0, 2)
MR_decl_label8(check_hlds__typeclasses__apply_instance_rules_2_15_0, 4,5,8,10,11,12,13,7)
MR_decl_label4(check_hlds__typeclasses__apply_instance_rules_2_15_0, 15,16,17,3)
MR_decl_label2(check_hlds__typeclasses__do_class_improvement_2_8_0, 2,3)
MR_decl_label3(check_hlds__typeclasses__do_class_improvement_by_pairs_7_0, 11,4,3)
MR_decl_label3(check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0, 11,4,3)
MR_decl_label8(check_hlds__typeclasses__do_class_improvement_fundep_8_0, 3,4,5,8,9,10,12,13)
MR_decl_label2(check_hlds__typeclasses__do_class_improvement_fundep_8_0, 14,2)
MR_decl_label3(check_hlds__typeclasses__do_class_improvement_pair_8_0, 11,4,3)
MR_decl_label1(check_hlds__typeclasses__do_instance_improvement_9_0, 2)
MR_decl_label3(check_hlds__typeclasses__do_instance_improvement_2_11_0, 2,3,4)
MR_decl_label4(check_hlds__typeclasses__do_instance_improvement_3_10_0, 2,3,4,6)
MR_decl_label8(check_hlds__typeclasses__do_instance_improvement_fundep_8_0, 3,4,5,6,7,9,11,12)
MR_decl_label7(check_hlds__typeclasses__do_instance_improvement_fundep_8_0, 13,14,15,17,18,19,2)
MR_decl_label8(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0, 4,9,10,7,12,13,6,3)
MR_decl_label8(check_hlds__typeclasses__find_matching_instance_rule_2_8_0, 27,3,4,7,9,10,11,12)
MR_decl_label3(check_hlds__typeclasses__find_matching_instance_rule_2_8_0, 13,6,1)
MR_decl_label3(check_hlds__typeclasses__matches_no_constraint_2_0, 6,7,5)
MR_decl_label8(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0, 27,5,7,9,10,4,12,3)
MR_decl_label8(check_hlds__typeclasses__perform_context_reduction_3_0, 2,3,4,5,9,10,11,6)
MR_decl_label8(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0, 34,2,3,5,6,4,7,8)
MR_decl_label3(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0, 9,15,10)
MR_decl_label8(check_hlds__typeclasses__reduce_type_assign_context_4_0, 2,3,4,5,6,7,8,13)
MR_decl_label8(check_hlds__typeclasses__reduce_type_assign_context_4_0, 18,20,17,11,24,25,26,27)
MR_decl_label1(check_hlds__typeclasses__reduce_type_assign_context_4_0, 28)
MR_decl_label3(check_hlds__typeclasses__sort_and_merge_dups_2_0, 2,4,3)
MR_def_extern_entry(check_hlds__typeclasses__perform_context_reduction_3_0)
MR_decl_static(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0)
MR_decl_static(check_hlds__typeclasses__sort_and_merge_dups_2_0)
MR_decl_static(check_hlds__typeclasses__do_instance_improvement_9_0)
MR_decl_static(check_hlds__typeclasses__apply_improvement_rules_9_0)
MR_decl_static(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0)
MR_decl_static(check_hlds__typeclasses__find_matching_instance_rule_2_8_0)
MR_decl_static(check_hlds__typeclasses__find_matching_instance_rule_7_0)
MR_decl_static(check_hlds__typeclasses__apply_instance_rules_2_15_0)
MR_decl_static(check_hlds__typeclasses__apply_instance_rules_13_0)
MR_decl_static(check_hlds__typeclasses__add_superclass_proofs_4_0)
MR_decl_static(check_hlds__typeclasses__apply_class_rules_2_8_0)
MR_decl_static(check_hlds__typeclasses__apply_class_rules_7_0)
MR_decl_static(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0)
MR_def_extern_entry(check_hlds__typeclasses__reduce_context_by_rule_application_13_0)
MR_decl_static(check_hlds__typeclasses__reduce_type_assign_context_4_0)
MR_decl_static(check_hlds__typeclasses__do_class_improvement_fundep_8_0)
MR_decl_static(check_hlds__typeclasses__do_class_improvement_pair_8_0)
MR_decl_static(check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0)
MR_decl_static(check_hlds__typeclasses__do_class_improvement_by_pairs_7_0)
MR_decl_static(check_hlds__typeclasses__do_class_improvement_2_8_0)
MR_decl_static(check_hlds__typeclasses__do_instance_improvement_2_11_0)
MR_decl_static(check_hlds__typeclasses__do_instance_improvement_3_10_0)
MR_decl_static(check_hlds__typeclasses__do_instance_improvement_4_8_0)
MR_decl_static(check_hlds__typeclasses__do_instance_improvement_fundep_8_0)
MR_decl_static(check_hlds__typeclasses__matches_no_constraint_2_0)
MR_decl_static(check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_COMMON(1,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_COMMON(1,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,1,7),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;
static const struct mercury_type_1 mercury_common_1[13] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
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
MR_LIST_CTOR_ADDR,
MR_COMMON(1,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__perform_context_reduction_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typeclasses__perform_context_reduction_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign),
MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__perform_context_reduction_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__sort_and_merge_dups_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typeclasses__perform_context_reduction_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign),
MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typeclasses__sort_and_merge_dups_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
};

MR_decl_entry(hlds__hlds_data__compare_hlds_constraints_3_0);
static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_COMMON(3,1),
MR_ENTRY_AP(hlds__hlds_data__compare_hlds_constraints_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_9_0_1,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_COMMON(1,3),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_COMMON(1,5),
MR_COMMON(1,5),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__apply_improvement_rules_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_3_10_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_4_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typeclasses__apply_improvement_rules_9_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(0,0),
MR_COMMON(1,3),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_3_10_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(1,11),
MR_COMMON(1,12),
MR_COMMON(1,3),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_4_8_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_COMMON(1,12),
MR_COMMON(1,3),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__apply_instance_rules_2_15_0_1;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typeclasses__apply_instance_rules_2_15_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,9),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_2_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_2_11_0_1,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_COMMON(1,9),
MR_COMMON(1,11),
MR_COMMON(1,3),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn),
MR_COMMON(1,5),
MR_COMMON(1,5),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__perform_context_reduction_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.typeclasses",
"check_hlds.typeclasses",
"reduce_type_assign_context",
4,
0
},
"check_hlds.typeclasses",
"typeclasses.m",
118,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__perform_context_reduction_3_0_2 = {
{
MR_PREDICATE,
"check_hlds.typeclasses",
"check_hlds.typeclasses",
"lambda_typeclasses_m_129",
3,
0
},
"check_hlds.typeclasses",
"typeclasses.m",
129,
"d1;c11;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__sort_and_merge_dups_2_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_data",
"hlds.hlds_data",
"compare_hlds_constraints",
3,
0
},
"check_hlds.typeclasses",
"typeclasses.m",
225,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_9_0_1 = {
{
MR_PREDICATE,
"check_hlds.typeclasses",
"check_hlds.typeclasses",
"do_instance_improvement_2",
11,
0
},
"check_hlds.typeclasses",
"typeclasses.m",
379,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__apply_improvement_rules_9_0_1 = {
{
MR_PREDICATE,
"check_hlds.typeclasses",
"check_hlds.typeclasses",
"do_class_improvement_2",
8,
0
},
"check_hlds.typeclasses",
"typeclasses.m",
282,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__apply_instance_rules_2_15_0_1 = {
{
MR_PREDICATE,
"check_hlds.typeclasses",
"check_hlds.typeclasses",
"matches_no_constraint",
2,
0
},
"check_hlds.typeclasses",
"typeclasses.m",
571,
"d2;c21;t;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_2_11_0_1 = {
{
MR_PREDICATE,
"check_hlds.typeclasses",
"check_hlds.typeclasses",
"do_instance_improvement_3",
10,
0
},
"check_hlds.typeclasses",
"typeclasses.m",
395,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_3_10_0_1 = {
{
MR_PREDICATE,
"check_hlds.typeclasses",
"check_hlds.typeclasses",
"do_instance_improvement_4",
8,
0
},
"check_hlds.typeclasses",
"typeclasses.m",
411,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typeclasses__do_instance_improvement_4_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.typeclasses",
"check_hlds.typeclasses",
"do_instance_improvement_fundep",
8,
0
},
"check_hlds.typeclasses",
"typeclasses.m",
428,
"d1;c9;"
};

MR_decl_entry(check_hlds__typecheck_info__type_checkpoint_4_0);
MR_decl_entry(hlds__hlds_module__module_info_get_class_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_instance_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0;
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_add_error_3_0);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module0)
	MR_init_entry1(check_hlds__typeclasses__perform_context_reduction_3_0);
	MR_init_label8(check_hlds__typeclasses__perform_context_reduction_3_0,2,3,4,5,9,10,11,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typeclasses__perform_context_reduction_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("before context reduction", 24);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_checkpoint_4_0,
		check_hlds__typeclasses__perform_context_reduction_3_0_i2);
MR_def_label(check_hlds__typeclasses__perform_context_reduction_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		check_hlds__typeclasses__perform_context_reduction_3_0_i3);
MR_def_label(check_hlds__typeclasses__perform_context_reduction_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_instance_table_2_0,
		check_hlds__typeclasses__perform_context_reduction_3_0_i4);
MR_def_label(check_hlds__typeclasses__perform_context_reduction_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typeclasses__reduce_type_assign_context_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		check_hlds__typeclasses__perform_context_reduction_3_0_i5);
MR_def_label(check_hlds__typeclasses__perform_context_reduction_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__perform_context_reduction_3_0_i6);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__perform_context_reduction_3_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0,
		check_hlds__typeclasses__perform_context_reduction_3_0_i9);
MR_def_label(check_hlds__typeclasses__perform_context_reduction_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0,
		check_hlds__typeclasses__perform_context_reduction_3_0_i10);
MR_def_label(check_hlds__typeclasses__perform_context_reduction_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__typeclasses__perform_context_reduction_3_0_i11);
MR_def_label(check_hlds__typeclasses__perform_context_reduction_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__typeclasses__perform_context_reduction_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;
MR_decl_entry(list__append_3_1);
MR_decl_entry(list__sort_and_remove_dups_2_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module1)
	MR_init_entry1(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0);
	MR_init_label8(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0,27,5,7,9,10,4,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_r1, 1);
	MR_sv(6) = MR_ctfield(0, MR_r1, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__typeclasses__merge_adjacent_constraints_2_3_0_i5);
MR_def_label(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__typeclasses__merge_adjacent_constraints_2_3_0_i7);
MR_def_label(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__typeclasses__merge_adjacent_constraints_2_3_0_i9);
MR_def_label(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		check_hlds__typeclasses__merge_adjacent_constraints_2_3_0_i10);
MR_def_label(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0_i27);
	}
MR_def_label(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0,
		check_hlds__typeclasses__merge_adjacent_constraints_2_3_0_i12);
MR_def_label(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__sort_3_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module2)
	MR_init_entry1(check_hlds__typeclasses__sort_and_merge_dups_2_0);
	MR_init_label3(check_hlds__typeclasses__sort_and_merge_dups_2_0,2,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__sort_and_merge_dups_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(list__sort_3_0,
		check_hlds__typeclasses__sort_and_merge_dups_2_0_i2);
MR_def_label(check_hlds__typeclasses__sort_and_merge_dups_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__sort_and_merge_dups_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__typeclasses__sort_and_merge_dups_2_0_i3);
MR_def_label(check_hlds__typeclasses__sort_and_merge_dups_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__typeclasses__merge_adjacent_constraints_2_3_0,
		check_hlds__typeclasses__sort_and_merge_dups_2_0_i3);
MR_def_label(check_hlds__typeclasses__sort_and_merge_dups_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
MR_decl_entry(map__keys_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(list__foldl3_8_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module3)
	MR_init_entry1(check_hlds__typeclasses__do_instance_improvement_9_0);
	MR_init_label1(check_hlds__typeclasses__do_instance_improvement_9_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__do_instance_improvement_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_r4, 2);
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__typeclasses__do_instance_improvement_9_0_i2);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typeclasses__do_instance_improvement_2_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = (MR_Integer) 0;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl3_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(multi_map__keys_2_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(fn__bool__or_2_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module4)
	MR_init_entry1(check_hlds__typeclasses__apply_improvement_rules_9_0);
	MR_init_label4(check_hlds__typeclasses__apply_improvement_rules_9_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__apply_improvement_rules_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(multi_map__keys_2_0,
		check_hlds__typeclasses__apply_improvement_rules_9_0_i2);
MR_def_label(check_hlds__typeclasses__apply_improvement_rules_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typeclasses__do_class_improvement_2_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__typeclasses__apply_improvement_rules_9_0_i3);
MR_def_label(check_hlds__typeclasses__apply_improvement_rules_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__typeclasses__do_instance_improvement_9_0,
		check_hlds__typeclasses__apply_improvement_rules_9_0_i4);
MR_def_label(check_hlds__typeclasses__apply_improvement_rules_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__bool__or_2_0,
		check_hlds__typeclasses__apply_improvement_rules_9_0_i5);
MR_def_label(check_hlds__typeclasses__apply_improvement_rules_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_decl_entry(hlds__hlds_data__matching_constraints_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(hlds__hlds_data__update_constraint_map_3_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module5)
	MR_init_entry1(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0);
	MR_init_label8(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0,4,9,10,7,12,13,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_localcall_lab(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0,
		check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0_i4);
MR_def_label(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0_i7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	}
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0_i9);
MR_def_label(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__matching_constraints_2_0,
		check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0_i10);
MR_def_label(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0_i12);
MR_def_label(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0_i6);
MR_def_label(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__update_constraint_map_3_0,
		check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0_i13);
MR_def_label(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__tvarset_merge_renaming_4_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0);
MR_decl_entry(parse_tree__prog_type__type_list_subsumes_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0);
MR_decl_entry(hlds__hlds_data__init_hlds_constraint_list_2_0);
MR_decl_entry(hlds__hlds_data__retrieve_prog_constraint_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module6)
	MR_init_entry1(check_hlds__typeclasses__find_matching_instance_rule_2_8_0);
	MR_init_label8(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,27,3,4,7,9,10,11,12)
	MR_init_label3(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,13,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__find_matching_instance_rule_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__find_matching_instance_rule_2_8_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 4);
	MR_tempr3 = MR_r4;
	MR_sv(8) = MR_tempr3;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__tvarset_merge_renaming_4_0,
		check_hlds__typeclasses__find_matching_instance_rule_2_8_0_i3);
MR_def_label(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		check_hlds__typeclasses__find_matching_instance_rule_2_8_0_i4);
MR_def_label(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		check_hlds__typeclasses__find_matching_instance_rule_2_8_0_i7);
MR_def_label(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typeclasses__find_matching_instance_rule_2_8_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0,
		check_hlds__typeclasses__find_matching_instance_rule_2_8_0_i9);
MR_def_label(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0,
		check_hlds__typeclasses__find_matching_instance_rule_2_8_0_i10);
MR_def_label(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__init_hlds_constraint_list_2_0,
		check_hlds__typeclasses__find_matching_instance_rule_2_8_0_i11);
MR_def_label(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_data__retrieve_prog_constraint_2_0,
		check_hlds__typeclasses__find_matching_instance_rule_2_8_0_i12);
MR_def_label(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__set_4_0,
		check_hlds__typeclasses__find_matching_instance_rule_2_8_0_i13);
MR_def_label(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__typeclasses__find_matching_instance_rule_2_8_0_i27);
MR_def_label(check_hlds__typeclasses__find_matching_instance_rule_2_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typeclasses_module7)
	MR_init_entry1(check_hlds__typeclasses__find_matching_instance_rule_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__find_matching_instance_rule_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_tailcall_ent(check_hlds__typeclasses__find_matching_instance_rule_2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(hlds__hlds_data__update_redundant_constraints_5_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(bool__or_3_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module8)
	MR_init_entry1(check_hlds__typeclasses__apply_instance_rules_2_15_0);
	MR_init_label8(check_hlds__typeclasses__apply_instance_rules_2_15_0,4,5,8,10,11,12,13,7)
	MR_init_label4(check_hlds__typeclasses__apply_instance_rules_2_15_0,15,16,17,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__apply_instance_rules_2_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__apply_instance_rules_2_15_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r8;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__typeclasses__apply_instance_rules_2_15_0_i4);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typeclasses__apply_instance_rules_2_15_0_i5);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typeclasses__find_matching_instance_rule_7_0,
		check_hlds__typeclasses__apply_instance_rules_2_15_0_i8);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typeclasses__apply_instance_rules_2_15_0_i7);
	}
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_data__update_constraint_map_3_0,
		check_hlds__typeclasses__apply_instance_rules_2_15_0_i10);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typeclasses__matches_no_constraint_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		check_hlds__typeclasses__apply_instance_rules_2_15_0_i11);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_data__update_redundant_constraints_5_0,
		check_hlds__typeclasses__apply_instance_rules_2_15_0_i12);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typeclasses__apply_instance_rules_2_15_0_i13);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r8 = MR_sv(9);
	MR_sv(1) = (MR_Integer) 1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_np_localcall_lab(check_hlds__typeclasses__apply_instance_rules_2_15_0,
		check_hlds__typeclasses__apply_instance_rules_2_15_0_i15);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r8 = MR_sv(9);
	MR_r6 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = (MR_Integer) 0;
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(check_hlds__typeclasses__apply_instance_rules_2_15_0,
		check_hlds__typeclasses__apply_instance_rules_2_15_0_i15);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r2 = MR_r7;
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__typeclasses__apply_instance_rules_2_15_0_i16);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__typeclasses__apply_instance_rules_2_15_0_i17);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_2_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typeclasses_module9)
	MR_init_entry1(check_hlds__typeclasses__apply_instance_rules_13_0);
	MR_init_label1(check_hlds__typeclasses__apply_instance_rules_13_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__apply_instance_rules_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_r7 = MR_r6;
	MR_r6 = MR_ctfield(0, MR_tempr1, 2);
	MR_r8 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__typeclasses__apply_instance_rules_2_15_0,
		check_hlds__typeclasses__apply_instance_rules_13_0_i2);
MR_def_label(check_hlds__typeclasses__apply_instance_rules_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r6;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_r7;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module10)
	MR_init_entry1(check_hlds__typeclasses__add_superclass_proofs_4_0);
	MR_init_label3(check_hlds__typeclasses__add_superclass_proofs_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__add_superclass_proofs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typeclasses__add_superclass_proofs_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__add_superclass_proofs_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		check_hlds__typeclasses__add_superclass_proofs_4_0_i4);
MR_def_label(check_hlds__typeclasses__add_superclass_proofs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__typeclasses__add_superclass_proofs_4_0_i11);
MR_def_label(check_hlds__typeclasses__add_superclass_proofs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module11)
	MR_init_entry1(check_hlds__typeclasses__apply_class_rules_2_8_0);
	MR_init_label8(check_hlds__typeclasses__apply_class_rules_2_8_0,4,6,8,9,10,5,11,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__apply_class_rules_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__apply_class_rules_2_8_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_data__retrieve_prog_constraint_2_0,
		check_hlds__typeclasses__apply_class_rules_2_8_0_i4);
MR_def_label(check_hlds__typeclasses__apply_class_rules_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__typeclasses__apply_class_rules_2_8_0_i6);
MR_def_label(check_hlds__typeclasses__apply_class_rules_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typeclasses__apply_class_rules_2_8_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_data__update_constraint_map_3_0,
		check_hlds__typeclasses__apply_class_rules_2_8_0_i8);
MR_def_label(check_hlds__typeclasses__apply_class_rules_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typeclasses__add_superclass_proofs_4_0,
		check_hlds__typeclasses__apply_class_rules_2_8_0_i9);
MR_def_label(check_hlds__typeclasses__apply_class_rules_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(check_hlds__typeclasses__apply_class_rules_2_8_0,
		check_hlds__typeclasses__apply_class_rules_2_8_0_i10);
MR_def_label(check_hlds__typeclasses__apply_class_rules_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__typeclasses__apply_class_rules_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(check_hlds__typeclasses__apply_class_rules_2_8_0,
		check_hlds__typeclasses__apply_class_rules_2_8_0_i11);
MR_def_label(check_hlds__typeclasses__apply_class_rules_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__typeclasses__apply_class_rules_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typeclasses_module12)
	MR_init_entry1(check_hlds__typeclasses__apply_class_rules_7_0);
	MR_init_label1(check_hlds__typeclasses__apply_class_rules_7_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__apply_class_rules_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__typeclasses__apply_class_rules_2_8_0,
		check_hlds__typeclasses__apply_class_rules_7_0_i2);
MR_def_label(check_hlds__typeclasses__apply_class_rules_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__apply_rec_subst_to_constraints_3_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module13)
	MR_init_entry1(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0);
	MR_init_label8(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,34,2,3,5,6,4,7,8)
	MR_init_label3(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,9,15,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_sv(8) = MR_r9;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r8;
	}
	MR_np_call_localret_ent(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,
		check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i2);
MR_def_label(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__typeclasses__apply_improvement_rules_9_0,
		check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i3);
MR_def_label(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(9) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(5) = MR_r1;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 3);
	MR_GOTO_LAB(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i4);
	}
MR_def_label(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,
		check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i6);
MR_def_label(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 3);
	}
MR_def_label(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__typeclasses__eliminate_assumed_constraints_2_6_0,
		check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i7);
MR_def_label(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__typeclasses__apply_instance_rules_13_0,
		check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i8);
MR_def_label(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(check_hlds__typeclasses__apply_class_rules_7_0,
		check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i9);
MR_def_label(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i10);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i10);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i10);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(check_hlds__typeclasses__sort_and_merge_dups_2_0,
		check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i15);
MR_def_label(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(7);
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r8 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(8);
	MR_r9 = MR_sv(7);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0_i34);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typeclasses_module14)
	MR_init_entry1(check_hlds__typeclasses__reduce_context_by_rule_application_13_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typeclasses__reduce_context_by_rule_application_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_ctfield(0, MR_r8, 0);
	MR_np_tailcall_ent(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_get_typevarset_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_get_constraint_map_2_0);
MR_decl_entry(parse_tree__prog_type__type_list_contains_var_2_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_set_typevarset_3_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_set_constraint_proofs_3_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_set_constraint_map_3_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module15)
	MR_init_entry1(check_hlds__typeclasses__reduce_type_assign_context_4_0);
	MR_init_label8(check_hlds__typeclasses__reduce_type_assign_context_4_0,2,3,4,5,6,7,8,13)
	MR_init_label8(check_hlds__typeclasses__reduce_type_assign_context_4_0,18,20,17,11,24,25,26,27)
	MR_init_label1(check_hlds__typeclasses__reduce_type_assign_context_4_0,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__reduce_type_assign_context_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i2);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i3);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i4);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i5);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i6);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_constraint_map_2_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i7);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_ctfield(0, MR_r8, 0);
	MR_np_call_localret_ent(check_hlds__typeclasses__reduce_context_by_rule_application_2_15_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i8);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__typeclasses__reduce_type_assign_context_4_0_i11);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i13);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__typeclasses__reduce_type_assign_context_4_0_i17);
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_contains_var_2_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i18);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i20);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(14));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i24);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i25);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_typevarset_3_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i26);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_constraint_proofs_3_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i27);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_constraint_map_3_0,
		check_hlds__typeclasses__reduce_type_assign_context_4_0_i28);
MR_def_label(check_hlds__typeclasses__reduce_type_assign_context_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_data__restrict_list_elements_2_0);
MR_decl_entry(parse_tree__prog_type__type_unify_list_5_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module16)
	MR_init_entry1(check_hlds__typeclasses__do_class_improvement_fundep_8_0);
	MR_init_label8(check_hlds__typeclasses__do_class_improvement_fundep_8_0,3,4,5,8,9,10,12,13)
	MR_init_label2(check_hlds__typeclasses__do_class_improvement_fundep_8_0,14,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__do_class_improvement_fundep_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_class_improvement_fundep_8_0_i3);
MR_def_label(check_hlds__typeclasses__do_class_improvement_fundep_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_class_improvement_fundep_8_0_i4);
MR_def_label(check_hlds__typeclasses__do_class_improvement_fundep_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__typeclasses__do_class_improvement_fundep_8_0_i5);
MR_def_label(check_hlds__typeclasses__do_class_improvement_fundep_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typeclasses__do_class_improvement_fundep_8_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_class_improvement_fundep_8_0_i8);
MR_def_label(check_hlds__typeclasses__do_class_improvement_fundep_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_class_improvement_fundep_8_0_i9);
MR_def_label(check_hlds__typeclasses__do_class_improvement_fundep_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__typeclasses__do_class_improvement_fundep_8_0_i10);
MR_def_label(check_hlds__typeclasses__do_class_improvement_fundep_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typeclasses__do_class_improvement_fundep_8_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_class_improvement_fundep_8_0_i12);
MR_def_label(check_hlds__typeclasses__do_class_improvement_fundep_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_class_improvement_fundep_8_0_i13);
MR_def_label(check_hlds__typeclasses__do_class_improvement_fundep_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_list_5_0,
		check_hlds__typeclasses__do_class_improvement_fundep_8_0_i14);
MR_def_label(check_hlds__typeclasses__do_class_improvement_fundep_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typeclasses__do_class_improvement_fundep_8_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__typeclasses__do_class_improvement_fundep_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typeclasses_module17)
	MR_init_entry1(check_hlds__typeclasses__do_class_improvement_pair_8_0);
	MR_init_label3(check_hlds__typeclasses__do_class_improvement_pair_8_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__do_class_improvement_pair_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typeclasses__do_class_improvement_pair_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__do_class_improvement_pair_8_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r3, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(check_hlds__typeclasses__do_class_improvement_fundep_8_0,
		check_hlds__typeclasses__do_class_improvement_pair_8_0_i4);
MR_def_label(check_hlds__typeclasses__do_class_improvement_pair_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__typeclasses__do_class_improvement_pair_8_0_i11);
MR_def_label(check_hlds__typeclasses__do_class_improvement_pair_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typeclasses_module18)
	MR_init_entry1(check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0);
	MR_init_label3(check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__typeclasses__do_class_improvement_pair_8_0,
		check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0_i4);
MR_def_label(check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0_i11);
MR_def_label(check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typeclasses_module19)
	MR_init_entry1(check_hlds__typeclasses__do_class_improvement_by_pairs_7_0);
	MR_init_label3(check_hlds__typeclasses__do_class_improvement_by_pairs_7_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__do_class_improvement_by_pairs_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typeclasses__do_class_improvement_by_pairs_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__do_class_improvement_by_pairs_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typeclasses__do_class_improvement_by_pairs_2_8_0,
		check_hlds__typeclasses__do_class_improvement_by_pairs_7_0_i4);
MR_def_label(check_hlds__typeclasses__do_class_improvement_by_pairs_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__typeclasses__do_class_improvement_by_pairs_7_0_i11);
MR_def_label(check_hlds__typeclasses__do_class_improvement_by_pairs_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

MR_BEGIN_MODULE(check_hlds__typeclasses_module20)
	MR_init_entry1(check_hlds__typeclasses__do_class_improvement_2_8_0);
	MR_init_label2(check_hlds__typeclasses__do_class_improvement_2_8_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__do_class_improvement_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typeclasses__do_class_improvement_2_8_0_i2);
MR_def_label(check_hlds__typeclasses__do_class_improvement_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typeclasses__do_class_improvement_2_8_0_i3);
MR_def_label(check_hlds__typeclasses__do_class_improvement_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__typeclasses__do_class_improvement_by_pairs_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typeclasses_module21)
	MR_init_entry1(check_hlds__typeclasses__do_instance_improvement_2_11_0);
	MR_init_label3(check_hlds__typeclasses__do_instance_improvement_2_11_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__do_instance_improvement_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typeclasses__do_instance_improvement_2_11_0_i2);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_2_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typeclasses__do_instance_improvement_2_11_0_i3);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_2_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typeclasses__do_instance_improvement_2_11_0_i4);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_2_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typeclasses__do_instance_improvement_3_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl3_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typeclasses_module22)
	MR_init_entry1(check_hlds__typeclasses__do_instance_improvement_3_10_0);
	MR_init_label4(check_hlds__typeclasses__do_instance_improvement_3_10_0,2,3,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__do_instance_improvement_3_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__tvarset_merge_renaming_4_0,
		check_hlds__typeclasses__do_instance_improvement_3_10_0_i2);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_3_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		check_hlds__typeclasses__do_instance_improvement_3_10_0_i3);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_3_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typeclasses__do_instance_improvement_4_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__typeclasses__do_instance_improvement_3_10_0_i4);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_3_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__typeclasses__do_instance_improvement_3_10_0_i6);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_3_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;

MR_BEGIN_MODULE(check_hlds__typeclasses_module23)
	MR_init_entry1(check_hlds__typeclasses__do_instance_improvement_4_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__do_instance_improvement_4_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typeclasses__do_instance_improvement_fundep_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_vars_list_2_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module24)
	MR_init_entry1(check_hlds__typeclasses__do_instance_improvement_fundep_8_0);
	MR_init_label8(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,3,4,5,6,7,9,11,12)
	MR_init_label7(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,13,14,15,17,18,19,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__do_instance_improvement_fundep_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i3);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i4);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i5);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i6);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_list_5_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i7);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i9);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i11);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i12);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i13);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i14);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_list_5_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i15);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i17);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_data__restrict_list_elements_2_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i18);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_list_5_0,
		check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i19);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typeclasses__do_instance_improvement_fundep_8_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__typeclasses__do_instance_improvement_fundep_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typeclasses_module25)
	MR_init_entry1(check_hlds__typeclasses__matches_no_constraint_2_0);
	MR_init_label3(check_hlds__typeclasses__matches_no_constraint_2_0,6,7,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__matches_no_constraint_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__typeclasses__matches_no_constraint_2_0_i5);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__typeclasses__matches_no_constraint_2_0_i6);
MR_def_label(check_hlds__typeclasses__matches_no_constraint_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_data__matching_constraints_2_0,
		check_hlds__typeclasses__matches_no_constraint_2_0_i7);
MR_def_label(check_hlds__typeclasses__matches_no_constraint_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(check_hlds__typeclasses__matches_no_constraint_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__make_hlds_constraints_5_0);

MR_BEGIN_MODULE(check_hlds__typeclasses_module26)
	MR_init_entry1(check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0);
	MR_init_label3(check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_0,
		check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0_i2);
MR_def_label(check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0_i3);
MR_def_label(check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_ctfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(hlds__hlds_data__make_hlds_constraints_5_0,
		check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0_i4);
MR_def_label(check_hlds__typeclasses__IntroducedFrom__pred__perform_context_reduction__129__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__typeclasses_maybe_bunch_0(void)
{
	check_hlds__typeclasses_module0();
	check_hlds__typeclasses_module1();
	check_hlds__typeclasses_module2();
	check_hlds__typeclasses_module3();
	check_hlds__typeclasses_module4();
	check_hlds__typeclasses_module5();
	check_hlds__typeclasses_module6();
	check_hlds__typeclasses_module7();
	check_hlds__typeclasses_module8();
	check_hlds__typeclasses_module9();
	check_hlds__typeclasses_module10();
	check_hlds__typeclasses_module11();
	check_hlds__typeclasses_module12();
	check_hlds__typeclasses_module13();
	check_hlds__typeclasses_module14();
	check_hlds__typeclasses_module15();
	check_hlds__typeclasses_module16();
	check_hlds__typeclasses_module17();
	check_hlds__typeclasses_module18();
	check_hlds__typeclasses_module19();
	check_hlds__typeclasses_module20();
	check_hlds__typeclasses_module21();
	check_hlds__typeclasses_module22();
	check_hlds__typeclasses_module23();
	check_hlds__typeclasses_module24();
	check_hlds__typeclasses_module25();
	check_hlds__typeclasses_module26();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__typeclasses__init(void);
void mercury__check_hlds__typeclasses__init_type_tables(void);
void mercury__check_hlds__typeclasses__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__typeclasses__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__typeclasses__init_complexity_procs(void);
#endif

void mercury__check_hlds__typeclasses__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__typeclasses_maybe_bunch_0();
	mercury__check_hlds__typeclasses__init_debugger();
}

void mercury__check_hlds__typeclasses__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__check_hlds__typeclasses__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__typeclasses__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__typeclasses__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
