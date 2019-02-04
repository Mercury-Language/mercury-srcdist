/*
** Automatically generated from `dependency_graph.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__dependency_graph__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.dependency_graph.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.dependency_graph.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.dependency_graph.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.dependency_graph.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.dependency_graph.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.dependency_graph.c"
#line 49 "transform_hlds.dependency_graph.c"
#include "transform_hlds.dependency_graph.mh"

#line 52 "transform_hlds.dependency_graph.c"
#line 53 "transform_hlds.dependency_graph.c"
#ifndef TRANSFORM_HLDS__DEPENDENCY_GRAPH_DECL_GUARD
#define TRANSFORM_HLDS__DEPENDENCY_GRAPH_DECL_GUARD

#line 57 "transform_hlds.dependency_graph.c"
#line 58 "transform_hlds.dependency_graph.c"

#endif
#line 61 "transform_hlds.dependency_graph.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__[],
	mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_proc_id__arity0__[];

extern const MR_TypeClassDeclStruct
	mercury_data_transform_hlds__dependency_graph__type_class_decl_dependency_node_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__dependency_graph__type_ctor_info_include_imported_0,
	mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_0,
	mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_id_0,
	mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_pred_map_0;
MR_decl_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0, 11,3,5)
MR_decl_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0, 11,4,5,13)
MR_decl_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0, 11,4,5,13)
MR_decl_label6(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0, 14,4,5,7,8,16)
MR_decl_label6(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0, 14,4,5,7,8,16)
MR_decl_label6(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0, 15,3,4,6,8,9)
MR_decl_label7(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0, 6,8,9,10,12,7,25)
MR_decl_label10(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0, 98,48,54,60,15,17,20,21,22,24)
MR_decl_label10(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0, 18,65,4,6,9,10,11,13,27,70)
MR_decl_label7(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0, 28,33,38,40,35,36,46)
MR_decl_label3(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0, 10,3,4)
MR_decl_label10(transform_hlds__dependency_graph__add_pred_arcs_5_0, 34,3,4,5,9,6,7,11,12,13)
MR_decl_label3(transform_hlds__dependency_graph__add_pred_arcs_5_0, 15,16,18)
MR_decl_label7(transform_hlds__dependency_graph__add_pred_nodes_5_0, 27,3,4,5,9,7,11)
MR_decl_label7(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0, 21,3,4,5,7,9,10)
MR_decl_label7(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0, 21,3,4,5,7,9,10)
MR_decl_label10(transform_hlds__dependency_graph__add_proc_arcs_6_0, 38,3,4,5,6,7,10,12,9,15)
MR_decl_label5(transform_hlds__dependency_graph__add_proc_arcs_6_0, 16,19,21,23,18)
MR_decl_label10(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label3(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0, 13,14,15)
MR_decl_label10(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label3(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0, 13,14,15)
MR_decl_label10(transform_hlds__dependency_graph__is_entry_point_3_0, 4,5,8,9,10,11,13,14,16,17)
MR_decl_label2(transform_hlds__dependency_graph__is_entry_point_3_0, 7,2)
MR_decl_label10(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0, 2,5,7,8,9,10,11,12,13,14)
MR_decl_label7(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0, 15,16,17,18,19,20,4)
MR_decl_label10(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0, 2,4,5,6,7,8,9,10,11,12)
MR_decl_label6(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0, 13,14,15,16,17,18)
MR_decl_label3(transform_hlds__dependency_graph__sets_to_lists_3_0, 11,3,4)
MR_decl_label10(transform_hlds__dependency_graph__write_dep_graph_link_5_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label4(transform_hlds__dependency_graph__write_dep_graph_link_5_0, 12,14,15,17)
MR_decl_label8(transform_hlds__dependency_graph__write_dependency_graph_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(transform_hlds__dependency_graph__write_graph_5_0, 2,3,4)
MR_decl_label4(transform_hlds__dependency_graph__write_graph_children_6_0, 11,4,5,13)
MR_decl_label7(transform_hlds__dependency_graph__write_graph_nodes_6_0, 15,4,5,6,8,9,17)
MR_decl_label5(transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0, 2,3,4,5,6)
MR_decl_label6(transform_hlds__dependency_graph__write_prof_dependency_graph_4_0, 2,3,4,5,6,7)
MR_decl_static(transform_hlds__dependency_graph__sets_to_lists_3_0)
MR_decl_static(transform_hlds__dependency_graph__add_dependency_nodes_5_0)
MR_decl_static(transform_hlds__dependency_graph__add_dependency_arcs_5_0)
MR_def_extern_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0)
MR_def_extern_entry(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0)
MR_def_extern_entry(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0)
MR_def_extern_entry(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0)
MR_decl_static(transform_hlds__dependency_graph__write_graph_children_6_0)
MR_def_extern_entry(transform_hlds__dependency_graph__write_graph_nodes_6_0)
MR_def_extern_entry(transform_hlds__dependency_graph__write_graph_5_0)
MR_def_extern_entry(transform_hlds__dependency_graph__write_dependency_graph_4_0)
MR_def_extern_entry(transform_hlds__dependency_graph__write_prof_dependency_graph_4_0)
MR_def_extern_entry(transform_hlds__dependency_graph__get_scc_entry_points_4_0)
MR_decl_static(fn__transform_hlds__dependency_graph__dependency_node_1_0)
MR_decl_static(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0)
MR_decl_static(transform_hlds__dependency_graph__add_pred_nodes_5_0)
MR_decl_static(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0)
MR_decl_static(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0)
MR_decl_static(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0)
MR_decl_static(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0)
MR_decl_static(transform_hlds__dependency_graph__add_proc_arcs_6_0)
MR_decl_static(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0)
MR_decl_static(transform_hlds__dependency_graph__add_pred_arcs_5_0)
MR_decl_static(transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0)
MR_decl_static(transform_hlds__dependency_graph__write_dep_graph_link_5_0)
MR_decl_static(transform_hlds__dependency_graph__is_entry_point_3_0)
MR_def_extern_entry(__Unify___transform_hlds__dependency_graph__include_imported_0_0)
MR_def_extern_entry(__Compare___transform_hlds__dependency_graph__include_imported_0_0)
MR_decl_static(__Unify___transform_hlds__dependency_graph__scc_0_0)
MR_decl_static(__Compare___transform_hlds__dependency_graph__scc_0_0)
MR_decl_static(__Unify___transform_hlds__dependency_graph__scc_id_0_0)
MR_decl_static(__Compare___transform_hlds__dependency_graph__scc_id_0_0)
MR_decl_static(__Unify___transform_hlds__dependency_graph__scc_pred_map_0_0)
MR_decl_static(__Compare___transform_hlds__dependency_graph__scc_pred_map_0_0)
MR_decl_static(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0)
MR_decl_static(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0)
MR_decl_static(fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0)
MR_decl_static(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0)
MR_decl_static(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0)
MR_decl_static(fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0)
MR_decl_static(fn__transform_hlds__dependency_graph__IntroducedFrom__func__add_pred_arcs__338__1_1_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_digraph__type_ctor_info_digraph_key_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_proc_id__arity0__,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id)
}
},
{
{
MR_CTOR1_ADDR(digraph, digraph_key),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
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
MR_LIST_CTOR_ADDR,
MR_COMMON(0,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dependency_graph__get_scc_entry_points_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dependency_graph__get_scc_entry_points_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,4),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_digraph__type_ctor_info_digraph_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_CTOR1_ADDR(digraph, digraph_key),
1
},
{
MR_CTOR1_ADDR(digraph, digraph),
1
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
1,
17437
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_typeclass_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0_1,
MR_COMMON(3,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(2,0),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_COMMON(2,1),
MR_COMMON(2,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dependency_graph__add_pred_arcs_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dependency_graph__add_pred_arcs_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__transform_hlds__dependency_graph__IntroducedFrom__func__add_pred_arcs__338__1_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,5),
MR_TAG_COMMON(0,0,5)
}
},
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0 = {
	"include_imported",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1 = {
	"do_not_include_imported",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__dependency_graph__enum_value_ordered_include_imported_0[] = {
	&mercury_data_transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0,
	&mercury_data_transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__dependency_graph__enum_name_ordered_include_imported_0[] = {
	&mercury_data_transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1,
	&mercury_data_transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0
};

const MR_Integer mercury_data_transform_hlds__dependency_graph__functor_number_map_include_imported_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dependency_graph__type_ctor_info_include_imported_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dependency_graph__include_imported_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dependency_graph__include_imported_0_0)),
	"transform_hlds.dependency_graph",
	"include_imported",
	{ (void *)mercury_data_transform_hlds__dependency_graph__enum_name_ordered_include_imported_0 },
	{ (void *)mercury_data_transform_hlds__dependency_graph__enum_value_ordered_include_imported_0 },
	2,
	4,
	mercury_data_transform_hlds__dependency_graph__functor_number_map_include_imported_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dependency_graph__scc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dependency_graph__scc_0_0)),
	"transform_hlds.dependency_graph",
	"scc",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_id_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dependency_graph__scc_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dependency_graph__scc_id_0_0)),
	"transform_hlds.dependency_graph",
	"scc_id",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_pair__ti_pair_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_pred_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dependency_graph__scc_pred_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dependency_graph__scc_pred_map_0_0)),
	"transform_hlds.dependency_graph",
	"scc_pred_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
	-1,
	0,
	NULL
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 3,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_proc_id__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 3,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0))
};

const MR_ConstString mercury_data_transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1[] = {
	"T",
};

const MR_TypeClassMethod mercury_data_transform_hlds__dependency_graph__type_class_id_method_ids_dependency_node_1[] = {
	{ "add_dependency_nodes", 5, MR_PREDICATE },
	{ "add_dependency_arcs", 5, MR_PREDICATE },
	{ "dependency_node", 2, MR_FUNCTION },
};

static const MR_TypeClassId mercury_data_transform_hlds__dependency_graph__type_class_id_dependency_node_1 = {
	"transform_hlds.dependency_graph",
	"dependency_node",
	1,
	1,
	3,
	mercury_data_transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1,
	mercury_data_transform_hlds__dependency_graph__type_class_id_method_ids_dependency_node_1
};

const MR_TypeClassDeclStruct mercury_data_transform_hlds__dependency_graph__type_class_decl_dependency_node_1 = {
	&mercury_data_transform_hlds__dependency_graph__type_class_id_dependency_node_1,
	0,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dependency_graph__add_pred_arcs_5_0_1 = {
{
MR_FUNCTION,
"transform_hlds.dependency_graph",
"transform_hlds.dependency_graph",
"lambda_dependency_graph_m_338",
2,
0
},
"transform_hlds.dependency_graph",
"dependency_graph.m",
338,
"d2;c8;e;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dependency_graph",
"transform_hlds.dependency_graph",
"add_dependency_arcs_in_cons",
4,
0
},
"transform_hlds.dependency_graph",
"dependency_graph.m",
459,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dependency_graph__get_scc_entry_points_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dependency_graph",
"transform_hlds.dependency_graph",
"is_entry_point",
3,
0
},
"transform_hlds.dependency_graph",
"dependency_graph.m",
632,
"d1;c5;"
};


MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module0)
	MR_init_entry1(transform_hlds__dependency_graph__sets_to_lists_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__sets_to_lists_3_0);
	MR_init_label3(transform_hlds__dependency_graph__sets_to_lists_3_0,11,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sets_to_lists'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__sets_to_lists_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dependency_graph__sets_to_lists_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__sets_to_lists_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__dependency_graph__sets_to_lists_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__dependency_graph__sets_to_lists_3_0_i4);
MR_def_label(transform_hlds__dependency_graph__sets_to_lists_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__dependency_graph__sets_to_lists_3_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_4);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module1)
	MR_init_entry1(transform_hlds__dependency_graph__add_dependency_nodes_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__add_dependency_nodes_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_dependency_nodes'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__add_dependency_nodes_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__add_dependency_nodes_5_0));
	MR_np_tailcall_ent(do_call_class_method_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module2)
	MR_init_entry1(transform_hlds__dependency_graph__add_dependency_arcs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__add_dependency_arcs_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_dependency_arcs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__add_dependency_arcs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__add_dependency_arcs_5_0));
	MR_np_tailcall_ent(do_call_class_method_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_maybe_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(private_builtin__type_info_from_typeclass_info_3_0);
MR_decl_entry(digraph__init_1_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_init_1_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_0);
MR_decl_entry(digraph__atsort_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_dependency_info_3_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module3)
	MR_init_entry1(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
	MR_init_label10(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,2,5,7,8,9,10,11,12,13,14)
	MR_init_label7(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,15,16,17,18,19,20,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_info_ensure_dependency_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_maybe_dependency_info_2_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i2);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i5);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i7);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(digraph__init_1_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i8);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_4),
		mercury__transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i9);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_4),
		mercury__transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i10);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i11);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_init_1_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i12);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i13);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i14);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i15);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(digraph__atsort_2_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i16);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i17);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__sets_to_lists_3_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i18);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i19);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_0,
		transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0_i20);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_dependency_info_3_0);
MR_def_label(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module4)
	MR_init_entry1(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0);
	MR_init_label10(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,2,4,5,6,7,8,9,10,11,12)
	MR_init_label6(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,13,14,15,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_info_rebuild_dependency_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i2);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i4);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(digraph__init_1_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i5);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_4),
		mercury__transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i6);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_4),
		mercury__transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i7);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i8);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_init_1_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i9);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i10);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i11);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i12);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(digraph__atsort_2_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i13);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i14);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__sets_to_lists_3_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i15);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i16);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i17);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_dependency_info_3_0,
		transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0_i18);
MR_def_label(transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module5)
	MR_init_entry1(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__build_pred_dependency_graph_4_0);
	MR_init_label10(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label3(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_pred_dependency_graph'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dependency_graph__build_pred_dependency_graph_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i3);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(digraph__init_1_0,
		transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i4);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_4),
		mercury__transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i5);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_4),
		mercury__transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i6);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i7);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_init_1_0,
		transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i8);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i9);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_0,
		transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i10);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i11);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(digraph__atsort_2_0,
		transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i12);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i13);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__sets_to_lists_3_0,
		transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i14);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_pred_dependency_graph_4_0_i15);
MR_def_label(transform_hlds__dependency_graph__build_pred_dependency_graph_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module6)
	MR_init_entry1(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__build_proc_dependency_graph_4_0);
	MR_init_label10(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label3(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_proc_dependency_graph'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dependency_graph__build_proc_dependency_graph_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i3);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(digraph__init_1_0,
		transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i4);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_4),
		mercury__transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i5);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_4),
		mercury__transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i6);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i7);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_init_1_0,
		transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i8);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i9);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_0,
		transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i10);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i11);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(digraph__atsort_2_0,
		transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i12);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i13);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__sets_to_lists_3_0,
		transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i14);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__build_proc_dependency_graph_4_0_i15);
MR_def_label(transform_hlds__dependency_graph__build_proc_dependency_graph_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(digraph__lookup_vertex_3_0);
MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module7)
	MR_init_entry1(transform_hlds__dependency_graph__write_graph_children_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__write_graph_children_6_0);
	MR_init_label4(transform_hlds__dependency_graph__write_graph_children_6_0,11,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_graph_children'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__write_graph_children_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dependency_graph__write_graph_children_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__write_graph_children_6_0_i13);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(digraph__lookup_vertex_3_0,
		transform_hlds__dependency_graph__write_graph_children_6_0_i4);
MR_def_label(transform_hlds__dependency_graph__write_graph_children_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__write_graph_children_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__transform_hlds__dependency_graph__write_graph_children_6_0_i5);
MR_def_label(transform_hlds__dependency_graph__write_graph_children_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__dependency_graph__write_graph_children_6_0_i11);
MR_def_label(transform_hlds__dependency_graph__write_graph_children_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);
MR_decl_entry(digraph__lookup_key_3_0);
MR_decl_entry(digraph__lookup_from_3_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module8)
	MR_init_entry1(transform_hlds__dependency_graph__write_graph_nodes_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__write_graph_nodes_6_0);
	MR_init_label7(transform_hlds__dependency_graph__write_graph_nodes_6_0,15,4,5,6,8,9,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_graph_nodes'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dependency_graph__write_graph_nodes_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dependency_graph__write_graph_nodes_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__write_graph_nodes_6_0_i17);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__write_graph_nodes_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__transform_hlds__dependency_graph__write_graph_nodes_6_0_i4);
MR_def_label(transform_hlds__dependency_graph__write_graph_nodes_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(digraph__lookup_key_3_0,
		transform_hlds__dependency_graph__write_graph_nodes_6_0_i5);
MR_def_label(transform_hlds__dependency_graph__write_graph_nodes_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__lookup_from_3_0,
		transform_hlds__dependency_graph__write_graph_nodes_6_0_i6);
MR_def_label(transform_hlds__dependency_graph__write_graph_nodes_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__dependency_graph__write_graph_nodes_6_0_i8);
MR_def_label(transform_hlds__dependency_graph__write_graph_nodes_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__write_graph_children_6_0,
		transform_hlds__dependency_graph__write_graph_nodes_6_0_i9);
MR_def_label(transform_hlds__dependency_graph__write_graph_nodes_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__dependency_graph__write_graph_nodes_6_0_i15);
MR_def_label(transform_hlds__dependency_graph__write_graph_nodes_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_0);
MR_decl_entry(digraph__vertices_2_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module9)
	MR_init_entry1(transform_hlds__dependency_graph__write_graph_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__write_graph_5_0);
	MR_init_label3(transform_hlds__dependency_graph__write_graph_5_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_graph'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dependency_graph__write_graph_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_0,
		transform_hlds__dependency_graph__write_graph_5_0_i2);
MR_def_label(transform_hlds__dependency_graph__write_graph_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(digraph__vertices_2_0,
		transform_hlds__dependency_graph__write_graph_5_0_i3);
MR_def_label(transform_hlds__dependency_graph__write_graph_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__dependency_graph__write_graph_5_0_i4);
MR_def_label(transform_hlds__dependency_graph__write_graph_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__dependency_graph__write_graph_nodes_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_dependency_info_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module10)
	MR_init_entry1(transform_hlds__dependency_graph__write_dependency_graph_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__write_dependency_graph_4_0);
	MR_init_label8(transform_hlds__dependency_graph__write_dependency_graph_4_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_dependency_graph'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dependency_graph__write_dependency_graph_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__dependency_graph__write_dependency_graph_4_0_i2);
MR_def_label(transform_hlds__dependency_graph__write_dependency_graph_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__dependency_graph__write_dependency_graph_4_0_i3);
MR_def_label(transform_hlds__dependency_graph__write_dependency_graph_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Dependency graph\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__dependency_graph__write_dependency_graph_4_0_i4);
MR_def_label(transform_hlds__dependency_graph__write_dependency_graph_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n% Dependency ordering\n", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__dependency_graph__write_dependency_graph_4_0_i5);
MR_def_label(transform_hlds__dependency_graph__write_dependency_graph_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_0,
		transform_hlds__dependency_graph__write_dependency_graph_4_0_i6);
MR_def_label(transform_hlds__dependency_graph__write_dependency_graph_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(digraph__vertices_2_0,
		transform_hlds__dependency_graph__write_dependency_graph_4_0_i7);
MR_def_label(transform_hlds__dependency_graph__write_dependency_graph_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__dependency_graph__write_dependency_graph_4_0_i8);
MR_def_label(transform_hlds__dependency_graph__write_dependency_graph_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0,
		transform_hlds__dependency_graph__write_dependency_graph_4_0_i9);
MR_def_label(transform_hlds__dependency_graph__write_dependency_graph_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module11)
	MR_init_entry1(transform_hlds__dependency_graph__write_prof_dependency_graph_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__write_prof_dependency_graph_4_0);
	MR_init_label6(transform_hlds__dependency_graph__write_prof_dependency_graph_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_prof_dependency_graph'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dependency_graph__write_prof_dependency_graph_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		transform_hlds__dependency_graph__write_prof_dependency_graph_4_0_i2);
MR_def_label(transform_hlds__dependency_graph__write_prof_dependency_graph_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__dependency_graph__write_prof_dependency_graph_4_0_i3);
MR_def_label(transform_hlds__dependency_graph__write_prof_dependency_graph_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_0,
		transform_hlds__dependency_graph__write_prof_dependency_graph_4_0_i4);
MR_def_label(transform_hlds__dependency_graph__write_prof_dependency_graph_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(digraph__vertices_2_0,
		transform_hlds__dependency_graph__write_prof_dependency_graph_4_0_i5);
MR_def_label(transform_hlds__dependency_graph__write_prof_dependency_graph_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__dependency_graph__write_prof_dependency_graph_4_0_i6);
MR_def_label(transform_hlds__dependency_graph__write_prof_dependency_graph_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0,
		transform_hlds__dependency_graph__write_prof_dependency_graph_4_0_i7);
MR_def_label(transform_hlds__dependency_graph__write_prof_dependency_graph_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module12)
	MR_init_entry1(transform_hlds__dependency_graph__get_scc_entry_points_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__get_scc_entry_points_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_scc_entry_points'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dependency_graph__get_scc_entry_points_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dependency_graph__is_entry_point_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__filter_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module13)
	MR_init_entry1(fn__transform_hlds__dependency_graph__dependency_node_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__dependency_graph__dependency_node_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dependency_node'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__dependency_graph__dependency_node_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__transform_hlds__dependency_graph__dependency_node_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module14)
	MR_init_entry1(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__add_pred_proc_nodes_5_0);
	MR_init_label7(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0,21,3,4,5,7,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_pred_proc_nodes'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__dependency_graph__add_pred_proc_nodes_5_0_i4);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__dependency_graph__add_pred_proc_nodes_5_0_i5);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0_i7);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__dependency_graph__add_pred_proc_nodes_5_0_i9);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__dependency_graph__add_pred_proc_nodes_5_0_i9);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0,
		transform_hlds__dependency_graph__add_pred_proc_nodes_5_0_i10);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0_i21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(digraph__add_vertex_4_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module15)
	MR_init_entry1(transform_hlds__dependency_graph__add_pred_nodes_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__add_pred_nodes_5_0);
	MR_init_label7(transform_hlds__dependency_graph__add_pred_nodes_5_0,27,3,4,5,9,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_pred_nodes'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__add_pred_nodes_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dependency_graph__add_pred_nodes_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_nodes_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__dependency_graph__add_pred_nodes_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__dependency_graph__add_pred_nodes_5_0_i4);
MR_def_label(transform_hlds__dependency_graph__add_pred_nodes_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__dependency_graph__add_pred_nodes_5_0_i5);
MR_def_label(transform_hlds__dependency_graph__add_pred_nodes_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_nodes_5_0_i7);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		transform_hlds__dependency_graph__add_pred_nodes_5_0_i9);
MR_def_label(transform_hlds__dependency_graph__add_pred_nodes_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_nodes_5_0_i7);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_nodes_5_0_i27);
MR_def_label(transform_hlds__dependency_graph__add_pred_nodes_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(digraph__add_vertex_4_0,
		transform_hlds__dependency_graph__add_pred_nodes_5_0_i11);
MR_def_label(transform_hlds__dependency_graph__add_pred_nodes_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_nodes_5_0_i27);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0);
MR_decl_entry(digraph__search_key_3_0);
MR_decl_entry(digraph__add_edge_4_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module16)
	MR_init_entry1(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0);
	MR_init_label7(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0,6,8,9,10,12,7,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_dependency_arcs_in_cons'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0_i25);
	}
	if (MR_INT_NE(MR_tfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0_i25);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0_i6);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r2 = (MR_Integer) 3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0_i8);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0_i9);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(digraph__search_key_3_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0_i10);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0_i7);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0_i12);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(digraph__add_edge_4_0);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module17)
	MR_init_entry1(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0);
	MR_init_label10(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,98,48,54,60,15,17,20,21,22,24)
	MR_init_label10(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,18,65,4,6,9,10,11,13,27,70)
	MR_init_label7(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,28,33,38,40,35,36,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_dependency_arcs_in_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r3, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i48) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i15) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i70) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i65));
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(0, MR_r5, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i54) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i54) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i70) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i60));
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_mask_field(MR_r6, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r6, 0),0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i70);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r5, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i17);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__dependency_graph__dependency_node_1_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i20);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i21);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(digraph__search_key_3_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i22);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i18);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i24);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(digraph__add_edge_4_0);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r5, 0),
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i70) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i6) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i46) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i13) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i27) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i33));
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r5, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i10);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i11);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i98);
	}
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r5, 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i98);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_r6 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i28);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i28);
	}
	}
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r6;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i98);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i35);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i38);
	}
	MR_r3 = MR_tfield(2, MR_tempr1, 2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i98);
	}
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_localcall_lab(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i40);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i98);
	}
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0_i36);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0);
	}
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r5, 3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module18)
	MR_init_entry1(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0);
	MR_init_label3(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_dependency_arcs_in_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0_i4);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module19)
	MR_init_entry1(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0);
	MR_init_label6(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0,15,3,4,6,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_dependency_arcs_in_cases'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0_i4);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0_i6);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(digraph, digraph);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0_i8);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,
		transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0_i9);
MR_def_label(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_0_i15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_is_imported_1_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module20)
	MR_init_entry1(transform_hlds__dependency_graph__add_proc_arcs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__add_proc_arcs_6_0);
	MR_init_label10(transform_hlds__dependency_graph__add_proc_arcs_6_0,38,3,4,5,6,7,10,12,9,15)
	MR_init_label5(transform_hlds__dependency_graph__add_proc_arcs_6_0,16,19,21,23,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_proc_arcs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__add_proc_arcs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_proc_arcs_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i4);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,4)
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
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i5);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i6);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i7);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_proc_arcs_6_0_i9);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i10);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(digraph__lookup_key_3_0,
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i12);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i23);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i15);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_is_imported_1_0,
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i16);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_proc_arcs_6_0_i18);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i19);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(digraph__lookup_key_3_0,
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i21);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_0,
		transform_hlds__dependency_graph__add_proc_arcs_6_0_i23);
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_proc_arcs_6_0_i38);
	}
MR_def_label(transform_hlds__dependency_graph__add_proc_arcs_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_proc_arcs_6_0_i38);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module21)
	MR_init_entry1(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__add_pred_proc_arcs_5_0);
	MR_init_label7(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0,21,3,4,5,7,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_pred_proc_arcs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__dependency_graph__add_pred_proc_arcs_5_0_i4);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__dependency_graph__add_pred_proc_arcs_5_0_i5);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0_i7);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__dependency_graph__add_pred_proc_arcs_5_0_i9);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__dependency_graph__add_pred_proc_arcs_5_0_i9);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__dependency_graph__add_proc_arcs_6_0,
		transform_hlds__dependency_graph__add_pred_proc_arcs_5_0_i10);
MR_def_label(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0_i21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_any_order_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module22)
	MR_init_entry1(transform_hlds__dependency_graph__add_pred_arcs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__add_pred_arcs_5_0);
	MR_init_label10(transform_hlds__dependency_graph__add_pred_arcs_5_0,34,3,4,5,9,6,7,11,12,13)
	MR_init_label3(transform_hlds__dependency_graph__add_pred_arcs_5_0,15,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_pred_arcs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__add_pred_arcs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_arcs_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__dependency_graph__add_pred_arcs_5_0_i4);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__dependency_graph__add_pred_arcs_5_0_i5);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_arcs_5_0_i7);
	}
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		transform_hlds__dependency_graph__add_pred_arcs_5_0_i9);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_arcs_5_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_arcs_5_0_i34);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		transform_hlds__dependency_graph__add_pred_arcs_5_0_i11);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		transform_hlds__dependency_graph__add_pred_arcs_5_0_i12);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_any_order_2_0,
		transform_hlds__dependency_graph__add_pred_arcs_5_0_i13);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__dependency_graph__add_pred_arcs_5_0_i15);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__lookup_key_3_0,
		transform_hlds__dependency_graph__add_pred_arcs_5_0_i16);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_0,
		transform_hlds__dependency_graph__add_pred_arcs_5_0_i18);
MR_def_label(transform_hlds__dependency_graph__add_pred_arcs_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__dependency_graph__add_pred_arcs_5_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__proc_label__make_proc_label_3_0);
MR_decl_entry(backend_libs__name_mangle__output_proc_label_3_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module23)
	MR_init_entry1(transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0);
	MR_init_label5(transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_prof_dep_graph_link'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_3_0,
		transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0_i2);
MR_def_label(transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_3_0,
		transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0_i3);
MR_def_label(transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0_i4);
MR_def_label(transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_3_0,
		transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0_i5);
MR_def_label(transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_3_0,
		transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0_i6);
MR_def_label(transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(varset__init_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_7_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module24)
	MR_init_entry1(transform_hlds__dependency_graph__write_dep_graph_link_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__write_dep_graph_link_5_0);
	MR_init_label10(transform_hlds__dependency_graph__write_dep_graph_link_5_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label4(transform_hlds__dependency_graph__write_dep_graph_link_5_0,12,14,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_dep_graph_link'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__write_dep_graph_link_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i2);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i3);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i4);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i5);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i6);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i7);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i8);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i9);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i10);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i11);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i12);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_7_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i14);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i15);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_7_0,
		transform_hlds__dependency_graph__write_dep_graph_link_5_0_i17);
MR_def_label(transform_hlds__dependency_graph__write_dep_graph_link_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_exported_1_0);
MR_decl_entry(digraph__lookup_to_3_0);
MR_decl_entry(set__member_2_1);
MR_decl_entry(list__member_2_1);
MR_decl_entry(list__member_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module25)
	MR_init_entry1(transform_hlds__dependency_graph__is_entry_point_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__is_entry_point_3_0);
	MR_init_label10(transform_hlds__dependency_graph__is_entry_point_3_0,4,5,8,9,10,11,13,14,16,17)
	MR_init_label2(transform_hlds__dependency_graph__is_entry_point_3_0,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_entry_point'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__is_entry_point_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__dependency_graph__is_entry_point_3_0_i4);
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_exported_1_0,
		transform_hlds__dependency_graph__is_entry_point_3_0_i5);
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__dependency_graph__is_entry_point_3_0_i2);
	}
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__dependency_graph__is_entry_point_3_0_i7);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		transform_hlds__dependency_graph__is_entry_point_3_0_i8);
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_0,
		transform_hlds__dependency_graph__is_entry_point_3_0_i9);
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(digraph__lookup_key_3_0,
		transform_hlds__dependency_graph__is_entry_point_3_0_i10);
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__lookup_to_3_0,
		transform_hlds__dependency_graph__is_entry_point_3_0_i11);
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_1,
		transform_hlds__dependency_graph__is_entry_point_3_0_i13);
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__lookup_vertex_3_0,
		transform_hlds__dependency_graph__is_entry_point_3_0_i14);
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__dependency_graph__is_entry_point_3_0_i16);
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__dependency_graph__is_entry_point_3_0_i17);
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,17)
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
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__dependency_graph__is_entry_point_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module26)
	MR_init_entry1(__Unify___transform_hlds__dependency_graph__include_imported_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__dependency_graph__include_imported_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__dependency_graph__include_imported_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module27)
	MR_init_entry1(__Compare___transform_hlds__dependency_graph__include_imported_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__dependency_graph__include_imported_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__dependency_graph__include_imported_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module28)
	MR_init_entry1(__Unify___transform_hlds__dependency_graph__scc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__dependency_graph__scc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dependency_graph__scc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
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

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module29)
	MR_init_entry1(__Compare___transform_hlds__dependency_graph__scc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__dependency_graph__scc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dependency_graph__scc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
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


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module30)
	MR_init_entry1(__Unify___transform_hlds__dependency_graph__scc_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__dependency_graph__scc_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dependency_graph__scc_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module31)
	MR_init_entry1(__Compare___transform_hlds__dependency_graph__scc_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__dependency_graph__scc_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dependency_graph__scc_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module32)
	MR_init_entry1(__Unify___transform_hlds__dependency_graph__scc_pred_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__dependency_graph__scc_pred_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dependency_graph__scc_pred_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,0);
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

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module33)
	MR_init_entry1(__Compare___transform_hlds__dependency_graph__scc_pred_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__dependency_graph__scc_pred_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dependency_graph__scc_pred_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module34)
	MR_init_entry1(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__dependency_graph__add_pred_nodes_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module35)
	MR_init_entry1(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__dependency_graph__add_pred_arcs_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module36)
	MR_init_entry1(fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module37)
	MR_init_entry1(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__dependency_graph__add_pred_proc_nodes_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module38)
	MR_init_entry1(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(transform_hlds__dependency_graph__add_pred_proc_arcs_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__std_util__id_1_0);

MR_BEGIN_MODULE(transform_hlds__dependency_graph_module39)
	MR_init_entry1(fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__std_util__id_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module40)
	MR_init_entry1(fn__transform_hlds__dependency_graph__IntroducedFrom__func__add_pred_arcs__338__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__dependency_graph__IntroducedFrom__func__add_pred_arcs__338__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__add_pred_arcs__338__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__dependency_graph__IntroducedFrom__func__add_pred_arcs__338__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module41)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0);
	MR_init_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0,11,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__add_proc_nodes__[3]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__add_vertex_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module42)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0);
	MR_init_label6(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0,14,4,5,7,8,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_graph_nodes__ho3__[4]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(digraph__lookup_key_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__lookup_from_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0_i7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0_i14);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module43)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0);
	MR_init_label6(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0,14,4,5,7,8,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_graph_nodes__ho4__[4]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(digraph__lookup_key_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__lookup_from_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0_i7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0_i14);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module44)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0);
	MR_init_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0,11,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_graph_children__ho5__[5]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0_i13);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(digraph__lookup_vertex_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__dependency_graph__write_prof_dep_graph_link_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dependency_graph_module45)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0);
	MR_init_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0,11,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_graph_children__ho6__[5]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0_i13);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(digraph__lookup_vertex_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__dependency_graph__write_dep_graph_link_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_100_101_112_101_110_100_101_110_99_121_95_103_114_97_112_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__dependency_graph_maybe_bunch_0(void)
{
	transform_hlds__dependency_graph_module0();
	transform_hlds__dependency_graph_module1();
	transform_hlds__dependency_graph_module2();
	transform_hlds__dependency_graph_module3();
	transform_hlds__dependency_graph_module4();
	transform_hlds__dependency_graph_module5();
	transform_hlds__dependency_graph_module6();
	transform_hlds__dependency_graph_module7();
	transform_hlds__dependency_graph_module8();
	transform_hlds__dependency_graph_module9();
	transform_hlds__dependency_graph_module10();
	transform_hlds__dependency_graph_module11();
	transform_hlds__dependency_graph_module12();
	transform_hlds__dependency_graph_module13();
	transform_hlds__dependency_graph_module14();
	transform_hlds__dependency_graph_module15();
	transform_hlds__dependency_graph_module16();
	transform_hlds__dependency_graph_module17();
	transform_hlds__dependency_graph_module18();
	transform_hlds__dependency_graph_module19();
	transform_hlds__dependency_graph_module20();
	transform_hlds__dependency_graph_module21();
	transform_hlds__dependency_graph_module22();
	transform_hlds__dependency_graph_module23();
	transform_hlds__dependency_graph_module24();
	transform_hlds__dependency_graph_module25();
	transform_hlds__dependency_graph_module26();
	transform_hlds__dependency_graph_module27();
	transform_hlds__dependency_graph_module28();
	transform_hlds__dependency_graph_module29();
	transform_hlds__dependency_graph_module30();
	transform_hlds__dependency_graph_module31();
	transform_hlds__dependency_graph_module32();
	transform_hlds__dependency_graph_module33();
	transform_hlds__dependency_graph_module34();
	transform_hlds__dependency_graph_module35();
	transform_hlds__dependency_graph_module36();
	transform_hlds__dependency_graph_module37();
	transform_hlds__dependency_graph_module38();
	transform_hlds__dependency_graph_module39();
}

static void mercury__transform_hlds__dependency_graph_maybe_bunch_1(void)
{
	transform_hlds__dependency_graph_module40();
	transform_hlds__dependency_graph_module41();
	transform_hlds__dependency_graph_module42();
	transform_hlds__dependency_graph_module43();
	transform_hlds__dependency_graph_module44();
	transform_hlds__dependency_graph_module45();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__dependency_graph__init(void);
void mercury__transform_hlds__dependency_graph__init_type_tables(void);
void mercury__transform_hlds__dependency_graph__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__dependency_graph__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__dependency_graph__init_complexity_procs(void);
#endif

void mercury__transform_hlds__dependency_graph__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__dependency_graph_maybe_bunch_0();
	mercury__transform_hlds__dependency_graph_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dependency_graph__type_ctor_info_include_imported_0,
		transform_hlds__dependency_graph__include_imported_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_0,
		transform_hlds__dependency_graph__scc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_id_0,
		transform_hlds__dependency_graph__scc_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_pred_map_0,
		transform_hlds__dependency_graph__scc_pred_map_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__, 5) =
			MR_ENTRY_AP(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__, 6) =
			MR_ENTRY_AP(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__, 7) =
			MR_ENTRY_AP(fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_proc_id__arity0__, 5) =
			MR_ENTRY_AP(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_proc_id__arity0__, 6) =
			MR_ENTRY_AP(transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_proc_id__arity0__, 7) =
			MR_ENTRY_AP(fn__transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__transform_hlds__dependency_graph__init_debugger();
}

void mercury__transform_hlds__dependency_graph__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dependency_graph__type_ctor_info_include_imported_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dependency_graph__type_ctor_info_scc_pred_map_0);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_transform_hlds__dependency_graph__type_class_decl_dependency_node_1);
	}
}


void mercury__transform_hlds__dependency_graph__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__dependency_graph__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__dependency_graph);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__dependency_graph__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
