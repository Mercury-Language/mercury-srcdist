/*
** Automatically generated from `matching.m'
** by the Mercury compiler,
** version rotd-2011-09-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__backend_libs__matching__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "backend_libs.matching.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "backend_libs.matching.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 36 "backend_libs.matching.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "backend_libs.matching.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "backend_libs.matching.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "backend_libs.matching.c"
#line 49 "backend_libs.matching.c"
#include "backend_libs.matching.mh"

#line 52 "backend_libs.matching.c"
#line 53 "backend_libs.matching.c"
#ifndef BACKEND_LIBS__MATCHING_DECL_GUARD
#define BACKEND_LIBS__MATCHING_DECL_GUARD

#line 57 "backend_libs.matching.c"
#line 58 "backend_libs.matching.c"

#endif
#line 61 "backend_libs.matching.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
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

extern const MR_TypeCtorInfo_Struct
	mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0,
	mercury_data_backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0,
	mercury_data_backend_libs__matching__type_ctor_info_benefit_operation_0,
	mercury_data_backend_libs__matching__type_ctor_info_cost_node_0,
	mercury_data_backend_libs__matching__type_ctor_info_cost_operation_0,
	mercury_data_backend_libs__matching__type_ctor_info_edge_list_0,
	mercury_data_backend_libs__matching__type_ctor_info_field_costs_benefits_0,
	mercury_data_backend_libs__matching__type_ctor_info_matching_0,
	mercury_data_backend_libs__matching__type_ctor_info_matching_params_0,
	mercury_data_backend_libs__matching__type_ctor_info_stack_slot_graph_0;
MR_decl_label6(backend_libs__matching__add_alternates_7_0, 30,3,8,14,4,5)
MR_decl_label3(backend_libs__matching__add_benefit_cost_links_4_0, 4,6,2)
MR_decl_label3(backend_libs__matching__add_cost_benefit_links_4_0, 4,6,2)
MR_decl_label1(backend_libs__matching__adjacents_4_0, 3)
MR_decl_label4(backend_libs__matching__create_graph_links_5_0, 3,6,8,11)
MR_decl_label4(backend_libs__matching__find_cell_var_loads_for_field_4_0, 20,3,5,4)
MR_decl_label10(backend_libs__matching__find_via_cell_vars_9_0, 5,6,3,8,9,13,14,16,17,20)
MR_decl_label10(backend_libs__matching__find_via_cell_vars_9_0, 21,24,25,26,27,28,29,30,31,33)
MR_decl_label10(backend_libs__matching__find_via_cell_vars_9_0, 34,36,37,39,41,43,44,45,46,47)
MR_decl_label7(backend_libs__matching__find_via_cell_vars_9_0, 48,49,50,51,52,53,55)
MR_decl_label7(backend_libs__matching__maximize_matching_4_0, 16,3,4,5,6,8,2)
MR_decl_label8(backend_libs__matching__reachable_by_alternating_path_5_0, 21,3,5,7,8,9,10,12)
MR_decl_label3(backend_libs__matching__simplify_segment_4_0, 3,5,1)
MR_decl_label2(fn__backend_libs__matching__adj_to_matched_cost_2_0, 3,2)
MR_decl_label9(fn__backend_libs__matching__augpath_bf_4_0, 35,2,5,6,10,13,11,17,1)
MR_decl_label7(fn__backend_libs__matching__compute_via_cell_vars_2_0, 36,5,6,9,7,13,12)
MR_decl_label3(fn__backend_libs__matching__create_graph_1_0, 3,5,9)
MR_decl_label10(fn__backend_libs__matching__find_costs_benefits_6_0, 2,4,3,11,10,20,21,22,25,26)
MR_decl_label1(fn__backend_libs__matching__find_costs_benefits_6_0, 27)
MR_decl_label2(fn__backend_libs__matching__find_unmatched_cost_1_0, 4,1)
MR_decl_label4(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0, 27,4,6,5)
MR_decl_label4(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0, 27,4,6,5)
MR_decl_label3(fn__backend_libs__matching__initial_queue_2_0, 14,3,5)
MR_decl_label2(fn__backend_libs__matching__make_benefit_op_copies_2_0, 4,2)
MR_decl_label2(fn__backend_libs__matching__make_cost_op_copies_2_0, 4,2)
MR_decl_label2(fn__backend_libs__matching__maximal_matching_2_0, 2,3)
MR_decl_label3(fn__backend_libs__matching__number_segments_2_0, 6,7,2)
MR_decl_label1(fn__backend_libs__matching__reachable_by_alternating_path_3_0, 2)
MR_decl_label1(fn__backend_libs__matching__replicate_benefit_op_3_0, 3)
MR_decl_label1(fn__backend_libs__matching__replicate_cost_op_3_0, 3)
MR_decl_label4(fn__backend_libs__matching__update_matches_2_0, 12,3,4,5)
MR_decl_label3(__Unify___backend_libs__matching__benefit_node_0_0, 4,6,1)
MR_decl_label3(__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0, 4,9,1)
MR_decl_label3(__Unify___backend_libs__matching__benefit_operation_0_0, 16,5,1)
MR_decl_label3(__Unify___backend_libs__matching__cost_node_0_0, 4,6,1)
MR_decl_label3(__Unify___backend_libs__matching__cost_operation_0_0, 10,5,1)
MR_decl_label4(__Unify___backend_libs__matching__field_costs_benefits_0_0, 4,6,10,1)
MR_decl_label3(__Unify___backend_libs__matching__matching_0_0, 4,8,1)
MR_decl_label2(__Unify___backend_libs__matching__matching_params_0_0, 4,1)
MR_decl_label3(__Unify___backend_libs__matching__stack_slot_graph_0_0, 5,10,1)
MR_decl_label4(__Compare___backend_libs__matching__benefit_node_0_0, 3,2,5,21)
MR_decl_label4(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0, 3,2,5,28)
MR_decl_label5(__Compare___backend_libs__matching__benefit_operation_0_0, 3,2,19,7,5)
MR_decl_label4(__Compare___backend_libs__matching__cost_node_0_0, 3,2,5,21)
MR_decl_label4(__Compare___backend_libs__matching__cost_operation_0_0, 18,7,5,9)
MR_decl_label5(__Compare___backend_libs__matching__field_costs_benefits_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___backend_libs__matching__matching_0_0, 3,2,5,21)
MR_decl_label9(__Compare___backend_libs__matching__matching_params_0_0, 3,2,5,9,13,17,21,25,61)
MR_decl_label4(__Compare___backend_libs__matching__stack_slot_graph_0_0, 3,2,6,29)
MR_decl_static(fn__backend_libs__matching__number_segments_2_0)
MR_decl_static(fn__backend_libs__matching__create_graph_1_0)
MR_decl_static(fn__backend_libs__matching__update_matches_2_0)
MR_decl_static(fn__backend_libs__matching__initial_queue_2_0)
MR_decl_static(fn__backend_libs__matching__find_unmatched_cost_1_0)
MR_decl_static(backend_libs__matching__add_alternates_7_0)
MR_decl_static(fn__backend_libs__matching__augpath_bf_4_0)
MR_decl_static(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0)
MR_decl_static(backend_libs__matching__maximize_matching_4_0)
MR_decl_static(fn__backend_libs__matching__maximal_matching_2_0)
MR_decl_static(backend_libs__matching__reachable_by_alternating_path_5_0)
MR_decl_static(fn__backend_libs__matching__reachable_by_alternating_path_3_0)
MR_decl_static(fn__backend_libs__matching__compute_via_cell_vars_2_0)
MR_decl_static(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0)
MR_def_extern_entry(backend_libs__matching__find_via_cell_vars_9_0)
MR_decl_static(backend_libs__matching__simplify_segment_4_0)
MR_decl_static(backend_libs__matching__find_cell_var_loads_for_field_4_0)
MR_decl_static(fn__backend_libs__matching__find_costs_benefits_6_0)
MR_decl_static(fn__backend_libs__matching__make_cost_op_copies_2_0)
MR_decl_static(fn__backend_libs__matching__replicate_cost_op_3_0)
MR_decl_static(fn__backend_libs__matching__make_benefit_op_copies_2_0)
MR_decl_static(fn__backend_libs__matching__replicate_benefit_op_3_0)
MR_decl_static(backend_libs__matching__gather_benefits_3_0)
MR_decl_static(backend_libs__matching__gather_costs_3_0)
MR_decl_static(backend_libs__matching__create_graph_links_5_0)
MR_decl_static(backend_libs__matching__add_cost_benefit_links_4_0)
MR_decl_static(backend_libs__matching__add_benefit_cost_links_4_0)
MR_decl_static(backend_libs__matching__adjacents_4_0)
MR_decl_static(fn__backend_libs__matching__adj_to_matched_cost_2_0)
MR_decl_static(backend_libs__matching__realized_costs_benefits_2_0)
MR_decl_static(fn__backend_libs__matching__project_benefit_op_1_0)
MR_decl_static(fn__backend_libs__matching__project_cost_op_1_0)
MR_def_extern_entry(__Unify___backend_libs__matching__benefit_node_0_0)
MR_def_extern_entry(__Compare___backend_libs__matching__benefit_node_0_0)
MR_decl_static(__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0)
MR_decl_static(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0)
MR_decl_static(__Unify___backend_libs__matching__benefit_operation_0_0)
MR_decl_static(__Compare___backend_libs__matching__benefit_operation_0_0)
MR_def_extern_entry(__Unify___backend_libs__matching__cost_node_0_0)
MR_def_extern_entry(__Compare___backend_libs__matching__cost_node_0_0)
MR_decl_static(__Unify___backend_libs__matching__cost_operation_0_0)
MR_decl_static(__Compare___backend_libs__matching__cost_operation_0_0)
MR_decl_static(__Unify___backend_libs__matching__edge_list_0_0)
MR_decl_static(__Compare___backend_libs__matching__edge_list_0_0)
MR_decl_static(__Unify___backend_libs__matching__field_costs_benefits_0_0)
MR_decl_static(__Compare___backend_libs__matching__field_costs_benefits_0_0)
MR_decl_static(__Unify___backend_libs__matching__matching_0_0)
MR_decl_static(__Compare___backend_libs__matching__matching_0_0)
MR_def_extern_entry(__Unify___backend_libs__matching__matching_params_0_0)
MR_def_extern_entry(__Compare___backend_libs__matching__matching_params_0_0)
MR_decl_static(__Unify___backend_libs__matching__stack_slot_graph_0_0)
MR_decl_static(__Compare___backend_libs__matching__stack_slot_graph_0_0)
MR_decl_static(fn__backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__580__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_cost_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[18] =
{
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__matching, cost_node)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__matching, cost_node)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node)
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
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,8)
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
MR_TAG_COMMON(0,0,10)
}
},
{
{
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,8)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,8)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(backend_libs__matching, cost_node)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__matching, cost_node)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__matching, cost_node)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__matching, benefit_node)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[10] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(backend_libs__matching, cost_node),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node),
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(backend_libs__matching, cost_node),
MR_COMMON(0,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node),
MR_COMMON(0,3)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(backend_libs__matching, cost_node),
MR_TAG_COMMON(0,0,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(backend_libs__matching, cost_node),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(backend_libs__matching, cost_node),
MR_COMMON(0,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node),
MR_CTOR0_ADDR(backend_libs__matching, cost_node)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(0,12)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node),
MR_CTOR0_ADDR(backend_libs__matching, cost_node)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__matching__create_graph_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_field_costs_benefits_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__backend_libs__matching__create_graph_1_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
};

static const struct mercury_type_3 mercury_common_3[7] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(backend_libs__matching__create_graph_links_5_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(backend_libs__matching__gather_benefits_3_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(backend_libs__matching__gather_costs_3_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(backend_libs__matching__gather_benefits_3_0),
0
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(backend_libs__matching__gather_costs_3_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(fn__backend_libs__matching__project_benefit_op_1_0),
0
},
{
MR_COMMON(7,2),
MR_ENTRY_AP(fn__backend_libs__matching__project_cost_op_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__matching__augpath_bf_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_cost_node_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__reachable_by_alternating_path_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_7;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__backend_libs__matching__augpath_bf_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,5),
MR_CTOR0_ADDR(backend_libs__matching, cost_node),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__reachable_by_alternating_path_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,7),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node),
MR_CTOR0_ADDR(backend_libs__matching, cost_node)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits),
MR_COMMON(0,14),
MR_COMMON(0,14)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits),
MR_COMMON(0,14),
MR_COMMON(0,14)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__reachable_by_alternating_path_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__matching__find_costs_benefits_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_cost_operation_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__matching__find_costs_benefits_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__matching__find_costs_benefits_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_benefit_operation_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__create_graph_links_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__create_graph_links_5_0_2;
static const struct mercury_type_5 mercury_common_5[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__reachable_by_alternating_path_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,2),
MR_CTOR0_ADDR(backend_libs__matching, cost_node),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,7),
MR_COMMON(0,9),
MR_COMMON(0,9),
MR_COMMON(0,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__backend_libs__matching__find_costs_benefits_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__matching, cost_operation),
MR_COMMON(0,16)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__backend_libs__matching__find_costs_benefits_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__matching, cost_operation),
MR_COMMON(0,16)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__backend_libs__matching__find_costs_benefits_6_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__matching, benefit_operation),
MR_COMMON(0,17)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__create_graph_links_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,6),
MR_CTOR0_ADDR(backend_libs__matching, cost_node),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__create_graph_links_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,14),
MR_CTOR0_ADDR(backend_libs__matching, benefit_node),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_matching_params_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,7),
MR_COMMON(0,9),
MR_COMMON(0,13),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__matching, matching_params),
MR_COMMON(0,7),
MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_9;
static const struct mercury_type_7 mercury_common_7[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,9),
MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits)
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_8,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__matching, benefit_node),
MR_CTOR0_ADDR(backend_libs__matching, benefit_operation)
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_9,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__matching, cost_node),
MR_CTOR0_ADDR(backend_libs__matching, cost_operation)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_benefit_operation_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__matching__field_types_benefit_node_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_benefit_operation_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__matching__du_functor_desc_benefit_node_0_0 = {
	"benefit_node",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__matching__field_types_benefit_node_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_stag_ordered_benefit_node_0_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_benefit_node_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__matching__du_ptag_ordered_benefit_node_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__matching__du_stag_ordered_benefit_node_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_name_ordered_benefit_node_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_benefit_node_0_0
};

const MR_Integer mercury_data_backend_libs__matching__functor_number_map_benefit_node_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__matching__benefit_node_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__matching__benefit_node_0_0)),
	"backend_libs.matching",
	"benefit_node",
	{ (void *)mercury_data_backend_libs__matching__du_name_ordered_benefit_node_0 },
	{ (void *)mercury_data_backend_libs__matching__du_ptag_ordered_benefit_node_0 },
	1,
	4,
	mercury_data_backend_libs__matching__functor_number_map_benefit_node_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0,
	(MR_TypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_cost_node_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
}};

const MR_PseudoTypeInfo mercury_data_backend_libs__matching__field_types_benefit_node_and_edge_list_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0 = {
	"benefit_node_and_edge_list",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__matching__field_types_benefit_node_and_edge_list_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__matching__du_stag_ordered_benefit_node_and_edge_list_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_name_ordered_benefit_node_and_edge_list_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_benefit_node_and_edge_list_0_0
};

const MR_Integer mercury_data_backend_libs__matching__functor_number_map_benefit_node_and_edge_list_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0)),
	"backend_libs.matching",
	"benefit_node_and_edge_list",
	{ (void *)mercury_data_backend_libs__matching__du_name_ordered_benefit_node_and_edge_list_0 },
	{ (void *)mercury_data_backend_libs__matching__du_ptag_ordered_benefit_node_and_edge_list_0 },
	1,
	4,
	mercury_data_backend_libs__matching__functor_number_map_benefit_node_and_edge_list_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_backend_libs__matching__field_types_benefit_operation_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__matching__du_functor_desc_benefit_operation_0_0 = {
	"field_var_load",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__matching__field_types_benefit_operation_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_backend_libs__matching__field_types_benefit_operation_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__matching__du_functor_desc_benefit_operation_0_1 = {
	"field_var_store",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__matching__field_types_benefit_operation_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_stag_ordered_benefit_operation_0_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_benefit_operation_0_0

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_stag_ordered_benefit_operation_0_1[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_benefit_operation_0_1

};

const MR_DuPtagLayout mercury_data_backend_libs__matching__du_ptag_ordered_benefit_operation_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__matching__du_stag_ordered_benefit_operation_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__matching__du_stag_ordered_benefit_operation_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_name_ordered_benefit_operation_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_benefit_operation_0_0,
	&mercury_data_backend_libs__matching__du_functor_desc_benefit_operation_0_1
};

const MR_Integer mercury_data_backend_libs__matching__functor_number_map_benefit_operation_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_benefit_operation_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__matching__benefit_operation_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__matching__benefit_operation_0_0)),
	"backend_libs.matching",
	"benefit_operation",
	{ (void *)mercury_data_backend_libs__matching__du_name_ordered_benefit_operation_0 },
	{ (void *)mercury_data_backend_libs__matching__du_ptag_ordered_benefit_operation_0 },
	2,
	4,
	mercury_data_backend_libs__matching__functor_number_map_benefit_operation_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_cost_operation_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__matching__field_types_cost_node_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_cost_operation_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__matching__du_functor_desc_cost_node_0_0 = {
	"cost_node",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__matching__field_types_cost_node_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_stag_ordered_cost_node_0_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_cost_node_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__matching__du_ptag_ordered_cost_node_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__matching__du_stag_ordered_cost_node_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_name_ordered_cost_node_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_cost_node_0_0
};

const MR_Integer mercury_data_backend_libs__matching__functor_number_map_cost_node_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_cost_node_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__matching__cost_node_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__matching__cost_node_0_0)),
	"backend_libs.matching",
	"cost_node",
	{ (void *)mercury_data_backend_libs__matching__du_name_ordered_cost_node_0 },
	{ (void *)mercury_data_backend_libs__matching__du_ptag_ordered_cost_node_0 },
	1,
	4,
	mercury_data_backend_libs__matching__functor_number_map_cost_node_0
};

const MR_PseudoTypeInfo mercury_data_backend_libs__matching__field_types_cost_operation_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__matching__du_functor_desc_cost_operation_0_0 = {
	"cell_var_load",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__matching__field_types_cost_operation_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__matching__du_functor_desc_cost_operation_0_1 = {
	"cell_var_store",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_stag_ordered_cost_operation_0_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_cost_operation_0_1

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_stag_ordered_cost_operation_0_1[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_cost_operation_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__matching__du_ptag_ordered_cost_operation_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_backend_libs__matching__du_stag_ordered_cost_operation_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__matching__du_stag_ordered_cost_operation_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_name_ordered_cost_operation_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_cost_operation_0_0,
	&mercury_data_backend_libs__matching__du_functor_desc_cost_operation_0_1
};

const MR_Integer mercury_data_backend_libs__matching__functor_number_map_cost_operation_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_cost_operation_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__matching__cost_operation_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__matching__cost_operation_0_0)),
	"backend_libs.matching",
	"cost_operation",
	{ (void *)mercury_data_backend_libs__matching__du_name_ordered_cost_operation_0 },
	{ (void *)mercury_data_backend_libs__matching__du_ptag_ordered_cost_operation_0 },
	2,
	4,
	mercury_data_backend_libs__matching__functor_number_map_cost_operation_0
};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_edge_list_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__matching__edge_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__matching__edge_list_0_0)),
	"backend_libs.matching",
	"edge_list",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_cost_node_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0
}};

const MR_PseudoTypeInfo mercury_data_backend_libs__matching__field_types_field_costs_benefits_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__matching__du_functor_desc_field_costs_benefits_0_0 = {
	"field_costs_benefits",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__matching__field_types_field_costs_benefits_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_field_costs_benefits_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__matching__du_ptag_ordered_field_costs_benefits_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__matching__du_stag_ordered_field_costs_benefits_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_name_ordered_field_costs_benefits_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_field_costs_benefits_0_0
};

const MR_Integer mercury_data_backend_libs__matching__functor_number_map_field_costs_benefits_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_field_costs_benefits_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__matching__field_costs_benefits_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__matching__field_costs_benefits_0_0)),
	"backend_libs.matching",
	"field_costs_benefits",
	{ (void *)mercury_data_backend_libs__matching__du_name_ordered_field_costs_benefits_0 },
	{ (void *)mercury_data_backend_libs__matching__du_ptag_ordered_field_costs_benefits_0 },
	1,
	4,
	mercury_data_backend_libs__matching__functor_number_map_field_costs_benefits_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_cost_node_0,
	(MR_TypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0,
	(MR_TypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_cost_node_0
}};

const MR_PseudoTypeInfo mercury_data_backend_libs__matching__field_types_matching_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0backend_libs__matching__type_ctor_info_benefit_node_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0backend_libs__matching__type_ctor_info_cost_node_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__matching__du_functor_desc_matching_0_0 = {
	"matching",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__matching__field_types_matching_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_stag_ordered_matching_0_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_matching_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__matching__du_ptag_ordered_matching_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__matching__du_stag_ordered_matching_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_name_ordered_matching_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_matching_0_0
};

const MR_Integer mercury_data_backend_libs__matching__functor_number_map_matching_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_matching_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__matching__matching_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__matching__matching_0_0)),
	"backend_libs.matching",
	"matching",
	{ (void *)mercury_data_backend_libs__matching__du_name_ordered_matching_0 },
	{ (void *)mercury_data_backend_libs__matching__du_ptag_ordered_matching_0 },
	1,
	4,
	mercury_data_backend_libs__matching__functor_number_map_matching_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__matching__field_types_matching_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_backend_libs__matching__field_names_matching_params_0_0[] = {
	"cell_var_store_cost",
	"cell_var_load_cost",
	"field_var_store_cost",
	"field_var_load_cost",
	"one_path_op_ratio",
	"one_path_node_ratio",
	"include_all_candidates"
};

static const MR_DuFunctorDesc mercury_data_backend_libs__matching__du_functor_desc_matching_params_0_0 = {
	"matching_params",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__matching__field_types_matching_params_0_0,
	mercury_data_backend_libs__matching__field_names_matching_params_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_stag_ordered_matching_params_0_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_matching_params_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__matching__du_ptag_ordered_matching_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__matching__du_stag_ordered_matching_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_name_ordered_matching_params_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_matching_params_0_0
};

const MR_Integer mercury_data_backend_libs__matching__functor_number_map_matching_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_matching_params_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__matching__matching_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__matching__matching_params_0_0)),
	"backend_libs.matching",
	"matching_params",
	{ (void *)mercury_data_backend_libs__matching__du_name_ordered_matching_params_0 },
	{ (void *)mercury_data_backend_libs__matching__du_ptag_ordered_matching_params_0 },
	1,
	4,
	mercury_data_backend_libs__matching__functor_number_map_matching_params_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_cost_node_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0
}};

const MR_PseudoTypeInfo mercury_data_backend_libs__matching__field_types_stack_slot_graph_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2backend_libs__matching__type_ctor_info_cost_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_benefit_node_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2backend_libs__matching__type_ctor_info_benefit_node_0set_ordlist__ti_set_ordlist_1backend_libs__matching__type_ctor_info_cost_node_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__matching__du_functor_desc_stack_slot_graph_0_0 = {
	"stack_slot_graph",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__matching__field_types_stack_slot_graph_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_stack_slot_graph_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__matching__du_ptag_ordered_stack_slot_graph_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__matching__du_stag_ordered_stack_slot_graph_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__matching__du_name_ordered_stack_slot_graph_0[] = {
	&mercury_data_backend_libs__matching__du_functor_desc_stack_slot_graph_0_0
};

const MR_Integer mercury_data_backend_libs__matching__functor_number_map_stack_slot_graph_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__matching__type_ctor_info_stack_slot_graph_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__matching__stack_slot_graph_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__matching__stack_slot_graph_0_0)),
	"backend_libs.matching",
	"stack_slot_graph",
	{ (void *)mercury_data_backend_libs__matching__du_name_ordered_stack_slot_graph_0 },
	{ (void *)mercury_data_backend_libs__matching__du_ptag_ordered_stack_slot_graph_0 },
	1,
	4,
	mercury_data_backend_libs__matching__functor_number_map_stack_slot_graph_0
};


static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__create_graph_links_5_0_2 = {
{
MR_PREDICATE,
"backend_libs.matching",
"backend_libs.matching",
"add_benefit_cost_links",
4,
0
},
"backend_libs.matching",
"matching.m",
384,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__create_graph_links_5_0_1 = {
{
MR_PREDICATE,
"backend_libs.matching",
"backend_libs.matching",
"add_cost_benefit_links",
4,
0
},
"backend_libs.matching",
"matching.m",
382,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__matching__find_costs_benefits_6_0_3 = {
{
MR_FUNCTION,
"backend_libs.matching",
"backend_libs.matching",
"replicate_benefit_op",
4,
0
},
"backend_libs.matching",
"matching.m",
290,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__matching__find_costs_benefits_6_0_2 = {
{
MR_FUNCTION,
"backend_libs.matching",
"backend_libs.matching",
"replicate_cost_op",
4,
0
},
"backend_libs.matching",
"matching.m",
283,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__matching__find_costs_benefits_6_0_1 = {
{
MR_FUNCTION,
"backend_libs.matching",
"backend_libs.matching",
"replicate_cost_op",
4,
0
},
"backend_libs.matching",
"matching.m",
283,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_9 = {
{
MR_FUNCTION,
"backend_libs.matching",
"backend_libs.matching",
"project_cost_op",
2,
0
},
"backend_libs.matching",
"matching.m",
198,
"55"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_8 = {
{
MR_FUNCTION,
"backend_libs.matching",
"backend_libs.matching",
"project_benefit_op",
2,
0
},
"backend_libs.matching",
"matching.m",
197,
"53"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_7 = {
{
MR_PREDICATE,
"backend_libs.matching",
"backend_libs.matching",
"gather_costs",
3,
0
},
"backend_libs.matching",
"matching.m",
195,
"49"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_6 = {
{
MR_PREDICATE,
"backend_libs.matching",
"backend_libs.matching",
"gather_benefits",
3,
0
},
"backend_libs.matching",
"matching.m",
193,
"46"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_5 = {
{
MR_PREDICATE,
"backend_libs.matching",
"backend_libs.matching",
"realized_costs_benefits",
2,
0
},
"backend_libs.matching",
"matching.m",
191,
"44"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_4 = {
{
MR_PREDICATE,
"backend_libs.matching",
"backend_libs.matching",
"gather_costs",
3,
0
},
"backend_libs.matching",
"matching.m",
179,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_3 = {
{
MR_PREDICATE,
"backend_libs.matching",
"backend_libs.matching",
"gather_benefits",
3,
0
},
"backend_libs.matching",
"matching.m",
178,
"30"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_2 = {
{
MR_FUNCTION,
"backend_libs.matching",
"backend_libs.matching",
"find_costs_benefits",
7,
0
},
"backend_libs.matching",
"matching.m",
174,
"29"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__find_via_cell_vars_9_0_1 = {
{
MR_PREDICATE,
"backend_libs.matching",
"backend_libs.matching",
"simplify_segment",
4,
0
},
"backend_libs.matching",
"matching.m",
171,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__reachable_by_alternating_path_5_0_2 = {
{
MR_FUNCTION,
"backend_libs.matching",
"backend_libs.matching",
"lambda_matching_m_580",
3,
0
},
"backend_libs.matching",
"matching.m",
580,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__matching__reachable_by_alternating_path_5_0_1 = {
{
MR_PREDICATE,
"backend_libs.matching",
"backend_libs.matching",
"adjacents",
4,
0
},
"backend_libs.matching",
"matching.m",
574,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__matching__augpath_bf_4_0_1 = {
{
MR_FUNCTION,
"backend_libs.matching",
"backend_libs.matching",
"adj_to_matched_cost",
3,
0
},
"backend_libs.matching",
"matching.m",
603,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__backend_libs__matching__create_graph_1_0_1 = {
{
MR_PREDICATE,
"backend_libs.matching",
"backend_libs.matching",
"create_graph_links",
5,
0
},
"backend_libs.matching",
"matching.m",
370,
"4"
};



MR_BEGIN_MODULE(backend_libs__matching_module0)
	MR_init_entry1(fn__backend_libs__matching__number_segments_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__number_segments_2_0);
	MR_init_label3(fn__backend_libs__matching__number_segments_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'number_segments'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__number_segments_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__number_segments_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__backend_libs__matching__number_segments_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break;
	} /* end while */
MR_def_label(fn__backend_libs__matching__number_segments_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__backend_libs__matching__number_segments_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(backend_libs__matching_module1)
	MR_init_entry1(fn__backend_libs__matching__create_graph_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__create_graph_1_0);
	MR_init_label3(fn__backend_libs__matching__create_graph_1_0,3,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_graph'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__create_graph_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_sv(3) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__backend_libs__matching__create_graph_1_0_i3);
MR_def_label(fn__backend_libs__matching__create_graph_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__backend_libs__matching__create_graph_1_0_i5);
MR_def_label(fn__backend_libs__matching__create_graph_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		fn__backend_libs__matching__create_graph_1_0_i9);
MR_def_label(fn__backend_libs__matching__create_graph_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(backend_libs__matching_module2)
	MR_init_entry1(fn__backend_libs__matching__update_matches_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__update_matches_2_0);
	MR_init_label4(fn__backend_libs__matching__update_matches_2_0,12,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_matches'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__update_matches_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__backend_libs__matching__update_matches_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__update_matches_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(fn__backend_libs__matching__update_matches_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r1 = MR_sv(5);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__set_4_0,
		fn__backend_libs__matching__update_matches_2_0_i4);
MR_def_label(fn__backend_libs__matching__update_matches_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__set_4_0,
		fn__backend_libs__matching__update_matches_2_0_i5);
MR_def_label(fn__backend_libs__matching__update_matches_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__backend_libs__matching__update_matches_2_0_i12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__queue__put_2_0);

MR_BEGIN_MODULE(backend_libs__matching_module3)
	MR_init_entry1(fn__backend_libs__matching__initial_queue_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__initial_queue_2_0);
	MR_init_label3(fn__backend_libs__matching__initial_queue_2_0,14,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initial_queue'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__initial_queue_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__backend_libs__matching__initial_queue_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__initial_queue_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__backend_libs__matching__initial_queue_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node_and_edge_list);
	}
	MR_np_call_localret_ent(fn__queue__put_2_0,
		fn__backend_libs__matching__initial_queue_2_0_i5);
MR_def_label(fn__backend_libs__matching__initial_queue_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__backend_libs__matching__initial_queue_2_0_i14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module4)
	MR_init_entry1(fn__backend_libs__matching__find_unmatched_cost_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__find_unmatched_cost_1_0);
	MR_init_label2(fn__backend_libs__matching__find_unmatched_cost_1_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_unmatched_cost'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__find_unmatched_cost_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__find_unmatched_cost_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__find_unmatched_cost_1_0_i4);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__backend_libs__matching__find_unmatched_cost_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(fn__backend_libs__matching__find_unmatched_cost_1_0);
MR_def_label(fn__backend_libs__matching__find_unmatched_cost_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);
MR_decl_entry(queue__put_3_0);

MR_BEGIN_MODULE(backend_libs__matching_module5)
	MR_init_entry1(backend_libs__matching__add_alternates_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__add_alternates_7_0);
	MR_init_label6(backend_libs__matching__add_alternates_7_0,30,3,8,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_alternates'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__add_alternates_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(backend_libs__matching__add_alternates_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__matching__add_alternates_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(backend_libs__matching__add_alternates_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(backend_libs__matching__add_alternates_7_0_i5);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(6) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__member_2_0,
		backend_libs__matching__add_alternates_7_0_i8);
MR_def_label(backend_libs__matching__add_alternates_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(backend_libs__matching__add_alternates_7_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr4;
	MR_tfield(0, MR_r2, 1) = MR_tempr3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node_and_edge_list);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(queue__put_3_0,
		backend_libs__matching__add_alternates_7_0_i14);
MR_def_label(backend_libs__matching__add_alternates_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(backend_libs__matching__add_alternates_7_0_i30);
	}
MR_def_label(backend_libs__matching__add_alternates_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
MR_def_label(backend_libs__matching__add_alternates_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(backend_libs__matching__add_alternates_7_0_i30);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(queue__get_3_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(backend_libs__matching_module6)
	MR_init_entry1(fn__backend_libs__matching__augpath_bf_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__augpath_bf_4_0);
	MR_init_label9(fn__backend_libs__matching__augpath_bf_4_0,35,2,5,6,10,13,11,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'augpath_bf'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__augpath_bf_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__backend_libs__matching__augpath_bf_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node_and_edge_list);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(queue__get_3_0,
		fn__backend_libs__matching__augpath_bf_4_0_i2);
MR_def_label(fn__backend_libs__matching__augpath_bf_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__matching__augpath_bf_4_0_i1);
	}
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tfield(0, MR_sv(2), 1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__backend_libs__matching__augpath_bf_4_0_i5);
MR_def_label(fn__backend_libs__matching__augpath_bf_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_sv(3), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__backend_libs__matching__augpath_bf_4_0_i6);
MR_def_label(fn__backend_libs__matching__augpath_bf_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__backend_libs__matching__adj_to_matched_cost_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__backend_libs__matching__augpath_bf_4_0_i10);
MR_def_label(fn__backend_libs__matching__augpath_bf_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__matching__find_unmatched_cost_1_0,
		fn__backend_libs__matching__augpath_bf_4_0_i13);
MR_def_label(fn__backend_libs__matching__augpath_bf_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__matching__augpath_bf_4_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__backend_libs__matching__augpath_bf_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(backend_libs__matching__add_alternates_7_0,
		fn__backend_libs__matching__augpath_bf_4_0_i17);
MR_def_label(fn__backend_libs__matching__augpath_bf_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__backend_libs__matching__augpath_bf_4_0_i35);
	}
MR_def_label(fn__backend_libs__matching__augpath_bf_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(backend_libs__matching_module7)
	MR_init_entry1(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0);
	MR_init_label4(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0,27,4,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_unmatched_benefit_nodes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0,
		fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0_i4);
MR_def_label(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0_i6);
MR_def_label(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__queue__init_0_0);

MR_BEGIN_MODULE(backend_libs__matching_module8)
	MR_init_entry1(backend_libs__matching__maximize_matching_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__maximize_matching_4_0);
	MR_init_label7(backend_libs__matching__maximize_matching_4_0,16,3,4,5,6,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maximize_matching'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__maximize_matching_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(backend_libs__matching__maximize_matching_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__matching__get_unmatched_benefit_nodes_2_0,
		backend_libs__matching__maximize_matching_4_0_i3);
MR_def_label(backend_libs__matching__maximize_matching_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node_and_edge_list);
	MR_np_call_localret_ent(fn__queue__init_0_0,
		backend_libs__matching__maximize_matching_4_0_i4);
MR_def_label(backend_libs__matching__maximize_matching_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__matching__initial_queue_2_0,
		backend_libs__matching__maximize_matching_4_0_i5);
MR_def_label(backend_libs__matching__maximize_matching_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__backend_libs__matching__augpath_bf_4_0,
		backend_libs__matching__maximize_matching_4_0_i6);
MR_def_label(backend_libs__matching__maximize_matching_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__matching__maximize_matching_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__backend_libs__matching__update_matches_2_0,
		backend_libs__matching__maximize_matching_4_0_i8);
MR_def_label(backend_libs__matching__maximize_matching_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(backend_libs__matching__maximize_matching_4_0_i16);
	}
MR_def_label(backend_libs__matching__maximize_matching_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module9)
	MR_init_entry1(fn__backend_libs__matching__maximal_matching_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__maximal_matching_2_0);
	MR_init_label2(fn__backend_libs__matching__maximal_matching_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maximal_matching'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__maximal_matching_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__backend_libs__matching__maximal_matching_2_0_i2);
MR_def_label(fn__backend_libs__matching__maximal_matching_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__backend_libs__matching__maximal_matching_2_0_i3);
MR_def_label(fn__backend_libs__matching__maximal_matching_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(backend_libs__matching__maximize_matching_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(set__difference_3_0);
MR_decl_entry(set__union_3_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(backend_libs__matching_module10)
	MR_init_entry1(backend_libs__matching__reachable_by_alternating_path_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__reachable_by_alternating_path_5_0);
	MR_init_label8(backend_libs__matching__reachable_by_alternating_path_5_0,21,3,5,7,8,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reachable_by_alternating_path'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__reachable_by_alternating_path_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(backend_libs__matching__reachable_by_alternating_path_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__matching__reachable_by_alternating_path_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(backend_libs__matching__reachable_by_alternating_path_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__matching__adjacents_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		backend_libs__matching__reachable_by_alternating_path_5_0_i5);
MR_def_label(backend_libs__matching__reachable_by_alternating_path_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		backend_libs__matching__reachable_by_alternating_path_5_0_i7);
MR_def_label(backend_libs__matching__reachable_by_alternating_path_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set__difference_3_0,
		backend_libs__matching__reachable_by_alternating_path_5_0_i8);
MR_def_label(backend_libs__matching__reachable_by_alternating_path_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set__union_3_0,
		backend_libs__matching__reachable_by_alternating_path_5_0_i9);
MR_def_label(backend_libs__matching__reachable_by_alternating_path_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		backend_libs__matching__reachable_by_alternating_path_5_0_i10);
MR_def_label(backend_libs__matching__reachable_by_alternating_path_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__580__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(2), 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		backend_libs__matching__reachable_by_alternating_path_5_0_i12);
MR_def_label(backend_libs__matching__reachable_by_alternating_path_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(backend_libs__matching__reachable_by_alternating_path_5_0_i21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module11)
	MR_init_entry1(fn__backend_libs__matching__reachable_by_alternating_path_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__reachable_by_alternating_path_3_0);
	MR_init_label1(fn__backend_libs__matching__reachable_by_alternating_path_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reachable_by_alternating_path'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__reachable_by_alternating_path_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__backend_libs__matching__reachable_by_alternating_path_3_0_i2);
MR_def_label(fn__backend_libs__matching__reachable_by_alternating_path_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(backend_libs__matching__reachable_by_alternating_path_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__set_of_var__init_0_0);
MR_decl_entry(set__intersect_3_0);
MR_decl_entry(set__is_empty_1_0);
MR_decl_entry(parse_tree__set_of_var__insert_3_0);
MR_decl_entry(set__equal_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(backend_libs__matching_module12)
	MR_init_entry1(fn__backend_libs__matching__compute_via_cell_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__compute_via_cell_vars_2_0);
	MR_init_label7(fn__backend_libs__matching__compute_via_cell_vars_2_0,36,5,6,9,7,13,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_via_cell_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__compute_via_cell_vars_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__compute_via_cell_vars_2_0_i36);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_tailcall_ent(fn__parse_tree__set_of_var__init_0_0);
MR_def_label(fn__backend_libs__matching__compute_via_cell_vars_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__backend_libs__matching__compute_via_cell_vars_2_0,
		fn__backend_libs__matching__compute_via_cell_vars_2_0_i5);
MR_def_label(fn__backend_libs__matching__compute_via_cell_vars_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		fn__backend_libs__matching__compute_via_cell_vars_2_0_i6);
MR_def_label(fn__backend_libs__matching__compute_via_cell_vars_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(set__is_empty_1_0,
		fn__backend_libs__matching__compute_via_cell_vars_2_0_i9);
MR_def_label(fn__backend_libs__matching__compute_via_cell_vars_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__matching__compute_via_cell_vars_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__set_of_var__insert_3_0);
MR_def_label(fn__backend_libs__matching__compute_via_cell_vars_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set__equal_2_0,
		fn__backend_libs__matching__compute_via_cell_vars_2_0_i13);
MR_def_label(fn__backend_libs__matching__compute_via_cell_vars_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__matching__compute_via_cell_vars_2_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(fn__backend_libs__matching__compute_via_cell_vars_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.matching", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140backend_libs.matching.compute_via_cell_vars\'/2", 56);
	MR_r3 = (MR_Word) MR_string_const("theorem violation: intersection neither empty nor full", 54);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module13)
	MR_init_entry1(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__get_unmatched_cost_nodes_2_0);
	MR_init_label4(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0,27,4,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_unmatched_cost_nodes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0,
		fn__backend_libs__matching__get_unmatched_cost_nodes_2_0_i4);
MR_def_label(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__backend_libs__matching__get_unmatched_cost_nodes_2_0_i6);
MR_def_label(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__set_of_var__union_list_1_0);
MR_decl_entry(parse_tree__set_of_var__intersect_3_0);
MR_decl_entry(parse_tree__set_of_var__difference_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__to_sorted_list_1_0);
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(fn__set__map_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__union_2_0);

MR_BEGIN_MODULE(backend_libs__matching_module14)
	MR_init_entry1(backend_libs__matching__find_via_cell_vars_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__find_via_cell_vars_9_0);
	MR_init_label10(backend_libs__matching__find_via_cell_vars_9_0,5,6,3,8,9,13,14,16,17,20)
	MR_init_label10(backend_libs__matching__find_via_cell_vars_9_0,21,24,25,26,27,28,29,30,31,33)
	MR_init_label10(backend_libs__matching__find_via_cell_vars_9_0,34,36,37,39,41,43,44,45,46,47)
	MR_init_label7(backend_libs__matching__find_via_cell_vars_9_0,48,49,50,51,52,53,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_via_cell_vars'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__matching__find_via_cell_vars_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 6);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(backend_libs__matching__find_via_cell_vars_9_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(7) = MR_tempr3;
	MR_sv(6) = MR_tempr4;
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_list_1_0,
		backend_libs__matching__find_via_cell_vars_9_0_i5);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		backend_libs__matching__find_via_cell_vars_9_0_i6);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		backend_libs__matching__find_via_cell_vars_9_0_i8);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		backend_libs__matching__find_via_cell_vars_9_0_i8);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		backend_libs__matching__find_via_cell_vars_9_0_i9);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__matching__simplify_segment_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		backend_libs__matching__find_via_cell_vars_9_0_i13);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__matching__number_segments_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i14);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__backend_libs__matching__find_costs_benefits_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(1);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i16);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__set__init_0_0,
		backend_libs__matching__find_via_cell_vars_9_0_i17);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		backend_libs__matching__find_via_cell_vars_9_0_i20);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__set__init_0_0,
		backend_libs__matching__find_via_cell_vars_9_0_i21);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		backend_libs__matching__find_via_cell_vars_9_0_i24);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i25);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i26);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__backend_libs__matching__create_graph_1_0,
		backend_libs__matching__find_via_cell_vars_9_0_i27);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__backend_libs__matching__maximal_matching_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i28);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(4), 0);
	}
	MR_np_call_localret_ent(fn__backend_libs__matching__get_unmatched_cost_nodes_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i29);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__backend_libs__matching__reachable_by_alternating_path_3_0,
		backend_libs__matching__find_via_cell_vars_9_0_i30);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__matching__compute_via_cell_vars_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i31);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__matching__realized_costs_benefits_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__filter_3_0,
		backend_libs__matching__find_via_cell_vars_9_0_i33);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__set__init_0_0,
		backend_libs__matching__find_via_cell_vars_9_0_i34);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		backend_libs__matching__find_via_cell_vars_9_0_i36);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__set__init_0_0,
		backend_libs__matching__find_via_cell_vars_9_0_i37);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, field_costs_benefits);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		backend_libs__matching__find_via_cell_vars_9_0_i39);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_operation);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__map_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i41);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_operation);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__map_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i43);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i44);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i45);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i46);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i47);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i48);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i49);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i50);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i51);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = ((MR_Integer) MR_sv(7) * (MR_Integer) 100);
	MR_tempr3 = MR_sv(1);
	MR_tempr2 = ((MR_Integer) MR_r1 * (MR_Integer) MR_tfield(0, MR_tempr3, 4));
	if (((MR_Integer) MR_tempr1 < (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(backend_libs__matching__find_via_cell_vars_9_0_i52);
	}
	MR_tempr1 = ((MR_Integer) MR_sv(6) * (MR_Integer) 100);
	MR_tempr2 = ((MR_Integer) MR_sv(8) * (MR_Integer) MR_tfield(0, MR_tempr3, 5));
	if (((MR_Integer) MR_tempr1 < (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(backend_libs__matching__find_via_cell_vars_9_0_i52);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i55);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		backend_libs__matching__find_via_cell_vars_9_0_i53);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		backend_libs__matching__find_via_cell_vars_9_0_i55);
MR_def_label(backend_libs__matching__find_via_cell_vars_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__member_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__intersect_2_0);

MR_BEGIN_MODULE(backend_libs__matching_module15)
	MR_init_entry1(backend_libs__matching__simplify_segment_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__simplify_segment_4_0);
	MR_init_label3(backend_libs__matching__simplify_segment_4_0,3,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_segment'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__simplify_segment_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		backend_libs__matching__simplify_segment_4_0_i3);
MR_def_label(backend_libs__matching__simplify_segment_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(backend_libs__matching__simplify_segment_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__intersect_2_0,
		backend_libs__matching__simplify_segment_4_0_i5);
MR_def_label(backend_libs__matching__simplify_segment_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(backend_libs__matching__simplify_segment_4_0,1)
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


MR_BEGIN_MODULE(backend_libs__matching_module16)
	MR_init_entry1(backend_libs__matching__find_cell_var_loads_for_field_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__find_cell_var_loads_for_field_4_0);
	MR_init_label4(backend_libs__matching__find_cell_var_loads_for_field_4_0,20,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_cell_var_loads_for_field'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__find_cell_var_loads_for_field_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(backend_libs__matching__find_cell_var_loads_for_field_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__matching__find_cell_var_loads_for_field_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(backend_libs__matching__find_cell_var_loads_for_field_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		backend_libs__matching__find_cell_var_loads_for_field_4_0_i5);
MR_def_label(backend_libs__matching__find_cell_var_loads_for_field_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__matching__find_cell_var_loads_for_field_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(backend_libs__matching__find_cell_var_loads_for_field_4_0_i20);
	}
MR_def_label(backend_libs__matching__find_cell_var_loads_for_field_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(backend_libs__matching__find_cell_var_loads_for_field_4_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);
MR_decl_entry(set__list_to_set_2_0);

MR_BEGIN_MODULE(backend_libs__matching_module17)
	MR_init_entry1(fn__backend_libs__matching__find_costs_benefits_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__find_costs_benefits_6_0);
	MR_init_label10(fn__backend_libs__matching__find_costs_benefits_6_0,2,4,3,11,10,20,21,22,25,26)
	MR_init_label1(fn__backend_libs__matching__find_costs_benefits_6_0,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_costs_benefits'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__find_costs_benefits_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(backend_libs__matching__find_cell_var_loads_for_field_4_0,
		fn__backend_libs__matching__find_costs_benefits_6_0_i2);
MR_def_label(fn__backend_libs__matching__find_costs_benefits_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__find_costs_benefits_6_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tempr3;
	MR_GOTO_LAB(fn__backend_libs__matching__find_costs_benefits_6_0_i3);
	}
MR_def_label(fn__backend_libs__matching__find_costs_benefits_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr2;
	}
MR_def_label(fn__backend_libs__matching__find_costs_benefits_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		fn__backend_libs__matching__find_costs_benefits_6_0_i11);
MR_def_label(fn__backend_libs__matching__find_costs_benefits_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__matching__find_costs_benefits_6_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__backend_libs__matching__replicate_cost_op_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_sv(1) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_operation);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__backend_libs__matching__find_costs_benefits_6_0_i20);
MR_def_label(fn__backend_libs__matching__find_costs_benefits_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__backend_libs__matching__replicate_cost_op_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 2;
	MR_tempr4 = MR_sv(2);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_tempr4, 1);
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_sv(1) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_operation);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__backend_libs__matching__find_costs_benefits_6_0_i20);
MR_def_label(fn__backend_libs__matching__find_costs_benefits_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		fn__backend_libs__matching__find_costs_benefits_6_0_i21);
MR_def_label(fn__backend_libs__matching__find_costs_benefits_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		fn__backend_libs__matching__find_costs_benefits_6_0_i22);
MR_def_label(fn__backend_libs__matching__find_costs_benefits_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__backend_libs__matching__replicate_benefit_op_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_operation);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__backend_libs__matching__find_costs_benefits_6_0_i25);
MR_def_label(fn__backend_libs__matching__find_costs_benefits_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		fn__backend_libs__matching__find_costs_benefits_6_0_i26);
MR_def_label(fn__backend_libs__matching__find_costs_benefits_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		fn__backend_libs__matching__find_costs_benefits_6_0_i27);
MR_def_label(fn__backend_libs__matching__find_costs_benefits_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module18)
	MR_init_entry1(fn__backend_libs__matching__make_cost_op_copies_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__make_cost_op_copies_2_0);
	MR_init_label2(fn__backend_libs__matching__make_cost_op_copies_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_cost_op_copies'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__make_cost_op_copies_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__make_cost_op_copies_2_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(fn__backend_libs__matching__make_cost_op_copies_2_0,
		fn__backend_libs__matching__make_cost_op_copies_2_0_i4);
MR_def_label(fn__backend_libs__matching__make_cost_op_copies_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__backend_libs__matching__make_cost_op_copies_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module19)
	MR_init_entry1(fn__backend_libs__matching__replicate_cost_op_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__replicate_cost_op_3_0);
	MR_init_label1(fn__backend_libs__matching__replicate_cost_op_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replicate_cost_op'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__replicate_cost_op_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__replicate_cost_op_3_0_i3);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__backend_libs__matching__make_cost_op_copies_2_0);
MR_def_label(fn__backend_libs__matching__replicate_cost_op_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__backend_libs__matching__make_cost_op_copies_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module20)
	MR_init_entry1(fn__backend_libs__matching__make_benefit_op_copies_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__make_benefit_op_copies_2_0);
	MR_init_label2(fn__backend_libs__matching__make_benefit_op_copies_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_benefit_op_copies'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__make_benefit_op_copies_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__make_benefit_op_copies_2_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(fn__backend_libs__matching__make_benefit_op_copies_2_0,
		fn__backend_libs__matching__make_benefit_op_copies_2_0_i4);
MR_def_label(fn__backend_libs__matching__make_benefit_op_copies_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__backend_libs__matching__make_benefit_op_copies_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module21)
	MR_init_entry1(fn__backend_libs__matching__replicate_benefit_op_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__replicate_benefit_op_3_0);
	MR_init_label1(fn__backend_libs__matching__replicate_benefit_op_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replicate_benefit_op'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__replicate_benefit_op_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(fn__backend_libs__matching__replicate_benefit_op_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__backend_libs__matching__make_benefit_op_copies_2_0);
MR_def_label(fn__backend_libs__matching__replicate_benefit_op_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__backend_libs__matching__make_benefit_op_copies_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module22)
	MR_init_entry1(backend_libs__matching__gather_benefits_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__gather_benefits_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gather_benefits'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__gather_benefits_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(set__union_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module23)
	MR_init_entry1(backend_libs__matching__gather_costs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__gather_costs_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gather_costs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__gather_costs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(set__union_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module24)
	MR_init_entry1(backend_libs__matching__create_graph_links_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__create_graph_links_5_0);
	MR_init_label4(backend_libs__matching__create_graph_links_5_0,3,6,8,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_graph_links'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__create_graph_links_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__matching__add_cost_benefit_links_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		backend_libs__matching__create_graph_links_5_0_i3);
MR_def_label(backend_libs__matching__create_graph_links_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		backend_libs__matching__create_graph_links_5_0_i6);
MR_def_label(backend_libs__matching__create_graph_links_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__matching__add_benefit_cost_links_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		backend_libs__matching__create_graph_links_5_0_i8);
MR_def_label(backend_libs__matching__create_graph_links_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		backend_libs__matching__create_graph_links_5_0_i11);
MR_def_label(backend_libs__matching__create_graph_links_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(backend_libs__matching_module25)
	MR_init_entry1(backend_libs__matching__add_cost_benefit_links_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__add_cost_benefit_links_4_0);
	MR_init_label3(backend_libs__matching__add_cost_benefit_links_4_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_cost_benefit_links'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__add_cost_benefit_links_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__matching__add_cost_benefit_links_4_0_i4);
MR_def_label(backend_libs__matching__add_cost_benefit_links_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__matching__add_cost_benefit_links_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__union_3_0,
		backend_libs__matching__add_cost_benefit_links_4_0_i6);
MR_def_label(backend_libs__matching__add_cost_benefit_links_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(backend_libs__matching__add_cost_benefit_links_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module26)
	MR_init_entry1(backend_libs__matching__add_benefit_cost_links_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__add_benefit_cost_links_4_0);
	MR_init_label3(backend_libs__matching__add_benefit_cost_links_4_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_benefit_cost_links'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__add_benefit_cost_links_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__matching__add_benefit_cost_links_4_0_i4);
MR_def_label(backend_libs__matching__add_benefit_cost_links_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__matching__add_benefit_cost_links_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__union_3_0,
		backend_libs__matching__add_benefit_cost_links_4_0_i6);
MR_def_label(backend_libs__matching__add_benefit_cost_links_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
MR_def_label(backend_libs__matching__add_benefit_cost_links_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module27)
	MR_init_entry1(backend_libs__matching__adjacents_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__adjacents_4_0);
	MR_init_label1(backend_libs__matching__adjacents_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'adjacents'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__adjacents_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		backend_libs__matching__adjacents_4_0_i3);
MR_def_label(backend_libs__matching__adjacents_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set__union_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module28)
	MR_init_entry1(fn__backend_libs__matching__adj_to_matched_cost_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__adj_to_matched_cost_2_0);
	MR_init_label2(fn__backend_libs__matching__adj_to_matched_cost_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'adj_to_matched_cost'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__adj_to_matched_cost_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__backend_libs__matching__adj_to_matched_cost_2_0_i3);
MR_def_label(fn__backend_libs__matching__adj_to_matched_cost_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__matching__adj_to_matched_cost_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__backend_libs__matching__adj_to_matched_cost_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module29)
	MR_init_entry1(backend_libs__matching__realized_costs_benefits_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__matching__realized_costs_benefits_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'realized_costs_benefits'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__matching__realized_costs_benefits_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_np_tailcall_ent(parse_tree__set_of_var__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module30)
	MR_init_entry1(fn__backend_libs__matching__project_benefit_op_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__project_benefit_op_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_benefit_op'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__project_benefit_op_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module31)
	MR_init_entry1(fn__backend_libs__matching__project_cost_op_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__project_cost_op_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_cost_op'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__project_cost_op_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module32)
	MR_init_entry1(__Unify___backend_libs__matching__benefit_node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__matching__benefit_node_0_0);
	MR_init_label3(__Unify___backend_libs__matching__benefit_node_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__matching__benefit_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__benefit_node_0_0_i6);
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__matching__benefit_operation_0_0,
		__Unify___backend_libs__matching__benefit_node_0_0_i4);
MR_def_label(__Unify___backend_libs__matching__benefit_node_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__benefit_node_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___backend_libs__matching__benefit_node_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__matching__benefit_node_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(backend_libs__matching_module33)
	MR_init_entry1(__Compare___backend_libs__matching__benefit_node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__matching__benefit_node_0_0);
	MR_init_label4(__Compare___backend_libs__matching__benefit_node_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__matching__benefit_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__benefit_node_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__matching__benefit_node_0_0_i2);
MR_def_label(__Compare___backend_libs__matching__benefit_node_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__matching__benefit_node_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___backend_libs__matching__benefit_operation_0_0,
		__Compare___backend_libs__matching__benefit_node_0_0_i5);
MR_def_label(__Compare___backend_libs__matching__benefit_node_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__benefit_node_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__matching__benefit_node_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(backend_libs__matching_module34)
	MR_init_entry1(__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__matching__benefit_node_and_edge_list_0_0);
	MR_init_label3(__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0_i9);
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__matching__benefit_node_0_0,
		__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0_i4);
MR_def_label(__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__matching__benefit_node_and_edge_list_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(backend_libs__matching_module35)
	MR_init_entry1(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__matching__benefit_node_and_edge_list_0_0);
	MR_init_label4(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0,3,2,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0_i2);
MR_def_label(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___backend_libs__matching__benefit_node_0_0,
		__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0_i5);
MR_def_label(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___backend_libs__matching__benefit_node_and_edge_list_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(backend_libs__matching_module36)
	MR_init_entry1(__Unify___backend_libs__matching__benefit_operation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__matching__benefit_operation_0_0);
	MR_init_label3(__Unify___backend_libs__matching__benefit_operation_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___backend_libs__matching__benefit_operation_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__benefit_operation_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__benefit_operation_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__benefit_operation_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
MR_def_label(__Unify___backend_libs__matching__benefit_operation_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__matching__benefit_operation_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__benefit_operation_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___backend_libs__matching__benefit_operation_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(backend_libs__matching_module37)
	MR_init_entry1(__Compare___backend_libs__matching__benefit_operation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__matching__benefit_operation_0_0);
	MR_init_label5(__Compare___backend_libs__matching__benefit_operation_0_0,3,2,19,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___backend_libs__matching__benefit_operation_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__benefit_operation_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__matching__benefit_operation_0_0_i2);
MR_def_label(__Compare___backend_libs__matching__benefit_operation_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__matching__benefit_operation_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__benefit_operation_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__benefit_operation_0_0_i7);
	}
MR_def_label(__Compare___backend_libs__matching__benefit_operation_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_mask_field(MR_sv(1), 0);
	MR_r3 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___backend_libs__matching__benefit_operation_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__matching__benefit_operation_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__benefit_operation_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module38)
	MR_init_entry1(__Unify___backend_libs__matching__cost_node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__matching__cost_node_0_0);
	MR_init_label3(__Unify___backend_libs__matching__cost_node_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__matching__cost_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__cost_node_0_0_i6);
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__matching__cost_operation_0_0,
		__Unify___backend_libs__matching__cost_node_0_0_i4);
MR_def_label(__Unify___backend_libs__matching__cost_node_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__cost_node_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___backend_libs__matching__cost_node_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__matching__cost_node_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module39)
	MR_init_entry1(__Compare___backend_libs__matching__cost_node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__matching__cost_node_0_0);
	MR_init_label4(__Compare___backend_libs__matching__cost_node_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__matching__cost_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__cost_node_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__matching__cost_node_0_0_i2);
MR_def_label(__Compare___backend_libs__matching__cost_node_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__matching__cost_node_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___backend_libs__matching__cost_operation_0_0,
		__Compare___backend_libs__matching__cost_node_0_0_i5);
MR_def_label(__Compare___backend_libs__matching__cost_node_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__cost_node_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__matching__cost_node_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module40)
	MR_init_entry1(__Unify___backend_libs__matching__cost_operation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__matching__cost_operation_0_0);
	MR_init_label3(__Unify___backend_libs__matching__cost_operation_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___backend_libs__matching__cost_operation_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__cost_operation_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__cost_operation_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___backend_libs__matching__cost_operation_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__matching__cost_operation_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__cost_operation_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___backend_libs__matching__cost_operation_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module41)
	MR_init_entry1(__Compare___backend_libs__matching__cost_operation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__matching__cost_operation_0_0);
	MR_init_label4(__Compare___backend_libs__matching__cost_operation_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___backend_libs__matching__cost_operation_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__cost_operation_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__cost_operation_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__cost_operation_0_0_i7);
	}
MR_def_label(__Compare___backend_libs__matching__cost_operation_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__matching__cost_operation_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__matching__cost_operation_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__cost_operation_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__matching__cost_operation_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module42)
	MR_init_entry1(__Unify___backend_libs__matching__edge_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__matching__edge_list_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___backend_libs__matching__edge_list_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,9);
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


MR_BEGIN_MODULE(backend_libs__matching_module43)
	MR_init_entry1(__Compare___backend_libs__matching__edge_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__matching__edge_list_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___backend_libs__matching__edge_list_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,9);
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

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(backend_libs__matching_module44)
	MR_init_entry1(__Unify___backend_libs__matching__field_costs_benefits_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__matching__field_costs_benefits_0_0);
	MR_init_label4(__Unify___backend_libs__matching__field_costs_benefits_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___backend_libs__matching__field_costs_benefits_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__field_costs_benefits_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___backend_libs__matching__field_costs_benefits_0_0_i4);
MR_def_label(__Unify___backend_libs__matching__field_costs_benefits_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__field_costs_benefits_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___backend_libs__matching__field_costs_benefits_0_0_i6);
MR_def_label(__Unify___backend_libs__matching__field_costs_benefits_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__field_costs_benefits_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___backend_libs__matching__field_costs_benefits_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__matching__field_costs_benefits_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(backend_libs__matching_module45)
	MR_init_entry1(__Compare___backend_libs__matching__field_costs_benefits_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__matching__field_costs_benefits_0_0);
	MR_init_label5(__Compare___backend_libs__matching__field_costs_benefits_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___backend_libs__matching__field_costs_benefits_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__field_costs_benefits_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__matching__field_costs_benefits_0_0_i2);
MR_def_label(__Compare___backend_libs__matching__field_costs_benefits_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__matching__field_costs_benefits_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___backend_libs__matching__field_costs_benefits_0_0_i5);
MR_def_label(__Compare___backend_libs__matching__field_costs_benefits_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__field_costs_benefits_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___backend_libs__matching__field_costs_benefits_0_0_i9);
MR_def_label(__Compare___backend_libs__matching__field_costs_benefits_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__field_costs_benefits_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___backend_libs__matching__field_costs_benefits_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(backend_libs__matching_module46)
	MR_init_entry1(__Unify___backend_libs__matching__matching_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__matching__matching_0_0);
	MR_init_label3(__Unify___backend_libs__matching__matching_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___backend_libs__matching__matching_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__matching_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___backend_libs__matching__matching_0_0_i4);
MR_def_label(__Unify___backend_libs__matching__matching_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__matching_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___backend_libs__matching__matching_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__matching__matching_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(backend_libs__matching_module47)
	MR_init_entry1(__Compare___backend_libs__matching__matching_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__matching__matching_0_0);
	MR_init_label4(__Compare___backend_libs__matching__matching_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___backend_libs__matching__matching_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__matching_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__matching__matching_0_0_i2);
MR_def_label(__Compare___backend_libs__matching__matching_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__matching__matching_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___backend_libs__matching__matching_0_0_i5);
MR_def_label(__Compare___backend_libs__matching__matching_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__matching_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___backend_libs__matching__matching_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module48)
	MR_init_entry1(__Unify___backend_libs__matching__matching_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__matching__matching_params_0_0);
	MR_init_label2(__Unify___backend_libs__matching__matching_params_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__matching__matching_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__matching_params_0_0_i4);
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
		MR_GOTO_LAB(__Unify___backend_libs__matching__matching_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__matching_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__matching_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__matching_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__matching_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__matching_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___backend_libs__matching__matching_params_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__matching__matching_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module49)
	MR_init_entry1(__Compare___backend_libs__matching__matching_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__matching__matching_params_0_0);
	MR_init_label9(__Compare___backend_libs__matching__matching_params_0_0,3,2,5,9,13,17,21,25,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__matching__matching_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__matching_params_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__matching__matching_params_0_0_i2);
MR_def_label(__Compare___backend_libs__matching__matching_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__matching__matching_params_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___backend_libs__matching__matching_params_0_0_i5);
MR_def_label(__Compare___backend_libs__matching__matching_params_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__matching_params_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__matching__matching_params_0_0_i9);
MR_def_label(__Compare___backend_libs__matching__matching_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__matching_params_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__matching__matching_params_0_0_i13);
MR_def_label(__Compare___backend_libs__matching__matching_params_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__matching_params_0_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__matching__matching_params_0_0_i17);
MR_def_label(__Compare___backend_libs__matching__matching_params_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__matching_params_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__matching__matching_params_0_0_i21);
MR_def_label(__Compare___backend_libs__matching__matching_params_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__matching_params_0_0_i61);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__matching__matching_params_0_0_i25);
MR_def_label(__Compare___backend_libs__matching__matching_params_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__matching_params_0_0_i61);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__matching__matching_params_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module50)
	MR_init_entry1(__Unify___backend_libs__matching__stack_slot_graph_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__matching__stack_slot_graph_0_0);
	MR_init_label3(__Unify___backend_libs__matching__stack_slot_graph_0_0,5,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___backend_libs__matching__stack_slot_graph_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__stack_slot_graph_0_0_i10);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___backend_libs__matching__stack_slot_graph_0_0_i5);
MR_def_label(__Unify___backend_libs__matching__stack_slot_graph_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__matching__stack_slot_graph_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___backend_libs__matching__stack_slot_graph_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__matching__stack_slot_graph_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__matching_module51)
	MR_init_entry1(__Compare___backend_libs__matching__stack_slot_graph_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__matching__stack_slot_graph_0_0);
	MR_init_label4(__Compare___backend_libs__matching__stack_slot_graph_0_0,3,2,6,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___backend_libs__matching__stack_slot_graph_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__stack_slot_graph_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__matching__stack_slot_graph_0_0_i2);
MR_def_label(__Compare___backend_libs__matching__stack_slot_graph_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__matching__stack_slot_graph_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___backend_libs__matching__stack_slot_graph_0_0_i6);
MR_def_label(__Compare___backend_libs__matching__stack_slot_graph_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__matching__stack_slot_graph_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___backend_libs__matching__stack_slot_graph_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__lookup_2_0);

MR_BEGIN_MODULE(backend_libs__matching_module52)
	MR_init_entry1(fn__backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__580__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__580__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__reachable_by_alternating_path__580__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__matching__IntroducedFrom__func__reachable_by_alternating_path__580__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, benefit_node);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__matching, cost_node);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__map__lookup_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__backend_libs__matching_maybe_bunch_0(void)
{
	backend_libs__matching_module0();
	backend_libs__matching_module1();
	backend_libs__matching_module2();
	backend_libs__matching_module3();
	backend_libs__matching_module4();
	backend_libs__matching_module5();
	backend_libs__matching_module6();
	backend_libs__matching_module7();
	backend_libs__matching_module8();
	backend_libs__matching_module9();
	backend_libs__matching_module10();
	backend_libs__matching_module11();
	backend_libs__matching_module12();
	backend_libs__matching_module13();
	backend_libs__matching_module14();
	backend_libs__matching_module15();
	backend_libs__matching_module16();
	backend_libs__matching_module17();
	backend_libs__matching_module18();
	backend_libs__matching_module19();
	backend_libs__matching_module20();
	backend_libs__matching_module21();
	backend_libs__matching_module22();
	backend_libs__matching_module23();
	backend_libs__matching_module24();
	backend_libs__matching_module25();
	backend_libs__matching_module26();
	backend_libs__matching_module27();
	backend_libs__matching_module28();
	backend_libs__matching_module29();
	backend_libs__matching_module30();
	backend_libs__matching_module31();
	backend_libs__matching_module32();
	backend_libs__matching_module33();
	backend_libs__matching_module34();
	backend_libs__matching_module35();
	backend_libs__matching_module36();
	backend_libs__matching_module37();
	backend_libs__matching_module38();
	backend_libs__matching_module39();
}

static void mercury__backend_libs__matching_maybe_bunch_1(void)
{
	backend_libs__matching_module40();
	backend_libs__matching_module41();
	backend_libs__matching_module42();
	backend_libs__matching_module43();
	backend_libs__matching_module44();
	backend_libs__matching_module45();
	backend_libs__matching_module46();
	backend_libs__matching_module47();
	backend_libs__matching_module48();
	backend_libs__matching_module49();
	backend_libs__matching_module50();
	backend_libs__matching_module51();
	backend_libs__matching_module52();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__matching__init(void);
void mercury__backend_libs__matching__init_type_tables(void);
void mercury__backend_libs__matching__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__matching__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__matching__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__backend_libs__matching__init_threadscope_string_table(void);
#endif

void mercury__backend_libs__matching__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backend_libs__matching_maybe_bunch_0();
	mercury__backend_libs__matching_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0,
		backend_libs__matching__benefit_node_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0,
		backend_libs__matching__benefit_node_and_edge_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__matching__type_ctor_info_benefit_operation_0,
		backend_libs__matching__benefit_operation_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__matching__type_ctor_info_cost_node_0,
		backend_libs__matching__cost_node_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__matching__type_ctor_info_cost_operation_0,
		backend_libs__matching__cost_operation_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__matching__type_ctor_info_edge_list_0,
		backend_libs__matching__edge_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__matching__type_ctor_info_field_costs_benefits_0,
		backend_libs__matching__field_costs_benefits_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__matching__type_ctor_info_matching_0,
		backend_libs__matching__matching_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__matching__type_ctor_info_matching_params_0,
		backend_libs__matching__matching_params_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__matching__type_ctor_info_stack_slot_graph_0,
		backend_libs__matching__stack_slot_graph_0_0);
	mercury__backend_libs__matching__init_debugger();
}

void mercury__backend_libs__matching__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__matching__type_ctor_info_benefit_node_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__matching__type_ctor_info_benefit_node_and_edge_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__matching__type_ctor_info_benefit_operation_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__matching__type_ctor_info_cost_node_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__matching__type_ctor_info_cost_operation_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__matching__type_ctor_info_edge_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__matching__type_ctor_info_field_costs_benefits_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__matching__type_ctor_info_matching_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__matching__type_ctor_info_matching_params_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__matching__type_ctor_info_stack_slot_graph_0);
	}
}


void mercury__backend_libs__matching__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backend_libs__matching__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__backend_libs__matching);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__matching__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__backend_libs__matching__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
