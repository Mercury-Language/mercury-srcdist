/*
** Automatically generated from `hlds_dependency_graph.m'
** by the Mercury compiler,
** version rotd-2017-02-22
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module hlds.hlds_dependency_graph. */
/* :- implementation. */

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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_dependency_graph__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

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

static const MR_ConstString hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_var_names_dependency_node_1[1];

static const MR_TypeClassMethod hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_method_ids_dependency_node_1[1];

static const MR_TypeClassId hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_class_id_dependency_node_1;

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_bottom_up_dependency_sccs_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_bottom_up_dependency_sccs_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_key_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_key_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_info_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_info_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____include_imported_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____include_imported_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_id_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_id_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_with_entry_points_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_with_entry_points_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1);

static void MR_CALL 
hlds__hlds_dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_109_112_116_121_95_110_111_100_101_95_95_91_49_93_95_48_3_p_0(void);

static void MR_CALL 
hlds__hlds_dependency_graph__IntroducedFrom__pred__find_scc_entry_points__615__1_3_p_0(
  MR_Word hlds__hlds_dependency_graph__DepGraph_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_33,
  MR_Word * hlds__hlds_dependency_graph__HeadVar__3_34);

static MR_Word MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1);

static MR_Word MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1);

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_id_0_0(
  MR_Word * hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Integer hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Integer hlds__hlds_dependency_graph__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_id_0_0(
  MR_Integer hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Integer hlds__hlds_dependency_graph__HeadVar__2_2);

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__dependency_node_1_f_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_3,
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph__proc_is_exported_2_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_3,
  MR_Word hlds__hlds_dependency_graph__PredProcId_4);

static void MR_CALL 
hlds__hlds_dependency_graph__find_callee_keys_3_p_0(
  MR_Word hlds__hlds_dependency_graph__DepGraph_4,
  MR_Word hlds__hlds_dependency_graph__ParentId_5,
  MR_Word * hlds__hlds_dependency_graph__ChildKeys_6);

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_3(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_2(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1);

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_1,
  MR_Word hlds__hlds_dependency_graph__DepGraph_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__3_3,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_CalledFromHigherSCC_0_4,
  MR_Word * hlds__hlds_dependency_graph__HeadVar__5_5);

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_arg_8_p_0(
  MR_Word hlds__hlds_dependency_graph__PredSCC_9,
  MR_Word hlds__hlds_dependency_graph__IsAgg_10,
  MR_Integer hlds__hlds_dependency_graph__SCCid_11,
  MR_Word hlds__hlds_dependency_graph__PredProcId_12,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_0_16,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_17,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0_18,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_19);

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_args_9_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_4,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_5);

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_args_9_p_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__IsAgg_2,
  MR_Integer hlds__hlds_dependency_graph__SCCid_3,
  MR_Word hlds__hlds_dependency_graph__Map_4,
  MR_Word hlds__hlds_dependency_graph__PredSCC_5,
  MR_Word hlds__hlds_dependency_graph__HeadVar__6_6,
  MR_Word * hlds__hlds_dependency_graph__HeadVar__7_7,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0_8,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_9);

static void MR_CALL 
hlds__hlds_dependency_graph__write_dep_graph_link_5_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_6,
  MR_Word hlds__hlds_dependency_graph__Parent_7,
  MR_Word hlds__hlds_dependency_graph__Child_8);

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dep_graph_link_5_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_6,
  MR_Word hlds__hlds_dependency_graph__Parent_7,
  MR_Word hlds__hlds_dependency_graph__Child_8);

static void MR_CALL 
hlds__hlds_dependency_graph__write_empty_node_3_p_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_4);

static void MR_CALL 
hlds__hlds_dependency_graph__write_scc_4_p_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_ordering_5_p_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Integer hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__3_3);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_dependency_arc_4_p_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_13,
  MR_Word hlds__hlds_dependency_graph__Caller_5,
  MR_Word hlds__hlds_dependency_graph__PredProcId_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_9,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_10);

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_4_p_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_39,
  MR_Word hlds__hlds_dependency_graph__Caller_5,
  MR_Word hlds__hlds_dependency_graph__ConsId_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37);

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_4_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_4_p_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_23,
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_4);

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_4_p_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_17,
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_4);

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_4_p_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103,
  MR_Word hlds__hlds_dependency_graph__Caller_5,
  MR_Word hlds__hlds_dependency_graph__Goal_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_proc_arcs_5_p_0(
  MR_Word hlds__hlds_dependency_graph__PredId_6,
  MR_Integer hlds__hlds_dependency_graph__ProcId_7,
  MR_Word hlds__hlds_dependency_graph__ProcInfo_8,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_13);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_4_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_4_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_5,
  MR_Word hlds__hlds_dependency_graph__PredId_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_10,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_11);

static void MR_CALL 
hlds__hlds_dependency_graph__add_proc_node_4_p_0(
  MR_Word hlds__hlds_dependency_graph__PredId_5,
  MR_Integer hlds__hlds_dependency_graph__ProcId_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_9,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_10);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_nodes_5_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_nodes_5_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_6,
  MR_Word hlds__hlds_dependency_graph__Imported_7,
  MR_Word hlds__hlds_dependency_graph__PredId_8,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_13);

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_arcs_4_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_arcs_4_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_5,
  MR_Word hlds__hlds_dependency_graph__PredId_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_15,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_16);

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_node_5_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_6,
  MR_Word hlds__hlds_dependency_graph__IncludeImported_7,
  MR_Word hlds__hlds_dependency_graph__PredId_8,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_13);

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_2(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_2(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_4);

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_2(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_2(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_1[12][2];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_2[5][8];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_3[3][7];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_4[3][6];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_5[3][3];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_6[2][5];

static /* final */ const MR_Integer hlds__hlds_dependency_graph_scalar_common_7[1][2];

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_8[1][11];




static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_hlds__hlds_dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_hlds__hlds_dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_proc_id__arity0__)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_1[8]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_1[2]))
  },
  /* row 11 */
  {
    ((MR_Box) (&libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_2[5][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_include_imported_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_include_imported_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
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
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__pseudo_1)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__pseudo_1))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_5[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_dependency_graph__maybe_add_pred_arcs_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Integer hlds__hlds_dependency_graph_scalar_common_7[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box hlds__hlds_dependency_graph_scalar_common_8[1][11] = {
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



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_dependency_graph__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__set_ordlist__pti_set_ordlist_1__plain_digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__pti_digraph_key_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__list__ti_list_1set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_dependency_graph__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_bottom_up_dependency_sccs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____hlds_bottom_up_dependency_sccs_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____hlds_bottom_up_dependency_sccs_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "hlds_bottom_up_dependency_sccs",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_dependency_graph__list__ti_list_1set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__digraph__ti_digraph_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "hlds_dependency_graph",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_dependency_graph__digraph__ti_digraph_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_graph_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_key_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_key_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "hlds_dependency_graph_key",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_dependency_graph__digraph__ti_digraph_key_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_dependency_graph__libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____hlds_dependency_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____hlds_dependency_info_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "hlds_dependency_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_dependency_graph__libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_dependency_graph____Unify____scc_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_dependency_graph____Compare____scc_id_0_0_10001)),
  (MR_String) "hlds.hlds_dependency_graph",
  (MR_String) "scc_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__field_types_scc_with_entry_points_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_dependency_graph__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_dependency_graph__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_dependency_graph__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__field_types_scc_with_entry_points_0_0,
  hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__field_names_scc_with_entry_points_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_stag_ordered_scc_with_entry_points_0_0[1] = {
  &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_functor_desc_scc_with_entry_points_0_0
};

static const MR_DuPtagLayout hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_ptag_ordered_scc_with_entry_points_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__du_stag_ordered_scc_with_entry_points_0_0
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
    mercury__private_builtin__MR_FUNCTION
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

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_bottom_up_dependency_sccs_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;

    {
      hlds__hlds_dependency_graph__succeeded = hlds__hlds_dependency_graph____Unify____hlds_bottom_up_dependency_sccs_0_0(((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_bottom_up_dependency_sccs_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_dependency_graph__conv0_HeadVar__1_1;

    {
      hlds__hlds_dependency_graph____Compare____hlds_bottom_up_dependency_sccs_0_0(&hlds__hlds_dependency_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_3));
    }
    *hlds__hlds_dependency_graph__wrapper_arg_1 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;

    {
      hlds__hlds_dependency_graph__succeeded = hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_0_0(((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_dependency_graph__conv0_HeadVar__1_1;

    {
      hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_0_0(&hlds__hlds_dependency_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_3));
    }
    *hlds__hlds_dependency_graph__wrapper_arg_1 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_key_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;

    {
      hlds__hlds_dependency_graph__succeeded = hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_key_0_0(((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_key_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_dependency_graph__conv0_HeadVar__1_1;

    {
      hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_key_0_0(&hlds__hlds_dependency_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_3));
    }
    *hlds__hlds_dependency_graph__wrapper_arg_1 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_info_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;

    {
      hlds__hlds_dependency_graph__succeeded = hlds__hlds_dependency_graph____Unify____hlds_dependency_info_0_0(((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_info_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_dependency_graph__conv0_HeadVar__1_1;

    {
      hlds__hlds_dependency_graph____Compare____hlds_dependency_info_0_0(&hlds__hlds_dependency_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_3));
    }
    *hlds__hlds_dependency_graph__wrapper_arg_1 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____include_imported_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;

    {
      hlds__hlds_dependency_graph__succeeded = hlds__hlds_dependency_graph____Unify____include_imported_0_0(((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____include_imported_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_dependency_graph__conv0_HeadVar__1_1;

    {
      hlds__hlds_dependency_graph____Compare____include_imported_0_0(&hlds__hlds_dependency_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_3));
    }
    *hlds__hlds_dependency_graph__wrapper_arg_1 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_id_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;

    {
      hlds__hlds_dependency_graph__succeeded = hlds__hlds_dependency_graph____Unify____scc_id_0_0(((MR_Integer) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Integer) hlds__hlds_dependency_graph__wrapper_arg_2));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_id_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_dependency_graph__conv0_HeadVar__1_1;

    {
      hlds__hlds_dependency_graph____Compare____scc_id_0_0(&hlds__hlds_dependency_graph__conv0_HeadVar__1_1, ((MR_Integer) hlds__hlds_dependency_graph__wrapper_arg_2), ((MR_Integer) hlds__hlds_dependency_graph__wrapper_arg_3));
    }
    *hlds__hlds_dependency_graph__wrapper_arg_1 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_with_entry_points_0_0_10001(
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;

    {
      hlds__hlds_dependency_graph__succeeded = hlds__hlds_dependency_graph____Unify____scc_with_entry_points_0_0(((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_with_entry_points_0_0_10001(
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_dependency_graph__conv0_HeadVar__1_1;

    {
      hlds__hlds_dependency_graph____Compare____scc_with_entry_points_0_0(&hlds__hlds_dependency_graph__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_3));
    }
    *hlds__hlds_dependency_graph__wrapper_arg_1 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_dependency_graph__wrapper_arg_2;
    MR_Box hlds__hlds_dependency_graph__closure;
    MR_Word hlds__hlds_dependency_graph__conv0_HeadVar__2_2;

    hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    {
      hlds__hlds_dependency_graph__conv0_HeadVar__2_2 = hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1));
    }
    hlds__hlds_dependency_graph__wrapper_arg_2 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_HeadVar__2_2));
    return hlds__hlds_dependency_graph__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_dependency_graph__wrapper_arg_2;
    MR_Box hlds__hlds_dependency_graph__closure;
    MR_Word hlds__hlds_dependency_graph__conv0_HeadVar__2_2;

    hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    {
      hlds__hlds_dependency_graph__conv0_HeadVar__2_2 = hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1));
    }
    hlds__hlds_dependency_graph__wrapper_arg_2 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_HeadVar__2_2));
    return hlds__hlds_dependency_graph__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_109_112_116_121_95_110_111_100_101_95_95_91_49_93_95_48_3_p_0(void)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;

  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__IntroducedFrom__pred__find_scc_entry_points__615__1_3_p_0(
  MR_Word hlds__hlds_dependency_graph__DepGraph_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_33,
  MR_Word * hlds__hlds_dependency_graph__HeadVar__3_34)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Box hlds__hlds_dependency_graph__conv0_HeadVar__3_34;

    {
      mercury__digraph__lookup_vertex_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, hlds__hlds_dependency_graph__DepGraph_2, hlds__hlds_dependency_graph__HeadVar__2_33, &hlds__hlds_dependency_graph__conv0_HeadVar__3_34);
    }
    *hlds__hlds_dependency_graph__HeadVar__3_34 = ((MR_Word) hlds__hlds_dependency_graph__conv0_HeadVar__3_34);
  }
}

static MR_Word MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__HeadVar__2_2;
    MR_Box hlds__hlds_dependency_graph__conv0_HeadVar__2_2;

    {
      hlds__hlds_dependency_graph__conv0_HeadVar__2_2 = mercury__std_util__id_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__hlds_dependency_graph__HeadVar__1_1)));
    }
    hlds__hlds_dependency_graph__HeadVar__2_2 = ((MR_Word) hlds__hlds_dependency_graph__conv0_HeadVar__2_2);
    return hlds__hlds_dependency_graph__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__hlds_dependency_graph__ClassMethod_for_hlds__hlds_dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______hlds__hlds_dependency_graph__dependency_node_1_1_f_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer hlds__hlds_dependency_graph__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__1_1, (MR_Integer) 1)));

    return hlds__hlds_dependency_graph__HeadVar__2_2;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_with_entry_points_0_0(
  MR_Word * hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Integer hlds__hlds_dependency_graph__CastX_12 = (MR_Integer) hlds__hlds_dependency_graph__HeadVar__2_2;
    MR_Integer hlds__hlds_dependency_graph__CastY_13 = (MR_Integer) hlds__hlds_dependency_graph__HeadVar__3_3;

    hlds__hlds_dependency_graph__succeeded = (hlds__hlds_dependency_graph__CastX_12 == hlds__hlds_dependency_graph__CastY_13);
    if (hlds__hlds_dependency_graph__succeeded)
      *hlds__hlds_dependency_graph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__hlds_dependency_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_dependency_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_dependency_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_dependency_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hlds_dependency_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_dependency_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__hlds_dependency_graph__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[2], &hlds__hlds_dependency_graph__V_10_10, ((MR_Box) (hlds__hlds_dependency_graph__V_4_4)), ((MR_Box) (hlds__hlds_dependency_graph__V_7_7)));
        }
        hlds__hlds_dependency_graph__succeeded = (hlds__hlds_dependency_graph__V_10_10 == (MR_Integer) 0);
        hlds__hlds_dependency_graph__succeeded = !(hlds__hlds_dependency_graph__succeeded);
        if (hlds__hlds_dependency_graph__succeeded)
          *hlds__hlds_dependency_graph__HeadVar__1_1 = hlds__hlds_dependency_graph__V_10_10;
        else
          {
            MR_Word hlds__hlds_dependency_graph__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[2], &hlds__hlds_dependency_graph__V_11_11, ((MR_Box) (hlds__hlds_dependency_graph__V_5_5)), ((MR_Box) (hlds__hlds_dependency_graph__V_8_8)));
            }
            hlds__hlds_dependency_graph__succeeded = (hlds__hlds_dependency_graph__V_11_11 == (MR_Integer) 0);
            hlds__hlds_dependency_graph__succeeded = !(hlds__hlds_dependency_graph__succeeded);
            if (hlds__hlds_dependency_graph__succeeded)
              *hlds__hlds_dependency_graph__HeadVar__1_1 = hlds__hlds_dependency_graph__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[2], hlds__hlds_dependency_graph__HeadVar__1_1, ((MR_Box) (hlds__hlds_dependency_graph__V_6_6)), ((MR_Box) (hlds__hlds_dependency_graph__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_with_entry_points_0_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Integer hlds__hlds_dependency_graph__CastX_9 = (MR_Integer) hlds__hlds_dependency_graph__HeadVar__1_1;
    MR_Integer hlds__hlds_dependency_graph__CastY_10 = (MR_Integer) hlds__hlds_dependency_graph__HeadVar__2_2;

    hlds__hlds_dependency_graph__succeeded = (hlds__hlds_dependency_graph__CastX_9 == hlds__hlds_dependency_graph__CastY_10);
    if (hlds__hlds_dependency_graph__succeeded)
      hlds__hlds_dependency_graph__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__hlds_dependency_graph__TypeInfo_12_12;
        MR_Word hlds__hlds_dependency_graph__TypeInfo_13_13;
        MR_Word hlds__hlds_dependency_graph__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hlds_dependency_graph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hlds_dependency_graph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__hlds_dependency_graph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_dependency_graph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_dependency_graph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 2)));

        {
          hlds__hlds_dependency_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[2], ((MR_Box) (hlds__hlds_dependency_graph__V_3_3)), ((MR_Box) (hlds__hlds_dependency_graph__V_6_6)));
        }
        if (hlds__hlds_dependency_graph__succeeded)
          {
            hlds__hlds_dependency_graph__TypeInfo_12_12 = (MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[2];
            {
              hlds__hlds_dependency_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_dependency_graph__TypeInfo_12_12, ((MR_Box) (hlds__hlds_dependency_graph__V_4_4)), ((MR_Box) (hlds__hlds_dependency_graph__V_7_7)));
            }
            if (hlds__hlds_dependency_graph__succeeded)
              {
                hlds__hlds_dependency_graph__TypeInfo_13_13 = (MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[2];
                {
                  hlds__hlds_dependency_graph__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_dependency_graph__TypeInfo_13_13, ((MR_Box) (hlds__hlds_dependency_graph__V_5_5)), ((MR_Box) (hlds__hlds_dependency_graph__V_8_8)));
                }
              }
          }
      }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph____Compare____scc_id_0_0(
  MR_Word * hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Integer hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Integer hlds__hlds_dependency_graph__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Integer hlds__hlds_dependency_graph__Cast_HeadVar1_4 = hlds__hlds_dependency_graph__HeadVar__2_2;
    MR_Integer hlds__hlds_dependency_graph__Cast_HeadVar2_5 = hlds__hlds_dependency_graph__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_dependency_graph__HeadVar__1_1, hlds__hlds_dependency_graph__Cast_HeadVar1_4, hlds__hlds_dependency_graph__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____scc_id_0_0(
  MR_Integer hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Integer hlds__hlds_dependency_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Integer hlds__hlds_dependency_graph__Cast_HeadVar1_3 = hlds__hlds_dependency_graph__HeadVar__1_1;
    MR_Integer hlds__hlds_dependency_graph__Cast_HeadVar2_4 = hlds__hlds_dependency_graph__HeadVar__2_2;

    hlds__hlds_dependency_graph__succeeded = (hlds__hlds_dependency_graph__Cast_HeadVar1_3 == hlds__hlds_dependency_graph__Cast_HeadVar2_4);
    return hlds__hlds_dependency_graph__succeeded;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____include_imported_0_0(
  MR_Word * hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Integer hlds__hlds_dependency_graph__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_dependency_graph__HeadVar__2_2;
    MR_Integer hlds__hlds_dependency_graph__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_dependency_graph__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_dependency_graph__HeadVar__1_1, hlds__hlds_dependency_graph__Cast_HeadVar1_4, hlds__hlds_dependency_graph__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____include_imported_0_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded = (hlds__hlds_dependency_graph__HeadVar__2_1 == hlds__hlds_dependency_graph__HeadVar__2_2);

    return hlds__hlds_dependency_graph__succeeded;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_info_0_0(
  MR_Word * hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar1_4 = hlds__hlds_dependency_graph__HeadVar__2_2;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar2_5 = hlds__hlds_dependency_graph__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[11], hlds__hlds_dependency_graph__HeadVar__1_1, ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_info_0_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar1_3 = hlds__hlds_dependency_graph__HeadVar__1_1;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar2_4 = hlds__hlds_dependency_graph__HeadVar__2_2;

    {
      hlds__hlds_dependency_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[11], ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar2_4)));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_key_0_0(
  MR_Word * hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar1_4 = hlds__hlds_dependency_graph__HeadVar__2_2;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar2_5 = hlds__hlds_dependency_graph__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[8], hlds__hlds_dependency_graph__HeadVar__1_1, ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_key_0_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar1_3 = hlds__hlds_dependency_graph__HeadVar__1_1;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar2_4 = hlds__hlds_dependency_graph__HeadVar__2_2;

    {
      hlds__hlds_dependency_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[8], ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar2_4)));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_dependency_graph_0_0(
  MR_Word * hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar1_4 = hlds__hlds_dependency_graph__HeadVar__2_2;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar2_5 = hlds__hlds_dependency_graph__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[1], hlds__hlds_dependency_graph__HeadVar__1_1, ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_dependency_graph_0_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar1_3 = hlds__hlds_dependency_graph__HeadVar__1_1;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar2_4 = hlds__hlds_dependency_graph__HeadVar__2_2;

    {
      hlds__hlds_dependency_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[1], ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar2_4)));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph____Compare____hlds_bottom_up_dependency_sccs_0_0(
  MR_Word * hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar1_4 = hlds__hlds_dependency_graph__HeadVar__2_2;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar2_5 = hlds__hlds_dependency_graph__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[10], hlds__hlds_dependency_graph__HeadVar__1_1, ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_dependency_graph____Unify____hlds_bottom_up_dependency_sccs_0_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar1_3 = hlds__hlds_dependency_graph__HeadVar__1_1;
    MR_Word hlds__hlds_dependency_graph__Cast_HeadVar2_4 = hlds__hlds_dependency_graph__HeadVar__2_2;

    {
      hlds__hlds_dependency_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[10], ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_dependency_graph__Cast_HeadVar2_4)));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__dependency_node_1_f_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_3,
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Box hlds__hlds_dependency_graph__HeadVar__2_2;
    MR_Box MR_CALL (* hlds__hlds_dependency_graph__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_3, (MR_Integer) 0)), (MR_Integer) 5)));

    {
      hlds__hlds_dependency_graph__HeadVar__2_2 = hlds__hlds_dependency_graph__func_0(((MR_Box) hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_3), ((MR_Box) (hlds__hlds_dependency_graph__HeadVar__1_1)));
    }
    return hlds__hlds_dependency_graph__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph__proc_is_exported_2_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_3,
  MR_Word hlds__hlds_dependency_graph__PredProcId_4)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__PredProcId_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_dependency_graph__PredInfo_7;
    MR_Integer hlds__hlds_dependency_graph___ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__PredProcId_4, (MR_Integer) 1)));

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_dependency_graph__ModuleInfo_3, hlds__hlds_dependency_graph__PredId_5, &hlds__hlds_dependency_graph__PredInfo_7);
    }
    {
      hlds__hlds_dependency_graph__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(hlds__hlds_dependency_graph__PredInfo_7);
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__find_callee_keys_3_p_0(
  MR_Word hlds__hlds_dependency_graph__DepGraph_4,
  MR_Word hlds__hlds_dependency_graph__ParentId_5,
  MR_Word * hlds__hlds_dependency_graph__ChildKeys_6)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__TypeCtorInfo_8_8 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word hlds__hlds_dependency_graph__ParentKey_7;

    {
      mercury__digraph__lookup_key_3_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_8_8, hlds__hlds_dependency_graph__DepGraph_4, ((MR_Box) (hlds__hlds_dependency_graph__ParentId_5)), &hlds__hlds_dependency_graph__ParentKey_7);
    }
    {
      mercury__digraph__lookup_from_3_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_8_8, hlds__hlds_dependency_graph__DepGraph_4, hlds__hlds_dependency_graph__ParentKey_7, hlds__hlds_dependency_graph__ChildKeys_6);
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_3(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_2)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    MR_Word hlds__hlds_dependency_graph__conv1_HeadVar__3_34;

    {
      hlds__hlds_dependency_graph__IntroducedFrom__pred__find_scc_entry_points__615__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), &hlds__hlds_dependency_graph__conv1_HeadVar__3_34);
    }
    *hlds__hlds_dependency_graph__wrapper_arg_2 = ((MR_Box) (hlds__hlds_dependency_graph__conv1_HeadVar__3_34));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_2(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_2)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    MR_Word hlds__hlds_dependency_graph__conv0_ChildKeys_6;

    {
      hlds__hlds_dependency_graph__find_callee_keys_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), &hlds__hlds_dependency_graph__conv0_ChildKeys_6);
    }
    *hlds__hlds_dependency_graph__wrapper_arg_2 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_ChildKeys_6));
  }
}

static MR_bool MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;

    {
      hlds__hlds_dependency_graph__succeeded = hlds__hlds_dependency_graph__proc_is_exported_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1));
    }
    return hlds__hlds_dependency_graph__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_1,
  MR_Word hlds__hlds_dependency_graph__DepGraph_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__3_3,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_CalledFromHigherSCC_0_4,
  MR_Word * hlds__hlds_dependency_graph__HeadVar__5_5)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;

    if ((hlds__hlds_dependency_graph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__hlds_dependency_graph__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__hlds_dependency_graph__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        MR_Word hlds__hlds_dependency_graph__TypeInfo_32_32;
        MR_Word hlds__hlds_dependency_graph__SCC_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hlds_dependency_graph__SCCs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_dependency_graph__SCCEntryPoints_14;
        MR_Word hlds__hlds_dependency_graph__SCCsEntryPoints_15;
        MR_Word hlds__hlds_dependency_graph__SCCProcsCalledFromHigherSCCs_16;
        MR_Word hlds__hlds_dependency_graph__ExportedSCCProcs_17;
        MR_Word hlds__hlds_dependency_graph__CalleeKeySets_18;
        MR_Word hlds__hlds_dependency_graph__CalleeKeys_19;
        MR_Word hlds__hlds_dependency_graph__Callees_20;
        MR_Word hlds__hlds_dependency_graph__V_22_22;
        MR_Word hlds__hlds_dependency_graph__V_23_23;
        MR_Word hlds__hlds_dependency_graph__V_24_24;
        MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_CalledFromHigherSCC_25_25;
        MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_CalledFromHigherSCC_26_26;

        {
          mercury__set__intersect_3_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_27_27, hlds__hlds_dependency_graph__STATE_VARIABLE_CalledFromHigherSCC_0_4, hlds__hlds_dependency_graph__SCC_11, &hlds__hlds_dependency_graph__SCCProcsCalledFromHigherSCCs_16);
        }
        {
          hlds__hlds_dependency_graph__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_22_22, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_22_22, 1) = ((MR_Box) (hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_22_22, 3) = ((MR_Box) (hlds__hlds_dependency_graph__ModuleInfo_1));
        }
        {
          mercury__set__filter_3_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_27_27, hlds__hlds_dependency_graph__V_22_22, hlds__hlds_dependency_graph__SCC_11, &hlds__hlds_dependency_graph__ExportedSCCProcs_17);
        }
        {
          hlds__hlds_dependency_graph__SCCEntryPoints_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__SCCEntryPoints_14, 0) = ((MR_Box) (hlds__hlds_dependency_graph__SCC_11));
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__SCCEntryPoints_14, 1) = ((MR_Box) (hlds__hlds_dependency_graph__SCCProcsCalledFromHigherSCCs_16));
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__SCCEntryPoints_14, 2) = ((MR_Box) (hlds__hlds_dependency_graph__ExportedSCCProcs_17));
        }
        {
          hlds__hlds_dependency_graph__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_23_23, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_23_23, 1) = ((MR_Box) (hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_2));
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_23_23, 3) = ((MR_Box) (hlds__hlds_dependency_graph__DepGraph_2));
        }
        {
          mercury__set__map_3_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_27_27, (MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[9], hlds__hlds_dependency_graph__V_23_23, hlds__hlds_dependency_graph__SCC_11, &hlds__hlds_dependency_graph__CalleeKeySets_18);
        }
        hlds__hlds_dependency_graph__TypeInfo_32_32 = (MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[8];
        {
          hlds__hlds_dependency_graph__CalleeKeys_19 = mercury__set__power_union_1_f_0(hlds__hlds_dependency_graph__TypeInfo_32_32, hlds__hlds_dependency_graph__CalleeKeySets_18);
        }
        {
          hlds__hlds_dependency_graph__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_24_24, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_24_24, 1) = ((MR_Box) (hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0_3));
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_24_24, 3) = ((MR_Box) (hlds__hlds_dependency_graph__DepGraph_2));
        }
        {
          mercury__set__map_3_p_0(hlds__hlds_dependency_graph__TypeInfo_32_32, hlds__hlds_dependency_graph__TypeCtorInfo_27_27, hlds__hlds_dependency_graph__V_24_24, hlds__hlds_dependency_graph__CalleeKeys_19, &hlds__hlds_dependency_graph__Callees_20);
        }
        {
          mercury__set__union_3_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_27_27, hlds__hlds_dependency_graph__Callees_20, hlds__hlds_dependency_graph__STATE_VARIABLE_CalledFromHigherSCC_0_4, &hlds__hlds_dependency_graph__STATE_VARIABLE_CalledFromHigherSCC_25_25);
        }
        {
          mercury__set__difference_3_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_27_27, hlds__hlds_dependency_graph__STATE_VARIABLE_CalledFromHigherSCC_25_25, hlds__hlds_dependency_graph__SCC_11, &hlds__hlds_dependency_graph__STATE_VARIABLE_CalledFromHigherSCC_26_26);
        }
        {
          hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0(hlds__hlds_dependency_graph__ModuleInfo_1, hlds__hlds_dependency_graph__DepGraph_2, hlds__hlds_dependency_graph__SCCs_12, hlds__hlds_dependency_graph__STATE_VARIABLE_CalledFromHigherSCC_26_26, &hlds__hlds_dependency_graph__SCCsEntryPoints_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__hlds_dependency_graph__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_dependency_graph__SCCEntryPoints_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_dependency_graph__SCCsEntryPoints_15));
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_arg_8_p_0(
  MR_Word hlds__hlds_dependency_graph__PredSCC_9,
  MR_Word hlds__hlds_dependency_graph__IsAgg_10,
  MR_Integer hlds__hlds_dependency_graph__SCCid_11,
  MR_Word hlds__hlds_dependency_graph__PredProcId_12,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_0_16,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_17,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0_18,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_19)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Integer hlds__hlds_dependency_graph__CalledSCCid_15;
    MR_Box hlds__hlds_dependency_graph__conv0_CalledSCCid_15;

    {
      hlds__hlds_dependency_graph__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__hlds_dependency_graph__PredSCC_9, ((MR_Box) (hlds__hlds_dependency_graph__PredProcId_12)), &hlds__hlds_dependency_graph__conv0_CalledSCCid_15);
    }
    if (hlds__hlds_dependency_graph__succeeded)
      {
        hlds__hlds_dependency_graph__CalledSCCid_15 = ((MR_Integer) hlds__hlds_dependency_graph__conv0_CalledSCCid_15);
        hlds__hlds_dependency_graph__succeeded = MR_TRUE;
      }
    if (hlds__hlds_dependency_graph__succeeded)
      {
        switch (hlds__hlds_dependency_graph__IsAgg_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_19 = hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0_18;
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__hlds_dependency_graph__CalledSCCid_15)), hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0_18, hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_19);
              }
            }
            break;
        }
        hlds__hlds_dependency_graph__succeeded = (hlds__hlds_dependency_graph__CalledSCCid_15 == hlds__hlds_dependency_graph__SCCid_11);
        if (hlds__hlds_dependency_graph__succeeded)
          *hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_17 = hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_0_16;
        else
          {
            {
              mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (hlds__hlds_dependency_graph__SCCid_11)), ((MR_Box) (hlds__hlds_dependency_graph__CalledSCCid_15)), hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_0_16, hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_17);
            }
          }
      }
    else
      {
        *hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_19 = hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0_18;
        *hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_17 = hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_0_16;
      }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_args_9_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_4,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_5)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    MR_Word hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_SCCGraph_17;
    MR_Word hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_NoMerge_19;

    {
      hlds__hlds_dependency_graph__handle_higher_order_arg_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), &hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_SCCGraph_17, ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_4), &hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_NoMerge_19);
    }
    *hlds__hlds_dependency_graph__wrapper_arg_3 = ((MR_Box) (hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_SCCGraph_17));
    *hlds__hlds_dependency_graph__wrapper_arg_5 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_NoMerge_19));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__handle_higher_order_args_9_p_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__IsAgg_2,
  MR_Integer hlds__hlds_dependency_graph__SCCid_3,
  MR_Word hlds__hlds_dependency_graph__Map_4,
  MR_Word hlds__hlds_dependency_graph__PredSCC_5,
  MR_Word hlds__hlds_dependency_graph__HeadVar__6_6,
  MR_Word * hlds__hlds_dependency_graph__HeadVar__7_7,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0_8,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_dependency_graph__succeeded;

        if ((hlds__hlds_dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_9 = hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0_8;
            *hlds__hlds_dependency_graph__HeadVar__7_7 = hlds__hlds_dependency_graph__HeadVar__6_6;
          }
        else
          {
            MR_Word hlds__hlds_dependency_graph__Arg_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_dependency_graph__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_34_34;
            MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_35_35;
            MR_Word hlds__hlds_dependency_graph__PredProcIds_28;

            {
              hlds__hlds_dependency_graph__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[5], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, hlds__hlds_dependency_graph__Map_4, ((MR_Box) (hlds__hlds_dependency_graph__Arg_20)), &hlds__hlds_dependency_graph__PredProcIds_28);
            }
            if (hlds__hlds_dependency_graph__succeeded)
              {
                MR_Word hlds__hlds_dependency_graph__V_33_33;
                MR_Box hlds__hlds_dependency_graph__conv3_STATE_VARIABLE_SCCGraph_34_34;
                MR_Box hlds__hlds_dependency_graph__conv2_STATE_VARIABLE_NoMerge_35_35;

                {
                  hlds__hlds_dependency_graph__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_33_33, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_33_33, 1) = ((MR_Box) (hlds__hlds_dependency_graph__handle_higher_order_args_9_p_0_1));
                  MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_33_33, 3) = ((MR_Box) (hlds__hlds_dependency_graph__PredSCC_5));
                  MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_33_33, 4) = ((MR_Box) (hlds__hlds_dependency_graph__IsAgg_2));
                  MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_33_33, 5) = ((MR_Box) (hlds__hlds_dependency_graph__SCCid_3));
                }
                {
                  mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[6], (MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[7], hlds__hlds_dependency_graph__V_33_33, hlds__hlds_dependency_graph__PredProcIds_28, ((MR_Box) (hlds__hlds_dependency_graph__HeadVar__6_6)), &hlds__hlds_dependency_graph__conv3_STATE_VARIABLE_SCCGraph_34_34, ((MR_Box) (hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0_8)), &hlds__hlds_dependency_graph__conv2_STATE_VARIABLE_NoMerge_35_35);
                }
                hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_34_34 = ((MR_Word) hlds__hlds_dependency_graph__conv3_STATE_VARIABLE_SCCGraph_34_34);
                hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_35_35 = ((MR_Word) hlds__hlds_dependency_graph__conv2_STATE_VARIABLE_NoMerge_35_35);
              }
            else
              {
                hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_35_35 = hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0_8;
                hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_34_34 = hlds__hlds_dependency_graph__HeadVar__6_6;
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_dependency_graph__HeadVar__1__tmp_copy_1 = hlds__hlds_dependency_graph__Args_21;
              MR_Word hlds__hlds_dependency_graph__HeadVar__6__tmp_copy_6 = hlds__hlds_dependency_graph__STATE_VARIABLE_SCCGraph_34_34;
              MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0__tmp_copy_8 = hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_35_35;

              hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0_8 = hlds__hlds_dependency_graph__STATE_VARIABLE_NoMerge_0__tmp_copy_8;
              hlds__hlds_dependency_graph__HeadVar__6_6 = hlds__hlds_dependency_graph__HeadVar__6__tmp_copy_6;
              hlds__hlds_dependency_graph__HeadVar__1_1 = hlds__hlds_dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_dep_graph_link_5_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_6,
  MR_Word hlds__hlds_dependency_graph__Parent_7,
  MR_Word hlds__hlds_dependency_graph__Child_8)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__PPredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Parent_7, (MR_Integer) 0)));
    MR_Integer hlds__hlds_dependency_graph__PProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Parent_7, (MR_Integer) 1)));
    MR_Word hlds__hlds_dependency_graph__CPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Child_8, (MR_Integer) 0)));
    MR_Integer hlds__hlds_dependency_graph__CProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Child_8, (MR_Integer) 1)));
    MR_Word hlds__hlds_dependency_graph__PPredInfo_14;
    MR_Word hlds__hlds_dependency_graph__PProcInfo_15;
    MR_Word hlds__hlds_dependency_graph__CPredInfo_16;
    MR_Word hlds__hlds_dependency_graph__CProcInfo_17;
    MR_String hlds__hlds_dependency_graph__PName_18;
    MR_Word hlds__hlds_dependency_graph__PDet_19;
    MR_Word hlds__hlds_dependency_graph__PModes_20;
    MR_String hlds__hlds_dependency_graph__CName_21;
    MR_Word hlds__hlds_dependency_graph__CDet_22;
    MR_Word hlds__hlds_dependency_graph__CModes_23;
    MR_Word hlds__hlds_dependency_graph__ModeVarSet_24;
    MR_Word hlds__hlds_dependency_graph__V_28_28;
    MR_Word hlds__hlds_dependency_graph__V_33_33;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__hlds_dependency_graph__ModuleInfo_6, hlds__hlds_dependency_graph__PPredId_10, hlds__hlds_dependency_graph__PProcId_11, &hlds__hlds_dependency_graph__PPredInfo_14, &hlds__hlds_dependency_graph__PProcInfo_15);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__hlds_dependency_graph__ModuleInfo_6, hlds__hlds_dependency_graph__CPredId_12, hlds__hlds_dependency_graph__CProcId_13, &hlds__hlds_dependency_graph__CPredInfo_16, &hlds__hlds_dependency_graph__CProcInfo_17);
    }
    {
      hlds__hlds_dependency_graph__PName_18 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_dependency_graph__PPredInfo_14);
    }
    {
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__hlds_dependency_graph__PProcInfo_15, &hlds__hlds_dependency_graph__PDet_19);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_dependency_graph__PProcInfo_15, &hlds__hlds_dependency_graph__PModes_20);
    }
    {
      hlds__hlds_dependency_graph__CName_21 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_dependency_graph__CPredInfo_16);
    }
    {
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__hlds_dependency_graph__CProcInfo_17, &hlds__hlds_dependency_graph__CDet_22);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_dependency_graph__CProcInfo_17, &hlds__hlds_dependency_graph__CModes_23);
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_dependency_graph__ModeVarSet_24);
    }
    {
      hlds__hlds_dependency_graph__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_28_28, 0) = ((MR_Box) (hlds__hlds_dependency_graph__PName_18));
    }
    {
      parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, hlds__hlds_dependency_graph__ModeVarSet_24, hlds__hlds_dependency_graph__V_28_28, hlds__hlds_dependency_graph__PModes_20, hlds__hlds_dependency_graph__PDet_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
    {
      hlds__hlds_dependency_graph__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_33_33, 0) = ((MR_Box) (hlds__hlds_dependency_graph__CName_21));
    }
    {
      parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, hlds__hlds_dependency_graph__ModeVarSet_24, hlds__hlds_dependency_graph__V_33_33, hlds__hlds_dependency_graph__CModes_23, hlds__hlds_dependency_graph__CDet_22);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dep_graph_link_5_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_6,
  MR_Word hlds__hlds_dependency_graph__Parent_7,
  MR_Word hlds__hlds_dependency_graph__Child_8)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__PPredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Parent_7, (MR_Integer) 0)));
    MR_Integer hlds__hlds_dependency_graph__PProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Parent_7, (MR_Integer) 1)));
    MR_Word hlds__hlds_dependency_graph__CPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Child_8, (MR_Integer) 0)));
    MR_Integer hlds__hlds_dependency_graph__CProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Child_8, (MR_Integer) 1)));
    MR_Word hlds__hlds_dependency_graph__ProcLabel_28;
    MR_Word hlds__hlds_dependency_graph__ProcLabel_36;

    {
      hlds__hlds_dependency_graph__ProcLabel_28 = backend_libs__proc_label__make_proc_label_3_f_0(hlds__hlds_dependency_graph__ModuleInfo_6, hlds__hlds_dependency_graph__PPredId_10, hlds__hlds_dependency_graph__PProcId_11);
    }
    {
      backend_libs__name_mangle__output_proc_label_3_p_0(hlds__hlds_dependency_graph__ProcLabel_28);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      hlds__hlds_dependency_graph__ProcLabel_36 = backend_libs__proc_label__make_proc_label_3_f_0(hlds__hlds_dependency_graph__ModuleInfo_6, hlds__hlds_dependency_graph__CPredId_12, hlds__hlds_dependency_graph__CProcId_13);
    }
    {
      backend_libs__name_mangle__output_proc_label_3_p_0(hlds__hlds_dependency_graph__ProcLabel_36);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_empty_node_3_p_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_4)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;

    {
      hlds__hlds_dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_109_112_116_121_95_110_111_100_101_95_95_91_49_93_95_48_3_p_0();
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_scc_4_p_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_dependency_graph__succeeded;

        if ((hlds__hlds_dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_dependency_graph__PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_dependency_graph__PredProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_dependency_graph__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__PredProcId_10, (MR_Integer) 0)));
            MR_Integer hlds__hlds_dependency_graph__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__PredProcId_10, (MR_Integer) 1)));
            MR_Word hlds__hlds_dependency_graph__PredInfo_15;
            MR_Word hlds__hlds_dependency_graph__ProcInfo_16;
            MR_String hlds__hlds_dependency_graph__Name_17;
            MR_Word hlds__hlds_dependency_graph__Det_18;
            MR_Word hlds__hlds_dependency_graph__Modes_19;
            MR_Word hlds__hlds_dependency_graph__ModeVarSet_20;
            MR_Word hlds__hlds_dependency_graph__V_26_26;

            {
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__hlds_dependency_graph__HeadVar__1_1, hlds__hlds_dependency_graph__PredId_13, hlds__hlds_dependency_graph__ProcId_14, &hlds__hlds_dependency_graph__PredInfo_15, &hlds__hlds_dependency_graph__ProcInfo_16);
            }
            {
              hlds__hlds_dependency_graph__Name_17 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_dependency_graph__PredInfo_15);
            }
            {
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__hlds_dependency_graph__ProcInfo_16, &hlds__hlds_dependency_graph__Det_18);
            }
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_dependency_graph__ProcInfo_16, &hlds__hlds_dependency_graph__Modes_19);
            }
            {
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_dependency_graph__ModeVarSet_20);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
            {
              hlds__hlds_dependency_graph__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_26_26, 0) = ((MR_Box) (hlds__hlds_dependency_graph__Name_17));
            }
            {
              parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, hlds__hlds_dependency_graph__ModeVarSet_20, hlds__hlds_dependency_graph__V_26_26, hlds__hlds_dependency_graph__Modes_19, hlds__hlds_dependency_graph__Det_18);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_dependency_graph__HeadVar__2__tmp_copy_2 = hlds__hlds_dependency_graph__PredProcIds_11;

              hlds__hlds_dependency_graph__HeadVar__2_2 = hlds__hlds_dependency_graph__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_ordering_5_p_0(
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Integer hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_dependency_graph__succeeded;

        if ((hlds__hlds_dependency_graph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
            MR_Word hlds__hlds_dependency_graph__SCC_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__hlds_dependency_graph__SCCs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__3_3, (MR_Integer) 1)));
            MR_Integer hlds__hlds_dependency_graph__V_26_26;

            {
              mercury__io__write_string_3_p_0((MR_String) "% SCC ");
            }
            {
              mercury__io__write_int_3_p_0(hlds__hlds_dependency_graph__HeadVar__2_2);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              hlds__hlds_dependency_graph__write_scc_4_p_0(hlds__hlds_dependency_graph__HeadVar__1_1, hlds__hlds_dependency_graph__SCC_15);
            }
            hlds__hlds_dependency_graph__V_26_26 = (hlds__hlds_dependency_graph__HeadVar__2_2 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer hlds__hlds_dependency_graph__HeadVar__2__tmp_copy_2 = hlds__hlds_dependency_graph__V_26_26;
              MR_Word hlds__hlds_dependency_graph__HeadVar__3__tmp_copy_3 = hlds__hlds_dependency_graph__SCCs_16;

              hlds__hlds_dependency_graph__HeadVar__3_3 = hlds__hlds_dependency_graph__HeadVar__3__tmp_copy_3;
              hlds__hlds_dependency_graph__HeadVar__2_2 = hlds__hlds_dependency_graph__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_dependency_arc_4_p_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_13,
  MR_Word hlds__hlds_dependency_graph__Caller_5,
  MR_Word hlds__hlds_dependency_graph__PredProcId_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_9,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_10)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__Callee_8;
    MR_Word hlds__hlds_dependency_graph__TypeInfo_15_15;
    MR_Box hlds__hlds_dependency_graph__V_11_11;
    MR_Box MR_CALL (* hlds__hlds_dependency_graph__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_13, (MR_Integer) 0)), (MR_Integer) 5)));

    {
      hlds__hlds_dependency_graph__V_11_11 = hlds__hlds_dependency_graph__func_0(((MR_Box) hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_13), ((MR_Box) (hlds__hlds_dependency_graph__PredProcId_6)));
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_13, (MR_Integer) 1, &hlds__hlds_dependency_graph__TypeInfo_15_15);
    }
    {
      hlds__hlds_dependency_graph__succeeded = mercury__digraph__search_key_3_p_0(hlds__hlds_dependency_graph__TypeInfo_15_15, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_9, hlds__hlds_dependency_graph__V_11_11, &hlds__hlds_dependency_graph__Callee_8);
    }
    if (hlds__hlds_dependency_graph__succeeded)
      {
        MR_Word hlds__hlds_dependency_graph__TypeInfo_17_17;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_13, (MR_Integer) 1, &hlds__hlds_dependency_graph__TypeInfo_17_17);
        }
        {
          mercury__digraph__add_edge_4_p_0(hlds__hlds_dependency_graph__TypeInfo_17_17, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__Callee_8, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_9, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_10);
        }
      }
    else
      *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_10 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_9;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_4_p_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_39,
  MR_Word hlds__hlds_dependency_graph__Caller_5,
  MR_Word hlds__hlds_dependency_graph__ConsId_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;

    switch (MR_tag((MR_Word) hlds__hlds_dependency_graph__ConsId_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
        break;
      case (MR_Integer) 1:
        *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
        break;
      case (MR_Integer) 2:
        *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__ConsId_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 1:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 2:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 3:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_dependency_graph__ShroudedPredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__ConsId_6, (MR_Integer) 1)));
              MR_Word hlds__hlds_dependency_graph__PredProcId_10;
              MR_Word hlds__hlds_dependency_graph__Callee_45;
              MR_Word hlds__hlds_dependency_graph__TypeInfo_15_49;
              MR_Box hlds__hlds_dependency_graph__V_46_46;
              MR_Box MR_CALL (* hlds__hlds_dependency_graph__func_0)(MR_Box, MR_Box);

              {
                hlds__hlds_dependency_graph__PredProcId_10 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(hlds__hlds_dependency_graph__ShroudedPredProcId_8);
              }
              hlds__hlds_dependency_graph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_39, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                hlds__hlds_dependency_graph__V_46_46 = hlds__hlds_dependency_graph__func_0(((MR_Box) hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_39), ((MR_Box) (hlds__hlds_dependency_graph__PredProcId_10)));
              }
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_39, (MR_Integer) 1, &hlds__hlds_dependency_graph__TypeInfo_15_49);
              }
              {
                hlds__hlds_dependency_graph__succeeded = mercury__digraph__search_key_3_p_0(hlds__hlds_dependency_graph__TypeInfo_15_49, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36, hlds__hlds_dependency_graph__V_46_46, &hlds__hlds_dependency_graph__Callee_45);
              }
              if (hlds__hlds_dependency_graph__succeeded)
                {
                  MR_Word hlds__hlds_dependency_graph__TypeInfo_17_51;

                  {
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_39, (MR_Integer) 1, &hlds__hlds_dependency_graph__TypeInfo_17_51);
                  }
                  {
                    mercury__digraph__add_edge_4_p_0(hlds__hlds_dependency_graph__TypeInfo_17_51, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__Callee_45, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37);
                  }
                }
              else
                *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            }
            break;
          case (MR_Integer) 5:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 6:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 7:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 8:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 9:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 10:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 11:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 12:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 13:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 14:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 15:
            *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_37 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_4_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    MR_Word hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_37;

    {
      hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), &hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_37);
    }
    *hlds__hlds_dependency_graph__wrapper_arg_3 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_37));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_4_p_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_23,
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_dependency_graph__succeeded;

        if ((hlds__hlds_dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_4 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_3;
        else
          {
            MR_Word hlds__hlds_dependency_graph__TypeInfo_29_29;
            MR_Word hlds__hlds_dependency_graph__TypeInfo_31_31;
            MR_Word hlds__hlds_dependency_graph__Case_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_dependency_graph__Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_dependency_graph__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Case_10, (MR_Integer) 0)));
            MR_Word hlds__hlds_dependency_graph__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Case_10, (MR_Integer) 1)));
            MR_Word hlds__hlds_dependency_graph__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Case_10, (MR_Integer) 2)));
            MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_18_18;
            MR_Word hlds__hlds_dependency_graph__V_19_19;
            MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_20_20;
            MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_21_21;
            MR_Box hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20;

            {
              hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_23, hlds__hlds_dependency_graph__HeadVar__1_1, hlds__hlds_dependency_graph__MainConsId_13, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_3, &hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_18_18);
            }
            {
              hlds__hlds_dependency_graph__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_19_19, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_2[4]));
              MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_19_19, 1) = ((MR_Box) (hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_4_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_19_19, 3) = ((MR_Box) (hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_23));
              MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_19_19, 4) = ((MR_Box) (hlds__hlds_dependency_graph__HeadVar__1_1));
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_23, (MR_Integer) 1, &hlds__hlds_dependency_graph__TypeInfo_29_29);
            }
            {
              hlds__hlds_dependency_graph__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1));
              MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__TypeInfo_31_31, 1) = ((MR_Box) (hlds__hlds_dependency_graph__TypeInfo_29_29));
            }
            {
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, hlds__hlds_dependency_graph__TypeInfo_31_31, hlds__hlds_dependency_graph__V_19_19, hlds__hlds_dependency_graph__OtherConsIds_14, ((MR_Box) (hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_18_18)), &hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20);
            }
            hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_20_20 = ((MR_Word) hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20);
            {
              hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_23, hlds__hlds_dependency_graph__HeadVar__1_1, hlds__hlds_dependency_graph__Goal_15, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_20_20, &hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_dependency_graph__HeadVar__2__tmp_copy_2 = hlds__hlds_dependency_graph__Cases_11;
              MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_21_21;

              hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_3 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
              hlds__hlds_dependency_graph__HeadVar__2_2 = hlds__hlds_dependency_graph__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_4_p_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_17,
  MR_Word hlds__hlds_dependency_graph__HeadVar__1_1,
  MR_Word hlds__hlds_dependency_graph__HeadVar__2_2,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_dependency_graph__succeeded;

        if ((hlds__hlds_dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_4 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_3;
        else
          {
            MR_Word hlds__hlds_dependency_graph__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hlds_dependency_graph__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_15_15;

            {
              hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_17, hlds__hlds_dependency_graph__HeadVar__1_1, hlds__hlds_dependency_graph__Goal_10, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_3, &hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_dependency_graph__HeadVar__2__tmp_copy_2 = hlds__hlds_dependency_graph__Goals_11;
              MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_15_15;

              hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_3 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
              hlds__hlds_dependency_graph__HeadVar__2_2 = hlds__hlds_dependency_graph__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_4_p_0(
  MR_Word hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103,
  MR_Word hlds__hlds_dependency_graph__Caller_5,
  MR_Word hlds__hlds_dependency_graph__Goal_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_dependency_graph__succeeded;
        MR_Word hlds__hlds_dependency_graph__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Goal_6, (MR_Integer) 0)));
        MR_Word hlds__hlds_dependency_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Goal_6, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__hlds_dependency_graph__GoalExpr_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_dependency_graph__SubGoal_19 = (MR_Word) MR_body(((MR_Word) hlds__hlds_dependency_graph__GoalExpr_8), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word hlds__hlds_dependency_graph__Goal__tmp_copy_6 = hlds__hlds_dependency_graph__SubGoal_19;

                hlds__hlds_dependency_graph__Goal_6 = hlds__hlds_dependency_graph__Goal__tmp_copy_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_dependency_graph__Unify_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 3)));
              MR_Word hlds__hlds_dependency_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 0)));
              MR_Word hlds__hlds_dependency_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 1)));
              MR_Word hlds__hlds_dependency_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 2)));
              MR_Word hlds__hlds_dependency_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) hlds__hlds_dependency_graph__Unify_44)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__hlds_dependency_graph__ConsId_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 1)));
                    MR_Word hlds__hlds_dependency_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 0)));
                    MR_Word hlds__hlds_dependency_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 2)));
                    MR_Word hlds__hlds_dependency_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 3)));
                    MR_Word hlds__hlds_dependency_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 4)));
                    MR_Word hlds__hlds_dependency_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 5)));
                    MR_Word hlds__hlds_dependency_graph__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 6)));

                    {
                      hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__ConsId_51, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_dependency_graph__ConsId_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 1)));
                    MR_Word hlds__hlds_dependency_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 0)));
                    MR_Word hlds__hlds_dependency_graph__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 2)));
                    MR_Word hlds__hlds_dependency_graph__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 3)));
                    MR_Word hlds__hlds_dependency_graph__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 4)));
                    MR_Word hlds__hlds_dependency_graph__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 5)));

                    {
                      hlds__hlds_dependency_graph__add_dependency_arcs_in_cons_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__ConsId_95, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__Unify_44, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76;
                      break;
                    case (MR_Integer) 1:
                      *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hlds_dependency_graph__PredId_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 0)));
              MR_Integer hlds__hlds_dependency_graph__ProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 1)));
              MR_Word hlds__hlds_dependency_graph__Builtin_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 3)));
              MR_Word hlds__hlds_dependency_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 2)));
              MR_Word hlds__hlds_dependency_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 4)));
              MR_Word hlds__hlds_dependency_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 5)));

              switch (hlds__hlds_dependency_graph__Builtin_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_dependency_graph__V_85_85;

                    {
                      hlds__hlds_dependency_graph__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_85_85, 0) = ((MR_Box) (hlds__hlds_dependency_graph__PredId_35));
                      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_85_85, 1) = ((MR_Box) (hlds__hlds_dependency_graph__ProcId_36));
                    }
                    {
                      hlds__hlds_dependency_graph__maybe_add_dependency_arc_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__V_85_85, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76;
                break;
              case (MR_Integer) 1:
                *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__hlds_dependency_graph__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 2)));
                  MR_Word hlds__hlds_dependency_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 1)));

                  {
                    hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__Goals_11, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__hlds_dependency_graph__Goals_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 1)));

                  {
                    hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__Goals_104, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__hlds_dependency_graph__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 3)));
                  MR_Word hlds__hlds_dependency_graph___Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 1)));
                  MR_Word hlds__hlds_dependency_graph___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 2)));

                  {
                    hlds__hlds_dependency_graph__add_dependency_arcs_in_cases_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__Cases_14, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__hlds_dependency_graph__Reason_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 1)));
                  MR_Word hlds__hlds_dependency_graph__SubGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 2)));
                  MR_Word hlds__hlds_dependency_graph__FGT_22;
                  MR_Word hlds__hlds_dependency_graph__V_21_21;

                  hlds__hlds_dependency_graph__succeeded = ((((MR_tag((MR_Word) hlds__hlds_dependency_graph__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (hlds__hlds_dependency_graph__succeeded)
                    {
                      hlds__hlds_dependency_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__Reason_20, (MR_Integer) 1)));
                      hlds__hlds_dependency_graph__FGT_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__Reason_20, (MR_Integer) 2)));
                      switch (hlds__hlds_dependency_graph__FGT_22) {
                        default:
                          hlds__hlds_dependency_graph__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__hlds_dependency_graph__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__hlds_dependency_graph__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (hlds__hlds_dependency_graph__succeeded)
                    *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__hlds_dependency_graph__Goal__tmp_copy_6 = hlds__hlds_dependency_graph__SubGoal_94;

                        hlds__hlds_dependency_graph__Goal_6 = hlds__hlds_dependency_graph__Goal__tmp_copy_6;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word hlds__hlds_dependency_graph__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 2)));
                  MR_Word hlds__hlds_dependency_graph__Then_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 3)));
                  MR_Word hlds__hlds_dependency_graph__Else_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 4)));
                  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_89_89;
                  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_90_90;
                  MR_Word hlds__hlds_dependency_graph___Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 1)));

                  {
                    hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__Cond_16, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76, &hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_89_89);
                  }
                  {
                    hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__Then_17, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_89_89, &hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_90_90);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__hlds_dependency_graph__Goal__tmp_copy_6 = hlds__hlds_dependency_graph__Else_18;
                    MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_76 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_90_90;

                    hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_76;
                    hlds__hlds_dependency_graph__Goal_6 = hlds__hlds_dependency_graph__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word hlds__hlds_dependency_graph__ShortHand_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_dependency_graph__GoalExpr_8, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) hlds__hlds_dependency_graph__ShortHand_65)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__hlds_dependency_graph__LHS_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 0)));
                        MR_Word hlds__hlds_dependency_graph__RHS_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 1)));
                        MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_78_78;

                        {
                          hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__LHS_74, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76, &hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_78_78);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__hlds_dependency_graph__Goal__tmp_copy_6 = hlds__hlds_dependency_graph__RHS_75;
                          MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_76 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_78_78;

                          hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_76;
                          hlds__hlds_dependency_graph__Goal_6 = hlds__hlds_dependency_graph__Goal__tmp_copy_6;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__hlds_dependency_graph__MainGoal_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 4)));
                        MR_Word hlds__hlds_dependency_graph__OrElseGoals_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 5)));
                        MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_81_81;
                        MR_Word hlds__hlds_dependency_graph___GoalType_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 0)));
                        MR_Word hlds__hlds_dependency_graph___Outer_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 1)));
                        MR_Word hlds__hlds_dependency_graph___Inner_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 2)));
                        MR_Word hlds__hlds_dependency_graph___OrElseInners_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 6)));
                        MR_Word hlds__hlds_dependency_graph___Vars_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 3)));

                        {
                          hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__MainGoal_69, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_76, &hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_81_81);
                        }
                        {
                          hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_4_p_0(hlds__hlds_dependency_graph__TypeClassInfo_for_dependency_node_103, hlds__hlds_dependency_graph__Caller_5, hlds__hlds_dependency_graph__OrElseGoals_70, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_81_81, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_77);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__hlds_dependency_graph__SubGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 2)));
                        MR_Word hlds__hlds_dependency_graph__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 0)));
                        MR_Word hlds__hlds_dependency_graph__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_dependency_graph__ShortHand_65, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__hlds_dependency_graph__Goal__tmp_copy_6 = hlds__hlds_dependency_graph__SubGoal_98;

                          hlds__hlds_dependency_graph__Goal_6 = hlds__hlds_dependency_graph__Goal__tmp_copy_6;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_proc_arcs_5_p_0(
  MR_Word hlds__hlds_dependency_graph__PredId_6,
  MR_Integer hlds__hlds_dependency_graph__ProcId_7,
  MR_Word hlds__hlds_dependency_graph__ProcInfo_8,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_13)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__Caller_10;
    MR_Word hlds__hlds_dependency_graph__V_14_14;

    {
      hlds__hlds_dependency_graph__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_14_14, 0) = ((MR_Box) (hlds__hlds_dependency_graph__PredId_6));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_14_14, 1) = ((MR_Box) (hlds__hlds_dependency_graph__ProcId_7));
    }
    {
      hlds__hlds_dependency_graph__succeeded = mercury__digraph__search_key_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12, ((MR_Box) (hlds__hlds_dependency_graph__V_14_14)), &hlds__hlds_dependency_graph__Caller_10);
    }
    if (hlds__hlds_dependency_graph__succeeded)
      {
        MR_Word hlds__hlds_dependency_graph__Goal_11;

        {
          hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__hlds_dependency_graph__ProcInfo_8, &hlds__hlds_dependency_graph__Goal_11);
        }
        {
          hlds__hlds_dependency_graph__add_dependency_arcs_in_goal_4_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[4], hlds__hlds_dependency_graph__Caller_10, hlds__hlds_dependency_graph__Goal_11, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_13);
        }
      }
    else
      *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_13 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_4_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    MR_Word hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_13;

    {
      hlds__hlds_dependency_graph__maybe_add_proc_arcs_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Integer) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_3), &hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_13);
    }
    *hlds__hlds_dependency_graph__wrapper_arg_4 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_13));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_4_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_5,
  MR_Word hlds__hlds_dependency_graph__PredId_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_10,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_11)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__PredInfo_8;
    MR_Word hlds__hlds_dependency_graph__ProcTable_9;
    MR_Word hlds__hlds_dependency_graph__V_12_12;
    MR_Box hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_DepGraph_11;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_dependency_graph__ModuleInfo_5, hlds__hlds_dependency_graph__PredId_6, &hlds__hlds_dependency_graph__PredInfo_8);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__hlds_dependency_graph__PredInfo_8, &hlds__hlds_dependency_graph__ProcTable_9);
    }
    {
      hlds__hlds_dependency_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_2[3]));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 1) = ((MR_Box) (hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_4_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 3) = ((MR_Box) (hlds__hlds_dependency_graph__PredId_6));
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[1], hlds__hlds_dependency_graph__V_12_12, hlds__hlds_dependency_graph__ProcTable_9, ((MR_Box) (hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_10)), &hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_DepGraph_11);
    }
    *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_11 = ((MR_Word) hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_DepGraph_11);
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__add_proc_node_4_p_0(
  MR_Word hlds__hlds_dependency_graph__PredId_5,
  MR_Integer hlds__hlds_dependency_graph__ProcId_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_9,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_10)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__V_11_11;
    MR_Word hlds__hlds_dependency_graph__V_8_8;

    {
      hlds__hlds_dependency_graph__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_11_11, 0) = ((MR_Box) (hlds__hlds_dependency_graph__PredId_5));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_11_11, 1) = ((MR_Box) (hlds__hlds_dependency_graph__ProcId_6));
    }
    {
      mercury__digraph__add_vertex_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (hlds__hlds_dependency_graph__V_11_11)), &hlds__hlds_dependency_graph__V_8_8, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_9, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_10);
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_nodes_5_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    MR_Word hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_10;

    {
      hlds__hlds_dependency_graph__add_proc_node_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Integer) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), &hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_10);
    }
    *hlds__hlds_dependency_graph__wrapper_arg_3 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_10));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_proc_nodes_5_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_6,
  MR_Word hlds__hlds_dependency_graph__Imported_7,
  MR_Word hlds__hlds_dependency_graph__PredId_8,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_13)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__PredInfo_10;
    MR_Word hlds__hlds_dependency_graph__ProcIds_11;
    MR_Word hlds__hlds_dependency_graph__V_14_14;
    MR_Box hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_DepGraph_13;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_dependency_graph__ModuleInfo_6, hlds__hlds_dependency_graph__PredId_8, &hlds__hlds_dependency_graph__PredInfo_10);
    }
    switch (hlds__hlds_dependency_graph__Imported_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          hlds__hlds_dependency_graph__ProcIds_11 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(hlds__hlds_dependency_graph__PredInfo_10);
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__hlds_dependency_graph__ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_dependency_graph__PredInfo_10);
        }
        break;
    }
    {
      hlds__hlds_dependency_graph__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_14_14, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_14_14, 1) = ((MR_Box) (hlds__hlds_dependency_graph__maybe_add_pred_proc_nodes_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_14_14, 3) = ((MR_Box) (hlds__hlds_dependency_graph__PredId_8));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[1], hlds__hlds_dependency_graph__V_14_14, hlds__hlds_dependency_graph__ProcIds_11, ((MR_Box) (hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12)), &hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_DepGraph_13);
    }
    *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_13 = ((MR_Word) hlds__hlds_dependency_graph__conv1_STATE_VARIABLE_DepGraph_13);
  }
}

static MR_Box MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_arcs_4_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_dependency_graph__wrapper_arg_2;
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    MR_Word hlds__hlds_dependency_graph__conv0_HeadVar__2_2;

    {
      hlds__hlds_dependency_graph__conv0_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1));
    }
    hlds__hlds_dependency_graph__wrapper_arg_2 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_HeadVar__2_2));
    return hlds__hlds_dependency_graph__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_arcs_4_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_5,
  MR_Word hlds__hlds_dependency_graph__PredId_6,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_15,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_16)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__Caller_8;

    {
      hlds__hlds_dependency_graph__succeeded = mercury__digraph__search_key_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_15, ((MR_Box) (hlds__hlds_dependency_graph__PredId_6)), &hlds__hlds_dependency_graph__Caller_8);
    }
    if (hlds__hlds_dependency_graph__succeeded)
      {
        MR_Word hlds__hlds_dependency_graph__PredInfo_9;
        MR_Word hlds__hlds_dependency_graph__ClausesInfo_10;
        MR_Word hlds__hlds_dependency_graph__ClausesRep_11;
        MR_Word hlds__hlds_dependency_graph__Clauses_13;
        MR_Word hlds__hlds_dependency_graph__Goals_14;
        MR_Word hlds__hlds_dependency_graph___ItemNumbers_12;

        {
          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_dependency_graph__ModuleInfo_5, hlds__hlds_dependency_graph__PredId_6, &hlds__hlds_dependency_graph__PredInfo_9);
        }
        {
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__hlds_dependency_graph__PredInfo_9, &hlds__hlds_dependency_graph__ClausesInfo_10);
        }
        {
          hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(hlds__hlds_dependency_graph__ClausesInfo_10, &hlds__hlds_dependency_graph__ClausesRep_11, &hlds__hlds_dependency_graph___ItemNumbers_12);
        }
        {
          hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(hlds__hlds_dependency_graph__ClausesRep_11, &hlds__hlds_dependency_graph__Clauses_13);
        }
        {
          hlds__hlds_dependency_graph__Goals_14 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_dependency_graph_scalar_common_5[2], hlds__hlds_dependency_graph__Clauses_13);
        }
        {
          hlds__hlds_dependency_graph__add_dependency_arcs_in_goals_4_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[3], hlds__hlds_dependency_graph__Caller_8, hlds__hlds_dependency_graph__Goals_14, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_15, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_16);
        }
      }
    else
      *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_16 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_15;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__maybe_add_pred_node_5_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_6,
  MR_Word hlds__hlds_dependency_graph__IncludeImported_7,
  MR_Word hlds__hlds_dependency_graph__PredId_8,
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_13)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__PredInfo_10;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_dependency_graph__ModuleInfo_6, hlds__hlds_dependency_graph__PredId_8, &hlds__hlds_dependency_graph__PredInfo_10);
    }
    hlds__hlds_dependency_graph__succeeded = (hlds__hlds_dependency_graph__IncludeImported_7 == (MR_Integer) 1);
    if (hlds__hlds_dependency_graph__succeeded)
      {
        hlds__hlds_dependency_graph__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_dependency_graph__PredInfo_10);
      }
    if (hlds__hlds_dependency_graph__succeeded)
      *hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_13 = hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12;
    else
      {
        MR_Word hlds__hlds_dependency_graph__V_11_11;

        {
          mercury__digraph__add_vertex_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__hlds_dependency_graph__PredId_8)), &hlds__hlds_dependency_graph__V_11_11, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_0_12, hlds__hlds_dependency_graph__STATE_VARIABLE_DepGraph_13);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_2(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;

    {
      hlds__hlds_dependency_graph__write_prof_dep_graph_link_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;

    {
      hlds__hlds_dependency_graph__write_empty_node_3_p_0(((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1));
    }
  }
}

void MR_CALL 
hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0(
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__TypeCtorInfo_17_17;
    MR_Word hlds__hlds_dependency_graph__DepInfo_7;
    MR_Word hlds__hlds_dependency_graph__V_13_13;
    MR_Word hlds__hlds_dependency_graph__V_15_15;
    MR_Box hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_IO_11;

    {
      hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_9, &hlds__hlds_dependency_graph__DepInfo_7);
    }
    hlds__hlds_dependency_graph__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      hlds__hlds_dependency_graph__V_13_13 = libs__dependency_graph__dependency_info_get_graph_1_f_0(hlds__hlds_dependency_graph__TypeCtorInfo_17_17, hlds__hlds_dependency_graph__DepInfo_7);
    }
    {
      hlds__hlds_dependency_graph__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_15_15, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_15_15, 1) = ((MR_Box) (hlds__hlds_dependency_graph__write_prof_dependency_graph_4_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_15_15, 3) = ((MR_Box) (*hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_9));
    }
    {
      mercury__digraph__traverse_5_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_17_17, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_dependency_graph__V_13_13, (MR_Word) &hlds__hlds_dependency_graph_scalar_common_5[1], hlds__hlds_dependency_graph__V_15_15, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_2(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_3,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_4)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;

    {
      hlds__hlds_dependency_graph__write_dep_graph_link_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;

    {
      hlds__hlds_dependency_graph__write_empty_node_3_p_0(((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1));
    }
  }
}

void MR_CALL 
hlds__hlds_dependency_graph__write_dependency_graph_4_p_0(
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__TypeCtorInfo_21_21;
    MR_Word hlds__hlds_dependency_graph__DepInfo_7;
    MR_Word hlds__hlds_dependency_graph__V_17_17;
    MR_Word hlds__hlds_dependency_graph__V_19_19;
    MR_Box hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_IO_11;

    {
      hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_9, &hlds__hlds_dependency_graph__DepInfo_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Dependency graph\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n\n% Dependency ordering\n");
    }
    hlds__hlds_dependency_graph__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      hlds__hlds_dependency_graph__V_17_17 = libs__dependency_graph__dependency_info_get_graph_1_f_0(hlds__hlds_dependency_graph__TypeCtorInfo_21_21, hlds__hlds_dependency_graph__DepInfo_7);
    }
    {
      hlds__hlds_dependency_graph__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_19_19, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_19_19, 1) = ((MR_Box) (hlds__hlds_dependency_graph__write_dependency_graph_4_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_19_19, 3) = ((MR_Box) (*hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_9));
    }
    {
      mercury__digraph__traverse_5_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_21_21, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_dependency_graph__V_17_17, (MR_Word) &hlds__hlds_dependency_graph_scalar_common_5[0], hlds__hlds_dependency_graph__V_19_19, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_2_p_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_3,
  MR_Word * hlds__hlds_dependency_graph__BottomUpSCCsEntryPoints_4)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__TypeCtorInfo_11_11;
    MR_Word hlds__hlds_dependency_graph__DepInfo_5;
    MR_Word hlds__hlds_dependency_graph__DepGraph_6;
    MR_Word hlds__hlds_dependency_graph__BottomUpSCCs_7;
    MR_Word hlds__hlds_dependency_graph__TopDownSCCs_8;
    MR_Word hlds__hlds_dependency_graph__TopDownSCCsEntryPoints_9;
    MR_Word hlds__hlds_dependency_graph__V_10_10;

    {
      hlds__hlds_module__module_info_dependency_info_2_p_0(hlds__hlds_dependency_graph__ModuleInfo_3, &hlds__hlds_dependency_graph__DepInfo_5);
    }
    hlds__hlds_dependency_graph__TypeCtorInfo_11_11 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      hlds__hlds_dependency_graph__DepGraph_6 = libs__dependency_graph__dependency_info_get_graph_1_f_0(hlds__hlds_dependency_graph__TypeCtorInfo_11_11, hlds__hlds_dependency_graph__DepInfo_5);
    }
    {
      hlds__hlds_dependency_graph__BottomUpSCCs_7 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0(hlds__hlds_dependency_graph__TypeCtorInfo_11_11, hlds__hlds_dependency_graph__DepInfo_5);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[2], hlds__hlds_dependency_graph__BottomUpSCCs_7, &hlds__hlds_dependency_graph__TopDownSCCs_8);
    }
    {
      hlds__hlds_dependency_graph__V_10_10 = mercury__set__init_0_f_0(hlds__hlds_dependency_graph__TypeCtorInfo_11_11);
    }
    {
      hlds__hlds_dependency_graph__find_scc_entry_points_5_p_0(hlds__hlds_dependency_graph__ModuleInfo_3, hlds__hlds_dependency_graph__DepGraph_6, hlds__hlds_dependency_graph__TopDownSCCs_8, hlds__hlds_dependency_graph__V_10_10, &hlds__hlds_dependency_graph__TopDownSCCsEntryPoints_9);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0, hlds__hlds_dependency_graph__TopDownSCCsEntryPoints_9, hlds__hlds_dependency_graph__BottomUpSCCsEntryPoints_4);
    }
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_2(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    MR_Word hlds__hlds_dependency_graph__conv2_STATE_VARIABLE_DepGraph_11;

    {
      hlds__hlds_dependency_graph__maybe_add_pred_proc_arcs_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), &hlds__hlds_dependency_graph__conv2_STATE_VARIABLE_DepGraph_11);
    }
    *hlds__hlds_dependency_graph__wrapper_arg_3 = ((MR_Box) (hlds__hlds_dependency_graph__conv2_STATE_VARIABLE_DepGraph_11));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    MR_Word hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_13;

    {
      hlds__hlds_dependency_graph__maybe_add_pred_proc_nodes_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), &hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_13);
    }
    *hlds__hlds_dependency_graph__wrapper_arg_3 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_13));
  }
}

MR_Word MR_CALL 
hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_5,
  MR_Word hlds__hlds_dependency_graph__PredIds_6,
  MR_Word hlds__hlds_dependency_graph__Imported_7)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__DepInfo_8;
    MR_Word hlds__hlds_dependency_graph__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word hlds__hlds_dependency_graph__TypeCtorInfo_18_18;
    MR_Word hlds__hlds_dependency_graph__TypeInfo_19_19;
    MR_Word hlds__hlds_dependency_graph__DepGraph0_9;
    MR_Word hlds__hlds_dependency_graph__DepGraph1_10;
    MR_Word hlds__hlds_dependency_graph__DepGraph_11;
    MR_Word hlds__hlds_dependency_graph__V_12_12;
    MR_Word hlds__hlds_dependency_graph__V_13_13;
    MR_Box hlds__hlds_dependency_graph__conv1_DepGraph1_10;
    MR_Box hlds__hlds_dependency_graph__conv3_DepGraph_11;

    {
      mercury__digraph__init_1_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_14_14, &hlds__hlds_dependency_graph__DepGraph0_9);
    }
    {
      hlds__hlds_dependency_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 1) = ((MR_Box) (hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 3) = ((MR_Box) (hlds__hlds_dependency_graph__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 4) = ((MR_Box) (hlds__hlds_dependency_graph__Imported_7));
    }
    hlds__hlds_dependency_graph__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    hlds__hlds_dependency_graph__TypeInfo_19_19 = (MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[1];
    {
      mercury__list__foldl_4_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_18_18, hlds__hlds_dependency_graph__TypeInfo_19_19, hlds__hlds_dependency_graph__V_12_12, hlds__hlds_dependency_graph__PredIds_6, ((MR_Box) (hlds__hlds_dependency_graph__DepGraph0_9)), &hlds__hlds_dependency_graph__conv1_DepGraph1_10);
    }
    hlds__hlds_dependency_graph__DepGraph1_10 = ((MR_Word) hlds__hlds_dependency_graph__conv1_DepGraph1_10);
    {
      hlds__hlds_dependency_graph__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_13_13, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_13_13, 1) = ((MR_Box) (hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0_2));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_13_13, 3) = ((MR_Box) (hlds__hlds_dependency_graph__ModuleInfo_5));
    }
    {
      mercury__list__foldl_4_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_18_18, hlds__hlds_dependency_graph__TypeInfo_19_19, hlds__hlds_dependency_graph__V_13_13, hlds__hlds_dependency_graph__PredIds_6, ((MR_Box) (hlds__hlds_dependency_graph__DepGraph1_10)), &hlds__hlds_dependency_graph__conv3_DepGraph_11);
    }
    hlds__hlds_dependency_graph__DepGraph_11 = ((MR_Word) hlds__hlds_dependency_graph__conv3_DepGraph_11);
    {
      hlds__hlds_dependency_graph__DepInfo_8 = libs__dependency_graph__make_dependency_info_1_f_0(hlds__hlds_dependency_graph__TypeCtorInfo_14_14, hlds__hlds_dependency_graph__DepGraph_11);
    }
    return hlds__hlds_dependency_graph__DepInfo_8;
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_2(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    MR_Word hlds__hlds_dependency_graph__conv2_STATE_VARIABLE_DepGraph_16;

    {
      hlds__hlds_dependency_graph__maybe_add_pred_arcs_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), &hlds__hlds_dependency_graph__conv2_STATE_VARIABLE_DepGraph_16);
    }
    *hlds__hlds_dependency_graph__wrapper_arg_3 = ((MR_Box) (hlds__hlds_dependency_graph__conv2_STATE_VARIABLE_DepGraph_16));
  }
}

static void MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_1(
  MR_Box hlds__hlds_dependency_graph__closure_arg,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_1,
  MR_Box hlds__hlds_dependency_graph__wrapper_arg_2,
  MR_Box * hlds__hlds_dependency_graph__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_dependency_graph__closure = hlds__hlds_dependency_graph__closure_arg;
    MR_Word hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_13;

    {
      hlds__hlds_dependency_graph__maybe_add_pred_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_1), ((MR_Word) hlds__hlds_dependency_graph__wrapper_arg_2), &hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_13);
    }
    *hlds__hlds_dependency_graph__wrapper_arg_3 = ((MR_Box) (hlds__hlds_dependency_graph__conv0_STATE_VARIABLE_DepGraph_13));
  }
}

MR_Word MR_CALL 
hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0(
  MR_Word hlds__hlds_dependency_graph__ModuleInfo_5,
  MR_Word hlds__hlds_dependency_graph__PredIds_6,
  MR_Word hlds__hlds_dependency_graph__Imported_7)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__DepInfo_8;
    MR_Word hlds__hlds_dependency_graph__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word hlds__hlds_dependency_graph__TypeInfo_18_18;
    MR_Word hlds__hlds_dependency_graph__DepGraph0_9;
    MR_Word hlds__hlds_dependency_graph__DepGraph1_10;
    MR_Word hlds__hlds_dependency_graph__DepGraph_11;
    MR_Word hlds__hlds_dependency_graph__V_12_12;
    MR_Word hlds__hlds_dependency_graph__V_13_13;
    MR_Box hlds__hlds_dependency_graph__conv1_DepGraph1_10;
    MR_Box hlds__hlds_dependency_graph__conv3_DepGraph_11;

    {
      mercury__digraph__init_1_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_14_14, &hlds__hlds_dependency_graph__DepGraph0_9);
    }
    {
      hlds__hlds_dependency_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 1) = ((MR_Box) (hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 3) = ((MR_Box) (hlds__hlds_dependency_graph__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_12_12, 4) = ((MR_Box) (hlds__hlds_dependency_graph__Imported_7));
    }
    hlds__hlds_dependency_graph__TypeInfo_18_18 = (MR_Word) &hlds__hlds_dependency_graph_scalar_common_1[0];
    {
      mercury__list__foldl_4_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_14_14, hlds__hlds_dependency_graph__TypeInfo_18_18, hlds__hlds_dependency_graph__V_12_12, hlds__hlds_dependency_graph__PredIds_6, ((MR_Box) (hlds__hlds_dependency_graph__DepGraph0_9)), &hlds__hlds_dependency_graph__conv1_DepGraph1_10);
    }
    hlds__hlds_dependency_graph__DepGraph1_10 = ((MR_Word) hlds__hlds_dependency_graph__conv1_DepGraph1_10);
    {
      hlds__hlds_dependency_graph__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_13_13, 0) = ((MR_Box) (&hlds__hlds_dependency_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_13_13, 1) = ((MR_Box) (hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0_2));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hlds_dependency_graph__V_13_13, 3) = ((MR_Box) (hlds__hlds_dependency_graph__ModuleInfo_5));
    }
    {
      mercury__list__foldl_4_p_0(hlds__hlds_dependency_graph__TypeCtorInfo_14_14, hlds__hlds_dependency_graph__TypeInfo_18_18, hlds__hlds_dependency_graph__V_13_13, hlds__hlds_dependency_graph__PredIds_6, ((MR_Box) (hlds__hlds_dependency_graph__DepGraph1_10)), &hlds__hlds_dependency_graph__conv3_DepGraph_11);
    }
    hlds__hlds_dependency_graph__DepGraph_11 = ((MR_Word) hlds__hlds_dependency_graph__conv3_DepGraph_11);
    {
      hlds__hlds_dependency_graph__DepInfo_8 = libs__dependency_graph__make_dependency_info_1_f_0(hlds__hlds_dependency_graph__TypeCtorInfo_14_14, hlds__hlds_dependency_graph__DepGraph_11);
    }
    return hlds__hlds_dependency_graph__DepInfo_8;
  }
}

void MR_CALL 
hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_8,
  MR_Word * hlds__hlds_dependency_graph__DepInfo_5)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__PredIds_6;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, &hlds__hlds_dependency_graph__PredIds_6);
    }
    {
      *hlds__hlds_dependency_graph__DepInfo_5 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, hlds__hlds_dependency_graph__PredIds_6, (MR_Integer) 1);
    }
    {
      hlds__hlds_module__module_info_set_dependency_info_3_p_0(*hlds__hlds_dependency_graph__DepInfo_5, hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_8);
    }
  }
}

void MR_CALL 
hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(
  MR_Word hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_8,
  MR_Word * hlds__hlds_dependency_graph__DepInfo_5)
{
  {
    MR_bool hlds__hlds_dependency_graph__succeeded;
    MR_Word hlds__hlds_dependency_graph__MaybeDepInfo_6;

    {
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, &hlds__hlds_dependency_graph__MaybeDepInfo_6);
    }
    if ((hlds__hlds_dependency_graph__MaybeDepInfo_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__hlds_dependency_graph__PredIds_14;

        {
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, &hlds__hlds_dependency_graph__PredIds_14);
        }
        {
          *hlds__hlds_dependency_graph__DepInfo_5 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, hlds__hlds_dependency_graph__PredIds_14, (MR_Integer) 1);
        }
        {
          hlds__hlds_module__module_info_set_dependency_info_3_p_0(*hlds__hlds_dependency_graph__DepInfo_5, hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_8);
        }
      }
    else
      {
        *hlds__hlds_dependency_graph__DepInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_dependency_graph__MaybeDepInfo_6, (MR_Integer) 0)));
        *hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_8 = hlds__hlds_dependency_graph__STATE_VARIABLE_ModuleInfo_0_7;
      }
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

	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_bottom_up_dependency_sccs_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_graph_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_graph_key_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_hlds_dependency_info_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_include_imported_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_id_0);
	MR_register_type_ctor_info(&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0);
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

/* :- end_module hlds.hlds_dependency_graph. */
