/*
** Automatically generated from `graph.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__graph__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "io.int2"
#include "io.mh"

#line 27 "graph.c"
#line 142 "io.int2"
#include "string.mh"

#line 31 "graph.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "graph.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "graph.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 43 "graph.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 47 "graph.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 51 "graph.c"
#line 148 "io.opt"
#include "dir.mh"

#line 55 "graph.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 59 "graph.c"
#line 4 "char.opt"
#include "char.mh"

#line 63 "graph.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "graph.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "graph.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 75 "graph.c"
#line 23 "store.opt"
#include "store.mh"

#line 79 "graph.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 83 "graph.c"
#line 4 "int.opt"
#include "int.mh"

#line 87 "graph.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 91 "graph.c"
#line 3 "list.opt"
#include "list.mh"

#line 95 "graph.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 99 "graph.c"
#line 100 "graph.c"
#include "graph.mh"

#line 103 "graph.c"
#line 104 "graph.c"
#ifndef GRAPH_DECL_GUARD
#define GRAPH_DECL_GUARD

#line 108 "graph.c"
#line 109 "graph.c"

#endif
#line 112 "graph.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[2];
	MR_Word * f2[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
	MR_Word * f7;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Word * f6;
	MR_Word * f7;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_graph__type_ctor_info_node_1,
	mercury_data_graph__type_ctor_info_graph_2,
	mercury_data_graph__type_ctor_info_graph_1,
	mercury_data_graph__type_ctor_info_arc_info_2,
	mercury_data_graph__type_ctor_info_arc_1,
	mercury_data_graph__type_ctor_info_arc_0;
MR_decl_label1(graph__arc_contents_5_0, 2)
MR_decl_label2(graph__det_insert_edge_6_0, 3,2)
MR_decl_label2(graph__det_insert_node_4_0, 3,2)
MR_decl_label6(graph__find_matching_nodes_3_0, 2,3,4,6,5,9)
MR_decl_label5(graph__insert_edge_6_0, 2,4,5,6,1)
MR_decl_label5(graph__insert_node_4_0, 6,7,4,10,11)
MR_decl_label4(graph__nodes_2_0, 2,3,4,6)
MR_decl_label8(graph__path_2_5_0, 1,4,6,5,7,10,3,12)
MR_decl_label2(graph__path_2_5_0, 15,17)
MR_decl_label7(graph__path_2_5_1, 1,4,7,3,9,12,14)
MR_decl_label2(graph__search_node_3_0, 1,2)
MR_decl_label2(graph__select_node_3_0, 1,2)
MR_decl_label4(graph__set_edge_6_0, 2,3,4,5)
MR_decl_label2(graph__set_node_4_0, 2,3)
MR_decl_label5(graph__successors_3_0, 2,3,4,5,7)
MR_decl_label1(__Unify___graph__arc_0_0, 3)
MR_decl_label1(__Unify___graph__arc_1_0, 4)
MR_decl_label6(__Unify___graph__arc_info_2_0, 5,4,6,35,12,1)
MR_decl_label4(__Unify___graph__graph_2_0, 4,6,10,1)
MR_decl_label1(__Unify___graph__node_1_0, 4)
MR_decl_label2(__Compare___graph__arc_0_0, 2,3)
MR_decl_label3(__Compare___graph__arc_1_0, 4,11,5)
MR_decl_label8(__Compare___graph__arc_info_2_0, 3,2,6,7,9,14,15,17)
MR_decl_label1(__Compare___graph__arc_info_2_0, 49)
MR_decl_label8(__Compare___graph__graph_2_0, 3,2,6,7,9,14,15,17)
MR_decl_label3(__Compare___graph__graph_2_0, 21,25,65)
MR_decl_label3(__Compare___graph__node_1_0, 4,11,5)
MR_def_extern_entry(graph__init_1_0)
MR_def_extern_entry(fn__graph__init_0_0)
MR_def_extern_entry(graph__set_node_4_0)
MR_def_extern_entry(graph__insert_node_4_0)
MR_def_extern_entry(graph__det_insert_node_4_0)
MR_def_extern_entry(graph__search_node_3_0)
MR_def_extern_entry(graph__find_matching_nodes_3_0)
MR_def_extern_entry(fn__graph__find_matching_nodes_2_0)
MR_def_extern_entry(graph__node_contents_3_0)
MR_def_extern_entry(fn__graph__node_contents_2_0)
MR_def_extern_entry(graph__successors_3_0)
MR_def_extern_entry(fn__graph__successors_2_0)
MR_def_extern_entry(graph__nodes_2_0)
MR_def_extern_entry(fn__graph__nodes_1_0)
MR_def_extern_entry(graph__set_edge_6_0)
MR_def_extern_entry(graph__insert_edge_6_0)
MR_def_extern_entry(graph__det_insert_edge_6_0)
MR_def_extern_entry(graph__arc_contents_5_0)
MR_def_extern_entry(graph__path_2_5_0)
MR_def_extern_entry(graph__path_2_5_1)
MR_def_extern_entry(graph__path_4_0)
MR_def_extern_entry(graph__path_4_1)
MR_def_extern_entry(graph__select_node_3_0)
MR_def_extern_entry(__Unify___graph__arc_0_0)
MR_def_extern_entry(__Compare___graph__arc_0_0)
MR_def_extern_entry(__Unify___graph__arc_1_0)
MR_def_extern_entry(__Compare___graph__arc_1_0)
MR_def_extern_entry(__Unify___graph__arc_info_2_0)
MR_def_extern_entry(__Compare___graph__arc_info_2_0)
MR_def_extern_entry(__Unify___graph__graph_1_0)
MR_def_extern_entry(__Compare___graph__graph_1_0)
MR_def_extern_entry(__Unify___graph__graph_2_0)
MR_def_extern_entry(__Compare___graph__graph_2_0)
MR_def_extern_entry(__Unify___graph__node_1_0)
MR_def_extern_entry(__Compare___graph__node_1_0)
MR_decl_static(fn__f_103_114_97_112_104_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
0,
0
},
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
MR_CTOR1_ADDR(graph, node),
1
},
{
MR_LIST_CTOR_ADDR,
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,0),
1
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__graph__find_matching_nodes_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__graph__find_matching_nodes_3_0_1,
MR_COMMON(3,0),
4,
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(2,0),
1,
MR_COMMON(1,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__graph__find_matching_nodes_3_0_2;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__graph__find_matching_nodes_3_0_2,
MR_COMMON(3,0),
4,
MR_CTOR0_ADDR(private_builtin, type_info),
1,
MR_COMMON(1,1),
MR_COMMON(1,1)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc mercury_data_graph__notag_functor_desc_node_1 = {
	"node",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_graph__functor_number_map_node_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_graph__type_ctor_info_node_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___graph__node_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___graph__node_1_0)),
	"graph",
	"node",
	{ (void *)&mercury_data_graph__notag_functor_desc_node_1 },
	{ (void *)&mercury_data_graph__notag_functor_desc_node_1 },
	1,
	4,
	mercury_data_graph__functor_number_map_node_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_graph__pti_node_1__pseudo_1 = {
	&mercury_data_graph__type_ctor_info_node_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_graph__pti_node_1__pseudo_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_graph__pti_node_1__pseudo_1,
	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_graph__pti_arc_1__pseudo_2 = {
	&mercury_data_graph__type_ctor_info_arc_1,
{	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_graph__pti_arc_info_2__pseudo_1__pseudo_2 = {
	&mercury_data_graph__type_ctor_info_arc_info_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_graph__pti_arc_1__pseudo_2__pseudo_graph__pti_arc_info_2__pseudo_1__pseudo_2 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_graph__pti_arc_1__pseudo_2,
	(MR_PseudoTypeInfo) &mercury_data_graph__pti_arc_info_2__pseudo_1__pseudo_2
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_graph__pti_arc_1__pseudo_2__pseudo_graph__pti_node_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_graph__pti_arc_1__pseudo_2,
	(MR_PseudoTypeInfo) &mercury_data_graph__pti_node_1__pseudo_1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_graph__pti_node_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_graph__pti_arc_1__pseudo_2__pseudo_graph__pti_node_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_graph__pti_node_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_graph__pti_arc_1__pseudo_2__pseudo_graph__pti_node_1__pseudo_1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

const MR_PseudoTypeInfo mercury_data_graph__field_types_graph_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_graph__pti_node_1__pseudo_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_graph__pti_arc_1__pseudo_2__pseudo_graph__pti_arc_info_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_graph__pti_node_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_graph__pti_arc_1__pseudo_2__pseudo_graph__pti_node_1__pseudo_1
};

const MR_ConstString mercury_data_graph__field_names_graph_2_0[] = {
	"node_supply",
	"arc_supply",
	"node_map",
	"arc_map",
	"edge_map"
};

static const MR_DuFunctorDesc mercury_data_graph__du_functor_desc_graph_2_0 = {
	"graph",
	5,
	28,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_graph__field_types_graph_2_0,
	mercury_data_graph__field_names_graph_2_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_graph__du_stag_ordered_graph_2_0[] = {
	&mercury_data_graph__du_functor_desc_graph_2_0

};

const MR_DuPtagLayout mercury_data_graph__du_ptag_ordered_graph_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_graph__du_stag_ordered_graph_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_graph__du_name_ordered_graph_2[] = {
	&mercury_data_graph__du_functor_desc_graph_2_0
};

const MR_Integer mercury_data_graph__functor_number_map_graph_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_graph__type_ctor_info_graph_2 = {
	2,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___graph__graph_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___graph__graph_2_0)),
	"graph",
	"graph",
	{ (void *)mercury_data_graph__du_name_ordered_graph_2 },
	{ (void *)mercury_data_graph__du_ptag_ordered_graph_2 },
	1,
	4,
	mercury_data_graph__functor_number_map_graph_2
};
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_graph__pti_graph_2__pseudo_1__plain_unit__type_ctor_info_unit_0 = {
	&mercury_data_graph__type_ctor_info_graph_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_unit__type_ctor_info_unit_0
}};

const MR_TypeCtorInfo_Struct mercury_data_graph__type_ctor_info_graph_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___graph__graph_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___graph__graph_1_0)),
	"graph",
	"graph",
	{ 0 },
	{ (void *)&mercury_data_graph__pti_graph_2__pseudo_1__plain_unit__type_ctor_info_unit_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_graph__field_types_arc_info_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_graph__pti_node_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_graph__pti_node_1__pseudo_1,
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_graph__du_functor_desc_arc_info_2_0 = {
	"arc_info",
	3,
	7,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_graph__field_types_arc_info_2_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_graph__du_stag_ordered_arc_info_2_0[] = {
	&mercury_data_graph__du_functor_desc_arc_info_2_0

};

const MR_DuPtagLayout mercury_data_graph__du_ptag_ordered_arc_info_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_graph__du_stag_ordered_arc_info_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_graph__du_name_ordered_arc_info_2[] = {
	&mercury_data_graph__du_functor_desc_arc_info_2_0
};

const MR_Integer mercury_data_graph__functor_number_map_arc_info_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_graph__type_ctor_info_arc_info_2 = {
	2,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___graph__arc_info_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___graph__arc_info_2_0)),
	"graph",
	"arc_info",
	{ (void *)mercury_data_graph__du_name_ordered_arc_info_2 },
	{ (void *)mercury_data_graph__du_ptag_ordered_arc_info_2 },
	1,
	4,
	mercury_data_graph__functor_number_map_arc_info_2
};

static const MR_NotagFunctorDesc mercury_data_graph__notag_functor_desc_arc_1 = {
	"arc",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_graph__functor_number_map_arc_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_graph__type_ctor_info_arc_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___graph__arc_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___graph__arc_1_0)),
	"graph",
	"arc",
	{ (void *)&mercury_data_graph__notag_functor_desc_arc_1 },
	{ (void *)&mercury_data_graph__notag_functor_desc_arc_1 },
	1,
	4,
	mercury_data_graph__functor_number_map_arc_1
};

static const MR_FA_TypeInfo_Struct1 mercury_data_graph__ti_arc_1unit__type_ctor_info_unit_0 = {
	&mercury_data_graph__type_ctor_info_arc_1,
{	(MR_TypeInfo) &mercury_data_unit__type_ctor_info_unit_0
}};

const MR_TypeCtorInfo_Struct mercury_data_graph__type_ctor_info_arc_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___graph__arc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___graph__arc_0_0)),
	"graph",
	"arc",
	{ 0 },
	{ (void *)&mercury_data_graph__ti_arc_1unit__type_ctor_info_unit_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__graph__find_matching_nodes_3_0_1 = {
{
MR_PREDICATE,
"graph",
"graph",
"select_node",
3,
0
},
"graph",
"graph.m",
260,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__graph__find_matching_nodes_3_0_2 = {
{
MR_PREDICATE,
"list",
"list",
"cons",
3,
0
},
"graph",
"solutions.opt",
58,
"d1;c3;"
};


MR_BEGIN_MODULE(graph_module0)
	MR_init_entry1(graph__init_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module1)
	MR_init_entry1(fn__graph__init_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__graph__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__set_4_0);

MR_BEGIN_MODULE(graph_module2)
	MR_init_entry1(graph__set_node_4_0);
	MR_init_label2(graph__set_node_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__set_node_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__set_4_0,
		graph__set_node_4_0_i2);
MR_def_label(graph__set_node_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr4 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(graph, arc);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tempr5 = MR_sv(4);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr5;
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__set_4_0,
		graph__set_node_4_0_i3);
MR_def_label(graph__set_node_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__member_3_0);
MR_decl_entry(builtin__unify_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(graph_module3)
	MR_init_entry1(graph__insert_node_4_0);
	MR_init_label5(graph__insert_node_4_0,6,7,4,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__insert_node_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(graph__insert_node_4_0_i4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	}
	MR_np_call_localret_ent(tree234__member_3_0,
		graph__insert_node_4_0_i6);
MR_def_label(graph__insert_node_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(builtin__unify_2_0,
		graph__insert_node_4_0_i7);
MR_def_label(graph__insert_node_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(graph__insert_node_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr1, 4);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr4, 1) = MR_r1;
	MR_sv(1) = MR_tempr3;
	MR_sv(3) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__set_4_0,
		graph__insert_node_4_0_i10);
MR_def_label(graph__insert_node_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr4 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(graph, arc);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tempr5 = MR_sv(3);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr5;
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__set_4_0,
		graph__insert_node_4_0_i11);
MR_def_label(graph__insert_node_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(graph_module4)
	MR_init_entry1(graph__det_insert_node_4_0);
	MR_init_label2(graph__det_insert_node_4_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__det_insert_node_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(graph__insert_node_4_0,
		graph__det_insert_node_4_0_i3);
MR_def_label(graph__det_insert_node_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(graph__det_insert_node_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
MR_def_label(graph__det_insert_node_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("graph.det_insert_node: node already exists.", 43);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(graph_module5)
	MR_init_entry1(graph__search_node_3_0);
	MR_init_label2(graph__search_node_3_0,1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__search_node_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred graph.search_node/3-0", 3,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_fv(1) = MR_r4;
	MR_fv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_fv(3);
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	}
	MR_np_call_localret_ent(tree234__member_3_0,
		graph__search_node_3_0_i1);
MR_def_label(graph__search_node_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r1;
	MR_r1 = MR_fv(3);
	MR_r3 = MR_r2;
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(builtin__unify_2_0,
		graph__search_node_3_0_i2);
MR_def_label(graph__search_node_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__cons_3_0);
MR_decl_entry(solutions__builtin_aggregate_4_7);
MR_decl_entry(list__length_2_3_0);
MR_decl_entry(list__merge_sort_2_3_0);
MR_decl_entry(list__remove_adjacent_dups_2_3_0);

MR_BEGIN_MODULE(graph_module6)
	MR_init_entry1(graph__find_matching_nodes_3_0);
	MR_init_label6(graph__find_matching_nodes_3_0,2,3,4,6,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__find_matching_nodes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(graph__select_node_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r3, 2);
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(list__cons_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_7,
		graph__find_matching_nodes_3_0_i2);
MR_def_label(graph__find_matching_nodes_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		graph__find_matching_nodes_3_0_i3);
MR_def_label(graph__find_matching_nodes_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		graph__find_matching_nodes_3_0_i4);
MR_def_label(graph__find_matching_nodes_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(graph__find_matching_nodes_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(graph__find_matching_nodes_3_0_i5);
MR_def_label(graph__find_matching_nodes_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__remove_adjacent_dups_2_3_0,
		graph__find_matching_nodes_3_0_i5);
MR_def_label(graph__find_matching_nodes_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(graph__find_matching_nodes_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(graph__find_matching_nodes_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module7)
	MR_init_entry1(fn__graph__find_matching_nodes_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__graph__find_matching_nodes_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(graph__find_matching_nodes_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(graph_module8)
	MR_init_entry1(graph__node_contents_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__node_contents_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module9)
	MR_init_entry1(fn__graph__node_contents_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__graph__node_contents_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__values_2_3_0);

MR_BEGIN_MODULE(graph_module10)
	MR_init_entry1(graph__successors_3_0);
	MR_init_label5(graph__successors_3_0,2,3,4,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__successors_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(graph, arc);
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r3, 4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		graph__successors_3_0_i2);
MR_def_label(graph__successors_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(tree234__values_2_3_0,
		graph__successors_3_0_i3);
MR_def_label(graph__successors_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		graph__successors_3_0_i4);
MR_def_label(graph__successors_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		graph__successors_3_0_i5);
MR_def_label(graph__successors_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(graph__successors_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(graph__successors_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module11)
	MR_init_entry1(fn__graph__successors_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__graph__successors_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(graph__successors_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__keys_2_3_0);

MR_BEGIN_MODULE(graph_module12)
	MR_init_entry1(graph__nodes_2_0);
	MR_init_label4(graph__nodes_2_0,2,3,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__nodes_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__keys_2_3_0,
		graph__nodes_2_0_i2);
MR_def_label(graph__nodes_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		graph__nodes_2_0_i3);
MR_def_label(graph__nodes_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		graph__nodes_2_0_i4);
MR_def_label(graph__nodes_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(graph__nodes_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(graph__nodes_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module13)
	MR_init_entry1(fn__graph__nodes_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__graph__nodes_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(graph__nodes_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(graph_module14)
	MR_init_entry1(graph__set_edge_6_0);
	MR_init_label4(graph__set_edge_6_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__set_edge_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tempr6 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr6, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr6, 4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tempr7 = MR_r4;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr7;
	MR_tempr8 = MR_r5;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr8;
	MR_tfield(0, MR_tempr3, 2) = MR_r6;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_CTOR1_ADDR(graph, arc);
	MR_tempr9 = MR_r2;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_CTOR_ADDR(graph, arc_info, 2);
	MR_tfield(0, MR_tempr5, 1) = MR_r1;
	MR_tfield(0, MR_tempr5, 2) = MR_tempr9;
	MR_sv(1) = MR_tempr7;
	MR_sv(2) = MR_tempr8;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr5;
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(tree234__set_4_0,
		graph__set_edge_6_0_i2);
MR_def_label(graph__set_edge_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		graph__set_edge_6_0_i3);
MR_def_label(graph__set_edge_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(tree234__set_4_0,
		graph__set_edge_6_0_i4);
MR_def_label(graph__set_edge_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__set_4_0,
		graph__set_edge_6_0_i5);
MR_def_label(graph__set_edge_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__insert_4_0);

MR_BEGIN_MODULE(graph_module15)
	MR_init_entry1(graph__insert_edge_6_0);
	MR_init_label5(graph__insert_edge_6_0,2,4,5,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__insert_edge_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tempr6 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr6, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr6, 4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tempr7 = MR_r4;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr7;
	MR_tempr8 = MR_r5;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr8;
	MR_tfield(0, MR_tempr3, 2) = MR_r6;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_CTOR1_ADDR(graph, arc);
	MR_tempr9 = MR_r2;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_CTOR_ADDR(graph, arc_info, 2);
	MR_tfield(0, MR_tempr5, 1) = MR_r1;
	MR_tfield(0, MR_tempr5, 2) = MR_tempr9;
	MR_sv(1) = MR_tempr7;
	MR_sv(2) = MR_tempr8;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr5;
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(tree234__insert_4_0,
		graph__insert_edge_6_0_i2);
MR_def_label(graph__insert_edge_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(graph__insert_edge_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		graph__insert_edge_6_0_i4);
MR_def_label(graph__insert_edge_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(tree234__set_4_0,
		graph__insert_edge_6_0_i5);
MR_def_label(graph__insert_edge_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__set_4_0,
		graph__insert_edge_6_0_i6);
MR_def_label(graph__insert_edge_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(graph__insert_edge_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module16)
	MR_init_entry1(graph__det_insert_edge_6_0);
	MR_init_label2(graph__det_insert_edge_6_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__det_insert_edge_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(graph__insert_edge_6_0,
		graph__det_insert_edge_6_0_i3);
MR_def_label(graph__det_insert_edge_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(graph__det_insert_edge_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
MR_def_label(graph__det_insert_edge_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("graph.det_insert_edge: this edge is already in the graph.", 57);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module17)
	MR_init_entry1(graph__arc_contents_5_0);
	MR_init_label1(graph__arc_contents_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__arc_contents_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, arc);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(graph, arc_info, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_r3, 3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		graph__arc_contents_5_0_i2);
MR_def_label(graph__arc_contents_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(graph_module18)
	MR_init_entry1(graph__path_2_5_0);
	MR_init_label8(graph__path_2_5_0,1,4,6,5,7,10,3,12)
	MR_init_label2(graph__path_2_5_0,15,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__path_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred graph.path_2/5-0", 10,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_fv(8) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(graph, arc);
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_fv(1) = MR_r3;
	MR_fv(2) = MR_r5;
	MR_fv(3) = MR_r6;
	MR_fv(6) = MR_r1;
	MR_fv(7) = MR_tempr4;
	MR_fv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_ctfield(0, MR_r3, 4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		graph__path_2_5_0_i1);
MR_def_label(graph__path_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(graph__path_2_5_0_i3);
	MR_fv(4) = MR_r1;
	MR_r1 = MR_fv(8);
	MR_r2 = MR_fv(9);
	MR_r3 = MR_fv(4);
	MR_np_call_localret_ent(tree234__member_3_0,
		graph__path_2_5_0_i4);
MR_def_label(graph__path_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_fv(2) == MR_r2)) {
		MR_GOTO_LAB(graph__path_2_5_0_i6);
	}
	MR_fv(5) = MR_r1;
	MR_fv(10) = MR_r2;
	MR_GOTO_LAB(graph__path_2_5_0_i5);
MR_def_label(graph__path_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(3);
	MR_fv(5) = MR_r1;
	MR_r1 = MR_fv(9);
	MR_GOTO_LAB(graph__path_2_5_0_i7);
MR_def_label(graph__path_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_fv(2) != MR_fv(10))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(3);
	MR_r1 = MR_fv(9);
MR_def_label(graph__path_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r2;
	MR_fv(3) = MR_r3;
	MR_fv(9) = MR_r1;
	MR_np_call_localret_ent(list__member_2_0,
		graph__path_2_5_0_i10);
MR_def_label(graph__path_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_fv(2);
	MR_tempr2 = MR_fv(3);
	MR_r1 = MR_fv(9);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_fv(5);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr3;
	MR_succeed();
	}
MR_def_label(graph__path_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(8);
	MR_r2 = MR_fv(9);
	MR_r3 = MR_fv(4);
	MR_np_call_localret_ent(tree234__member_3_0,
		graph__path_2_5_0_i12);
MR_def_label(graph__path_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r1;
	MR_r1 = MR_fv(9);
	MR_r3 = MR_fv(3);
	MR_np_call_localret_ent(list__member_2_0,
		graph__path_2_5_0_i15);
MR_def_label(graph__path_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_fv(4);
	MR_r1 = MR_fv(5);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_fv(3);
	MR_r1 = MR_fv(6);
	MR_r2 = MR_fv(7);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_fv(2);
	}
	MR_np_localcall_lab(graph__path_2_5_0,
		graph__path_2_5_0_i17);
MR_def_label(graph__path_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module19)
	MR_init_entry1(graph__path_2_5_1);
	MR_init_label7(graph__path_2_5_1,1,4,7,3,9,12,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__path_2_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred graph.path_2/5-1", 9,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_fv(8) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(graph, arc);
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_fv(1) = MR_r3;
	MR_fv(3) = MR_r5;
	MR_fv(6) = MR_r1;
	MR_fv(7) = MR_tempr4;
	MR_fv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_ctfield(0, MR_r3, 4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		graph__path_2_5_1_i1);
MR_def_label(graph__path_2_5_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(graph__path_2_5_1_i3);
	MR_fv(4) = MR_r1;
	MR_r1 = MR_fv(8);
	MR_r2 = MR_fv(9);
	MR_r3 = MR_fv(4);
	MR_np_call_localret_ent(tree234__member_3_0,
		graph__path_2_5_1_i4);
MR_def_label(graph__path_2_5_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r2;
	MR_fv(5) = MR_r1;
	MR_r1 = MR_fv(9);
	MR_r3 = MR_fv(3);
	MR_np_call_localret_ent(list__member_2_0,
		graph__path_2_5_1_i7);
MR_def_label(graph__path_2_5_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_fv(2);
	MR_r1 = MR_fv(5);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(graph__path_2_5_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(8);
	MR_r2 = MR_fv(9);
	MR_r3 = MR_fv(4);
	MR_np_call_localret_ent(tree234__member_3_0,
		graph__path_2_5_1_i9);
MR_def_label(graph__path_2_5_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r2;
	MR_fv(4) = MR_r1;
	MR_r1 = MR_fv(9);
	MR_r3 = MR_fv(3);
	MR_np_call_localret_ent(list__member_2_0,
		graph__path_2_5_1_i12);
MR_def_label(graph__path_2_5_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_fv(2);
	MR_r1 = MR_fv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_fv(3);
	MR_r1 = MR_fv(6);
	MR_r2 = MR_fv(7);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(graph__path_2_5_1,
		graph__path_2_5_1_i14);
MR_def_label(graph__path_2_5_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module20)
	MR_init_entry1(graph__path_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__path_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(graph__path_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module21)
	MR_init_entry1(graph__path_4_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__path_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(graph__path_2_5_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module22)
	MR_init_entry1(graph__select_node_3_0);
	MR_init_label2(graph__select_node_3_0,1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__graph__select_node_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred graph.select_node/3-0", 3,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_fv(1) = MR_r3;
	MR_fv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_fv(3);
	}
	MR_np_call_localret_ent(tree234__member_3_0,
		graph__select_node_3_0_i1);
MR_def_label(graph__select_node_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r1;
	MR_r1 = MR_fv(3);
	MR_r3 = MR_r2;
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(builtin__unify_2_0,
		graph__select_node_3_0_i2);
MR_def_label(graph__select_node_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module23)
	MR_init_entry1(__Unify___graph__arc_0_0);
	MR_init_label1(__Unify___graph__arc_0_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___graph__arc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tempr2;
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___graph__arc_0_0_i3);
	}
	MR_r1 = (MR_tempr2 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___graph__arc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module24)
	MR_init_entry1(__Compare___graph__arc_0_0);
	MR_init_label2(__Compare___graph__arc_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___graph__arc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___graph__arc_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___graph__arc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___graph__arc_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___graph__arc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module25)
	MR_init_entry1(__Unify___graph__arc_1_0);
	MR_init_label1(__Unify___graph__arc_1_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___graph__arc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___graph__arc_1_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___graph__arc_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module26)
	MR_init_entry1(__Compare___graph__arc_1_0);
	MR_init_label3(__Compare___graph__arc_1_0,4,11,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___graph__arc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___graph__arc_1_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(__Compare___graph__arc_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___graph__arc_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(2))) {
		MR_GOTO_LAB(__Compare___graph__arc_1_0_i5);
	}
MR_def_label(__Compare___graph__arc_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___graph__arc_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module27)
	MR_init_entry1(__Unify___graph__arc_info_2_0);
	MR_init_label6(__Unify___graph__arc_info_2_0,5,4,6,35,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___graph__arc_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___graph__arc_info_2_0_i12);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(7) = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr3;
	if ((MR_tempr3 == MR_sv(4))) {
		MR_GOTO_LAB(__Unify___graph__arc_info_2_0_i5);
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(__Unify___graph__arc_info_2_0_i4);
	}
MR_def_label(__Unify___graph__arc_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(__Unify___graph__arc_info_2_0_i6);
MR_def_label(__Unify___graph__arc_info_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___graph__arc_info_2_0_i1);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r1 = MR_sv(7);
MR_def_label(__Unify___graph__arc_info_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) == MR_sv(5))) {
		MR_GOTO_LAB(__Unify___graph__arc_info_2_0_i35);
	}
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r1;
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___graph__arc_info_2_0_i1);
	}
MR_def_label(__Unify___graph__arc_info_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___graph__arc_info_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___graph__arc_info_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(graph_module28)
	MR_init_entry1(__Compare___graph__arc_info_2_0);
	MR_init_label8(__Compare___graph__arc_info_2_0,3,2,6,7,9,14,15,17)
	MR_init_label1(__Compare___graph__arc_info_2_0,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___graph__arc_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i2);
MR_def_label(__Compare___graph__arc_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___graph__arc_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i9);
	}
MR_def_label(__Compare___graph__arc_info_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i9);
MR_def_label(__Compare___graph__arc_info_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___graph__arc_info_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i49);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i17);
MR_def_label(__Compare___graph__arc_info_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i17);
MR_def_label(__Compare___graph__arc_info_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___graph__arc_info_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___graph__arc_info_2_0_i49);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___graph__arc_info_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module29)
	MR_init_entry1(__Unify___graph__graph_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___graph__graph_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___graph__graph_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module30)
	MR_init_entry1(__Compare___graph__graph_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___graph__graph_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___graph__graph_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(graph_module31)
	MR_init_entry1(__Unify___graph__graph_2_0);
	MR_init_label4(__Unify___graph__graph_2_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___graph__graph_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___graph__graph_2_0_i10);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r2;
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr5 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr4 != MR_tempr5)) {
		MR_GOTO_LAB(__Unify___graph__graph_2_0_i1);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr5 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr4 != MR_tempr5)) {
		MR_GOTO_LAB(__Unify___graph__graph_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_r1, 1) = MR_tempr3;
	MR_tempr4 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr4, 3);
	MR_tempr5 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_ctfield(0, MR_tempr4, 2);
	MR_r4 = MR_ctfield(0, MR_tempr5, 2);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___graph__graph_2_0_i4);
MR_def_label(__Unify___graph__graph_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___graph__graph_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, arc);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(graph, arc_info, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___graph__graph_2_0_i6);
MR_def_label(__Unify___graph__graph_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___graph__graph_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___graph__graph_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___graph__graph_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(graph_module32)
	MR_init_entry1(__Compare___graph__graph_2_0);
	MR_init_label8(__Compare___graph__graph_2_0,3,2,6,7,9,14,15,17)
	MR_init_label3(__Compare___graph__graph_2_0,21,25,65)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___graph__graph_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___graph__graph_2_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_GOTO_LAB(__Compare___graph__graph_2_0_i2);
MR_def_label(__Compare___graph__graph_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___graph__graph_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___graph__graph_2_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___graph__graph_2_0_i9);
	}
MR_def_label(__Compare___graph__graph_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___graph__graph_2_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___graph__graph_2_0_i9);
MR_def_label(__Compare___graph__graph_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___graph__graph_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___graph__graph_2_0_i65);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(__Compare___graph__graph_2_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___graph__graph_2_0_i17);
MR_def_label(__Compare___graph__graph_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(5))) {
		MR_GOTO_LAB(__Compare___graph__graph_2_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___graph__graph_2_0_i17);
MR_def_label(__Compare___graph__graph_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___graph__graph_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___graph__graph_2_0_i65);
	}
	MR_r2 = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___graph__graph_2_0_i21);
MR_def_label(__Compare___graph__graph_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___graph__graph_2_0_i65);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, arc);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(10);
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(graph, arc_info, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___graph__graph_2_0_i25);
MR_def_label(__Compare___graph__graph_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___graph__graph_2_0_i65);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, node);
	MR_tfield(0, MR_r1, 1) = MR_sv(9);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(graph, arc);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
MR_def_label(__Compare___graph__graph_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module33)
	MR_init_entry1(__Unify___graph__node_1_0);
	MR_init_label1(__Unify___graph__node_1_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___graph__node_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___graph__node_1_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___graph__node_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module34)
	MR_init_entry1(__Compare___graph__node_1_0);
	MR_init_label3(__Compare___graph__node_1_0,4,11,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___graph__node_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___graph__node_1_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(__Compare___graph__node_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___graph__node_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(2))) {
		MR_GOTO_LAB(__Compare___graph__node_1_0_i5);
	}
MR_def_label(__Compare___graph__node_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___graph__node_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graph_module35)
	MR_init_entry1(fn__f_103_114_97_112_104_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_103_114_97_112_104_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__graph_maybe_bunch_0(void)
{
	graph_module0();
	graph_module1();
	graph_module2();
	graph_module3();
	graph_module4();
	graph_module5();
	graph_module6();
	graph_module7();
	graph_module8();
	graph_module9();
	graph_module10();
	graph_module11();
	graph_module12();
	graph_module13();
	graph_module14();
	graph_module15();
	graph_module16();
	graph_module17();
	graph_module18();
	graph_module19();
	graph_module20();
	graph_module21();
	graph_module22();
	graph_module23();
	graph_module24();
	graph_module25();
	graph_module26();
	graph_module27();
	graph_module28();
	graph_module29();
	graph_module30();
	graph_module31();
	graph_module32();
	graph_module33();
	graph_module34();
	graph_module35();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__graph__init(void);
void mercury__graph__init_type_tables(void);
void mercury__graph__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__graph__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__graph__init_complexity_procs(void);
#endif

void mercury__graph__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__graph_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_graph__type_ctor_info_node_1,
		graph__node_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_graph__type_ctor_info_graph_2,
		graph__graph_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_graph__type_ctor_info_graph_1,
		graph__graph_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_graph__type_ctor_info_arc_info_2,
		graph__arc_info_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_graph__type_ctor_info_arc_1,
		graph__arc_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_graph__type_ctor_info_arc_0,
		graph__arc_0_0);
	mercury__graph__init_debugger();
}

void mercury__graph__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_graph__type_ctor_info_node_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_graph__type_ctor_info_graph_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_graph__type_ctor_info_graph_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_graph__type_ctor_info_arc_info_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_graph__type_ctor_info_arc_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_graph__type_ctor_info_arc_0);
	}
}


void mercury__graph__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__graph__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__graph__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
