/*
** Automatically generated from `hlds_dependency_graph.m'
** by the Mercury compiler,
** version rotd-2018-08-29
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module hlds.hlds_dependency_graph.
// :- implementation.

/*
INIT mercury__hlds__hlds_dependency_graph__init
ENDINIT
*/

#include "hlds.hlds_dependency_graph.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_dependency_graph__pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__list__pti_list_1__plain_pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_dependency_graph__pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__list__pti_list_1__plain_pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_dependency_graph__pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_dependency_graph__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_0;

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_1;

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_2;

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_value_ordered_edge_kind_0[3];

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_name_ordered_edge_kind_0[3];

static const MR_Integer hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_edge_kind_0[3];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__list__ti_list_1set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__ti_digraph_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_include_imported_0_0;

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_include_imported_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_value_ordered_include_imported_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_name_ordered_include_imported_0[2];

static const MR_Integer hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_include_imported_0[2];

static const MR_PseudoTypeInfo hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__field_types_scc_with_entry_points_0_0[3];

static const MR_ConstString hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__field_names_scc_with_entry_points_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_functor_desc_scc_with_entry_points_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_stag_ordered_scc_with_entry_points_0_0[1];

static const MR_DuPtagLayout hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_ptag_ordered_scc_with_entry_points_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_name_ordered_scc_with_entry_points_0[1];

static const MR_Integer hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_scc_with_entry_points_0[1];

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_0;

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_1;

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_2;

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_value_ordered_what_dependency_edges_0[3];

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_name_ordered_what_dependency_edges_0[3];

static const MR_Integer hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_what_dependency_edges_0[3];

static const MR_ConstString hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_var_names_dependency_node_1[1];

static const MR_TypeClassMethod hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_method_ids_dependency_node_1[1];

static const MR_TypeClassId hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_dependency_node_1;

static void MR_CALL 
hlds__hlds_dependency_graph__IntroducedFrom__pred__find_scc_entry_points__708__1_3_p_0(
  MR_Word DepGraph_2,
  MR_Word HeadVar__2_33,
  MR_Word * HeadVar__3_34);

static void MR_CALL 
hlds__hlds_dependency_graph__IntroducedFrom__pred__build_proc_dependency_graph__267__1_4_p_0(
  MR_Word HeadVar__1_20,
  MR_Word * HeadVar__2_21,
  MR_Word HeadVar__3_22,
  MR_Word * HeadVar__4_23);

static void MR_CALL 
hlds__hlds_dependency_graph__IntroducedFrom__pred__build_pred_dependency_graph__217__1_4_p_0(
  MR_Word HeadVar__1_26,
  MR_Word * HeadVar__2_27,
  MR_Word HeadVar__3_28,
  MR_Word * HeadVar__4_29);

static MR_Word MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____edge_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____edge_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____dep_arcs_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____dep_arcs_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__dependency_node_1_f_0(
  MR_Word TypeClassInfo_for_dependency_node_3,
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph__proc_is_exported_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PredProcId_4);

static void MR_CALL 
hlds__hlds_dependency_graph__find_callee_keys_3_p_0(
  MR_Word DepGraph_4,
  MR_Word ParentId_5,
  MR_Word * ChildKeys_6);

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_arg_8_p_0(
  MR_Word PredSCC_9,
  MR_Word IsAgg_10,
  MR_Integer SCCid_11,
  MR_Word PredProcId_12,
  MR_Word STATE_VARIABLE_SCCGraph_0_16,
  MR_Word * STATE_VARIABLE_SCCGraph_17,
  MR_Word STATE_VARIABLE_NoMerge_0_18,
  MR_Word * STATE_VARIABLE_NoMerge_19);

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_args_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_args_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IsAgg_2,
  MR_Integer SCCid_3,
  MR_Word Map_4,
  MR_Word PredSCC_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_NoMerge_0_8,
  MR_Word * STATE_VARIABLE_NoMerge_9);

static void MR_CALL 
hlds__hlds_dependency_graph__write_dep_graph_link_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Parent_7,
  MR_Word Child_8);

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dep_graph_link_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Parent_7,
  MR_Word Child_8);

static void MR_CALL 
hlds__hlds_dependency_graph__write_empty_node_3_p_0(
  MR_Word HeadVar__1_4);

static void MR_CALL 
hlds__hlds_dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_109_112_116_121_95_110_111_100_101_95_95_91_49_93_95_48_3_p_0(void);

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_ordering_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
hlds__hlds_dependency_graph__write_scc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_proc_arcs_7_p_0(
  MR_Word DepGraph_8,
  MR_Word WhatEdges_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_DepArcs_0_16,
  MR_Word * STATE_VARIABLE_DepArcs_17);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_6_p_0(
  MR_Word DepGraph_7,
  MR_Word WhatEdges_8,
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_DepArcs_0_14,
  MR_Word * STATE_VARIABLE_DepArcs_15);

static MR_Word MR_CALL 
hlds__hlds_dependency_graph__pred_proc_id_get_pred_id_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_arcs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_arcs_6_p_0(
  MR_Word DepGraph_7,
  MR_Word WhatEdges_8,
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_DepArcs_0_19,
  MR_Word * STATE_VARIABLE_DepArcs_20);

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_6_p_0(
  MR_Word TypeClassInfo_for_dependency_node_107,
  MR_Word DepGraph_7,
  MR_Word WhatEdges_8,
  MR_Word Caller_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_DepArcs_0_81,
  MR_Word * STATE_VARIABLE_DepArcs_82);

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_6_p_0(
  MR_Word TypeClassInfo_for_dependency_node_29,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DepArcs_0_5,
  MR_Word * STATE_VARIABLE_DepArcs_6);

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_6_p_0(
  MR_Word TypeClassInfo_for_dependency_node_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DepArcs_0_5,
  MR_Word * STATE_VARIABLE_DepArcs_6);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_dependency_arc_7_p_0(
  MR_Word TypeClassInfo_for_dependency_node_20,
  MR_Word DepGraph_8,
  MR_Word WhatEdges_9,
  MR_Word EdgeKind_10,
  MR_Word Caller_11,
  MR_Word PredProcId_12,
  MR_Word STATE_VARIABLE_DepArcs_0_15,
  MR_Word * STATE_VARIABLE_DepArcs_16);

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_6_p_0(
  MR_Word TypeClassInfo_for_dependency_node_52,
  MR_Word DepGraph_7,
  MR_Word WhatEdges_8,
  MR_Word Caller_9,
  MR_Word ConsId_10,
  MR_Word STATE_VARIABLE_DepArcs_0_48,
  MR_Word * STATE_VARIABLE_DepArcs_49);

static void MR_CALL 
hlds__hlds_dependency_graph__gather_pred_ids_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word IncludeImported_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredIds_0_11,
  MR_Word * STATE_VARIABLE_PredIds_12);

static void MR_CALL 
hlds__hlds_dependency_graph__gather_pred_proc_id_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_PredProcIds_0_8,
  MR_Word * STATE_VARIABLE_PredProcIds_9);

static void MR_CALL 
hlds__hlds_dependency_graph__gather_pred_proc_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__gather_pred_proc_ids_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Imported_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredProcIds_0_12,
  MR_Word * STATE_VARIABLE_PredProcIds_13);

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word DepGraph_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CalledFromHigherSCC_0_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____dep_arcs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____dep_arcs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____edge_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____edge_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_bottom_up_dependency_sccs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_bottom_up_dependency_sccs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____include_imported_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____include_imported_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_with_entry_points_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_with_entry_points_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____what_dependency_edges_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____what_dependency_edges_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_1[17][2];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_2[8][3];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_3[3][7];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_4[3][5];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_5[2][9];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_6[3][8];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_7[3][6];

static /* final */ const MR_Integer hlds__hlds_dependency_graph_scalar_common_8[1][2];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_9[2][10];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_10[1][11];




static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_1[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_2[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 9 */
  {
    ((MR_Box) (base_typeclass_info_hlds__hlds_dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 10 */
  {
    ((MR_Box) (base_typeclass_info_hlds__hlds_dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_proc_id__arity0__)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_1[5]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_1[8]))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_1[2])),
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_1[5])),
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_1[5]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_7[2])),
    ((MR_Box) (hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_7[2])),
    ((MR_Box) (hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_4[2])),
    ((MR_Box) (hlds__hlds_dependency_graph__maybe_add_pred_arcs_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_5[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_what_dependency_edges_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_what_dependency_edges_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_6[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_include_imported_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_include_imported_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_7[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer hlds__hlds_dependency_graph_scalar_common_8[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_9[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_8[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__pseudo_1)),
    ((MR_Box) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_what_dependency_edges_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_what_dependency_edges_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__list__pti_list_1__plain_pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_dependency_graph__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_dependency_graph__pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__list__pti_list_1__plain_pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_dependency_graph__pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__list__pti_list_1__plain_pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__pair__ti_pair_2digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_dependency_graph__pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__pseudo_1),
    (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_dependency_graph__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_dep_arcs_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____dep_arcs_1_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____dep_arcs_1_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "dep_arcs",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_0 = {
  (MR_String) "edge_non_tail_call",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_1 = {
  (MR_String) "edge_tail_call",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_2 = {
  (MR_String) "edge_unify",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_value_ordered_edge_kind_0[3] = {
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_0,
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_1,
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_2
};

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_name_ordered_edge_kind_0[3] = {
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_0,
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_1,
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_edge_kind_0_2
};

static const MR_Integer hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_edge_kind_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_edge_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____edge_kind_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____edge_kind_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "edge_kind",
  {     hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_name_ordered_edge_kind_0 },
  {     hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_value_ordered_edge_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_edge_kind_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__list__ti_list_1set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_dependency_graph__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_bottom_up_dependency_sccs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____hlds_bottom_up_dependency_sccs_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____hlds_bottom_up_dependency_sccs_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "hlds_bottom_up_dependency_sccs",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__list__ti_list_1set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__ti_digraph_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "hlds_dependency_graph",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__digraph__ti_digraph_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_graph_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_key_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_key_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "hlds_dependency_graph_key",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____hlds_dependency_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____hlds_dependency_info_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "hlds_dependency_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_include_imported_0_0 = {
  (MR_String) "include_imported",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_include_imported_0_1 = {
  (MR_String) "do_not_include_imported",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_value_ordered_include_imported_0[2] = {
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_include_imported_0_0,
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_include_imported_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_name_ordered_include_imported_0[2] = {
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_include_imported_0_1,
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_include_imported_0_0
};

static const MR_Integer hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_include_imported_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_include_imported_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____include_imported_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____include_imported_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "include_imported",
  {     hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_name_ordered_include_imported_0 },
  {     hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_value_ordered_include_imported_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_include_imported_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____scc_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____scc_id_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "scc_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__field_types_scc_with_entry_points_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_dependency_graph__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_ConstString hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__field_names_scc_with_entry_points_0_0[3] = {
  (MR_String) "swep_scc_procs",
  (MR_String) "swep_called_from_higher_sccs",
  (MR_String) "swep_exported_procs"
};

static const MR_DuFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_functor_desc_scc_with_entry_points_0_0 = {
  (MR_String) "scc_with_entry_points",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__field_types_scc_with_entry_points_0_0,
  hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__field_names_scc_with_entry_points_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_stag_ordered_scc_with_entry_points_0_0[1] = {
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_functor_desc_scc_with_entry_points_0_0
};

static const MR_DuPtagLayout hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_ptag_ordered_scc_with_entry_points_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_stag_ordered_scc_with_entry_points_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_name_ordered_scc_with_entry_points_0[1] = {
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_functor_desc_scc_with_entry_points_0_0
};

static const MR_Integer hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_scc_with_entry_points_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____scc_with_entry_points_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____scc_with_entry_points_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "scc_with_entry_points",
  {     hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_name_ordered_scc_with_entry_points_0 },
  {     hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_ptag_ordered_scc_with_entry_points_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_scc_with_entry_points_0
};

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_0 = {
  (MR_String) "only_tail_calls",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_1 = {
  (MR_String) "only_all_calls",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_2 = {
  (MR_String) "all_calls_and_unifies",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_value_ordered_what_dependency_edges_0[3] = {
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_0,
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_1,
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_2
};

static const MR_EnumFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_name_ordered_what_dependency_edges_0[3] = {
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_2,
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_1,
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_functor_desc_what_dependency_edges_0_0
};

static const MR_Integer hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_what_dependency_edges_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_what_dependency_edges_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____what_dependency_edges_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____what_dependency_edges_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "what_dependency_edges",
  {     hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_name_ordered_what_dependency_edges_0 },
  {     hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__enum_value_ordered_what_dependency_edges_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__functor_number_map_what_dependency_edges_0
};

const MR_BaseTypeclassInfo base_typeclass_info_hlds__hlds_dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_hlds__hlds_dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_proc_id__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0_10001))
};

static const MR_ConstString hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_var_names_dependency_node_1[1] = {
  (MR_String) "T"
};

static const MR_TypeClassMethod hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_method_ids_dependency_node_1[1] = {
  {
    (MR_String) "dependency_node",
    (MR_Integer) 2,
    MR_FUNCTION
  }
};

static const MR_TypeClassId hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_dependency_node_1 = {
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "dependency_node",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_var_names_dependency_node_1,
  hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_method_ids_dependency_node_1
};

const MR_TypeClassDeclStruct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_decl_dependency_node_1 = {
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_dependency_node_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
hlds__hlds_dependency_graph__IntroducedFrom__pred__find_scc_entry_points__708__1_3_p_0(
  MR_Word DepGraph_2,
  MR_Word HeadVar__2_33,
  MR_Word * HeadVar__3_34)
{
  {
    MR_Box conv0_HeadVar__3_34;

    mercury__digraph__lookup_vertex_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepGraph_2, HeadVar__2_33, &conv0_HeadVar__3_34);
    *HeadVar__3_34 = ((MR_Word) (conv0_HeadVar__3_34));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__IntroducedFrom__pred__build_proc_dependency_graph__267__1_4_p_0(
  MR_Word HeadVar__1_20,
  MR_Word * HeadVar__2_21,
  MR_Word HeadVar__3_22,
  MR_Word * HeadVar__4_23)
{
  {
    mercury__digraph__add_vertex_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (HeadVar__1_20)), HeadVar__2_21, HeadVar__3_22, HeadVar__4_23);
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__IntroducedFrom__pred__build_pred_dependency_graph__217__1_4_p_0(
  MR_Word HeadVar__1_26,
  MR_Word * HeadVar__2_27,
  MR_Word HeadVar__3_28,
  MR_Word * HeadVar__4_29)
{
  {
    mercury__digraph__add_vertex_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (HeadVar__1_26)), HeadVar__2_27, HeadVar__3_28, HeadVar__4_29);
  }
}

static MR_Word MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Box conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__std_util__id_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (HeadVar__1_1)));
    HeadVar__2_2 = ((MR_Word) (conv0_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return HeadVar__2_2;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____what_dependency_edges_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____what_dependency_edges_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_with_entry_points_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[8]), &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[8]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_with_entry_points_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[8]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____include_imported_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____include_imported_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[16]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[16]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_bottom_up_dependency_sccs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[15]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_bottom_up_dependency_sccs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[15]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____edge_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____edge_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____dep_arcs_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word TypeInfo_10_10;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_8_8));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 2) = ((MR_Box) (TypeInfo_8_8));
    }
    mercury__list____Compare____list_1_0(TypeInfo_10_10, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____dep_arcs_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word TypeInfo_9_9;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_7_7));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_7_7));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_9_9, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__dependency_node_1_f_0(
  MR_Word TypeClassInfo_for_dependency_node_3,
  MR_Word HeadVar__1_1)
{
  {
    MR_Box HeadVar__2_2;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_dependency_node_3, (MR_Integer) 0)), (MR_Integer) 5))));

    HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_dependency_node_3)), ((MR_Box) (HeadVar__1_1)));
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph__proc_is_exported_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PredProcId_4)
{
  {
    MR_bool succeeded;
    MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_4, (MR_Integer) 0))));
    MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_4, (MR_Integer) 1))));
    MR_Word PredInfo_7;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_3, PredId_5, &PredInfo_7);
    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_3, PredInfo_7, ProcId_6);
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__find_callee_keys_3_p_0(
  MR_Word DepGraph_4,
  MR_Word ParentId_5,
  MR_Word * ChildKeys_6)
{
  {
    MR_Word ParentKey_7;

    mercury__digraph__lookup_key_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepGraph_4, ((MR_Box) (ParentId_5)), &ParentKey_7);
    mercury__digraph__lookup_from_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepGraph_4, ParentKey_7, ChildKeys_6);
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_arg_8_p_0(
  MR_Word PredSCC_9,
  MR_Word IsAgg_10,
  MR_Integer SCCid_11,
  MR_Word PredProcId_12,
  MR_Word STATE_VARIABLE_SCCGraph_0_16,
  MR_Word * STATE_VARIABLE_SCCGraph_17,
  MR_Word STATE_VARIABLE_NoMerge_0_18,
  MR_Word * STATE_VARIABLE_NoMerge_19)
{
  {
    MR_bool succeeded;
    MR_Integer CalledSCCid_15;
    MR_Box conv0_CalledSCCid_15;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PredSCC_9, ((MR_Box) (PredProcId_12)), &conv0_CalledSCCid_15);
    if (succeeded)
    {
      CalledSCCid_15 = ((MR_Integer) (conv0_CalledSCCid_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      switch (IsAgg_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_NoMerge_19 = STATE_VARIABLE_NoMerge_0_18;
          break;
        case (MR_Integer) 1:
          {
            mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (CalledSCCid_15)), STATE_VARIABLE_NoMerge_0_18, STATE_VARIABLE_NoMerge_19);
          }
          break;
      }
      succeeded = (CalledSCCid_15 == SCCid_11);
      if (succeeded)
        *STATE_VARIABLE_SCCGraph_17 = STATE_VARIABLE_SCCGraph_0_16;
      else
      {
        mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (SCCid_11)), ((MR_Box) (CalledSCCid_15)), STATE_VARIABLE_SCCGraph_0_16, STATE_VARIABLE_SCCGraph_17);
      }
    }
    else
    {
      *STATE_VARIABLE_NoMerge_19 = STATE_VARIABLE_NoMerge_0_18;
      *STATE_VARIABLE_SCCGraph_17 = STATE_VARIABLE_SCCGraph_0_16;
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_args_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_SCCGraph_17;
    MR_Word conv0_STATE_VARIABLE_NoMerge_19;

    hlds__hlds_dependency_graph__handle_higher_order_arg_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SCCGraph_17, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_NoMerge_19);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SCCGraph_17));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_NoMerge_19));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_args_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IsAgg_2,
  MR_Integer SCCid_3,
  MR_Word Map_4,
  MR_Word PredSCC_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_NoMerge_0_8,
  MR_Word * STATE_VARIABLE_NoMerge_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NoMerge_9 = STATE_VARIABLE_NoMerge_0_8;
      *HeadVar__7_7 = HeadVar__6_6;
    }
    else
    {
      MR_Word Arg_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_SCCGraph_34_34;
      MR_Word STATE_VARIABLE_NoMerge_35_35;
      MR_Word PredProcIds_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_NoMerge_0_8;

      succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[11]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Map_4, ((MR_Box) (Arg_20)), &PredProcIds_28);
      if (succeeded)
      {
        MR_Word Var_33;
        MR_Box conv3_STATE_VARIABLE_SCCGraph_34_34;
        MR_Box conv2_STATE_VARIABLE_NoMerge_35_35;

        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_10[0]));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__hlds_dependency_graph__handle_higher_order_args_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (PredSCC_5));
          MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (IsAgg_2));
          MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (SCCid_3));
        }
        mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[12]), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[13]), Var_33, PredProcIds_28, ((MR_Box) (HeadVar__6_6)), &conv3_STATE_VARIABLE_SCCGraph_34_34, ((MR_Box) (STATE_VARIABLE_NoMerge_0_8)), &conv2_STATE_VARIABLE_NoMerge_35_35);
        STATE_VARIABLE_SCCGraph_34_34 = ((MR_Word) (conv3_STATE_VARIABLE_SCCGraph_34_34));
        STATE_VARIABLE_NoMerge_35_35 = ((MR_Word) (conv2_STATE_VARIABLE_NoMerge_35_35));
      }
      else
      {
        STATE_VARIABLE_NoMerge_35_35 = STATE_VARIABLE_NoMerge_0_8;
        STATE_VARIABLE_SCCGraph_34_34 = HeadVar__6_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_21;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_SCCGraph_34_34;
      next_value_of_STATE_VARIABLE_NoMerge_0_8 = STATE_VARIABLE_NoMerge_35_35;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_NoMerge_0_8 = next_value_of_STATE_VARIABLE_NoMerge_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_dep_graph_link_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Parent_7,
  MR_Word Child_8)
{
  {
    MR_Word PPredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Parent_7, (MR_Integer) 0))));
    MR_Integer PProcId_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Parent_7, (MR_Integer) 1))));
    MR_Word CPredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Child_8, (MR_Integer) 0))));
    MR_Integer CProcId_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Child_8, (MR_Integer) 1))));
    MR_Word PPredInfo_14;
    MR_Word PProcInfo_15;
    MR_Word CPredInfo_16;
    MR_Word CProcInfo_17;
    MR_String PName_18;
    MR_Word PDet_19;
    MR_Word PModes_20;
    MR_String CName_21;
    MR_Word CDet_22;
    MR_Word CModes_23;
    MR_Word ModeVarSet_24;
    MR_Word Var_28;
    MR_Word Var_33;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_6, PPredId_10, PProcId_11, &PPredInfo_14, &PProcInfo_15);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_6, CPredId_12, CProcId_13, &CPredInfo_16, &CProcInfo_17);
    PName_18 = hlds__hlds_pred__pred_info_name_1_f_0(PPredInfo_14);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(PProcInfo_15, &PDet_19);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(PProcInfo_15, &PModes_20);
    CName_21 = hlds__hlds_pred__pred_info_name_1_f_0(CPredInfo_16);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(CProcInfo_17, &CDet_22);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CProcInfo_17, &CModes_23);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &ModeVarSet_24);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (PName_18));
    }
    parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, ModeVarSet_24, Var_28, PModes_20, PDet_19);
    mercury__io__write_string_3_p_0((MR_String) " -> ");
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (CName_21));
    }
    parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, ModeVarSet_24, Var_33, CModes_23, CDet_22);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dep_graph_link_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Parent_7,
  MR_Word Child_8)
{
  {
    MR_Word PPredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Parent_7, (MR_Integer) 0))));
    MR_Integer PProcId_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Parent_7, (MR_Integer) 1))));
    MR_Word CPredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Child_8, (MR_Integer) 0))));
    MR_Integer CProcId_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Child_8, (MR_Integer) 1))));
    MR_Word ProcLabel_28;
    MR_Word ProcLabel_36;

    ProcLabel_28 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_6, PPredId_10, PProcId_11);
    backend_libs__name_mangle__output_proc_label_3_p_0(ProcLabel_28);
    mercury__io__write_string_3_p_0((MR_String) "\t");
    ProcLabel_36 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_6, CPredId_12, CProcId_13);
    backend_libs__name_mangle__output_proc_label_3_p_0(ProcLabel_36);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_empty_node_3_p_0(
  MR_Word HeadVar__1_4)
{
  hlds__hlds_dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_109_112_116_121_95_110_111_100_101_95_95_91_49_93_95_48_3_p_0();
}

static void MR_CALL 
hlds__hlds_dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_109_112_116_121_95_110_111_100_101_95_95_91_49_93_95_48_3_p_0(void)
{
  {
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_ordering_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    else
    {
      MR_Word SCC_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word SCCs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Integer Var_29;
      MR_Integer next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;

      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "% SCC ");
      mercury__io__write_int_4_p_0(HeadVar__1_1, HeadVar__3_3);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
      hlds__hlds_dependency_graph__write_scc_5_p_0(HeadVar__1_1, HeadVar__2_2, SCC_18);
      Var_29 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Var_29;
      next_value_of_HeadVar__4_4 = SCCs_19;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_scc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredProcId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PredProcIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 0))));
      MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 1))));
      MR_Word PredInfo_18;
      MR_Word ProcInfo_19;
      MR_String Name_20;
      MR_Word Det_21;
      MR_Word Modes_22;
      MR_Word ModeVarSet_23;
      MR_Word OldStream_24;
      MR_Word Var_32;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__3_3;

      hlds__hlds_module__module_info_pred_proc_info_5_p_0(HeadVar__2_2, PredId_16, ProcId_17, &PredInfo_18, &ProcInfo_19);
      Name_20 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_18);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_19, &Det_21);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_19, &Modes_22);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &ModeVarSet_23);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "% ");
      mercury__io__set_output_stream_4_p_0(HeadVar__1_1, &OldStream_24);
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Name_20));
      }
      parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, ModeVarSet_23, Var_32, Modes_22, Det_21);
      mercury__io__set_output_stream_4_p_0(OldStream_24, &Var_25);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredProcIds_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_proc_arcs_7_p_0(
  MR_Word DepGraph_8,
  MR_Word WhatEdges_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_DepArcs_0_16,
  MR_Word * STATE_VARIABLE_DepArcs_17)
{
  {
    MR_bool succeeded;
    MR_Word Caller_14;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ProcId_11));
    }
    succeeded = mercury__digraph__search_key_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepGraph_8, ((MR_Box) (Var_18)), &Caller_14);
    if (succeeded)
    {
      MR_Word Goal_15;

      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Goal_15);
      hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_6_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[10]), DepGraph_8, WhatEdges_9, Caller_14, Goal_15, STATE_VARIABLE_DepArcs_0_16, STATE_VARIABLE_DepArcs_17);
    }
    else
      *STATE_VARIABLE_DepArcs_17 = STATE_VARIABLE_DepArcs_0_16;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DepArcs_17;

    hlds__hlds_dependency_graph__maybe_add_proc_arcs_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_DepArcs_17);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_DepArcs_17));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_6_p_0(
  MR_Word DepGraph_7,
  MR_Word WhatEdges_8,
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_DepArcs_0_14,
  MR_Word * STATE_VARIABLE_DepArcs_15)
{
  {
    MR_Word PredInfo_12;
    MR_Word ProcTable_13;
    MR_Word Var_16;
    MR_Box conv1_STATE_VARIABLE_DepArcs_15;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_9, PredId_10, &PredInfo_12);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_12, &ProcTable_13);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (DepGraph_7));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (WhatEdges_8));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (PredId_10));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[7]), Var_16, ProcTable_13, ((MR_Box) (STATE_VARIABLE_DepArcs_0_14)), &conv1_STATE_VARIABLE_DepArcs_15);
    *STATE_VARIABLE_DepArcs_15 = ((MR_Word) (conv1_STATE_VARIABLE_DepArcs_15));
  }
}

static MR_Word MR_CALL 
hlds__hlds_dependency_graph__pred_proc_id_get_pred_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word PredId_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return PredId_3;
  }
}

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_arcs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_arcs_6_p_0(
  MR_Word DepGraph_7,
  MR_Word WhatEdges_8,
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_DepArcs_0_19,
  MR_Word * STATE_VARIABLE_DepArcs_20)
{
  {
    MR_bool succeeded;
    MR_Word Caller_12;

    succeeded = mercury__digraph__search_key_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), DepGraph_7, ((MR_Box) (PredId_10)), &Caller_12);
    if (succeeded)
    {
      MR_Word PredInfo_13;
      MR_Word ClausesInfo_14;
      MR_Word ClausesRep_15;
      MR_Word Clauses_17;
      MR_Word Goals_18;
      MR_Word _ItemNumbers_16;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_9, PredId_10, &PredInfo_13);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_13, &ClausesInfo_14);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_14, &ClausesRep_15, &_ItemNumbers_16);
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_15, &Clauses_17);
      Goals_18 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_2[7]), Clauses_17);
      hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_6_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[9]), DepGraph_7, WhatEdges_8, Caller_12, Goals_18, STATE_VARIABLE_DepArcs_0_19, STATE_VARIABLE_DepArcs_20);
    }
    else
      *STATE_VARIABLE_DepArcs_20 = STATE_VARIABLE_DepArcs_0_19;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_6_p_0(
  MR_Word TypeClassInfo_for_dependency_node_107,
  MR_Word DepGraph_7,
  MR_Word WhatEdges_8,
  MR_Word Caller_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_DepArcs_0_81,
  MR_Word * STATE_VARIABLE_DepArcs_82)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
    MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_23 = (MR_Word) (MR_body((MR_Word) (GoalExpr_12), (MR_Integer) 0));
          MR_Word next_value_of_Goal_10 = SubGoal_23;

          // direct tailcall eliminated
          ;
          Goal_10 = next_value_of_Goal_10;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unify_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Unify_49)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ConsId_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_49, (MR_Integer) 1))));

                hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_6_p_0(TypeClassInfo_for_dependency_node_107, DepGraph_7, WhatEdges_8, Caller_9, ConsId_52, STATE_VARIABLE_DepArcs_0_81, STATE_VARIABLE_DepArcs_82);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ConsId_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify_49, (MR_Integer) 1))));

                hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_6_p_0(TypeClassInfo_for_dependency_node_107, DepGraph_7, WhatEdges_8, Caller_9, ConsId_109, STATE_VARIABLE_DepArcs_0_81, STATE_VARIABLE_DepArcs_82);
              }
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_DepArcs_82 = STATE_VARIABLE_DepArcs_0_81;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unify_49, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_DepArcs_82 = STATE_VARIABLE_DepArcs_0_81;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_DepArcs_82 = STATE_VARIABLE_DepArcs_0_81;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 0))));
          MR_Integer ProcId_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 1))));
          MR_Word Builtin_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 3))));

          switch (Builtin_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_DepArcs_82 = STATE_VARIABLE_DepArcs_0_81;
              break;
            case (MR_Integer) 1:
              {
                MR_Word EdgeKind_45;
                MR_Word Var_90;

                succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_13, (MR_Integer) 11);
                if (succeeded)
                  EdgeKind_45 = (MR_Integer) 1;
                else
                  EdgeKind_45 = (MR_Integer) 0;
                {
                  Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (PredId_39));
                  MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (ProcId_40));
                }
                hlds__hlds_dependency_graph__maybe_add_dependency_arc_7_p_0(TypeClassInfo_for_dependency_node_107, DepGraph_7, WhatEdges_8, EdgeKind_45, Caller_9, Var_90, STATE_VARIABLE_DepArcs_0_81, STATE_VARIABLE_DepArcs_82);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_DepArcs_82 = STATE_VARIABLE_DepArcs_0_81;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_DepArcs_82 = STATE_VARIABLE_DepArcs_0_81;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));

              hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_6_p_0(TypeClassInfo_for_dependency_node_107, DepGraph_7, WhatEdges_8, Caller_9, Goals_15, STATE_VARIABLE_DepArcs_0_81, STATE_VARIABLE_DepArcs_82);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));

              hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_6_p_0(TypeClassInfo_for_dependency_node_107, DepGraph_7, WhatEdges_8, Caller_9, Goals_108, STATE_VARIABLE_DepArcs_0_81, STATE_VARIABLE_DepArcs_82);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3))));

              hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_6_p_0(TypeClassInfo_for_dependency_node_107, DepGraph_7, WhatEdges_8, Caller_9, Cases_18, STATE_VARIABLE_DepArcs_0_81, STATE_VARIABLE_DepArcs_82);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));
              MR_Word SubGoal_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));
              MR_Word FGT_26;

              succeeded = ((((MR_tag((MR_Word) Reason_24)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_24, (MR_Integer) 0))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_24, (MR_Integer) 2))));
                switch (FGT_26) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                *STATE_VARIABLE_DepArcs_82 = STATE_VARIABLE_DepArcs_0_81;
              else
              {
                MR_Word next_value_of_Goal_10 = SubGoal_99;

                // direct tailcall eliminated
                ;
                Goal_10 = next_value_of_Goal_10;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));
              MR_Word Then_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3))));
              MR_Word Else_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_DepArcs_94_94;
              MR_Word STATE_VARIABLE_DepArcs_95_95;
              MR_Word next_value_of_Goal_10;
              MR_Word next_value_of_STATE_VARIABLE_DepArcs_0_81;

              hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_6_p_0(TypeClassInfo_for_dependency_node_107, DepGraph_7, WhatEdges_8, Caller_9, Cond_20, STATE_VARIABLE_DepArcs_0_81, &STATE_VARIABLE_DepArcs_94_94);
              hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_6_p_0(TypeClassInfo_for_dependency_node_107, DepGraph_7, WhatEdges_8, Caller_9, Then_21, STATE_VARIABLE_DepArcs_94_94, &STATE_VARIABLE_DepArcs_95_95);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_10 = Else_22;
              next_value_of_STATE_VARIABLE_DepArcs_0_81 = STATE_VARIABLE_DepArcs_95_95;
              Goal_10 = next_value_of_Goal_10;
              STATE_VARIABLE_DepArcs_0_81 = next_value_of_STATE_VARIABLE_DepArcs_0_81;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_70)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LHS_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_70, (MR_Integer) 0))));
                    MR_Word RHS_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_70, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_DepArcs_83_83;
                    MR_Word next_value_of_Goal_10;
                    MR_Word next_value_of_STATE_VARIABLE_DepArcs_0_81;

                    hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_6_p_0(TypeClassInfo_for_dependency_node_107, DepGraph_7, WhatEdges_8, Caller_9, LHS_79, STATE_VARIABLE_DepArcs_0_81, &STATE_VARIABLE_DepArcs_83_83);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_10 = RHS_80;
                    next_value_of_STATE_VARIABLE_DepArcs_0_81 = STATE_VARIABLE_DepArcs_83_83;
                    Goal_10 = next_value_of_Goal_10;
                    STATE_VARIABLE_DepArcs_0_81 = next_value_of_STATE_VARIABLE_DepArcs_0_81;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_70, (MR_Integer) 4))));
                    MR_Word OrElseGoals_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_70, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_DepArcs_86_86;

                    hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_6_p_0(TypeClassInfo_for_dependency_node_107, DepGraph_7, WhatEdges_8, Caller_9, MainGoal_74, STATE_VARIABLE_DepArcs_0_81, &STATE_VARIABLE_DepArcs_86_86);
                    hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_6_p_0(TypeClassInfo_for_dependency_node_107, DepGraph_7, WhatEdges_8, Caller_9, OrElseGoals_75, STATE_VARIABLE_DepArcs_86_86, STATE_VARIABLE_DepArcs_82);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_102 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_70, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_10 = SubGoal_102;

                    // direct tailcall eliminated
                    ;
                    Goal_10 = next_value_of_Goal_10;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DepArcs_49;

    hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DepArcs_49);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DepArcs_49));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_6_p_0(
  MR_Word TypeClassInfo_for_dependency_node_29,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DepArcs_0_5,
  MR_Word * STATE_VARIABLE_DepArcs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DepArcs_6 = STATE_VARIABLE_DepArcs_0_5;
    else
    {
      MR_Word TypeInfo_35_35;
      MR_Word TypeInfo_37_37;
      MR_Word TypeInfo_39_39;
      MR_Word TypeInfo_41_41;
      MR_Word Case_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Cases_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_16, (MR_Integer) 0))));
      MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_16, (MR_Integer) 1))));
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_16, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_DepArcs_24_24;
      MR_Word Var_25;
      MR_Word STATE_VARIABLE_DepArcs_26_26;
      MR_Word STATE_VARIABLE_DepArcs_27_27;
      MR_Box conv1_STATE_VARIABLE_DepArcs_26_26;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DepArcs_0_5;

      hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_6_p_0(TypeClassInfo_for_dependency_node_29, HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, MainConsId_19, STATE_VARIABLE_DepArcs_0_5, &STATE_VARIABLE_DepArcs_24_24);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (TypeClassInfo_for_dependency_node_29));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(MR_mktag(0), Var_25, 6) = ((MR_Box) (HeadVar__3_3));
      }
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_dependency_node_29, (MR_Integer) 1, &TypeInfo_35_35);
      {
        TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_37_37, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_35_35));
      }
      {
        TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_39_39, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
        MR_hl_field(MR_mktag(0), TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_37_37));
        MR_hl_field(MR_mktag(0), TypeInfo_39_39, 2) = ((MR_Box) (TypeInfo_37_37));
      }
      {
        TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_41_41, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), TypeInfo_41_41, 1) = ((MR_Box) (TypeInfo_39_39));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), TypeInfo_41_41, Var_25, OtherConsIds_20, ((MR_Box) (STATE_VARIABLE_DepArcs_24_24)), &conv1_STATE_VARIABLE_DepArcs_26_26);
      STATE_VARIABLE_DepArcs_26_26 = ((MR_Word) (conv1_STATE_VARIABLE_DepArcs_26_26));
      hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_6_p_0(TypeClassInfo_for_dependency_node_29, HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goal_21, STATE_VARIABLE_DepArcs_26_26, &STATE_VARIABLE_DepArcs_27_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Cases_17;
      next_value_of_STATE_VARIABLE_DepArcs_0_5 = STATE_VARIABLE_DepArcs_27_27;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DepArcs_0_5 = next_value_of_STATE_VARIABLE_DepArcs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_6_p_0(
  MR_Word TypeClassInfo_for_dependency_node_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DepArcs_0_5,
  MR_Word * STATE_VARIABLE_DepArcs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DepArcs_6 = STATE_VARIABLE_DepArcs_0_5;
    else
    {
      MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Goals_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_DepArcs_21_21;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DepArcs_0_5;

      hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_6_p_0(TypeClassInfo_for_dependency_node_23, HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goal_16, STATE_VARIABLE_DepArcs_0_5, &STATE_VARIABLE_DepArcs_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Goals_17;
      next_value_of_STATE_VARIABLE_DepArcs_0_5 = STATE_VARIABLE_DepArcs_21_21;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DepArcs_0_5 = next_value_of_STATE_VARIABLE_DepArcs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_dependency_arc_7_p_0(
  MR_Word TypeClassInfo_for_dependency_node_20,
  MR_Word DepGraph_8,
  MR_Word WhatEdges_9,
  MR_Word EdgeKind_10,
  MR_Word Caller_11,
  MR_Word PredProcId_12,
  MR_Word STATE_VARIABLE_DepArcs_0_15,
  MR_Word * STATE_VARIABLE_DepArcs_16)
{
  {
    MR_bool succeeded;
    MR_Word Callee_14;
    MR_Word TypeInfo_22_22;
    MR_Box Var_17;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_dependency_node_20, (MR_Integer) 0)), (MR_Integer) 5))));

    Var_17 = func_0(((MR_Box) (TypeClassInfo_for_dependency_node_20)), ((MR_Box) (PredProcId_12)));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_dependency_node_20, (MR_Integer) 1, &TypeInfo_22_22);
    succeeded = mercury__digraph__search_key_3_p_0(TypeInfo_22_22, DepGraph_8, Var_17, &Callee_14);
    if (succeeded)
      switch (WhatEdges_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          switch (EdgeKind_10) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 0:
          succeeded = (EdgeKind_10 == (MR_Integer) 1);
          break;
      }
    if (succeeded)
    {
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Caller_11));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Callee_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_DepArcs_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_DepArcs_0_15));
      }
    }
    else
      *STATE_VARIABLE_DepArcs_16 = STATE_VARIABLE_DepArcs_0_15;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_6_p_0(
  MR_Word TypeClassInfo_for_dependency_node_52,
  MR_Word DepGraph_7,
  MR_Word WhatEdges_8,
  MR_Word Caller_9,
  MR_Word ConsId_10,
  MR_Word STATE_VARIABLE_DepArcs_0_48,
  MR_Word * STATE_VARIABLE_DepArcs_49)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsId_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 3:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 4:
            {
              MR_Word ShroudedPredProcId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 1))));
              MR_Word PredProcId_14;
              MR_Word Callee_61;
              MR_Word TypeInfo_22_66;
              MR_Box Var_62;
              MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);

              PredProcId_14 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_12);
              func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_dependency_node_52, (MR_Integer) 0)), (MR_Integer) 5))));
              Var_62 = func_0(((MR_Box) (TypeClassInfo_for_dependency_node_52)), ((MR_Box) (PredProcId_14)));
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_dependency_node_52, (MR_Integer) 1, &TypeInfo_22_66);
              succeeded = mercury__digraph__search_key_3_p_0(TypeInfo_22_66, DepGraph_7, Var_62, &Callee_61);
              if (succeeded)
                succeeded = (WhatEdges_8 == (MR_Integer) 2);
              if (succeeded)
              {
                MR_Word Var_64;

                {
                  Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Caller_9));
                  MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Callee_61));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_DepArcs_49 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_64));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_DepArcs_0_48));
                }
              }
              else
                *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            }
            break;
          case (MR_Integer) 5:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 6:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 7:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 8:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 9:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 10:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 11:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 12:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 13:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 14:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 15:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 16:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 17:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 18:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 19:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 20:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 21:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 22:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
          case (MR_Integer) 23:
            *STATE_VARIABLE_DepArcs_49 = STATE_VARIABLE_DepArcs_0_48;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__gather_pred_ids_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word IncludeImported_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredIds_0_11,
  MR_Word * STATE_VARIABLE_PredIds_12)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_10;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_8, &PredInfo_10);
    succeeded = (IncludeImported_7 == (MR_Integer) 1);
    if (succeeded)
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_10);
    if (succeeded)
      *STATE_VARIABLE_PredIds_12 = STATE_VARIABLE_PredIds_0_11;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_PredIds_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_PredIds_0_11));
      }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__gather_pred_proc_id_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_PredProcIds_0_8,
  MR_Word * STATE_VARIABLE_PredProcIds_9)
{
  {
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (PredId_5));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (ProcId_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_PredProcIds_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_PredProcIds_0_8));
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__gather_pred_proc_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PredProcIds_9;

    hlds__hlds_dependency_graph__gather_pred_proc_id_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredProcIds_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredProcIds_9));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__gather_pred_proc_ids_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Imported_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredProcIds_0_12,
  MR_Word * STATE_VARIABLE_PredProcIds_13)
{
  {
    MR_Word PredInfo_10;
    MR_Word ProcIds_11;
    MR_Word Var_14;
    MR_Box conv1_STATE_VARIABLE_PredProcIds_13;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_8, &PredInfo_10);
    switch (Imported_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ProcIds_11 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_10);
        break;
      case (MR_Integer) 0:
        ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_10);
        break;
    }
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (hlds__hlds_dependency_graph__gather_pred_proc_ids_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (PredId_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[0]), Var_14, ProcIds_11, ((MR_Box) (STATE_VARIABLE_PredProcIds_0_12)), &conv1_STATE_VARIABLE_PredProcIds_13);
    *STATE_VARIABLE_PredProcIds_13 = ((MR_Word) (conv1_STATE_VARIABLE_PredProcIds_13));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_dependency_graph__write_prof_dep_graph_link_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_dependency_graph__write_empty_node_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word DepInfo_7;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word MaybeDepInfo_30;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &MaybeDepInfo_30);
    if ((MaybeDepInfo_30 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9, &DepInfo_7);
    else
    {
      DepInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDepInfo_30, (MR_Integer) 0))));
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
    }
    Var_13 = libs__dependency_graph__dependency_info_get_graph_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_7);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_9));
    }
    mercury__digraph__traverse_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_2[6]), Var_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_dependency_graph__write_dep_graph_link_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_dependency_graph__write_empty_node_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_graph_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word DepInfo_7;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word MaybeDepInfo_34;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &MaybeDepInfo_34);
    if ((MaybeDepInfo_34 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9, &DepInfo_7);
    else
    {
      DepInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDepInfo_34, (MR_Integer) 0))));
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
    }
    mercury__io__write_string_3_p_0((MR_String) "% Dependency graph\n");
    mercury__io__write_string_3_p_0((MR_String) "\n\n% Dependency ordering\n");
    Var_17 = libs__dependency_graph__dependency_info_get_graph_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_7);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_9));
    }
    mercury__digraph__traverse_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_2[5]), Var_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

void MR_CALL 
hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word DepInfo_5,
  MR_Word * BottomUpSCCsEntryPoints_6)
{
  {
    MR_Word DepGraph_7;
    MR_Word BottomUpSCCs_8;
    MR_Word TopDownSCCs_9;
    MR_Word TopDownSCCsEntryPoints_10;
    MR_Word Var_11;

    DepGraph_7 = libs__dependency_graph__dependency_info_get_graph_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_5);
    BottomUpSCCs_8 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_5);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[8]), BottomUpSCCs_8, &TopDownSCCs_9);
    Var_11 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
    hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0(ModuleInfo_4, DepGraph_7, TopDownSCCs_9, Var_11, &TopDownSCCsEntryPoints_10);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0), TopDownSCCsEntryPoints_10, BottomUpSCCsEntryPoints_6);
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_34;

    hlds__hlds_dependency_graph__IntroducedFrom__pred__find_scc_entry_points__708__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_34);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_34));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ChildKeys_6;

    hlds__hlds_dependency_graph__find_callee_keys_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ChildKeys_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ChildKeys_6));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__hlds_dependency_graph__proc_is_exported_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word DepGraph_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CalledFromHigherSCC_0_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SCC_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word SCCs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SCCEntryPoints_14;
      MR_Word SCCsEntryPoints_15;
      MR_Word SCCProcsCalledFromHigherSCCs_16;
      MR_Word ExportedSCCProcs_17;
      MR_Word CalleeKeySets_18;
      MR_Word CalleeKeys_19;
      MR_Word Callees_20;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word STATE_VARIABLE_CalledFromHigherSCC_25_25;
      MR_Word STATE_VARIABLE_CalledFromHigherSCC_26_26;

      mercury__set__intersect_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), STATE_VARIABLE_CalledFromHigherSCC_0_4, SCC_11, &SCCProcsCalledFromHigherSCCs_16);
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ModuleInfo_1));
      }
      mercury__set__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_22, SCC_11, &ExportedSCCProcs_17);
      {
        SCCEntryPoints_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SCCEntryPoints_14, 0) = ((MR_Box) (SCC_11));
        MR_hl_field(MR_mktag(0), SCCEntryPoints_14, 1) = ((MR_Box) (SCCProcsCalledFromHigherSCCs_16));
        MR_hl_field(MR_mktag(0), SCCEntryPoints_14, 2) = ((MR_Box) (ExportedSCCProcs_17));
      }
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (DepGraph_2));
      }
      mercury__set__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[14]), Var_23, SCC_11, &CalleeKeySets_18);
      CalleeKeys_19 = mercury__set__power_union_1_f_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[5]), CalleeKeySets_18);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (DepGraph_2));
      }
      mercury__set__map_3_p_0((MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[5]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_24, CalleeKeys_19, &Callees_20);
      mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Callees_20, STATE_VARIABLE_CalledFromHigherSCC_0_4, &STATE_VARIABLE_CalledFromHigherSCC_25_25);
      mercury__set__difference_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), STATE_VARIABLE_CalledFromHigherSCC_25_25, SCC_11, &STATE_VARIABLE_CalledFromHigherSCC_26_26);
      hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0(ModuleInfo_1, DepGraph_2, SCCs_12, STATE_VARIABLE_CalledFromHigherSCC_26_26, &SCCsEntryPoints_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SCCEntryPoints_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SCCsEntryPoints_15));
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_DepArcs_20;

    hlds__hlds_dependency_graph__maybe_add_pred_arcs_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_DepArcs_20);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_DepArcs_20));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_27;
    MR_Word conv2_HeadVar__4_29;

    hlds__hlds_dependency_graph__IntroducedFrom__pred__build_pred_dependency_graph__217__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_27, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__4_29);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_27));
    *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__4_29));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PredIds_12;

    hlds__hlds_dependency_graph__gather_pred_ids_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredIds_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredIds_12));
  }
}

MR_Word MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredIds_6,
  MR_Word Imported_7)
{
  {
    MR_Word DepInfo_8;
    MR_Word GatheredPredIds_9;
    MR_Word DepGraph0_10;
    MR_Word DepGraph1_12;
    MR_Word DepArcs_13;
    MR_Word DepGraph_14;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Box conv1_GatheredPredIds_9;
    MR_Word _VertexKeys_11;
    MR_Box conv4_DepGraph1_12;
    MR_Box conv6_DepArcs_13;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Imported_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[1]), Var_15, PredIds_6, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_GatheredPredIds_9);
    GatheredPredIds_9 = ((MR_Word) (conv1_GatheredPredIds_9));
    mercury__digraph__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &DepGraph0_10);
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[2]), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[3]), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_2[4]), GatheredPredIds_9, &_VertexKeys_11, ((MR_Box) (DepGraph0_10)), &conv4_DepGraph1_12);
    DepGraph1_12 = ((MR_Word) (conv4_DepGraph1_12));
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_3));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (DepGraph1_12));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (ModuleInfo_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[4]), Var_18, PredIds_6, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_DepArcs_13);
    DepArcs_13 = ((MR_Word) (conv6_DepArcs_13));
    mercury__digraph__add_assoc_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), DepArcs_13, DepGraph1_12, &DepGraph_14);
    DepInfo_8 = libs__dependency_graph__make_dependency_info_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), DepGraph_14, DepArcs_13);
    return DepInfo_8;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8,
  MR_Word * DepInfo_5)
{
  {
    MR_Word MaybeDepInfo_6;

    hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_7, &MaybeDepInfo_6);
    if ((MaybeDepInfo_6 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8, DepInfo_5);
    else
    {
      *DepInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDepInfo_6, (MR_Integer) 0))));
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PredProcIds_13;

    hlds__hlds_dependency_graph__gather_pred_proc_ids_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredProcIds_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredProcIds_13));
  }
}

void MR_CALL 
hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9,
  MR_Word * DepInfo_5)
{
  {
    MR_Word PredIds_6;
    MR_Word GatheredPredProcIds_7;
    MR_Word Var_10;
    MR_Word Var_13;
    MR_Box conv1_GatheredPredProcIds_7;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredIds_6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[0]), Var_10, PredIds_6, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_GatheredPredProcIds_7);
    GatheredPredProcIds_7 = ((MR_Word) (conv1_GatheredPredProcIds_7));
    Var_13 = mercury__set__list_to_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), GatheredPredProcIds_7);
    *DepInfo_5 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(STATE_VARIABLE_ModuleInfo_0_8, Var_13, (MR_Integer) 2);
    hlds__hlds_module__module_info_set_dependency_info_3_p_0(*DepInfo_5, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_DepArcs_15;

    hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_DepArcs_15);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_DepArcs_15));
  }
}

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_PredId_3;

    conv3_PredId_3 = hlds__hlds_dependency_graph__pred_proc_id_get_pred_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_PredId_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_21;
    MR_Word conv0_HeadVar__4_23;

    hlds__hlds_dependency_graph__IntroducedFrom__pred__build_proc_dependency_graph__267__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_21, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_23);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_21));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_23));
  }
}

MR_Word MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcIds_6,
  MR_Word WhatEdges_7)
{
  {
    MR_Word DepInfo_8;
    MR_Word DepGraph0_9;
    MR_Word DepGraph1_11;
    MR_Word PredIds_12;
    MR_Word DepArcs_13;
    MR_Word DepGraph_14;
    MR_Word Var_17;
    MR_Word _VertexKeys_10;
    MR_Box conv2_DepGraph1_11;
    MR_Box conv5_DepArcs_13;

    mercury__digraph__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &DepGraph0_9);
    mercury__set__map_fold_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[5]), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[6]), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_2[2]), PredProcIds_6, &_VertexKeys_10, ((MR_Box) (DepGraph0_9)), &conv2_DepGraph1_11);
    DepGraph1_11 = ((MR_Word) (conv2_DepGraph1_11));
    PredIds_12 = mercury__set__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_2[3]), PredProcIds_6);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_3));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (DepGraph1_11));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (WhatEdges_7));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (ModuleInfo_5));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_dependency_graph_scalar_common_1[7]), Var_17, PredIds_12, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_DepArcs_13);
    DepArcs_13 = ((MR_Word) (conv5_DepArcs_13));
    mercury__digraph__add_assoc_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepArcs_13, DepGraph1_11, &DepGraph_14);
    DepInfo_8 = libs__dependency_graph__make_dependency_info_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepGraph_14, DepArcs_13);
    return DepInfo_8;
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____dep_arcs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_dependency_graph____Unify____dep_arcs_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____dep_arcs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_dependency_graph____Compare____dep_arcs_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____edge_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_dependency_graph____Unify____edge_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____edge_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_dependency_graph____Compare____edge_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_bottom_up_dependency_sccs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_dependency_graph____Unify____hlds_bottom_up_dependency_sccs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_bottom_up_dependency_sccs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_dependency_graph____Compare____hlds_bottom_up_dependency_sccs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_dependency_graph____Unify____hlds_dependency_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_dependency_graph____Compare____hlds_dependency_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____include_imported_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_dependency_graph____Unify____include_imported_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____include_imported_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_dependency_graph____Compare____include_imported_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_dependency_graph____Unify____scc_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_dependency_graph____Compare____scc_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_with_entry_points_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_dependency_graph____Unify____scc_with_entry_points_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_with_entry_points_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_dependency_graph____Compare____scc_with_entry_points_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____what_dependency_edges_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_dependency_graph____Unify____what_dependency_edges_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____what_dependency_edges_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_dependency_graph____Compare____what_dependency_edges_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void mercury__hlds__hlds_dependency_graph__init(void)
{
}

void mercury__hlds__hlds_dependency_graph__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_dep_arcs_1);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_edge_kind_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_bottom_up_dependency_sccs_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_graph_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_graph_key_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_info_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_include_imported_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_id_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_what_dependency_edges_0);
}

void mercury__hlds__hlds_dependency_graph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_dependency_graph__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_dependency_graph.
