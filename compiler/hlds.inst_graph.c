/*
** Automatically generated from `inst_graph.m'
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
INIT mercury__hlds__inst_graph__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "hlds.inst_graph.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "hlds.inst_graph.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "hlds.inst_graph.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "hlds.inst_graph.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.inst_graph.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "hlds.inst_graph.c"
#line 49 "hlds.inst_graph.c"
#include "hlds.inst_graph.mh"

#line 52 "hlds.inst_graph.c"
#line 53 "hlds.inst_graph.c"
#ifndef HLDS__INST_GRAPH_DECL_GUARD
#define HLDS__INST_GRAPH_DECL_GUARD

#line 57 "hlds.inst_graph.c"
#line 58 "hlds.inst_graph.c"

#endif
#line 61 "hlds.inst_graph.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Integer f4;
	MR_Integer f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
	MR_Integer f4[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
	MR_Integer f4[2];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Integer f4;
	MR_Integer f5;
	MR_Integer f6;
	MR_Integer f7;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Unsigned f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
	MR_Integer f4[4];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
	MR_Integer f4[4];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
	MR_Integer f4[2];
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
	MR_Integer f4[4];
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__inst_graph__type_ctor_info_inst_graph_0,
	mercury_data_hlds__inst_graph__type_ctor_info_inst_graph_info_0,
	mercury_data_hlds__inst_graph__type_ctor_info_maybe_parent_0,
	mercury_data_hlds__inst_graph__type_ctor_info_node_0;
MR_decl_label3(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0, 4,2,7)
MR_decl_label3(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0, 4,2,7)
MR_decl_label1(hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_0, 1)
MR_decl_label2(hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0, 5,7)
MR_decl_label2(hlds__inst_graph__corresponding_members_4_0, 6,4)
MR_decl_label10(hlds__inst_graph__corresponding_nodes_2_8_0, 2,5,7,3,10,11,12,13,16,18)
MR_decl_label8(hlds__inst_graph__corresponding_nodes_2_8_0, 20,17,22,24,14,28,29,1)
MR_decl_label4(hlds__inst_graph__corresponding_nodes_from_lists_6_0, 2,3,4,5)
MR_decl_label1(hlds__inst_graph__descendant_3_0, 2)
MR_decl_label7(hlds__inst_graph__descendant_2_4_0, 2,4,5,7,10,12,6)
MR_decl_label5(hlds__inst_graph__dump_functor_5_0, 2,3,6,9,4)
MR_decl_label5(hlds__inst_graph__dump_node_5_0, 2,3,4,5,8)
MR_decl_label3(hlds__inst_graph__foldl_reachable_5_0, 3,4,5)
MR_decl_label1(hlds__inst_graph__foldl_reachable2_7_0, 3)
MR_decl_label2(hlds__inst_graph__foldl_reachable_aux_6_0, 2,4)
MR_decl_label2(hlds__inst_graph__foldl_reachable_aux2_8_0, 2,4)
MR_decl_label1(hlds__inst_graph__init_2_0, 3)
MR_decl_label1(hlds__inst_graph__init_var_3_0, 4)
MR_decl_label5(hlds__inst_graph__merge_7_0, 2,7,3,12,13)
MR_decl_label2(hlds__inst_graph__reachable_3_0, 2,4)
MR_decl_label4(hlds__inst_graph__reachable_from_list_3_0, 2,4,5,3)
MR_decl_label2(hlds__inst_graph__same_graph_corresponding_nodes_5_0, 2,3)
MR_decl_label2(hlds__inst_graph__set_parent_4_0, 3,5)
MR_decl_label3(hlds__inst_graph__top_level_node_3_0, 14,3,5)
MR_decl_label2(hlds__inst_graph__two_graphs_corresponding_nodes_6_0, 2,3)
MR_decl_label2(fn__hlds__inst_graph__inst_graph_info_init_0_0, 2,4)
MR_decl_label5(__Unify___hlds__inst_graph__inst_graph_info_0_0, 5,7,9,13,1)
MR_decl_label3(__Unify___hlds__inst_graph__maybe_parent_0_0, 12,5,1)
MR_decl_label3(__Unify___hlds__inst_graph__node_0_0, 6,10,1)
MR_decl_label6(__Compare___hlds__inst_graph__inst_graph_info_0_0, 3,2,6,11,15,52)
MR_decl_label4(__Compare___hlds__inst_graph__maybe_parent_0_0, 18,7,5,9)
MR_decl_label4(__Compare___hlds__inst_graph__node_0_0, 3,2,7,29)
MR_def_extern_entry(hlds__inst_graph__init_2_0)
MR_def_extern_entry(hlds__inst_graph__set_parent_4_0)
MR_def_extern_entry(hlds__inst_graph__top_level_node_3_0)
MR_decl_static(hlds__inst_graph__descendant_2_4_0)
MR_def_extern_entry(hlds__inst_graph__descendant_3_0)
MR_def_extern_entry(hlds__inst_graph__reachable_3_0)
MR_def_extern_entry(hlds__inst_graph__reachable_from_list_3_0)
MR_decl_static(hlds__inst_graph__foldl_reachable_aux_6_0)
MR_def_extern_entry(hlds__inst_graph__foldl_reachable_5_0)
MR_def_extern_entry(hlds__inst_graph__foldl_reachable_from_list_5_0)
MR_decl_static(hlds__inst_graph__foldl_reachable_aux2_8_0)
MR_def_extern_entry(hlds__inst_graph__foldl_reachable2_7_0)
MR_def_extern_entry(hlds__inst_graph__foldl_reachable_from_list2_7_0)
MR_def_extern_entry(hlds__inst_graph__corresponding_members_4_0)
MR_decl_static(hlds__inst_graph__corresponding_nodes_2_8_0)
MR_def_extern_entry(hlds__inst_graph__two_graphs_corresponding_nodes_6_0)
MR_def_extern_entry(hlds__inst_graph__same_graph_corresponding_nodes_5_0)
MR_def_extern_entry(hlds__inst_graph__corresponding_nodes_from_lists_6_0)
MR_def_extern_entry(hlds__inst_graph__merge_7_0)
MR_def_extern_entry(hlds__inst_graph__dump_4_0)
MR_def_extern_entry(fn__hlds__inst_graph__inst_graph_info_init_0_0)
MR_def_extern_entry(fn__hlds__inst_graph__interface_inst_graph_1_0)
MR_def_extern_entry(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0)
MR_def_extern_entry(fn__hlds__inst_graph__interface_vars_1_0)
MR_def_extern_entry(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_0)
MR_def_extern_entry(fn__hlds__inst_graph__interface_varset_1_0)
MR_def_extern_entry(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_0)
MR_def_extern_entry(fn__hlds__inst_graph__implementation_inst_graph_1_0)
MR_def_extern_entry(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0)
MR_decl_static(hlds__inst_graph__init_var_3_0)
MR_decl_static(hlds__inst_graph__dump_node_5_0)
MR_decl_static(hlds__inst_graph__dump_functor_5_0)
MR_decl_static(hlds__inst_graph__dump_var_4_0)
MR_def_extern_entry(__Unify___hlds__inst_graph__inst_graph_0_0)
MR_def_extern_entry(__Compare___hlds__inst_graph__inst_graph_0_0)
MR_def_extern_entry(__Unify___hlds__inst_graph__inst_graph_info_0_0)
MR_def_extern_entry(__Compare___hlds__inst_graph__inst_graph_info_0_0)
MR_def_extern_entry(__Unify___hlds__inst_graph__maybe_parent_0_0)
MR_def_extern_entry(__Compare___hlds__inst_graph__maybe_parent_0_0)
MR_def_extern_entry(__Unify___hlds__inst_graph__node_0_0)
MR_def_extern_entry(__Compare___hlds__inst_graph__node_0_0)
MR_decl_static(hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_0)
MR_decl_static(hlds__inst_graph__IntroducedFrom__pred__merge__375__1_3_0)
MR_decl_static(hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0)
MR_decl_static(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0)
MR_decl_static(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__268__1_8_0)
MR_decl_static(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0)
MR_decl_static(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__295__1_11_0)
MR_decl_static(f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_0)
MR_decl_static(f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
static const struct mercury_type_0 mercury_common_0[9] =
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
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(0,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,2)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__inst_graph__type_ctor_info_node_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(hlds__inst_graph, node)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__inst_graph, node)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__init_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__init_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_COMMON(0,5),
MR_COMMON(0,5)
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(hlds__inst_graph__init_var_3_0),
0
},
{
MR_COMMON(12,0),
MR_ENTRY_AP(hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
3,
MR_COMMON(0,2),
1,
1
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_aux_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_5_0_1;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_aux_6_0_1,
MR_COMMON(5,0)
},
8,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(4,0),
MR_COMMON(1,1),
MR_COMMON(0,4),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_COMMON(0,5)
},
{
1,
1
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_5_0_1,
MR_COMMON(5,0)
},
8,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(4,0),
MR_COMMON(1,1),
MR_COMMON(0,4),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_COMMON(0,5)
},
{
1,
1
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_from_list_5_0_1;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_from_list_5_0_1,
MR_COMMON(5,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(4,0),
MR_COMMON(1,1),
MR_COMMON(0,1)
},
{
1,
1
}
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
5,
MR_COMMON(0,2),
1,
1,
2,
2
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
2,
17,
33
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_aux2_8_0_1;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_aux2_8_0_1,
MR_COMMON(9,0)
},
11,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(8,0),
MR_COMMON(1,1),
MR_COMMON(0,4),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_COMMON(0,5)
},
{
1,
1,
2,
2
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_from_list2_7_0_1;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_from_list2_7_0_1,
MR_COMMON(9,0)
},
9,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(8,0),
MR_COMMON(1,1),
MR_COMMON(0,1)
},
{
1,
1,
2,
2
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__merge_7_0_1;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__merge_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,7),
MR_COMMON(0,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__merge_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__inst_graph__type_ctor_info_node_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__dump_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__dump_node_5_0_1;
static const struct mercury_type_13 mercury_common_13[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__merge_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,2),
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__inst_graph, node),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__dump_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,8),
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__inst_graph, node),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__dump_node_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,8),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_COMMON(0,5),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__dump_functor_5_0_1;
static const struct mercury_type_14 mercury_common_14[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__inst_graph__dump_functor_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,8),
MR_COMMON(0,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_0_1;
static const struct mercury_type_15 mercury_common_15[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_0_1,
MR_COMMON(5,0)
},
7,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(4,0),
MR_COMMON(1,1),
MR_COMMON(0,4),
MR_COMMON(0,1)
},
{
1,
1
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_0_1;
static const struct mercury_type_16 mercury_common_16[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_0_1,
MR_COMMON(9,0)
},
10,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(8,0),
MR_COMMON(1,1),
MR_COMMON(0,4),
MR_COMMON(0,1)
},
{
1,
1,
2,
2
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

const MR_TypeCtorInfo_Struct mercury_data_hlds__inst_graph__type_ctor_info_inst_graph_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__inst_graph__inst_graph_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__inst_graph__inst_graph_0_0)),
	"hlds.inst_graph",
	"inst_graph",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__inst_graph__field_types_inst_graph_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0
};

const MR_ConstString mercury_data_hlds__inst_graph__field_names_inst_graph_info_0_0[] = {
	"interface_inst_graph",
	"interface_vars",
	"interface_varset",
	"implementation_inst_graph"
};

static const MR_DuFunctorDesc mercury_data_hlds__inst_graph__du_functor_desc_inst_graph_info_0_0 = {
	"inst_graph_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__inst_graph__field_types_inst_graph_info_0_0,
	mercury_data_hlds__inst_graph__field_names_inst_graph_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0[] = {
	&mercury_data_hlds__inst_graph__du_functor_desc_inst_graph_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__inst_graph__du_ptag_ordered_inst_graph_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__inst_graph__du_stag_ordered_inst_graph_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__inst_graph__du_name_ordered_inst_graph_info_0[] = {
	&mercury_data_hlds__inst_graph__du_functor_desc_inst_graph_info_0_0
};

const MR_Integer mercury_data_hlds__inst_graph__functor_number_map_inst_graph_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__inst_graph__type_ctor_info_inst_graph_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__inst_graph__inst_graph_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__inst_graph__inst_graph_info_0_0)),
	"hlds.inst_graph",
	"inst_graph_info",
	{ (void *)mercury_data_hlds__inst_graph__du_name_ordered_inst_graph_info_0 },
	{ (void *)mercury_data_hlds__inst_graph__du_ptag_ordered_inst_graph_info_0 },
	1,
	4,
	mercury_data_hlds__inst_graph__functor_number_map_inst_graph_info_0
};

static const MR_DuFunctorDesc mercury_data_hlds__inst_graph__du_functor_desc_maybe_parent_0_0 = {
	"top_level",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__inst_graph__field_types_maybe_parent_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_hlds__inst_graph__du_functor_desc_maybe_parent_0_1 = {
	"parent",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__inst_graph__field_types_maybe_parent_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__inst_graph__du_stag_ordered_maybe_parent_0_0[] = {
	&mercury_data_hlds__inst_graph__du_functor_desc_maybe_parent_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__inst_graph__du_stag_ordered_maybe_parent_0_1[] = {
	&mercury_data_hlds__inst_graph__du_functor_desc_maybe_parent_0_1

};

const MR_DuPtagLayout mercury_data_hlds__inst_graph__du_ptag_ordered_maybe_parent_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__inst_graph__du_stag_ordered_maybe_parent_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__inst_graph__du_stag_ordered_maybe_parent_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__inst_graph__du_name_ordered_maybe_parent_0[] = {
	&mercury_data_hlds__inst_graph__du_functor_desc_maybe_parent_0_1,
	&mercury_data_hlds__inst_graph__du_functor_desc_maybe_parent_0_0
};

const MR_Integer mercury_data_hlds__inst_graph__functor_number_map_maybe_parent_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__inst_graph__type_ctor_info_maybe_parent_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__inst_graph__maybe_parent_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__inst_graph__maybe_parent_0_0)),
	"hlds.inst_graph",
	"maybe_parent",
	{ (void *)mercury_data_hlds__inst_graph__du_name_ordered_maybe_parent_0 },
	{ (void *)mercury_data_hlds__inst_graph__du_ptag_ordered_maybe_parent_0 },
	2,
	4,
	mercury_data_hlds__inst_graph__functor_number_map_maybe_parent_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__inst_graph__type_ctor_info_maybe_parent_0;

const MR_PseudoTypeInfo mercury_data_hlds__inst_graph__field_types_node_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__inst_graph__type_ctor_info_maybe_parent_0
};

static const MR_DuFunctorDesc mercury_data_hlds__inst_graph__du_functor_desc_node_0_0 = {
	"node",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__inst_graph__field_types_node_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__inst_graph__du_stag_ordered_node_0_0[] = {
	&mercury_data_hlds__inst_graph__du_functor_desc_node_0_0

};

const MR_DuPtagLayout mercury_data_hlds__inst_graph__du_ptag_ordered_node_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__inst_graph__du_stag_ordered_node_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__inst_graph__du_name_ordered_node_0[] = {
	&mercury_data_hlds__inst_graph__du_functor_desc_node_0_0
};

const MR_Integer mercury_data_hlds__inst_graph__functor_number_map_node_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__inst_graph__type_ctor_info_node_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__inst_graph__node_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__inst_graph__node_0_0)),
	"hlds.inst_graph",
	"node",
	{ (void *)mercury_data_hlds__inst_graph__du_name_ordered_node_0 },
	{ (void *)mercury_data_hlds__inst_graph__du_ptag_ordered_node_0 },
	1,
	4,
	mercury_data_hlds__inst_graph__functor_number_map_node_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"lambda_inst_graph_m_302",
10,
0
},
"hlds.inst_graph",
"inst_graph.m",
297,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"lambda_inst_graph_m_272",
7,
0
},
"hlds.inst_graph",
"inst_graph.m",
269,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"lambda_inst_graph_m_375",
3,
0
},
"hlds.inst_graph",
"inst_graph.m",
375,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__dump_functor_5_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"dump_var",
4,
0
},
"hlds.inst_graph",
"inst_graph.m",
431,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__dump_node_5_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"dump_functor",
5,
0
},
"hlds.inst_graph",
"inst_graph.m",
420,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__dump_4_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"dump_node",
5,
0
},
"hlds.inst_graph",
"inst_graph.m",
403,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__merge_7_0_2 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"lambda_inst_graph_m_373",
5,
0
},
"hlds.inst_graph",
"inst_graph.m",
373,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__merge_7_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"lambda_inst_graph_m_366",
2,
0
},
"hlds.inst_graph",
"inst_graph.m",
366,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_from_list2_7_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"foldl_reachable2",
7,
0
},
"hlds.inst_graph",
"inst_graph.m",
310,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_aux2_8_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"lambda_inst_graph_m_295",
11,
0
},
"hlds.inst_graph",
"inst_graph.m",
295,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_from_list_5_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"foldl_reachable",
5,
0
},
"hlds.inst_graph",
"inst_graph.m",
280,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_5_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"lambda_inst_graph_m_268",
8,
0
},
"hlds.inst_graph",
"inst_graph.m",
268,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__foldl_reachable_aux_6_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"lambda_inst_graph_m_268",
8,
0
},
"hlds.inst_graph",
"inst_graph.m",
268,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__inst_graph__init_2_0_1 = {
{
MR_PREDICATE,
"hlds.inst_graph",
"hlds.inst_graph",
"init_var",
3,
0
},
"hlds.inst_graph",
"inst_graph.m",
201,
"5"
};


MR_decl_entry(map__init_1_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(hlds__inst_graph_module0)
	MR_init_entry1(hlds__inst_graph__init_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__init_2_0);
	MR_init_label1(hlds__inst_graph__init_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__inst_graph__init_2_0_i3);
MR_def_label(hlds__inst_graph__init_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__inst_graph_module1)
	MR_init_entry1(hlds__inst_graph__set_parent_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__set_parent_4_0);
	MR_init_label2(hlds__inst_graph__set_parent_4_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_parent'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__set_parent_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__inst_graph__set_parent_4_0_i3);
MR_def_label(hlds__inst_graph__set_parent_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__inst_graph__set_parent_4_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
MR_def_label(hlds__inst_graph__set_parent_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.inst_graph", 15);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.inst_graph.set_parent\'/4", 40);
	MR_r3 = (MR_Word) MR_string_const("node already has parent", 23);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module2)
	MR_init_entry1(hlds__inst_graph__top_level_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__top_level_node_3_0);
	MR_init_label3(hlds__inst_graph__top_level_node_3_0,14,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'top_level_node'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__top_level_node_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__inst_graph__top_level_node_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__inst_graph__top_level_node_3_0_i3);
MR_def_label(hlds__inst_graph__top_level_node_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__inst_graph__top_level_node_3_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(hlds__inst_graph__top_level_node_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__inst_graph__top_level_node_3_0_i14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(map__member_3_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(hlds__inst_graph_module3)
	MR_init_entry1(hlds__inst_graph__descendant_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__descendant_2_4_0);
	MR_init_label7(hlds__inst_graph__descendant_2_4_0,2,4,5,7,10,12,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'descendant_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__descendant_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.inst_graph.descendant_2/4-0", 7,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_fv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_fv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__inst_graph__descendant_2_4_0_i2);
MR_def_label(hlds__inst_graph__descendant_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__member_3_0,
		hlds__inst_graph__descendant_2_4_0_i4);
MR_def_label(hlds__inst_graph__descendant_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(5);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__inst_graph__descendant_2_4_0_i5);
MR_def_label(hlds__inst_graph__descendant_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__inst_graph__descendant_2_4_0_i7);
	MR_fv(3) = MR_r1;
	MR_succeed();
MR_def_label(hlds__inst_graph__descendant_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_fv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(7);
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(3);
	MR_r4 = MR_fv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__inst_graph__descendant_2_4_0_i10);
MR_def_label(hlds__inst_graph__descendant_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(2);
	MR_r4 = MR_fv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__inst_graph__descendant_2_4_0_i12);
MR_def_label(hlds__inst_graph__descendant_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_fv(3);
	}
	MR_np_localcall_lab(hlds__inst_graph__descendant_2_4_0,
		hlds__inst_graph__descendant_2_4_0_i6);
MR_def_label(hlds__inst_graph__descendant_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(hlds__inst_graph_module4)
	MR_init_entry1(hlds__inst_graph__descendant_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__descendant_3_0);
	MR_init_label1(hlds__inst_graph__descendant_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'descendant'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__descendant_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.inst_graph.descendant/3-0", 2,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__init_1_0,
		hlds__inst_graph__descendant_3_0_i2);
MR_def_label(hlds__inst_graph__descendant_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_fv(2);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(hlds__inst_graph__descendant_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module5)
	MR_init_entry1(hlds__inst_graph__reachable_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__reachable_3_0);
	MR_init_label2(hlds__inst_graph__reachable_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reachable'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__reachable_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.inst_graph.reachable/3-0", 2,
		MR_LABEL_AP(hlds__inst_graph__reachable_3_0_i2));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_succeed();
MR_def_label(hlds__inst_graph__reachable_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__init_1_0,
		hlds__inst_graph__reachable_3_0_i4);
MR_def_label(hlds__inst_graph__reachable_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_fv(2);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(hlds__inst_graph__descendant_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module6)
	MR_init_entry1(hlds__inst_graph__reachable_from_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__reachable_from_list_3_0);
	MR_init_label4(hlds__inst_graph__reachable_from_list_3_0,2,4,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reachable_from_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__reachable_from_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.inst_graph.reachable_from_list/3-0", 5,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_fv(3);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__inst_graph__reachable_from_list_3_0_i2);
MR_def_label(hlds__inst_graph__reachable_from_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__inst_graph__reachable_from_list_3_0_i4);
	MR_fv(2) = MR_r1;
	MR_succeed();
MR_def_label(hlds__inst_graph__reachable_from_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_fv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(5);
	MR_r1 = MR_fv(3);
	MR_np_call_localret_ent(set__init_1_0,
		hlds__inst_graph__reachable_from_list_3_0_i5);
MR_def_label(hlds__inst_graph__reachable_from_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_fv(2);
	}
	MR_np_call_localret_ent(hlds__inst_graph__descendant_2_4_0,
		hlds__inst_graph__reachable_from_list_3_0_i3);
MR_def_label(hlds__inst_graph__reachable_from_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(hlds__inst_graph_module7)
	MR_init_entry1(hlds__inst_graph__foldl_reachable_aux_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__foldl_reachable_aux_6_0);
	MR_init_label2(hlds__inst_graph__foldl_reachable_aux_6_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_reachable_aux'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__foldl_reachable_aux_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__inst_graph__foldl_reachable_aux_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__hlds__inst_graph__foldl_reachable_aux_6_0_i2);
MR_def_label(hlds__inst_graph__foldl_reachable_aux_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__inst_graph__foldl_reachable_aux_6_0_i4);
MR_def_label(hlds__inst_graph__foldl_reachable_aux_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__268__1_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(hlds__inst_graph_module8)
	MR_init_entry1(hlds__inst_graph__foldl_reachable_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__foldl_reachable_5_0);
	MR_init_label3(hlds__inst_graph__foldl_reachable_5_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_reachable'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__foldl_reachable_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__inst_graph__foldl_reachable_5_0_i3);
MR_def_label(hlds__inst_graph__foldl_reachable_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__inst_graph__foldl_reachable_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__hlds__inst_graph__foldl_reachable_5_0_i4);
MR_def_label(hlds__inst_graph__foldl_reachable_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__inst_graph__foldl_reachable_5_0_i5);
MR_def_label(hlds__inst_graph__foldl_reachable_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__268__1_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module9)
	MR_init_entry1(hlds__inst_graph__foldl_reachable_from_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__foldl_reachable_from_list_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_reachable_from_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__foldl_reachable_from_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__foldl_reachable_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);
MR_decl_entry(map__foldl2_6_0);

MR_BEGIN_MODULE(hlds__inst_graph_module10)
	MR_init_entry1(hlds__inst_graph__foldl_reachable_aux2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__foldl_reachable_aux2_8_0);
	MR_init_label2(hlds__inst_graph__foldl_reachable_aux2_8_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_reachable_aux2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__foldl_reachable_aux2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__inst_graph__foldl_reachable_aux2_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__hlds__inst_graph__foldl_reachable_aux2_8_0_i2);
MR_def_label(hlds__inst_graph__foldl_reachable_aux2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__inst_graph__foldl_reachable_aux2_8_0_i4);
MR_def_label(hlds__inst_graph__foldl_reachable_aux2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__295__1_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r6 = MR_tfield(0, MR_tempr2, 0);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(map__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module11)
	MR_init_entry1(hlds__inst_graph__foldl_reachable2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__foldl_reachable2_7_0);
	MR_init_label1(hlds__inst_graph__foldl_reachable2_7_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_reachable2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__foldl_reachable2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__inst_graph__foldl_reachable2_7_0_i3);
MR_def_label(hlds__inst_graph__foldl_reachable2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__inst_graph__foldl_reachable_aux2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(hlds__inst_graph_module12)
	MR_init_entry1(hlds__inst_graph__foldl_reachable_from_list2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__foldl_reachable_from_list2_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_reachable_from_list2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__foldl_reachable_from_list2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__foldl_reachable2_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module13)
	MR_init_entry1(hlds__inst_graph__corresponding_members_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__corresponding_members_4_0);
	MR_init_label2(hlds__inst_graph__corresponding_members_4_0,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'corresponding_members'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__corresponding_members_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred hlds.inst_graph.corresponding_members/4-0", 4);
MR_def_label(hlds__inst_graph__corresponding_members_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_fv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_fv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__inst_graph__corresponding_members_4_0_i4);
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_succeed();
	}
MR_def_label(hlds__inst_graph__corresponding_members_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(3);
	MR_r4 = MR_fv(4);
	MR_GOTO_LAB(hlds__inst_graph__corresponding_members_4_0_i6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(hlds__inst_graph_module14)
	MR_init_entry1(hlds__inst_graph__corresponding_nodes_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__corresponding_nodes_2_8_0);
	MR_init_label10(hlds__inst_graph__corresponding_nodes_2_8_0,2,5,7,3,10,11,12,13,16,18)
	MR_init_label8(hlds__inst_graph__corresponding_nodes_2_8_0,20,17,22,24,14,28,29,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'corresponding_nodes_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__corresponding_nodes_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.inst_graph.corresponding_nodes_2/8-0", 10,
		MR_LABEL_AP(hlds__inst_graph__corresponding_nodes_2_8_0_i2));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(4) = MR_r3;
	MR_fv(5) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_fv(6) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_fv(3) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succeed();
	}
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_fv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_fv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_fv(7);
	MR_r2 = MR_fv(8);
	MR_r3 = MR_fv(6);
	MR_r4 = MR_fv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i5);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__inst_graph__corresponding_nodes_2_8_0_i3);
	}
	MR_r1 = MR_fv(7);
	MR_r2 = MR_fv(8);
	MR_r3 = MR_fv(3);
	MR_r4 = MR_fv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i7);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_fv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_fv(8);
	MR_r2 = MR_fv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_fv(1);
	MR_r5 = MR_fv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i10);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_fv(8);
	MR_r2 = MR_fv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_fv(2);
	MR_r5 = MR_fv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i11);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(4);
	MR_fv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_fv(8);
	MR_r2 = MR_fv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_fv(6);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i12);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(5);
	MR_fv(5) = MR_r1;
	MR_r1 = MR_fv(8);
	MR_r2 = MR_fv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_fv(3);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i13);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__inst_graph__corresponding_nodes_2_8_0_i14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(7);
	MR_fv(7) = MR_r1;
	MR_fv(10) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_fv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__member_3_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i16);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_fv(6) = MR_r1;
	MR_fv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_fv(10);
	MR_r3 = MR_fv(4);
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i18);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__inst_graph__corresponding_nodes_2_8_0_i17);
	}
	MR_r1 = MR_fv(9);
	MR_r2 = MR_fv(8);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__inst_graph__corresponding_nodes_2_8_0_i20);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(5);
	MR_r4 = MR_fv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_fv(3);
	}
	MR_np_localcall_lab(hlds__inst_graph__corresponding_nodes_2_8_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i1);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_fv(10);
	MR_r3 = MR_fv(4);
	MR_r4 = MR_fv(6);
	MR_np_call_localret_ent(map__search_3_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i22);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_fv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__inst_graph__corresponding_members_4_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i24);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(5);
	MR_r4 = MR_fv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__inst_graph__corresponding_nodes_2_8_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i1);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_fv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r3 = MR_fv(4);
	MR_np_call_localret_ent(map__member_3_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i28);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(9);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__inst_graph__corresponding_nodes_2_8_0_i29);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(5);
	MR_r4 = MR_fv(7);
	MR_r5 = MR_fv(6);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__inst_graph__corresponding_nodes_2_8_0,
		hlds__inst_graph__corresponding_nodes_2_8_0_i1);
MR_def_label(hlds__inst_graph__corresponding_nodes_2_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module15)
	MR_init_entry1(hlds__inst_graph__two_graphs_corresponding_nodes_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__two_graphs_corresponding_nodes_6_0);
	MR_init_label2(hlds__inst_graph__two_graphs_corresponding_nodes_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'two_graphs_corresponding_nodes'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__two_graphs_corresponding_nodes_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.inst_graph.two_graphs_corresponding_nodes/6-0", 5,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(3) = MR_r3;
	MR_fv(4) = MR_r4;
	MR_fv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_fv(5);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__inst_graph__two_graphs_corresponding_nodes_6_0_i2);
MR_def_label(hlds__inst_graph__two_graphs_corresponding_nodes_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__inst_graph__two_graphs_corresponding_nodes_6_0_i3);
MR_def_label(hlds__inst_graph__two_graphs_corresponding_nodes_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_fv(3);
	MR_r6 = MR_fv(4);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(hlds__inst_graph__corresponding_nodes_2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module16)
	MR_init_entry1(hlds__inst_graph__same_graph_corresponding_nodes_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__same_graph_corresponding_nodes_5_0);
	MR_init_label2(hlds__inst_graph__same_graph_corresponding_nodes_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'same_graph_corresponding_nodes'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__same_graph_corresponding_nodes_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.inst_graph.same_graph_corresponding_nodes/5-0", 4,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(3) = MR_r3;
	MR_fv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_fv(4);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__inst_graph__same_graph_corresponding_nodes_5_0_i2);
MR_def_label(hlds__inst_graph__same_graph_corresponding_nodes_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__inst_graph__same_graph_corresponding_nodes_5_0_i3);
MR_def_label(hlds__inst_graph__same_graph_corresponding_nodes_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_r1;
	MR_r3 = MR_fv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_fv(2);
	MR_r6 = MR_fv(3);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(hlds__inst_graph__corresponding_nodes_2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module17)
	MR_init_entry1(hlds__inst_graph__corresponding_nodes_from_lists_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__corresponding_nodes_from_lists_6_0);
	MR_init_label4(hlds__inst_graph__corresponding_nodes_from_lists_6_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'corresponding_nodes_from_lists'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__corresponding_nodes_from_lists_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.inst_graph.corresponding_nodes_from_lists/6-0", 6,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_fv(6);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(hlds__inst_graph__corresponding_members_4_0,
		hlds__inst_graph__corresponding_nodes_from_lists_6_0_i2);
MR_def_label(hlds__inst_graph__corresponding_nodes_from_lists_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_r1 = MR_fv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__inst_graph__corresponding_nodes_from_lists_6_0_i3);
MR_def_label(hlds__inst_graph__corresponding_nodes_from_lists_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_r1 = MR_fv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__inst_graph__corresponding_nodes_from_lists_6_0_i4);
MR_def_label(hlds__inst_graph__corresponding_nodes_from_lists_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_fv(3);
	MR_r6 = MR_fv(4);
	}
	MR_np_call_localret_ent(hlds__inst_graph__corresponding_nodes_2_8_0,
		hlds__inst_graph__corresponding_nodes_from_lists_6_0_i5);
MR_def_label(hlds__inst_graph__corresponding_nodes_from_lists_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__merge_subst_without_names_4_0);
MR_decl_entry(map__map_values_only_3_1);

MR_BEGIN_MODULE(hlds__inst_graph_module18)
	MR_init_entry1(hlds__inst_graph__merge_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__merge_7_0);
	MR_init_label5(hlds__inst_graph__merge_7_0,2,7,3,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__merge_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(varset__merge_subst_without_names_4_0,
		hlds__inst_graph__merge_7_0_i2);
MR_def_label(hlds__inst_graph__merge_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__map_values_only_3_1,
		hlds__inst_graph__merge_7_0_i7);
MR_def_label(hlds__inst_graph__merge_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__inst_graph__merge_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r6 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		hlds__inst_graph__merge_7_0_i13);
MR_def_label(hlds__inst_graph__merge_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.inst_graph", 15);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.inst_graph.merge\'/7", 35);
	MR_r3 = (MR_Word) MR_string_const("non-variable terms in substitution", 34);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__inst_graph__merge_7_0_i12);
MR_def_label(hlds__inst_graph__merge_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(map__foldl_4_0,
		hlds__inst_graph__merge_7_0_i13);
MR_def_label(hlds__inst_graph__merge_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(map__foldl_4_2);

MR_BEGIN_MODULE(hlds__inst_graph_module19)
	MR_init_entry1(hlds__inst_graph__dump_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__dump_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__inst_graph__dump_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__dump_node_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__init_1_0);

MR_BEGIN_MODULE(hlds__inst_graph_module20)
	MR_init_entry1(fn__hlds__inst_graph__inst_graph_info_init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__inst_graph__inst_graph_info_init_0_0);
	MR_init_label2(fn__hlds__inst_graph__inst_graph_info_init_0_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_graph_info_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__inst_graph__inst_graph_info_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(varset__init_1_0,
		fn__hlds__inst_graph__inst_graph_info_init_0_0_i2);
MR_def_label(fn__hlds__inst_graph__inst_graph_info_init_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_np_call_localret_ent(map__init_1_0,
		fn__hlds__inst_graph__inst_graph_info_init_0_0_i4);
MR_def_label(fn__hlds__inst_graph__inst_graph_info_init_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module21)
	MR_init_entry1(fn__hlds__inst_graph__interface_inst_graph_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__inst_graph__interface_inst_graph_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interface_inst_graph'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__inst_graph__interface_inst_graph_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module22)
	MR_init_entry1(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interface_inst_graph :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module23)
	MR_init_entry1(fn__hlds__inst_graph__interface_vars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__inst_graph__interface_vars_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interface_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__inst_graph__interface_vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module24)
	MR_init_entry1(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interface_vars :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module25)
	MR_init_entry1(fn__hlds__inst_graph__interface_varset_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__inst_graph__interface_varset_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interface_varset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__inst_graph__interface_varset_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module26)
	MR_init_entry1(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interface_varset :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module27)
	MR_init_entry1(fn__hlds__inst_graph__implementation_inst_graph_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__inst_graph__implementation_inst_graph_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'implementation_inst_graph'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__inst_graph__implementation_inst_graph_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module28)
	MR_init_entry1(fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'implementation_inst_graph :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__inst_graph_module29)
	MR_init_entry1(hlds__inst_graph__init_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__init_var_3_0);
	MR_init_label1(hlds__inst_graph__init_var_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__init_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__inst_graph__init_var_3_0_i4);
MR_def_label(hlds__inst_graph__init_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(term_io__write_variable_4_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(hlds__inst_graph_module30)
	MR_init_entry1(hlds__inst_graph__dump_node_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__dump_node_5_0);
	MR_init_label5(hlds__inst_graph__dump_node_5_0,2,3,4,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_node'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__dump_node_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("%% ", 3);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__inst_graph__dump_node_5_0_i2);
MR_def_label(hlds__inst_graph__dump_node_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(term_io__write_variable_4_0,
		hlds__inst_graph__dump_node_5_0_i3);
MR_def_label(hlds__inst_graph__dump_node_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__inst_graph__dump_node_5_0_i4);
MR_def_label(hlds__inst_graph__dump_node_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__inst_graph__dump_node_5_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(term_io__write_variable_4_0,
		hlds__inst_graph__dump_node_5_0_i5);
MR_def_label(hlds__inst_graph__dump_node_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__inst_graph__dump_node_5_0_i8);
MR_def_label(hlds__inst_graph__dump_node_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__dump_functor_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0);
MR_decl_entry(io__write_char_3_0);
MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(hlds__inst_graph_module31)
	MR_init_entry1(hlds__inst_graph__dump_functor_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__dump_functor_5_0);
	MR_init_label5(hlds__inst_graph__dump_functor_5_0,2,3,6,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_functor'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__dump_functor_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("%%\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__inst_graph__dump_functor_5_0_i2);
MR_def_label(hlds__inst_graph__dump_functor_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0,
		hlds__inst_graph__dump_functor_5_0_i3);
MR_def_label(hlds__inst_graph__dump_functor_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__inst_graph__dump_functor_5_0_i4);
	}
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__inst_graph__dump_functor_5_0_i6);
MR_def_label(hlds__inst_graph__dump_functor_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__dump_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__inst_graph__dump_functor_5_0_i9);
MR_def_label(hlds__inst_graph__dump_functor_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__inst_graph__dump_functor_5_0_i4);
MR_def_label(hlds__inst_graph__dump_functor_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module32)
	MR_init_entry1(hlds__inst_graph__dump_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__dump_var_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__dump_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(term_io__write_variable_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__inst_graph_module33)
	MR_init_entry1(__Unify___hlds__inst_graph__inst_graph_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__inst_graph__inst_graph_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__inst_graph__inst_graph_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
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

MR_BEGIN_MODULE(hlds__inst_graph_module34)
	MR_init_entry1(__Compare___hlds__inst_graph__inst_graph_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__inst_graph__inst_graph_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__inst_graph__inst_graph_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(hlds__inst_graph_module35)
	MR_init_entry1(__Unify___hlds__inst_graph__inst_graph_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__inst_graph__inst_graph_info_0_0);
	MR_init_label5(__Unify___hlds__inst_graph__inst_graph_info_0_0,5,7,9,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__inst_graph__inst_graph_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__inst_graph__inst_graph_info_0_0_i13);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__inst_graph__inst_graph_info_0_0_i5);
MR_def_label(__Unify___hlds__inst_graph__inst_graph_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__inst_graph__inst_graph_info_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__inst_graph__inst_graph_info_0_0_i7);
MR_def_label(__Unify___hlds__inst_graph__inst_graph_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__inst_graph__inst_graph_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___hlds__inst_graph__inst_graph_info_0_0_i9);
MR_def_label(__Unify___hlds__inst_graph__inst_graph_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__inst_graph__inst_graph_info_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___hlds__inst_graph__inst_graph_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__inst_graph__inst_graph_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(hlds__inst_graph_module36)
	MR_init_entry1(__Compare___hlds__inst_graph__inst_graph_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__inst_graph__inst_graph_info_0_0);
	MR_init_label6(__Compare___hlds__inst_graph__inst_graph_info_0_0,3,2,6,11,15,52)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__inst_graph__inst_graph_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__inst_graph__inst_graph_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__inst_graph__inst_graph_info_0_0_i2);
MR_def_label(__Compare___hlds__inst_graph__inst_graph_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__inst_graph__inst_graph_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__inst_graph__inst_graph_info_0_0_i6);
MR_def_label(__Compare___hlds__inst_graph__inst_graph_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__inst_graph__inst_graph_info_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__inst_graph__inst_graph_info_0_0_i11);
MR_def_label(__Compare___hlds__inst_graph__inst_graph_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__inst_graph__inst_graph_info_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___hlds__inst_graph__inst_graph_info_0_0_i15);
MR_def_label(__Compare___hlds__inst_graph__inst_graph_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__inst_graph__inst_graph_info_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___hlds__inst_graph__inst_graph_info_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(hlds__inst_graph_module37)
	MR_init_entry1(__Unify___hlds__inst_graph__maybe_parent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__inst_graph__maybe_parent_0_0);
	MR_init_label3(__Unify___hlds__inst_graph__maybe_parent_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__inst_graph__maybe_parent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__inst_graph__maybe_parent_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__inst_graph__maybe_parent_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__inst_graph__maybe_parent_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__inst_graph__maybe_parent_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___hlds__inst_graph__maybe_parent_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___hlds__inst_graph__maybe_parent_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(hlds__inst_graph_module38)
	MR_init_entry1(__Compare___hlds__inst_graph__maybe_parent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__inst_graph__maybe_parent_0_0);
	MR_init_label4(__Compare___hlds__inst_graph__maybe_parent_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__inst_graph__maybe_parent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__inst_graph__maybe_parent_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__inst_graph__maybe_parent_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__inst_graph__maybe_parent_0_0_i7);
	}
MR_def_label(__Compare___hlds__inst_graph__maybe_parent_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__inst_graph__maybe_parent_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__inst_graph__maybe_parent_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__inst_graph__maybe_parent_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__inst_graph__maybe_parent_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module39)
	MR_init_entry1(__Unify___hlds__inst_graph__node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__inst_graph__node_0_0);
	MR_init_label3(__Unify___hlds__inst_graph__node_0_0,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__inst_graph__node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__inst_graph__node_0_0_i10);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__inst_graph__node_0_0_i6);
MR_def_label(__Unify___hlds__inst_graph__node_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__inst_graph__node_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__inst_graph__maybe_parent_0_0);
MR_def_label(__Unify___hlds__inst_graph__node_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__inst_graph__node_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module40)
	MR_init_entry1(__Compare___hlds__inst_graph__node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__inst_graph__node_0_0);
	MR_init_label4(__Compare___hlds__inst_graph__node_0_0,3,2,7,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__inst_graph__node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__inst_graph__node_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__inst_graph__node_0_0_i2);
MR_def_label(__Compare___hlds__inst_graph__node_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__inst_graph__node_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__inst_graph__node_0_0_i7);
MR_def_label(__Compare___hlds__inst_graph__node_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__inst_graph__node_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__inst_graph__maybe_parent_0_0);
MR_def_label(__Compare___hlds__inst_graph__node_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module41)
	MR_init_entry1(hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_0);
	MR_init_label1(hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__merge__366__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__inst_graph__IntroducedFrom__pred__merge__366__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__apply_to_list_3_0);

MR_BEGIN_MODULE(hlds__inst_graph_module42)
	MR_init_entry1(hlds__inst_graph__IntroducedFrom__pred__merge__375__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__IntroducedFrom__pred__merge__375__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__merge__375__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__IntroducedFrom__pred__merge__375__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(map__apply_to_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__map_values_only_3_0);

MR_BEGIN_MODULE(hlds__inst_graph_module43)
	MR_init_entry1(hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0);
	MR_init_label2(hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__merge__373__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__IntroducedFrom__pred__merge__375__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_r1;
	MR_tempr2 = MR_tempr3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__map_values_only_3_0,
		hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0_i5);
MR_def_label(hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0_i7);
MR_def_label(hlds__inst_graph__IntroducedFrom__pred__merge__373__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__inst_graph, node);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module44)
	MR_init_entry1(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0);
	MR_init_label3(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0,4,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__foldl_reachable_aux__272__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0_i4);
MR_def_label(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0_i7);
MR_def_label(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__inst_graph__foldl_reachable_aux_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module45)
	MR_init_entry1(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__268__1_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__268__1_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__foldl_reachable_aux__268__1'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__268__1_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module46)
	MR_init_entry1(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0);
	MR_init_label3(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0,4,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__foldl_reachable_aux2__302__1'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0_i4);
MR_def_label(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0_i2);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0_i7);
MR_def_label(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__inst_graph__foldl_reachable_aux2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module47)
	MR_init_entry1(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__295__1_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__295__1_11_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__foldl_reachable_aux2__295__1'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__295__1_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module48)
	MR_init_entry1(f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__foldl_reachable_aux__268__1__[5]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_95_95_50_54_56_95_95_49_95_95_91_53_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux__272__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__inst_graph_module49)
	MR_init_entry1(f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__foldl_reachable_aux2__295__1__[6]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_105_110_115_116_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_114_101_97_99_104_97_98_108_101_95_97_117_120_50_95_95_50_57_53_95_95_49_95_95_91_54_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__inst_graph__IntroducedFrom__pred__foldl_reachable_aux2__302__1_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_tfield(0, MR_tempr1, 7) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__inst_graph_maybe_bunch_0(void)
{
	hlds__inst_graph_module0();
	hlds__inst_graph_module1();
	hlds__inst_graph_module2();
	hlds__inst_graph_module3();
	hlds__inst_graph_module4();
	hlds__inst_graph_module5();
	hlds__inst_graph_module6();
	hlds__inst_graph_module7();
	hlds__inst_graph_module8();
	hlds__inst_graph_module9();
	hlds__inst_graph_module10();
	hlds__inst_graph_module11();
	hlds__inst_graph_module12();
	hlds__inst_graph_module13();
	hlds__inst_graph_module14();
	hlds__inst_graph_module15();
	hlds__inst_graph_module16();
	hlds__inst_graph_module17();
	hlds__inst_graph_module18();
	hlds__inst_graph_module19();
	hlds__inst_graph_module20();
	hlds__inst_graph_module21();
	hlds__inst_graph_module22();
	hlds__inst_graph_module23();
	hlds__inst_graph_module24();
	hlds__inst_graph_module25();
	hlds__inst_graph_module26();
	hlds__inst_graph_module27();
	hlds__inst_graph_module28();
	hlds__inst_graph_module29();
	hlds__inst_graph_module30();
	hlds__inst_graph_module31();
	hlds__inst_graph_module32();
	hlds__inst_graph_module33();
	hlds__inst_graph_module34();
	hlds__inst_graph_module35();
	hlds__inst_graph_module36();
	hlds__inst_graph_module37();
	hlds__inst_graph_module38();
	hlds__inst_graph_module39();
}

static void mercury__hlds__inst_graph_maybe_bunch_1(void)
{
	hlds__inst_graph_module40();
	hlds__inst_graph_module41();
	hlds__inst_graph_module42();
	hlds__inst_graph_module43();
	hlds__inst_graph_module44();
	hlds__inst_graph_module45();
	hlds__inst_graph_module46();
	hlds__inst_graph_module47();
	hlds__inst_graph_module48();
	hlds__inst_graph_module49();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__inst_graph__init(void);
void mercury__hlds__inst_graph__init_type_tables(void);
void mercury__hlds__inst_graph__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__inst_graph__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__inst_graph__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__inst_graph__init_threadscope_string_table(void);
#endif

void mercury__hlds__inst_graph__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__inst_graph_maybe_bunch_0();
	mercury__hlds__inst_graph_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__inst_graph__type_ctor_info_inst_graph_0,
		hlds__inst_graph__inst_graph_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__inst_graph__type_ctor_info_inst_graph_info_0,
		hlds__inst_graph__inst_graph_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__inst_graph__type_ctor_info_maybe_parent_0,
		hlds__inst_graph__maybe_parent_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__inst_graph__type_ctor_info_node_0,
		hlds__inst_graph__node_0_0);
	mercury__hlds__inst_graph__init_debugger();
}

void mercury__hlds__inst_graph__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__inst_graph__type_ctor_info_inst_graph_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__inst_graph__type_ctor_info_inst_graph_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__inst_graph__type_ctor_info_maybe_parent_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__inst_graph__type_ctor_info_node_0);
	}
}


void mercury__hlds__inst_graph__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__inst_graph__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__inst_graph);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__inst_graph__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__inst_graph__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
