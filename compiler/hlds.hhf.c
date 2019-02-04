/*
** Automatically generated from `hhf.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__hhf__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 520 "../library/io.int"
#include "io.mh"

#line 27 "hlds.hhf.c"
#line 526 "../library/io.int"
#include "string.mh"

#line 31 "hlds.hhf.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "hlds.hhf.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "hlds.hhf.c"
#line 40 "hlds.hhf.c"
#include "hlds.hhf.mh"

#line 43 "hlds.hhf.c"
#line 44 "hlds.hhf.c"
#ifndef HLDS__HHF_DECL_GUARD
#define HLDS__HHF_DECL_GUARD

#line 48 "hlds.hhf.c"
#line 49 "hlds.hhf.c"

#endif
#line 52 "hlds.hhf.c"


struct mercury_type_0 {
	MR_Word * f1[2];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
static const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
static const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
static const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__hhf__type_ctor_info_hhf_info_0;
MR_decl_label2(hlds__hhf__IntroducedFrom__pred__process_pred__98__1_3_0, 1,2)
MR_decl_label2(f_104_108_100_115_95_95_104_104_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_108_97_117_115_101_95_95_91_49_93_95_48_5_0, 2,3)
MR_decl_label7(hlds__hhf__add_cons_id_7_0, 4,2,6,7,8,9,10)
MR_decl_label8(hlds__hhf__add_unifications_10_0, 4,9,11,7,13,14,15,16)
MR_decl_label6(hlds__hhf__add_unifications_10_0, 17,18,19,20,5,3)
MR_decl_label4(hlds__hhf__complete_inst_graph_node_5_0, 3,5,7,2)
MR_decl_label8(hlds__hhf__find_var_with_type_6_0, 36,3,5,6,7,2,9,13)
MR_decl_label1(hlds__hhf__find_var_with_type_6_0, 1)
MR_decl_label2(hlds__hhf__goal_use_own_nonlocals_4_0, 2,3)
MR_decl_label8(hlds__hhf__make_unifications_7_0, 5,3,9,10,11,12,13,8)
MR_decl_label7(hlds__hhf__maybe_add_cons_id_7_0, 2,3,5,4,7,8,9)
MR_decl_label8(hlds__hhf__process_clauses_info_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label7(hlds__hhf__process_clauses_info_5_0, 10,11,13,14,15,16,17)
MR_decl_label1(hlds__hhf__process_goal_5_0, 2)
MR_decl_label8(hlds__hhf__process_goal_expr_6_0, 4,8,9,48,11,14,13,49)
MR_decl_label8(hlds__hhf__process_goal_expr_6_0, 16,17,50,20,51,22,52,24)
MR_decl_label5(hlds__hhf__process_goal_expr_6_0, 25,26,27,28,29)
MR_decl_label8(hlds__hhf__process_pred_6_0, 2,5,7,8,9,10,11,12)
MR_decl_label8(hlds__hhf__process_pred_6_0, 13,14,15,3,17,18,19,20)
MR_decl_label8(hlds__hhf__process_pred_6_0, 21,22,23,24,25,26,27,28)
MR_decl_label1(hlds__hhf__process_pred_6_0, 29)
MR_decl_label8(hlds__hhf__process_unify_10_0, 38,22,37,5,6,7,9,11)
MR_decl_label8(hlds__hhf__process_unify_10_0, 8,12,13,14,15,16,17,18)
MR_decl_label2(hlds__hhf__process_unify_10_0, 19,20)
MR_decl_label8(hlds__hhf__same_type_2_2_0, 4,6,8,12,14,29,15,18)
MR_decl_label4(hlds__hhf__same_type_2_2_0, 23,25,26,1)
MR_decl_label6(hlds__hhf__same_type_list_2_0, 26,3,6,7,8,1)
MR_decl_label3(__Unify___hlds__hhf__hhf_info_0_0, 2,4,1)
MR_decl_label3(__Compare___hlds__hhf__hhf_info_0_0, 3,7,12)
MR_def_extern_entry(hlds__hhf__process_clauses_info_5_0)
MR_def_extern_entry(hlds__hhf__process_pred_6_0)
MR_decl_static(hlds__hhf__make_unifications_7_0)
MR_decl_static(hlds__hhf__add_unifications_10_0)
MR_decl_static(hlds__hhf__process_goal_5_0)
MR_decl_static(hlds__hhf__process_goal_expr_6_0)
MR_decl_static(hlds__hhf__process_unify_10_0)
MR_decl_static(hlds__hhf__process_clause_5_0)
MR_decl_static(hlds__hhf__goal_use_own_nonlocals_4_0)
MR_decl_static(hlds__hhf__complete_inst_graph_node_5_0)
MR_decl_static(hlds__hhf__maybe_add_cons_id_7_0)
MR_decl_static(hlds__hhf__same_type_2_2_0)
MR_decl_static(hlds__hhf__same_type_list_2_0)
MR_decl_static(hlds__hhf__find_var_with_type_6_0)
MR_decl_static(hlds__hhf__add_cons_id_7_0)
MR_decl_static(__Unify___hlds__hhf__hhf_info_0_0)
MR_decl_static(__Compare___hlds__hhf__hhf_info_0_0)
MR_decl_static(hlds__hhf__IntroducedFrom__pred__process_pred__98__1_3_0)
MR_decl_static(f_104_108_100_115_95_95_104_104_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_108_97_117_115_101_95_95_91_49_93_95_48_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[5] =
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
MR_LIST_CTOR_ADDR,
MR_COMMON(0,1)
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
MR_TAG_COMMON(0,0,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_clauses_info_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hhf__type_ctor_info_hhf_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_clauses_info_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_goal_expr_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hhf__process_clauses_info_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_CTOR0_ADDR(hlds__hhf, hhf_info),
MR_CTOR0_ADDR(hlds__hhf, hhf_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hhf__process_clauses_info_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(hlds__hhf, hhf_info),
MR_CTOR0_ADDR(hlds__hhf, hhf_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hhf__process_goal_expr_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hhf, hhf_info),
MR_CTOR0_ADDR(hlds__hhf, hhf_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__inst_graph__type_ctor_info_node_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__inst_graph, node)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_pred_6_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hhf__process_pred_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,0),
MR_COMMON(0,2),
MR_COMMON(0,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_goal_expr_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_unify_10_0_1;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hhf__process_goal_expr_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hhf, hhf_info),
MR_CTOR0_ADDR(hlds__hhf, hhf_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hhf__process_unify_10_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_COMMON(2,0),
MR_COMMON(2,0)
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(hlds__hhf__goal_use_own_nonlocals_4_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__complete_inst_graph_node_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__maybe_add_cons_id_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hhf__complete_inst_graph_node_5_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,3),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(parse_tree__prog_data, constructor),
MR_CTOR0_ADDR(hlds__hhf, hhf_info),
MR_CTOR0_ADDR(hlds__hhf, hhf_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hhf__maybe_add_cons_id_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,3),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_COMMON(0,3),
MR_CTOR0_ADDR(hlds__hhf, hhf_info),
MR_CTOR0_ADDR(hlds__hhf, hhf_info)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__inst_graph__type_ctor_info_node_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__hhf__field_types_hhf_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

const MR_ConstString mercury_data_hlds__hhf__field_names_hhf_info_0_0[] = {
	"inst_graph",
	"varset",
	"vartypes"
};

static const MR_DuFunctorDesc mercury_data_hlds__hhf__du_functor_desc_hhf_info_0_0 = {
	"hhf_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hhf__field_types_hhf_info_0_0,
	mercury_data_hlds__hhf__field_names_hhf_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hhf__du_stag_ordered_hhf_info_0_0[] = {
	&mercury_data_hlds__hhf__du_functor_desc_hhf_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hhf__du_ptag_ordered_hhf_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hhf__du_stag_ordered_hhf_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hhf__du_name_ordered_hhf_info_0[] = {
	&mercury_data_hlds__hhf__du_functor_desc_hhf_info_0_0
};

const MR_Integer mercury_data_hlds__hhf__functor_number_map_hhf_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hhf__type_ctor_info_hhf_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hhf__hhf_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hhf__hhf_info_0_0)),
	"hlds.hhf",
	"hhf_info",
	{ (void *)mercury_data_hlds__hhf__du_name_ordered_hhf_info_0 },
	{ (void *)mercury_data_hlds__hhf__du_ptag_ordered_hhf_info_0 },
	1,
	4,
	mercury_data_hlds__hhf__functor_number_map_hhf_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_clauses_info_5_0_1 = {
{
MR_PREDICATE,
"hlds.hhf",
"hlds.hhf",
"process_clause",
5,
0
},
"hlds.hhf",
"hhf.m",
158,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_clauses_info_5_0_2 = {
{
MR_PREDICATE,
"hlds.hhf",
"hlds.hhf",
"complete_inst_graph_node",
5,
0
},
"hlds.hhf",
"hhf.m",
384,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_pred_6_0_1 = {
{
MR_PREDICATE,
"hlds.hhf",
"hlds.hhf",
"lambda_hhf_m_98",
3,
0
},
"hlds.hhf",
"hhf.m",
98,
"d1;c8;e;c6;q;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_goal_expr_6_0_1 = {
{
MR_PREDICATE,
"hlds.hhf",
"hlds.hhf",
"process_goal",
5,
0
},
"hlds.hhf",
"hhf.m",
247,
"d1;c7;d5;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_goal_expr_6_0_2 = {
{
MR_PREDICATE,
"hlds.hhf",
"hlds.hhf",
"goal_use_own_nonlocals",
4,
0
},
"hlds.hhf",
"hhf.m",
258,
"d1;c7;d6;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__process_unify_10_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"set_parent",
4,
0
},
"hlds.hhf",
"hhf.m",
316,
"d3;c17;e;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__complete_inst_graph_node_5_0_1 = {
{
MR_PREDICATE,
"hlds.hhf",
"hlds.hhf",
"maybe_add_cons_id",
7,
0
},
"hlds.hhf",
"hhf.m",
396,
"d1;c7;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hhf__maybe_add_cons_id_7_0_1 = {
{
MR_PREDICATE,
"hlds.hhf",
"hlds.hhf",
"add_cons_id",
7,
0
},
"hlds.hhf",
"hhf.m",
412,
"d1;c13;e;c1;"
};

MR_decl_entry(hlds__hlds_clauses__clauses_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_vartypes_2_0);
MR_decl_entry(fn__map__keys_1_0);
MR_decl_entry(hlds__inst_graph__init_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_clauses_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_clauses_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__inst_graph__type_ctor_info_node_0;
MR_decl_entry(map__keys_2_0);
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_vartypes_3_0);

MR_BEGIN_MODULE(hlds__hhf_module0)
	MR_init_entry1(hlds__hhf__process_clauses_info_5_0);
	MR_init_label8(hlds__hhf__process_clauses_info_5_0,2,3,4,5,6,7,8,9)
	MR_init_label7(hlds__hhf__process_clauses_info_5_0,10,11,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hhf__process_clauses_info_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		hlds__hhf__process_clauses_info_5_0_i2);
MR_def_label(hlds__hhf__process_clauses_info_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_vartypes_2_0,
		hlds__hhf__process_clauses_info_5_0_i3);
MR_def_label(hlds__hhf__process_clauses_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__keys_1_0,
		hlds__hhf__process_clauses_info_5_0_i4);
MR_def_label(hlds__hhf__process_clauses_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__inst_graph__init_2_0,
		hlds__hhf__process_clauses_info_5_0_i5);
MR_def_label(hlds__hhf__process_clauses_info_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0,
		hlds__hhf__process_clauses_info_5_0_i6);
MR_def_label(hlds__hhf__process_clauses_info_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_clauses_3_0,
		hlds__hhf__process_clauses_info_5_0_i7);
MR_def_label(hlds__hhf__process_clauses_info_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hhf__process_clause_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hhf, hhf_info);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		hlds__hhf__process_clauses_info_5_0_i8);
MR_def_label(hlds__hhf__process_clauses_info_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_clauses_3_0,
		hlds__hhf__process_clauses_info_5_0_i9);
MR_def_label(hlds__hhf__process_clauses_info_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = MR_ctfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__hhf__process_clauses_info_5_0_i10);
MR_def_label(hlds__hhf__process_clauses_info_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hhf__complete_inst_graph_node_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hhf, hhf_info);
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__hhf__process_clauses_info_5_0_i11);
MR_def_label(hlds__hhf__process_clauses_info_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__hhf__process_clauses_info_5_0_i13);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_varset_3_0,
		hlds__hhf__process_clauses_info_5_0_i16);
MR_def_label(hlds__hhf__process_clauses_info_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__keys_1_0,
		hlds__hhf__process_clauses_info_5_0_i14);
MR_def_label(hlds__hhf__process_clauses_info_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__inst_graph__init_2_0,
		hlds__hhf__process_clauses_info_5_0_i15);
MR_def_label(hlds__hhf__process_clauses_info_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_varset_3_0,
		hlds__hhf__process_clauses_info_5_0_i16);
MR_def_label(hlds__hhf__process_clauses_info_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_vartypes_3_0,
		hlds__hhf__process_clauses_info_5_0_i17);
MR_def_label(hlds__hhf__process_clauses_info_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_clauses_info_2_0);
MR_decl_entry(fn__hlds__hlds_pred__inst_graph_info_1_0);
MR_decl_entry(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0);
MR_decl_entry(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0);
MR_decl_entry(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_0);
MR_decl_entry(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_0);
MR_decl_entry(fn__f_104_108_100_115_95_95_104_108_100_115_95_112_114_101_100_95_95_105_110_115_116_95_103_114_97_112_104_95_105_110_102_111_32_58_61_2_0);
MR_decl_entry(hlds__passes_aux__write_pred_progress_message_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(hlds__hhf_module1)
	MR_init_entry1(hlds__hhf__process_pred_6_0);
	MR_init_label8(hlds__hhf__process_pred_6_0,2,5,7,8,9,10,11,12)
	MR_init_label8(hlds__hhf__process_pred_6_0,13,14,15,3,17,18,19,20)
	MR_init_label8(hlds__hhf__process_pred_6_0,21,22,23,24,25,26,27,28)
	MR_init_label1(hlds__hhf__process_pred_6_0,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hhf__process_pred_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__hhf__process_pred_6_0_i2);
MR_def_label(hlds__hhf__process_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		hlds__hhf__process_pred_6_0_i5);
MR_def_label(hlds__hhf__process_pred_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__process_pred_6_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_clauses_info_2_0,
		hlds__hhf__process_pred_6_0_i7);
MR_def_label(hlds__hhf__process_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0,
		hlds__hhf__process_pred_6_0_i8);
MR_def_label(hlds__hhf__process_pred_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		hlds__hhf__process_pred_6_0_i9);
MR_def_label(hlds__hhf__process_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__inst_graph_info_1_0,
		hlds__hhf__process_pred_6_0_i10);
MR_def_label(hlds__hhf__process_pred_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__inst_graph__init_2_0,
		hlds__hhf__process_pred_6_0_i11);
MR_def_label(hlds__hhf__process_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0,
		hlds__hhf__process_pred_6_0_i12);
MR_def_label(hlds__hhf__process_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0,
		hlds__hhf__process_pred_6_0_i13);
MR_def_label(hlds__hhf__process_pred_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_0,
		hlds__hhf__process_pred_6_0_i14);
MR_def_label(hlds__hhf__process_pred_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_0,
		hlds__hhf__process_pred_6_0_i15);
MR_def_label(hlds__hhf__process_pred_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_112_114_101_100_95_95_105_110_115_116_95_103_114_97_112_104_95_105_110_102_111_32_58_61_2_0,
		hlds__hhf__process_pred_6_0_i29);
MR_def_label(hlds__hhf__process_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("% Calculating HHF and inst graph for ", 37);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		hlds__hhf__process_pred_6_0_i17);
MR_def_label(hlds__hhf__process_pred_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_clauses_info_2_0,
		hlds__hhf__process_pred_6_0_i18);
MR_def_label(hlds__hhf__process_pred_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hhf__process_clauses_info_5_0,
		hlds__hhf__process_pred_6_0_i19);
MR_def_label(hlds__hhf__process_pred_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		hlds__hhf__process_pred_6_0_i20);
MR_def_label(hlds__hhf__process_pred_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__inst_graph_info_1_0,
		hlds__hhf__process_pred_6_0_i21);
MR_def_label(hlds__hhf__process_pred_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0,
		hlds__hhf__process_pred_6_0_i22);
MR_def_label(hlds__hhf__process_pred_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0,
		hlds__hhf__process_pred_6_0_i23);
MR_def_label(hlds__hhf__process_pred_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		hlds__hhf__process_pred_6_0_i24);
MR_def_label(hlds__hhf__process_pred_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0,
		hlds__hhf__process_pred_6_0_i25);
MR_def_label(hlds__hhf__process_pred_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hhf__IntroducedFrom__pred__process_pred__98__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		hlds__hhf__process_pred_6_0_i26);
MR_def_label(hlds__hhf__process_pred_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_0,
		hlds__hhf__process_pred_6_0_i27);
MR_def_label(hlds__hhf__process_pred_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_0,
		hlds__hhf__process_pred_6_0_i28);
MR_def_label(hlds__hhf__process_pred_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_112_114_101_100_95_95_105_110_115_116_95_103_114_97_112_104_95_105_110_102_111_32_58_61_2_0,
		hlds__hhf__process_pred_6_0_i29);
MR_def_label(hlds__hhf__process_pred_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_info_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);

MR_BEGIN_MODULE(hlds__hhf_module2)
	MR_init_entry1(hlds__hhf__make_unifications_7_0);
	MR_init_label8(hlds__hhf__make_unifications_7_0,5,3,9,10,11,12,13,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__make_unifications_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hhf__make_unifications_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hhf__make_unifications_7_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__hhf__make_unifications_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hhf.m", 5);
	MR_r2 = (MR_Word) MR_string_const("hhf_make_unifications: length mismatch (2)", 42);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__hhf__make_unifications_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hhf__make_unifications_7_0_i8);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tempr5 = MR_r5;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr5;
	MR_tempr6 = MR_r6;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr6;
	MR_tempr7 = MR_r3;
	MR_sv(1) = MR_tempr7;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = MR_tempr5;
	MR_sv(4) = MR_tempr6;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(10) = MR_ctfield(1, MR_r1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		hlds__hhf__make_unifications_7_0_i9);
MR_def_label(hlds__hhf__make_unifications_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_ctfield(0, MR_sv(7), 0);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__hhf__make_unifications_7_0_i10);
MR_def_label(hlds__hhf__make_unifications_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__hhf__make_unifications_7_0_i11);
MR_def_label(hlds__hhf__make_unifications_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		hlds__hhf__make_unifications_7_0_i12);
MR_def_label(hlds__hhf__make_unifications_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_localcall_lab(hlds__hhf__make_unifications_7_0,
		hlds__hhf__make_unifications_7_0_i13);
MR_def_label(hlds__hhf__make_unifications_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__hhf__make_unifications_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hhf.m", 5);
	MR_r2 = (MR_Word) MR_string_const("hhf_make_unifications: length mismatch (1)", 42);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(hlds__hhf_module3)
	MR_init_entry1(hlds__hhf__add_unifications_10_0);
	MR_init_label8(hlds__hhf__add_unifications_10_0,4,9,11,7,13,14,15,16)
	MR_init_label6(hlds__hhf__add_unifications_10_0,17,18,19,20,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__add_unifications_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hhf__add_unifications_10_0_i3);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(hlds__hhf__add_unifications_10_0,
		hlds__hhf__add_unifications_10_0_i4);
MR_def_label(hlds__hhf__add_unifications_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hhf__add_unifications_10_0_i9);
MR_def_label(hlds__hhf__add_unifications_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hhf__add_unifications_10_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__hhf__add_unifications_10_0_i11);
MR_def_label(hlds__hhf__add_unifications_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__add_unifications_10_0_i5);
	}
MR_def_label(hlds__hhf__add_unifications_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__hhf__add_unifications_10_0_i13);
MR_def_label(hlds__hhf__add_unifications_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hhf__add_unifications_10_0_i14);
MR_def_label(hlds__hhf__add_unifications_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__hhf__add_unifications_10_0_i15);
MR_def_label(hlds__hhf__add_unifications_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hhf__add_unifications_10_0_i16);
MR_def_label(hlds__hhf__add_unifications_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__hhf__add_unifications_10_0_i17);
MR_def_label(hlds__hhf__add_unifications_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		hlds__hhf__add_unifications_10_0_i18);
MR_def_label(hlds__hhf__add_unifications_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__hhf__add_unifications_10_0_i19);
MR_def_label(hlds__hhf__add_unifications_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		hlds__hhf__add_unifications_10_0_i20);
MR_def_label(hlds__hhf__add_unifications_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tempr5 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr5;
	MR_tfield(1, MR_r1, 1) = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(14);
	}
MR_def_label(hlds__hhf__add_unifications_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(hlds__hhf__add_unifications_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r7;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hhf_module4)
	MR_init_entry1(hlds__hhf__process_goal_5_0);
	MR_init_label1(hlds__hhf__process_goal_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__process_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hhf__process_goal_expr_6_0,
		hlds__hhf__process_goal_5_0_i2);
MR_def_label(hlds__hhf__process_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(hlds__goal_util__flatten_conj_2_0);

MR_BEGIN_MODULE(hlds__hhf_module5)
	MR_init_entry1(hlds__hhf__process_goal_expr_6_0);
	MR_init_label8(hlds__hhf__process_goal_expr_6_0,4,8,9,48,11,14,13,49)
	MR_init_label8(hlds__hhf__process_goal_expr_6_0,16,17,50,20,51,22,52,24)
	MR_init_label5(hlds__hhf__process_goal_expr_6_0,25,26,27,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__process_goal_expr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i4) MR_AND
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i9) MR_AND
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i9) MR_AND
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i8));
MR_def_label(hlds__hhf__process_goal_expr_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r8 = MR_r4;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
	MR_r6 = MR_ctfield(0, MR_tempr1, 3);
	MR_r7 = MR_ctfield(0, MR_tempr1, 4);
	MR_np_tailcall_ent(hlds__hhf__process_unify_10_0);
	}
MR_def_label(hlds__hhf__process_goal_expr_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i9) MR_AND
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i48) MR_AND
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i49) MR_AND
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i17) MR_AND
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i50) MR_AND
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i51) MR_AND
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i52) MR_AND
		MR_LABEL_AP(hlds__hhf__process_goal_expr_6_0_i29));
MR_def_label(hlds__hhf__process_goal_expr_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(hlds__hhf__process_goal_expr_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hhf__process_goal_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_tempr3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hhf, hhf_info);
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		hlds__hhf__process_goal_expr_6_0_i11);
MR_def_label(hlds__hhf__process_goal_expr_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__hhf__process_goal_expr_6_0_i13);
	}
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__flatten_conj_2_0,
		hlds__hhf__process_goal_expr_6_0_i14);
MR_def_label(hlds__hhf__process_goal_expr_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__hhf__process_goal_expr_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__hhf__process_goal_expr_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hhf, hhf_info);
	MR_r6 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		hlds__hhf__process_goal_expr_6_0_i16);
MR_def_label(hlds__hhf__process_goal_expr_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__hhf__process_goal_expr_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hhf.m", 5);
	MR_r2 = (MR_Word) MR_string_const("hhf_goal_expr: found switch", 27);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__hhf__process_goal_expr_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(hlds__hhf__process_goal_5_0,
		hlds__hhf__process_goal_expr_6_0_i20);
MR_def_label(hlds__hhf__process_goal_expr_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__hhf__process_goal_expr_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(hlds__hhf__process_goal_5_0,
		hlds__hhf__process_goal_expr_6_0_i22);
MR_def_label(hlds__hhf__process_goal_expr_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__hhf__process_goal_expr_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(hlds__hhf__process_goal_5_0,
		hlds__hhf__process_goal_expr_6_0_i24);
MR_def_label(hlds__hhf__process_goal_expr_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		hlds__hhf__process_goal_expr_6_0_i25);
MR_def_label(hlds__hhf__process_goal_expr_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(hlds__hhf__process_goal_expr_6_0,
		hlds__hhf__process_goal_expr_6_0_i26);
MR_def_label(hlds__hhf__process_goal_expr_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		hlds__hhf__process_goal_expr_6_0_i27);
MR_def_label(hlds__hhf__process_goal_expr_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(hlds__hhf__process_goal_expr_6_0,
		hlds__hhf__process_goal_expr_6_0_i28);
MR_def_label(hlds__hhf__process_goal_expr_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_tfield(3, MR_r1, 4) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__hhf__process_goal_expr_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hhf.m", 5);
	MR_r2 = (MR_Word) MR_string_const("hhf_goal_expr: found shorthand", 30);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(parse_tree__prog_type__qualify_cons_id_5_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(hlds__inst_graph__set_parent_4_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(hlds__hhf_module6)
	MR_init_entry1(hlds__hhf__process_unify_10_0);
	MR_init_label8(hlds__hhf__process_unify_10_0,38,22,37,5,6,7,9,11)
	MR_init_label8(hlds__hhf__process_unify_10_0,8,12,13,14,15,16,17,18)
	MR_init_label2(hlds__hhf__process_unify_10_0,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__process_unify_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hhf__process_unify_10_0_i37);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(hlds__hhf__process_unify_10_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r6;
	MR_tfield(0, MR_tempr1, 4) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r8;
	MR_proceed();
	}
MR_def_label(hlds__hhf__process_unify_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_sv(2) = MR_ctfield(2, MR_r1, 1);
	MR_sv(7) = MR_ctfield(2, MR_r1, 3);
	MR_sv(8) = MR_ctfield(2, MR_r1, 4);
	MR_sv(9) = MR_ctfield(2, MR_r1, 5);
	MR_sv(10) = MR_ctfield(2, MR_r1, 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_tempr1, 7);
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(hlds__hhf__process_goal_5_0,
		hlds__hhf__process_unify_10_0_i22);
MR_def_label(hlds__hhf__process_unify_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 8);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 7) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(6);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__hhf__process_unify_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_ctfield(1, MR_r1, 0);
	MR_sv(9) = MR_ctfield(1, MR_r1, 1);
	MR_sv(10) = MR_ctfield(1, MR_r1, 2);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__hhf__process_unify_10_0_i5);
MR_def_label(hlds__hhf__process_unify_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_type__qualify_cons_id_5_0,
		hlds__hhf__process_unify_10_0_i6);
MR_def_label(hlds__hhf__process_unify_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_ctfield(0, MR_sv(7), 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hhf__process_unify_10_0_i7);
MR_def_label(hlds__hhf__process_unify_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_ctfield(0, MR_r1, 1);
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hhf__process_unify_10_0_i9);
MR_def_label(hlds__hhf__process_unify_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__process_unify_10_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hhf__make_unifications_7_0,
		hlds__hhf__process_unify_10_0_i11);
MR_def_label(hlds__hhf__process_unify_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(10) = MR_sv(1);
	MR_sv(1) = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_GOTO_LAB(hlds__hhf__process_unify_10_0_i16);
MR_def_label(hlds__hhf__process_unify_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hhf__add_unifications_10_0,
		hlds__hhf__process_unify_10_0_i12);
MR_def_label(hlds__hhf__process_unify_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(14);
	MR_sv(7) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_sv(11);
	MR_sv(11) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__hhf__process_unify_10_0_i13);
MR_def_label(hlds__hhf__process_unify_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__hhf__process_unify_10_0_i14);
MR_def_label(hlds__hhf__process_unify_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__set_parent_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr3 = MR_sv(14);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r5 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__hhf__process_unify_10_0_i15);
MR_def_label(hlds__hhf__process_unify_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_sv(2);
	}
MR_def_label(hlds__hhf__process_unify_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		hlds__hhf__process_unify_10_0_i17);
MR_def_label(hlds__hhf__process_unify_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		hlds__hhf__process_unify_10_0_i18);
MR_def_label(hlds__hhf__process_unify_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__hhf__process_unify_10_0_i19);
MR_def_label(hlds__hhf__process_unify_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		hlds__hhf__process_unify_10_0_i20);
MR_def_label(hlds__hhf__process_unify_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hhf_module7)
	MR_init_entry1(hlds__hhf__process_clause_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__process_clause_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_104_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_108_97_117_115_101_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hhf_module8)
	MR_init_entry1(hlds__hhf__goal_use_own_nonlocals_4_0);
	MR_init_label2(hlds__hhf__goal_use_own_nonlocals_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__goal_use_own_nonlocals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		hlds__hhf__goal_use_own_nonlocals_4_0_i2);
MR_def_label(hlds__hhf__goal_use_own_nonlocals_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hhf__process_goal_expr_6_0,
		hlds__hhf__goal_use_own_nonlocals_4_0_i3);
MR_def_label(hlds__hhf__goal_use_own_nonlocals_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__type_util__type_constructors_3_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;

MR_BEGIN_MODULE(hlds__hhf_module9)
	MR_init_entry1(hlds__hhf__complete_inst_graph_node_5_0);
	MR_init_label4(hlds__hhf__complete_inst_graph_node_5_0,3,5,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__complete_inst_graph_node_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_r4, 2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hhf__complete_inst_graph_node_5_0_i3);
MR_def_label(hlds__hhf__complete_inst_graph_node_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__complete_inst_graph_node_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_constructors_3_0,
		hlds__hhf__complete_inst_graph_node_5_0_i5);
MR_def_label(hlds__hhf__complete_inst_graph_node_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__complete_inst_graph_node_5_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		hlds__hhf__complete_inst_graph_node_5_0_i7);
MR_def_label(hlds__hhf__complete_inst_graph_node_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__complete_inst_graph_node_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hhf__maybe_add_cons_id_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hhf, hhf_info);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(hlds__hhf__complete_inst_graph_node_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_util__make_cons_id_3_0);
MR_decl_entry(map__contains_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(fn__map__det_update_3_0);

MR_BEGIN_MODULE(hlds__hhf_module10)
	MR_init_entry1(hlds__hhf__maybe_add_cons_id_7_0);
	MR_init_label7(hlds__hhf__maybe_add_cons_id_7_0,2,3,5,4,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__maybe_add_cons_id_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_r6;
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__make_cons_id_3_0,
		hlds__hhf__maybe_add_cons_id_7_0_i2);
MR_def_label(hlds__hhf__maybe_add_cons_id_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_ctfield(0, MR_sv(8), 0);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hhf__maybe_add_cons_id_7_0_i3);
MR_def_label(hlds__hhf__maybe_add_cons_id_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(0, MR_r1, 1);
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__contains_2_0,
		hlds__hhf__maybe_add_cons_id_7_0_i5);
MR_def_label(hlds__hhf__maybe_add_cons_id_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__maybe_add_cons_id_7_0_i4);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__hhf__maybe_add_cons_id_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hhf__add_cons_id_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hhf, hhf_info);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		hlds__hhf__maybe_add_cons_id_7_0_i7);
MR_def_label(hlds__hhf__maybe_add_cons_id_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_sv(2) = MR_r2;
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__hhf__maybe_add_cons_id_7_0_i8);
MR_def_label(hlds__hhf__maybe_add_cons_id_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__map__det_update_3_0,
		hlds__hhf__maybe_add_cons_id_7_0_i9);
MR_def_label(hlds__hhf__maybe_add_cons_id_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(fn__parse_tree__prog_type__strip_kind_annotation_1_0);

MR_BEGIN_MODULE(hlds__hhf_module11)
	MR_init_entry1(hlds__hhf__same_type_2_2_0);
	MR_init_label8(hlds__hhf__same_type_2_2_0,4,6,8,12,14,29,15,18)
	MR_init_label4(hlds__hhf__same_type_2_2_0,23,25,26,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__same_type_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__hhf__same_type_2_2_0_i4) MR_AND
		MR_LABEL_AP(hlds__hhf__same_type_2_2_0_i6) MR_AND
		MR_LABEL_AP(hlds__hhf__same_type_2_2_0_i12) MR_AND
		MR_LABEL_AP(hlds__hhf__same_type_2_2_0_i14));
MR_def_label(hlds__hhf__same_type_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r2) == MR_mktag((MR_Integer) 0));
	MR_decr_sp_and_return(3);
MR_def_label(hlds__hhf__same_type_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		hlds__hhf__same_type_2_2_0_i8);
MR_def_label(hlds__hhf__same_type_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hhf__same_type_list_2_0);
MR_def_label(hlds__hhf__same_type_2_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_tempr2 = MR_ctfield(2, MR_r2, 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(hlds__hhf__same_type_2_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i15);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i29);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hhf__same_type_list_2_0);
MR_def_label(hlds__hhf__same_type_2_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hhf__same_type_list_2_0);
MR_def_label(hlds__hhf__same_type_2_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	MR_r3 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 3);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hhf__same_type_list_2_0);
	}
MR_def_label(hlds__hhf__same_type_2_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 3);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r3, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(hlds__hhf__same_type_list_2_0,
		hlds__hhf__same_type_2_2_0_i23);
MR_def_label(hlds__hhf__same_type_2_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__same_type_2_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		hlds__hhf__same_type_2_2_0_i25);
MR_def_label(hlds__hhf__same_type_2_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		hlds__hhf__same_type_2_2_0_i26);
MR_def_label(hlds__hhf__same_type_2_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__hhf__same_type_2_2_0_i4) MR_AND
		MR_LABEL_AP(hlds__hhf__same_type_2_2_0_i6) MR_AND
		MR_LABEL_AP(hlds__hhf__same_type_2_2_0_i12) MR_AND
		MR_LABEL_AP(hlds__hhf__same_type_2_2_0_i14));
MR_def_label(hlds__hhf__same_type_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hhf_module12)
	MR_init_entry1(hlds__hhf__same_type_list_2_0);
	MR_init_label6(hlds__hhf__same_type_list_2_0,26,3,6,7,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__same_type_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hhf__same_type_list_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hhf__same_type_list_2_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(4);
MR_def_label(hlds__hhf__same_type_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hhf__same_type_list_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		hlds__hhf__same_type_list_2_0_i6);
MR_def_label(hlds__hhf__same_type_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		hlds__hhf__same_type_list_2_0_i7);
MR_def_label(hlds__hhf__same_type_list_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hhf__same_type_2_2_0,
		hlds__hhf__same_type_list_2_0_i8);
MR_def_label(hlds__hhf__same_type_list_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__same_type_list_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hhf__same_type_list_2_0_i26);
MR_def_label(hlds__hhf__same_type_list_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(hlds__hhf_module13)
	MR_init_entry1(hlds__hhf__find_var_with_type_6_0);
	MR_init_label8(hlds__hhf__find_var_with_type_6_0,36,3,5,6,7,2,9,13)
	MR_init_label1(hlds__hhf__find_var_with_type_6_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__find_var_with_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__hhf__find_var_with_type_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hhf__find_var_with_type_6_0_i3);
MR_def_label(hlds__hhf__find_var_with_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__find_var_with_type_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		hlds__hhf__find_var_with_type_6_0_i5);
MR_def_label(hlds__hhf__find_var_with_type_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		hlds__hhf__find_var_with_type_6_0_i6);
MR_def_label(hlds__hhf__find_var_with_type_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hhf__same_type_2_2_0,
		hlds__hhf__find_var_with_type_6_0_i7);
MR_def_label(hlds__hhf__find_var_with_type_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__find_var_with_type_6_0_i2);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__hhf__find_var_with_type_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hhf__find_var_with_type_6_0_i9);
MR_def_label(hlds__hhf__find_var_with_type_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hhf__find_var_with_type_6_0_i1);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__hhf__find_var_with_type_6_0_i13);
MR_def_label(hlds__hhf__find_var_with_type_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hhf__find_var_with_type_6_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__hhf__find_var_with_type_6_0_i36);
MR_def_label(hlds__hhf__find_var_with_type_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hhf_module14)
	MR_init_entry1(hlds__hhf__add_cons_id_7_0);
	MR_init_label7(hlds__hhf__add_cons_id_7_0,4,2,6,7,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__add_cons_id_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r5;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr4, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	MR_tempr3 = MR_ctfield(0, MR_r4, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tempr2;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_tempr4;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hhf__find_var_with_type_6_0,
		hlds__hhf__add_cons_id_7_0_i4);
MR_def_label(hlds__hhf__add_cons_id_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hhf__add_cons_id_7_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__hhf__add_cons_id_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_tempr4 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__hhf__add_cons_id_7_0_i6);
MR_def_label(hlds__hhf__add_cons_id_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__hhf__add_cons_id_7_0_i7);
MR_def_label(hlds__hhf__add_cons_id_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hhf__add_cons_id_7_0_i8);
MR_def_label(hlds__hhf__add_cons_id_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__hhf__add_cons_id_7_0_i9);
MR_def_label(hlds__hhf__add_cons_id_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hhf__complete_inst_graph_node_5_0,
		hlds__hhf__add_cons_id_7_0_i10);
MR_def_label(hlds__hhf__add_cons_id_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(hlds__hhf_module15)
	MR_init_entry1(__Unify___hlds__hhf__hhf_info_0_0);
	MR_init_label3(__Unify___hlds__hhf__hhf_info_0_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__hhf__hhf_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__hhf__hhf_info_0_0_i2);
MR_def_label(__Unify___hlds__hhf__hhf_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hhf__hhf_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___hlds__hhf__hhf_info_0_0_i4);
MR_def_label(__Unify___hlds__hhf__hhf_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hhf__hhf_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___hlds__hhf__hhf_info_0_0,1)
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

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(hlds__hhf_module16)
	MR_init_entry1(__Compare___hlds__hhf__hhf_info_0_0);
	MR_init_label3(__Compare___hlds__hhf__hhf_info_0_0,3,7,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__hhf__hhf_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__hhf__hhf_info_0_0_i3);
MR_def_label(__Compare___hlds__hhf__hhf_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hhf__hhf_info_0_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___hlds__hhf__hhf_info_0_0_i7);
MR_def_label(__Compare___hlds__hhf__hhf_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hhf__hhf_info_0_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___hlds__hhf__hhf_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(list__member_2_1);
MR_decl_entry(hlds__inst_graph__reachable_3_0);

MR_BEGIN_MODULE(hlds__hhf_module17)
	MR_init_entry1(hlds__hhf__IntroducedFrom__pred__process_pred__98__1_3_0);
	MR_init_label2(hlds__hhf__IntroducedFrom__pred__process_pred__98__1_3_0,1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hhf__IntroducedFrom__pred__process_pred__98__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.hhf.IntroducedFrom__pred__process_pred__98__1/3-0", 1,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__hhf__IntroducedFrom__pred__process_pred__98__1_3_0_i1);
MR_def_label(hlds__hhf__IntroducedFrom__pred__process_pred__98__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(hlds__inst_graph__reachable_3_0,
		hlds__hhf__IntroducedFrom__pred__process_pred__98__1_3_0_i2);
MR_def_label(hlds__hhf__IntroducedFrom__pred__process_pred__98__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hhf_module18)
	MR_init_entry1(f_104_108_100_115_95_95_104_104_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_108_97_117_115_101_95_95_91_49_93_95_48_5_0);
	MR_init_label2(f_104_108_100_115_95_95_104_104_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_108_97_117_115_101_95_95_91_49_93_95_48_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_104_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_108_97_117_115_101_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	MR_sv(4) = MR_ctfield(0, MR_r1, 3);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		f_104_108_100_115_95_95_104_104_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_108_97_117_115_101_95_95_91_49_93_95_48_5_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_104_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_108_97_117_115_101_95_95_91_49_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hhf__process_goal_expr_6_0,
		f_104_108_100_115_95_95_104_104_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_108_97_117_115_101_95_95_91_49_93_95_48_5_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_104_102_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_108_97_117_115_101_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hhf_maybe_bunch_0(void)
{
	hlds__hhf_module0();
	hlds__hhf_module1();
	hlds__hhf_module2();
	hlds__hhf_module3();
	hlds__hhf_module4();
	hlds__hhf_module5();
	hlds__hhf_module6();
	hlds__hhf_module7();
	hlds__hhf_module8();
	hlds__hhf_module9();
	hlds__hhf_module10();
	hlds__hhf_module11();
	hlds__hhf_module12();
	hlds__hhf_module13();
	hlds__hhf_module14();
	hlds__hhf_module15();
	hlds__hhf_module16();
	hlds__hhf_module17();
	hlds__hhf_module18();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hhf__init(void);
void mercury__hlds__hhf__init_type_tables(void);
void mercury__hlds__hhf__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hhf__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hhf__init_complexity_procs(void);
#endif

void mercury__hlds__hhf__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hhf_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hhf__type_ctor_info_hhf_info_0,
		hlds__hhf__hhf_info_0_0);
	mercury__hlds__hhf__init_debugger();
}

void mercury__hlds__hhf__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hhf__type_ctor_info_hhf_info_0);
	}
}


void mercury__hlds__hhf__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hhf__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hhf__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
