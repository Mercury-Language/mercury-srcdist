/*
** Automatically generated from `dependency_graph.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module transform_hlds.dependency_graph. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__dependency_graph__init
ENDINIT
*/

#include "transform_hlds.dependency_graph.mih"


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



struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s {
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCCs_4;
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5;
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6;
  MR_bool transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded;
  jmp_buf transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__commit_0;
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17;
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeInfo_19_19;
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11;
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingKey_14;
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingPred_15;
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCC_16;
  MR_Box transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv0_CallingKey_14;
  MR_Box transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv2_HigherSCC_16;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dependency_graph__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0;

static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_value_ordered_include_imported_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_name_ordered_include_imported_0[2];

static const MR_Integer transform_hlds__dependency_graph__transform_hlds__dependency_graph__functor_number_map_include_imported_0[2];

static const MR_ConstString transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1[1];

static const MR_TypeClassMethod transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_method_ids_dependency_node_1[3];

static const MR_TypeClassId transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1;

static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____include_imported_0_0_10001(
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2);

static void MR_CALL 
transform_hlds__dependency_graph____Compare____include_imported_0_0_10001(
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0_10001(
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2);

static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0_10001(
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3);

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);

static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_p_0(
  MR_Word transform_hlds__dependency_graph__V_25_25,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3);

static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_p_0(
  MR_Word transform_hlds__dependency_graph__V_25_25,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3);

static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(
  MR_Word transform_hlds__dependency_graph__V_29_29,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2);

static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(
  MR_Word transform_hlds__dependency_graph__V_29_29,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2);

static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0(
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Integer transform_hlds__dependency_graph__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0(
  MR_Integer transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__dependency_graph__dependency_node_1_f_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_5_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_nodes_5_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

static void MR_CALL 
transform_hlds__dependency_graph__handle_higher_order_arg_8_p_0(
  MR_Word transform_hlds__dependency_graph__PredSCC_9,
  MR_Word transform_hlds__dependency_graph__IsAgg_10,
  MR_Integer transform_hlds__dependency_graph__SCCid_11,
  MR_Word transform_hlds__dependency_graph__PredProcId_12,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_0_16,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_17,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0_18,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_19);

static void MR_CALL 
transform_hlds__dependency_graph__handle_higher_order_args_9_p_0_1(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_3,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

static void MR_CALL 
transform_hlds__dependency_graph__handle_higher_order_args_9_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__IsAgg_2,
  MR_Integer transform_hlds__dependency_graph__SCCid_3,
  MR_Word transform_hlds__dependency_graph__Map_4,
  MR_Word transform_hlds__dependency_graph__PredSCC_5,
  MR_Word transform_hlds__dependency_graph__HeadVar__6_6,
  MR_Word * transform_hlds__dependency_graph__HeadVar__7_7,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0_8,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_9);

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_1(
  void * transform_hlds__dependency_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_3(
  void * transform_hlds__dependency_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_5(
  void * transform_hlds__dependency_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_4(
  void * transform_hlds__dependency_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_2(
  void * transform_hlds__dependency_graph__env_ptr_arg);

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_6(
  void * transform_hlds__dependency_graph__env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0(
  MR_Word transform_hlds__dependency_graph__HigherSCCs_4,
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
  MR_Word transform_hlds__dependency_graph__PredProcId_6);

static void MR_CALL 
transform_hlds__dependency_graph__write_graph_children_6_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4);

static void MR_CALL 
transform_hlds__dependency_graph__write_dep_graph_link_5_p_0(
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
  MR_Word transform_hlds__dependency_graph__Parent_7,
  MR_Word transform_hlds__dependency_graph__Child_8);

static void MR_CALL 
transform_hlds__dependency_graph__write_prof_dep_graph_link_5_p_0(
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
  MR_Word transform_hlds__dependency_graph__Parent_7,
  MR_Word transform_hlds__dependency_graph__Child_8);

static void MR_CALL 
transform_hlds__dependency_graph__write_scc_4_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2);

static void MR_CALL 
transform_hlds__dependency_graph__write_dependency_ordering_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3);

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40,
  MR_Word transform_hlds__dependency_graph__Caller_5,
  MR_Word transform_hlds__dependency_graph__ConsId_6,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37);

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_3);

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4);

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4);

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105,
  MR_Word transform_hlds__dependency_graph__Caller_5,
  MR_Word transform_hlds__dependency_graph__Goal_6,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);

static MR_Box MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0_1(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);

static void MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

static void MR_CALL 
transform_hlds__dependency_graph__add_proc_arcs_6_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__IncludeImported_4,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6);

static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__Imported_3,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

static void MR_CALL 
transform_hlds__dependency_graph__add_pred_nodes_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__Imported_3,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

static void MR_CALL 
transform_hlds__dependency_graph__sets_to_lists_3_p_0(
  MR_Word transform_hlds__dependency_graph__TypeInfo_for_T_11,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word * transform_hlds__dependency_graph__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dependency_graph__get_scc_entry_points_4_p_0_1(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_2[1][6];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_3[1][5];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_4[1][3];

static /* final */ const MR_Integer transform_hlds__dependency_graph_scalar_common_5[1][2];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_6[1][8];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_7[1][11];




static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_proc_id__arity0__)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__dependency_graph__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__dependency_graph__add_pred_arcs_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer transform_hlds__dependency_graph_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&transform_hlds__dependency_graph__digraph__pti_digraph_key_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__dependency_graph__digraph__pti_digraph_1__pseudo_1)),
    ((MR_Box) (&transform_hlds__dependency_graph__digraph__pti_digraph_1__pseudo_1))
  },
};

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__dependency_graph__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dependency_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dependency_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dependency_graph__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dependency_graph__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dependency_graph__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0 = {
  (MR_String) "include_imported",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1 = {
  (MR_String) "do_not_include_imported",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_value_ordered_include_imported_0[2] = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0,
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_name_ordered_include_imported_0[2] = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1,
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0
};

static const MR_Integer transform_hlds__dependency_graph__transform_hlds__dependency_graph__functor_number_map_include_imported_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_include_imported_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dependency_graph____Unify____include_imported_0_0_10001)),
  ((MR_Box) (transform_hlds__dependency_graph____Compare____include_imported_0_0_10001)),
  (MR_String) "transform_hlds.dependency_graph",
  (MR_String) "include_imported",
  {     transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_name_ordered_include_imported_0 },
  {     transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_value_ordered_include_imported_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__dependency_graph__transform_hlds__dependency_graph__functor_number_map_include_imported_0
};

const MR_TypeCtorInfo_Struct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_scc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dependency_graph____Unify____scc_id_0_0_10001)),
  ((MR_Box) (transform_hlds__dependency_graph____Compare____scc_id_0_0_10001)),
  (MR_String) "transform_hlds.dependency_graph",
  (MR_String) "scc_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_BaseTypeclassInfo base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_id__arity0__[8] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001)),
  ((MR_Box) (transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001)),
  ((MR_Box) (transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_transform_hlds__dependency_graph__dependency_node__arity1__hlds__hlds_pred__pred_proc_id__arity0__[8] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001)),
  ((MR_Box) (transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001)),
  ((MR_Box) (transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001))
};

static const MR_ConstString transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1[1] = {
  (MR_String) "T"
};

static const MR_TypeClassMethod transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_method_ids_dependency_node_1[3] = {
  {
    (MR_String) "add_dependency_nodes",
    (MR_Integer) 5,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "add_dependency_arcs",
    (MR_Integer) 5,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "dependency_node",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

static const MR_TypeClassId transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1 = {
  (MR_String) "transform_hlds.dependency_graph",
  (MR_String) "dependency_node",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1,
  transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_method_ids_dependency_node_1
};

const MR_TypeClassDeclStruct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_decl_dependency_node_1 = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____include_imported_0_0_10001(
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;

    {
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph____Unify____include_imported_0_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2));
    }
    return transform_hlds__dependency_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__dependency_graph____Compare____include_imported_0_0_10001(
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__1_1;

    {
      transform_hlds__dependency_graph____Compare____include_imported_0_0(&transform_hlds__dependency_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3));
    }
    *transform_hlds__dependency_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0_10001(
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;

    {
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph____Unify____scc_id_0_0(((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_2));
    }
    return transform_hlds__dependency_graph__succeeded;
  }
}

static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0_10001(
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__1_1;

    {
      transform_hlds__dependency_graph____Compare____scc_id_0_0(&transform_hlds__dependency_graph__conv0_HeadVar__1_1, ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_3));
    }
    *transform_hlds__dependency_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__dependency_graph__closure;
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
    {
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__dependency_graph__closure;
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
    {
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
    MR_Box transform_hlds__dependency_graph__closure;
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__2_2;

    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
    {
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__2_2));
    return transform_hlds__dependency_graph__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__dependency_graph__closure;
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
    {
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__dependency_graph__closure;
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
    {
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
    MR_Box transform_hlds__dependency_graph__closure;
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__2_2;

    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
    {
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__2_2));
    return transform_hlds__dependency_graph__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_p_0(
  MR_Word transform_hlds__dependency_graph__V_25_25,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word transform_hlds__dependency_graph__ChildKey_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__Child_19;
            MR_Box transform_hlds__dependency_graph__conv0_Child_19;

            {
              mercury__digraph__lookup_vertex_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__ChildKey_13, &transform_hlds__dependency_graph__conv0_Child_19);
            }
            transform_hlds__dependency_graph__Child_19 = ((MR_Word) transform_hlds__dependency_graph__conv0_Child_19);
            {
              transform_hlds__dependency_graph__write_dep_graph_link_5_p_0(transform_hlds__dependency_graph__V_25_25, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__Child_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Children_14;

              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_p_0(
  MR_Word transform_hlds__dependency_graph__V_25_25,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word transform_hlds__dependency_graph__ChildKey_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__Child_19;
            MR_Box transform_hlds__dependency_graph__conv0_Child_19;

            {
              mercury__digraph__lookup_vertex_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__ChildKey_13, &transform_hlds__dependency_graph__conv0_Child_19);
            }
            transform_hlds__dependency_graph__Child_19 = ((MR_Word) transform_hlds__dependency_graph__conv0_Child_19);
            {
              transform_hlds__dependency_graph__write_prof_dep_graph_link_5_p_0(transform_hlds__dependency_graph__V_25_25, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__Child_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Children_14;

              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(
  MR_Word transform_hlds__dependency_graph__V_29_29,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            MR_Word transform_hlds__dependency_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__Nodes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__NodeKey_19;
            MR_Word transform_hlds__dependency_graph__ChildrenSet_20;
            MR_Word transform_hlds__dependency_graph__Children_21;

            {
              mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, ((MR_Box) (transform_hlds__dependency_graph__Node_13)), &transform_hlds__dependency_graph__NodeKey_19);
            }
            {
              mercury__digraph__lookup_from_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__NodeKey_19, &transform_hlds__dependency_graph__ChildrenSet_20);
            }
            {
              mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], transform_hlds__dependency_graph__ChildrenSet_20, &transform_hlds__dependency_graph__Children_21);
            }
            {
              transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_p_0(transform_hlds__dependency_graph__V_29_29, transform_hlds__dependency_graph__Children_21, transform_hlds__dependency_graph__Node_13, transform_hlds__dependency_graph__HeadVar__2_2);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Nodes_14;

              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(
  MR_Word transform_hlds__dependency_graph__V_29_29,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            MR_Word transform_hlds__dependency_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__Nodes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__NodeKey_19;
            MR_Word transform_hlds__dependency_graph__ChildrenSet_20;
            MR_Word transform_hlds__dependency_graph__Children_21;

            {
              mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, ((MR_Box) (transform_hlds__dependency_graph__Node_13)), &transform_hlds__dependency_graph__NodeKey_19);
            }
            {
              mercury__digraph__lookup_from_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__NodeKey_19, &transform_hlds__dependency_graph__ChildrenSet_20);
            }
            {
              mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], transform_hlds__dependency_graph__ChildrenSet_20, &transform_hlds__dependency_graph__Children_21);
            }
            {
              transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_p_0(transform_hlds__dependency_graph__V_29_29, transform_hlds__dependency_graph__Children_21, transform_hlds__dependency_graph__Node_13, transform_hlds__dependency_graph__HeadVar__2_2);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Nodes_14;

              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
        else
          {
            MR_Integer transform_hlds__dependency_graph__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__V_19_19;
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;
            MR_Word transform_hlds__dependency_graph__V_16_16;

            {
              transform_hlds__dependency_graph__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_11));
            }
            {
              mercury__digraph__add_vertex_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__dependency_graph__V_19_19)), &transform_hlds__dependency_graph__V_16_16, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__ProcIds_12;
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;

              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__HeadVar__2_2;
    MR_Box transform_hlds__dependency_graph__conv0_HeadVar__2_2;

    {
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = mercury__std_util__id_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)));
    }
    transform_hlds__dependency_graph__HeadVar__2_2 = ((MR_Word) transform_hlds__dependency_graph__conv0_HeadVar__2_2);
    return transform_hlds__dependency_graph__HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;

    {
      transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
    }
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;

    {
      transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer transform_hlds__dependency_graph__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));

    return transform_hlds__dependency_graph__HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;

    {
      transform_hlds__dependency_graph__add_pred_arcs_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
    }
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;

    {
      transform_hlds__dependency_graph__add_pred_nodes_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
    }
  }
}

static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0(
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Integer transform_hlds__dependency_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar1_4 = transform_hlds__dependency_graph__HeadVar__2_2;
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar2_5 = transform_hlds__dependency_graph__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Cast_HeadVar1_4, transform_hlds__dependency_graph__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0(
  MR_Integer transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar1_3 = transform_hlds__dependency_graph__HeadVar__1_1;
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar2_4 = transform_hlds__dependency_graph__HeadVar__2_2;

    transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__Cast_HeadVar1_3 == transform_hlds__dependency_graph__Cast_HeadVar2_4);
    return transform_hlds__dependency_graph__succeeded;
  }
}

void MR_CALL 
transform_hlds__dependency_graph____Compare____include_imported_0_0(
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__dependency_graph__HeadVar__2_2;
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__dependency_graph__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Cast_HeadVar1_4, transform_hlds__dependency_graph__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____include_imported_0_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__2_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__HeadVar__2_1 == transform_hlds__dependency_graph__HeadVar__2_2);

    return transform_hlds__dependency_graph__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__dependency_graph__dependency_node_1_f_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Box transform_hlds__dependency_graph__HeadVar__2_2;
    MR_Box MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3, (MR_Integer) 0)), (MR_Integer) 7)));

    {
      transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)));
    }
    return transform_hlds__dependency_graph__HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_5_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6, (MR_Integer) 0)), (MR_Integer) 6)));
    MR_Box transform_hlds__dependency_graph__conv1_HeadVar__5_5;

    {
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__3_3)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__4_4)), &transform_hlds__dependency_graph__conv1_HeadVar__5_5);
    }
    *transform_hlds__dependency_graph__HeadVar__5_5 = ((MR_Word) transform_hlds__dependency_graph__conv1_HeadVar__5_5);
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_nodes_5_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box transform_hlds__dependency_graph__conv1_HeadVar__5_5;

    {
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__3_3)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__4_4)), &transform_hlds__dependency_graph__conv1_HeadVar__5_5);
    }
    *transform_hlds__dependency_graph__HeadVar__5_5 = ((MR_Word) transform_hlds__dependency_graph__conv1_HeadVar__5_5);
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__handle_higher_order_arg_8_p_0(
  MR_Word transform_hlds__dependency_graph__PredSCC_9,
  MR_Word transform_hlds__dependency_graph__IsAgg_10,
  MR_Integer transform_hlds__dependency_graph__SCCid_11,
  MR_Word transform_hlds__dependency_graph__PredProcId_12,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_0_16,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_17,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0_18,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_19)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Integer transform_hlds__dependency_graph__CalledSCCid_15;
    MR_Box transform_hlds__dependency_graph__conv0_CalledSCCid_15;

    {
      transform_hlds__dependency_graph__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__dependency_graph__PredSCC_9, ((MR_Box) (transform_hlds__dependency_graph__PredProcId_12)), &transform_hlds__dependency_graph__conv0_CalledSCCid_15);
    }
    if (transform_hlds__dependency_graph__succeeded)
      {
        transform_hlds__dependency_graph__CalledSCCid_15 = ((MR_Integer) transform_hlds__dependency_graph__conv0_CalledSCCid_15);
        transform_hlds__dependency_graph__succeeded = MR_TRUE;
      }
    if (transform_hlds__dependency_graph__succeeded)
      {
        switch (transform_hlds__dependency_graph__IsAgg_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_19 = transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0_18;
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__dependency_graph__CalledSCCid_15)), transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0_18, transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_19);
              }
            }
            break;
        }
        transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__CalledSCCid_15 == transform_hlds__dependency_graph__SCCid_11);
        if (transform_hlds__dependency_graph__succeeded)
          *transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_17 = transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_0_16;
        else
          {
            {
              mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__dependency_graph__SCCid_11)), ((MR_Box) (transform_hlds__dependency_graph__CalledSCCid_15)), transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_0_16, transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_17);
            }
          }
      }
    else
      {
        *transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_19 = transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0_18;
        *transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_17 = transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_0_16;
      }
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__handle_higher_order_args_9_p_0_1(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_3,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
    MR_Word transform_hlds__dependency_graph__conv1_STATE_VARIABLE_SCCGraph_17;
    MR_Word transform_hlds__dependency_graph__conv0_STATE_VARIABLE_NoMerge_19;

    {
      transform_hlds__dependency_graph__handle_higher_order_arg_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), &transform_hlds__dependency_graph__conv1_STATE_VARIABLE_SCCGraph_17, ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_STATE_VARIABLE_NoMerge_19);
    }
    *transform_hlds__dependency_graph__wrapper_arg_3 = ((MR_Box) (transform_hlds__dependency_graph__conv1_STATE_VARIABLE_SCCGraph_17));
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_STATE_VARIABLE_NoMerge_19));
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__handle_higher_order_args_9_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__IsAgg_2,
  MR_Integer transform_hlds__dependency_graph__SCCid_3,
  MR_Word transform_hlds__dependency_graph__Map_4,
  MR_Word transform_hlds__dependency_graph__PredSCC_5,
  MR_Word transform_hlds__dependency_graph__HeadVar__6_6,
  MR_Word * transform_hlds__dependency_graph__HeadVar__7_7,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0_8,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_9 = transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0_8;
            *transform_hlds__dependency_graph__HeadVar__7_7 = transform_hlds__dependency_graph__HeadVar__6_6;
          }
        else
          {
            MR_Word transform_hlds__dependency_graph__Arg_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_34_34;
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_35_35;
            MR_Word transform_hlds__dependency_graph__PredProcIds_28;

            {
              transform_hlds__dependency_graph__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[4], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__Map_4, ((MR_Box) (transform_hlds__dependency_graph__Arg_20)), &transform_hlds__dependency_graph__PredProcIds_28);
            }
            if (transform_hlds__dependency_graph__succeeded)
              {
                MR_Word transform_hlds__dependency_graph__V_33_33;
                MR_Box transform_hlds__dependency_graph__conv3_STATE_VARIABLE_SCCGraph_34_34;
                MR_Box transform_hlds__dependency_graph__conv2_STATE_VARIABLE_NoMerge_35_35;

                {
                  transform_hlds__dependency_graph__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_33_33, 0) = ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_7[0]));
                  MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_33_33, 1) = ((MR_Box) (transform_hlds__dependency_graph__handle_higher_order_args_9_p_0_1));
                  MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_33_33, 3) = ((MR_Box) (transform_hlds__dependency_graph__PredSCC_5));
                  MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_33_33, 4) = ((MR_Box) (transform_hlds__dependency_graph__IsAgg_2));
                  MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_33_33, 5) = ((MR_Box) (transform_hlds__dependency_graph__SCCid_3));
                }
                {
                  mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[5], (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[6], transform_hlds__dependency_graph__V_33_33, transform_hlds__dependency_graph__PredProcIds_28, ((MR_Box) (transform_hlds__dependency_graph__HeadVar__6_6)), &transform_hlds__dependency_graph__conv3_STATE_VARIABLE_SCCGraph_34_34, ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0_8)), &transform_hlds__dependency_graph__conv2_STATE_VARIABLE_NoMerge_35_35);
                }
                transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_34_34 = ((MR_Word) transform_hlds__dependency_graph__conv3_STATE_VARIABLE_SCCGraph_34_34);
                transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_35_35 = ((MR_Word) transform_hlds__dependency_graph__conv2_STATE_VARIABLE_NoMerge_35_35);
              }
            else
              {
                transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_35_35 = transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0_8;
                transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_34_34 = transform_hlds__dependency_graph__HeadVar__6_6;
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Args_21;
              MR_Word transform_hlds__dependency_graph__HeadVar__6__tmp_copy_6 = transform_hlds__dependency_graph__STATE_VARIABLE_SCCGraph_34_34;
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0__tmp_copy_8 = transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_35_35;

              transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0_8 = transform_hlds__dependency_graph__STATE_VARIABLE_NoMerge_0__tmp_copy_8;
              transform_hlds__dependency_graph__HeadVar__6_6 = transform_hlds__dependency_graph__HeadVar__6__tmp_copy_6;
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_1(
  void * transform_hlds__dependency_graph__env_ptr_arg)
{
  {
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_3(
  void * transform_hlds__dependency_graph__env_ptr_arg)
{
  {
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

    (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingKey_14 = ((MR_Word) (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv0_CallingKey_14);
    {
      transform_hlds__dependency_graph__is_entry_point_3_p_0_2(transform_hlds__dependency_graph__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_5(
  void * transform_hlds__dependency_graph__env_ptr_arg)
{
  {
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

    (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCC_16 = ((MR_Word) (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv2_HigherSCC_16);
    {
      transform_hlds__dependency_graph__is_entry_point_3_p_0_4(transform_hlds__dependency_graph__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_4(
  void * transform_hlds__dependency_graph__env_ptr_arg)
{
  {
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

    {
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, ((MR_Box) ((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingPred_15)), (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCC_16);
    }
    if ((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded)
      {
        transform_hlds__dependency_graph__is_entry_point_3_p_0_1(transform_hlds__dependency_graph__env_ptr);
      }
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_2(
  void * transform_hlds__dependency_graph__env_ptr_arg)
{
  {
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

    {
      MR_Box transform_hlds__dependency_graph__conv1_CallingPred_15;

      {
        mercury__digraph__lookup_vertex_3_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingKey_14, &transform_hlds__dependency_graph__conv1_CallingPred_15);
      }
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingPred_15 = ((MR_Word) transform_hlds__dependency_graph__conv1_CallingPred_15);
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeInfo_19_19 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[3];
      {
        mercury__list__member_2_p_1((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeInfo_19_19, &(transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv2_HigherSCC_16, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCCs_4, transform_hlds__dependency_graph__is_entry_point_3_p_0_5, transform_hlds__dependency_graph__env_ptr);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_6(
  void * transform_hlds__dependency_graph__env_ptr_arg)
{
  {
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word transform_hlds__dependency_graph__DepInfo_10;
          MR_Word transform_hlds__dependency_graph__PredProcIdKey_12;
          MR_Word transform_hlds__dependency_graph__CallingKeys_13;

          {
            hlds__hlds_module__module_info_dependency_info_2_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5, &transform_hlds__dependency_graph__DepInfo_10);
          }
          (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
          {
            hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, transform_hlds__dependency_graph__DepInfo_10, &(transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11);
          }
          {
            mercury__digraph__lookup_key_3_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11, ((MR_Box) ((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6)), &transform_hlds__dependency_graph__PredProcIdKey_12);
          }
          {
            mercury__digraph__lookup_to_3_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11, transform_hlds__dependency_graph__PredProcIdKey_12, &transform_hlds__dependency_graph__CallingKeys_13);
          }
          {
            mercury__set__member_2_p_1((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], &(transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv0_CallingKey_14, transform_hlds__dependency_graph__CallingKeys_13, transform_hlds__dependency_graph__is_entry_point_3_p_0_3, transform_hlds__dependency_graph__env_ptr);
          }
        }
        (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0(
  MR_Word transform_hlds__dependency_graph__HigherSCCs_4,
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
  MR_Word transform_hlds__dependency_graph__PredProcId_6)
{
  {
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s transform_hlds__dependency_graph__env;

    (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCCs_4 = transform_hlds__dependency_graph__HigherSCCs_4;
    (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5 = transform_hlds__dependency_graph__ModuleInfo_5;
    (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6 = transform_hlds__dependency_graph__PredProcId_6;
    {
      MR_Word transform_hlds__dependency_graph__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6, (MR_Integer) 0)));
      MR_Word transform_hlds__dependency_graph__PredInfo_9;
      MR_Integer transform_hlds__dependency_graph___ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6, (MR_Integer) 1)));

      {
        hlds__hlds_module__module_info_pred_info_3_p_0((transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5, transform_hlds__dependency_graph__PredId_7, &transform_hlds__dependency_graph__PredInfo_9);
      }
      {
        (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__dependency_graph__PredInfo_9);
      }
    }
    if (!((transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded))
      {
        {
          transform_hlds__dependency_graph__is_entry_point_3_p_0_6(&transform_hlds__dependency_graph__env);
        }
      }
    return (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__write_graph_children_6_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word transform_hlds__dependency_graph__ChildKey_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__Child_19;
            MR_Box transform_hlds__dependency_graph__conv0_Child_19;
            void MR_CALL (* transform_hlds__dependency_graph__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box transform_hlds__dependency_graph__conv2_STATE_VARIABLE_IO_22_22;

            {
              mercury__digraph__lookup_vertex_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__ChildKey_13, &transform_hlds__dependency_graph__conv0_Child_19);
            }
            transform_hlds__dependency_graph__Child_19 = ((MR_Word) transform_hlds__dependency_graph__conv0_Child_19);
            transform_hlds__dependency_graph__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__4_4, (MR_Integer) 1)));
            {
              transform_hlds__dependency_graph__func_1(((MR_Box) transform_hlds__dependency_graph__HeadVar__4_4), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__dependency_graph__Child_19)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__dependency_graph__conv2_STATE_VARIABLE_IO_22_22);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Children_14;

              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__write_dep_graph_link_5_p_0(
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
  MR_Word transform_hlds__dependency_graph__Parent_7,
  MR_Word transform_hlds__dependency_graph__Child_8)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__PPredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 0)));
    MR_Integer transform_hlds__dependency_graph__PProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 1)));
    MR_Word transform_hlds__dependency_graph__CPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 0)));
    MR_Integer transform_hlds__dependency_graph__CProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 1)));
    MR_Word transform_hlds__dependency_graph__PPredInfo_14;
    MR_Word transform_hlds__dependency_graph__PProcInfo_15;
    MR_Word transform_hlds__dependency_graph__CPredInfo_16;
    MR_Word transform_hlds__dependency_graph__CProcInfo_17;
    MR_String transform_hlds__dependency_graph__PName_18;
    MR_Word transform_hlds__dependency_graph__PDet_19;
    MR_Word transform_hlds__dependency_graph__PModes_20;
    MR_String transform_hlds__dependency_graph__CName_21;
    MR_Word transform_hlds__dependency_graph__CDet_22;
    MR_Word transform_hlds__dependency_graph__CModes_23;
    MR_Word transform_hlds__dependency_graph__ModeVarSet_24;
    MR_Word transform_hlds__dependency_graph__V_28_28;
    MR_Word transform_hlds__dependency_graph__V_33_33;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__PPredId_10, transform_hlds__dependency_graph__PProcId_11, &transform_hlds__dependency_graph__PPredInfo_14, &transform_hlds__dependency_graph__PProcInfo_15);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__CPredId_12, transform_hlds__dependency_graph__CProcId_13, &transform_hlds__dependency_graph__CPredInfo_16, &transform_hlds__dependency_graph__CProcInfo_17);
    }
    {
      transform_hlds__dependency_graph__PName_18 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dependency_graph__PPredInfo_14);
    }
    {
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__dependency_graph__PProcInfo_15, &transform_hlds__dependency_graph__PDet_19);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__dependency_graph__PProcInfo_15, &transform_hlds__dependency_graph__PModes_20);
    }
    {
      transform_hlds__dependency_graph__CName_21 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dependency_graph__CPredInfo_16);
    }
    {
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__dependency_graph__CProcInfo_17, &transform_hlds__dependency_graph__CDet_22);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__dependency_graph__CProcInfo_17, &transform_hlds__dependency_graph__CModes_23);
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &transform_hlds__dependency_graph__ModeVarSet_24);
    }
    {
      transform_hlds__dependency_graph__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_28_28, 0) = ((MR_Box) (transform_hlds__dependency_graph__PName_18));
    }
    {
      parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, transform_hlds__dependency_graph__ModeVarSet_24, transform_hlds__dependency_graph__V_28_28, transform_hlds__dependency_graph__PModes_20, transform_hlds__dependency_graph__PDet_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
    {
      transform_hlds__dependency_graph__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_33_33, 0) = ((MR_Box) (transform_hlds__dependency_graph__CName_21));
    }
    {
      parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, transform_hlds__dependency_graph__ModeVarSet_24, transform_hlds__dependency_graph__V_33_33, transform_hlds__dependency_graph__CModes_23, transform_hlds__dependency_graph__CDet_22);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__write_prof_dep_graph_link_5_p_0(
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
  MR_Word transform_hlds__dependency_graph__Parent_7,
  MR_Word transform_hlds__dependency_graph__Child_8)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__PPredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 0)));
    MR_Integer transform_hlds__dependency_graph__PProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 1)));
    MR_Word transform_hlds__dependency_graph__CPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 0)));
    MR_Integer transform_hlds__dependency_graph__CProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 1)));
    MR_Word transform_hlds__dependency_graph__ProcLabel_28;
    MR_Word transform_hlds__dependency_graph__ProcLabel_36;

    {
      transform_hlds__dependency_graph__ProcLabel_28 = backend_libs__proc_label__make_proc_label_3_f_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__PPredId_10, transform_hlds__dependency_graph__PProcId_11);
    }
    {
      backend_libs__name_mangle__output_proc_label_3_p_0(transform_hlds__dependency_graph__ProcLabel_28);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      transform_hlds__dependency_graph__ProcLabel_36 = backend_libs__proc_label__make_proc_label_3_f_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__CPredId_12, transform_hlds__dependency_graph__CProcId_13);
    }
    {
      backend_libs__name_mangle__output_proc_label_3_p_0(transform_hlds__dependency_graph__ProcLabel_36);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__write_scc_4_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word transform_hlds__dependency_graph__PredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__PredProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__PredProcId_10, (MR_Integer) 0)));
            MR_Integer transform_hlds__dependency_graph__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__PredProcId_10, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__PredInfo_15;
            MR_Word transform_hlds__dependency_graph__ProcInfo_16;
            MR_String transform_hlds__dependency_graph__Name_17;
            MR_Word transform_hlds__dependency_graph__Det_18;
            MR_Word transform_hlds__dependency_graph__Modes_19;
            MR_Word transform_hlds__dependency_graph__ModeVarSet_20;
            MR_Word transform_hlds__dependency_graph__V_26_26;

            {
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__PredId_13, transform_hlds__dependency_graph__ProcId_14, &transform_hlds__dependency_graph__PredInfo_15, &transform_hlds__dependency_graph__ProcInfo_16);
            }
            {
              transform_hlds__dependency_graph__Name_17 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dependency_graph__PredInfo_15);
            }
            {
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__dependency_graph__ProcInfo_16, &transform_hlds__dependency_graph__Det_18);
            }
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__dependency_graph__ProcInfo_16, &transform_hlds__dependency_graph__Modes_19);
            }
            {
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &transform_hlds__dependency_graph__ModeVarSet_20);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% ");
            }
            {
              transform_hlds__dependency_graph__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_26_26, 0) = ((MR_Box) (transform_hlds__dependency_graph__Name_17));
            }
            {
              parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, transform_hlds__dependency_graph__ModeVarSet_20, transform_hlds__dependency_graph__V_26_26, transform_hlds__dependency_graph__Modes_19, transform_hlds__dependency_graph__Det_18);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__PredProcIds_11;

              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__write_dependency_ordering_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
            MR_Word transform_hlds__dependency_graph__SCC_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__SCCs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__3_3, (MR_Integer) 1)));
            MR_Integer transform_hlds__dependency_graph__V_26_26;

            {
              mercury__io__write_string_3_p_0((MR_String) "% SCC ");
            }
            {
              mercury__io__write_int_3_p_0(transform_hlds__dependency_graph__HeadVar__2_2);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              transform_hlds__dependency_graph__write_scc_4_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__SCC_15);
            }
            transform_hlds__dependency_graph__V_26_26 = (transform_hlds__dependency_graph__HeadVar__2_2 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__V_26_26;
              MR_Word transform_hlds__dependency_graph__HeadVar__3__tmp_copy_3 = transform_hlds__dependency_graph__SCCs_16;

              transform_hlds__dependency_graph__HeadVar__3_3 = transform_hlds__dependency_graph__HeadVar__3__tmp_copy_3;
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40,
  MR_Word transform_hlds__dependency_graph__Caller_5,
  MR_Word transform_hlds__dependency_graph__ConsId_6,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
        break;
      case (MR_Integer) 1:
        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
        break;
      case (MR_Integer) 2:
        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 1:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 2:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 3:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__dependency_graph__ShroudedPredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 1)));
              MR_Word transform_hlds__dependency_graph__PredProcId_10;
              MR_Word transform_hlds__dependency_graph__Callee_11;
              MR_Word transform_hlds__dependency_graph__TypeInfo_42_42;
              MR_Box transform_hlds__dependency_graph__V_38_38;
              MR_Box MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box);

              {
                transform_hlds__dependency_graph__PredProcId_10 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__dependency_graph__ShroudedPredProcId_8);
              }
              transform_hlds__dependency_graph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 0)), (MR_Integer) 7)));
              {
                transform_hlds__dependency_graph__V_38_38 = transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40), ((MR_Box) (transform_hlds__dependency_graph__PredProcId_10)));
              }
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_42_42);
              }
              {
                transform_hlds__dependency_graph__succeeded = mercury__digraph__search_key_3_p_0(transform_hlds__dependency_graph__TypeInfo_42_42, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36, transform_hlds__dependency_graph__V_38_38, &transform_hlds__dependency_graph__Callee_11);
              }
              if (transform_hlds__dependency_graph__succeeded)
                {
                  MR_Word transform_hlds__dependency_graph__TypeInfo_44_44;

                  {
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_44_44);
                  }
                  {
                    mercury__digraph__add_edge_4_p_0(transform_hlds__dependency_graph__TypeInfo_44_44, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Callee_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37);
                  }
                }
              else
                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            }
            break;
          case (MR_Integer) 5:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 6:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 7:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 8:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 9:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 10:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 11:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 12:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 13:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
          case (MR_Integer) 14:
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
    MR_Word transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37;

    {
      transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), &transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37);
    }
    *transform_hlds__dependency_graph__wrapper_arg_3 = ((MR_Box) (transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37));
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3;
        else
          {
            MR_Word transform_hlds__dependency_graph__TypeInfo_29_29;
            MR_Word transform_hlds__dependency_graph__TypeInfo_31_31;
            MR_Word transform_hlds__dependency_graph__Case_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 2)));
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18;
            MR_Word transform_hlds__dependency_graph__V_19_19;
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
            MR_Box transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20;

            {
              transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__MainConsId_13, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18);
            }
            {
              transform_hlds__dependency_graph__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 0) = ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 1) = ((MR_Box) (transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1));
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 3) = ((MR_Box) (transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23));
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 4) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1));
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_29_29);
            }
            {
              transform_hlds__dependency_graph__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1));
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeInfo_31_31, 1) = ((MR_Box) (transform_hlds__dependency_graph__TypeInfo_29_29));
            }
            {
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, transform_hlds__dependency_graph__TypeInfo_31_31, transform_hlds__dependency_graph__V_19_19, transform_hlds__dependency_graph__OtherConsIds_14, ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18)), &transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20);
            }
            transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20 = ((MR_Word) transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20);
            {
              transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Goal_15, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__Cases_11;
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3;
        else
          {
            MR_Word transform_hlds__dependency_graph__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15;

            {
              transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Goal_10, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__Goals_11;
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15;

              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105,
  MR_Word transform_hlds__dependency_graph__Caller_5,
  MR_Word transform_hlds__dependency_graph__Goal_6,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;
        MR_Word transform_hlds__dependency_graph__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Goal_6, (MR_Integer) 0)));
        MR_Word transform_hlds__dependency_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Goal_6, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__dependency_graph__SubGoal_19 = (MR_Word) MR_body(((MR_Word) transform_hlds__dependency_graph__GoalExpr_8), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_19;

                transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__dependency_graph__Unify_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
              MR_Word transform_hlds__dependency_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)));
              MR_Word transform_hlds__dependency_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
              MR_Word transform_hlds__dependency_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
              MR_Word transform_hlds__dependency_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) transform_hlds__dependency_graph__Unify_38)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__dependency_graph__ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 1)));
                    MR_Word transform_hlds__dependency_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)));
                    MR_Word transform_hlds__dependency_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 2)));
                    MR_Word transform_hlds__dependency_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 3)));
                    MR_Word transform_hlds__dependency_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 4)));
                    MR_Word transform_hlds__dependency_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 5)));
                    MR_Word transform_hlds__dependency_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 6)));

                    {
                      transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__ConsId_45, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__dependency_graph__ConsId_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 1)));
                    MR_Word transform_hlds__dependency_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)));
                    MR_Word transform_hlds__dependency_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 2)));
                    MR_Word transform_hlds__dependency_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 3)));
                    MR_Word transform_hlds__dependency_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 4)));
                    MR_Word transform_hlds__dependency_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 5)));

                    {
                      transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__ConsId_97, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
                      break;
                    case (MR_Integer) 1:
                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__dependency_graph__PredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)));
              MR_Integer transform_hlds__dependency_graph__ProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
              MR_Word transform_hlds__dependency_graph__Builtin_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
              MR_Word transform_hlds__dependency_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
              MR_Word transform_hlds__dependency_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));
              MR_Word transform_hlds__dependency_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 5)));

              switch (transform_hlds__dependency_graph__Builtin_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__dependency_graph__Callee_34;
                    MR_Word transform_hlds__dependency_graph__TypeInfo_107_107;
                    MR_Box transform_hlds__dependency_graph__V_86_86;
                    MR_Word transform_hlds__dependency_graph__V_87_87;

                    {
                      transform_hlds__dependency_graph__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_87_87, 0) = ((MR_Box) (transform_hlds__dependency_graph__PredId_28));
                      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_87_87, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_29));
                    }
                    {
                      transform_hlds__dependency_graph__V_86_86 = transform_hlds__dependency_graph__dependency_node_1_f_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__V_87_87);
                    }
                    {
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_107_107);
                    }
                    {
                      transform_hlds__dependency_graph__succeeded = mercury__digraph__search_key_3_p_0(transform_hlds__dependency_graph__TypeInfo_107_107, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__V_86_86, &transform_hlds__dependency_graph__Callee_34);
                    }
                    if (transform_hlds__dependency_graph__succeeded)
                      {
                        MR_Word transform_hlds__dependency_graph__TypeInfo_109_109;

                        {
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_109_109);
                        }
                        {
                          mercury__digraph__add_edge_4_p_0(transform_hlds__dependency_graph__TypeInfo_109_109, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Callee_34, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                        }
                      }
                    else
                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
                break;
              case (MR_Integer) 1:
                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__dependency_graph__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
                  MR_Word transform_hlds__dependency_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

                  {
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Goals_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word transform_hlds__dependency_graph__Goals_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

                  {
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Goals_110, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word transform_hlds__dependency_graph__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
                  MR_Word transform_hlds__dependency_graph___Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
                  MR_Word transform_hlds__dependency_graph___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));

                  {
                    transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Cases_14, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word transform_hlds__dependency_graph__Reason_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
                  MR_Word transform_hlds__dependency_graph__SubGoal_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
                  MR_Word transform_hlds__dependency_graph__FGT_22;
                  MR_Word transform_hlds__dependency_graph__V_21_21;

                  transform_hlds__dependency_graph__succeeded = ((((MR_tag((MR_Word) transform_hlds__dependency_graph__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (transform_hlds__dependency_graph__succeeded)
                    {
                      transform_hlds__dependency_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 1)));
                      transform_hlds__dependency_graph__FGT_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 2)));
                      switch (transform_hlds__dependency_graph__FGT_22) {
                        default:
                          transform_hlds__dependency_graph__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          transform_hlds__dependency_graph__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          transform_hlds__dependency_graph__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (transform_hlds__dependency_graph__succeeded)
                    *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_96;

                        transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word transform_hlds__dependency_graph__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
                  MR_Word transform_hlds__dependency_graph__Then_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
                  MR_Word transform_hlds__dependency_graph__Else_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));
                  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_91_91;
                  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_92_92;
                  MR_Word transform_hlds__dependency_graph___Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

                  {
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Cond_16, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_91_91);
                  }
                  {
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Then_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_91_91, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_92_92);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__Else_18;
                    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_92_92;

                    transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77;
                    transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word transform_hlds__dependency_graph__ShortHand_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) transform_hlds__dependency_graph__ShortHand_66)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word transform_hlds__dependency_graph__LHS_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
                        MR_Word transform_hlds__dependency_graph__RHS_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));
                        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_79_79;

                        {
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__LHS_75, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_79_79);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__RHS_76;
                          MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_79_79;

                          transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77;
                          transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word transform_hlds__dependency_graph__MainGoal_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 4)));
                        MR_Word transform_hlds__dependency_graph__OrElseGoals_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 5)));
                        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_82_82;
                        MR_Word transform_hlds__dependency_graph___GoalType_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
                        MR_Word transform_hlds__dependency_graph___Outer_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));
                        MR_Word transform_hlds__dependency_graph___Inner_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 2)));
                        MR_Word transform_hlds__dependency_graph___OrElseInners_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 6)));
                        MR_Word transform_hlds__dependency_graph___Vars_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 3)));

                        {
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__MainGoal_70, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_82_82);
                        }
                        {
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__OrElseGoals_71, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_82_82, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word transform_hlds__dependency_graph__SubGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 2)));
                        MR_Word transform_hlds__dependency_graph__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
                        MR_Word transform_hlds__dependency_graph__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_100;

                          transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
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

static MR_Box MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0_1(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
    MR_Word transform_hlds__dependency_graph__conv1_HeadVar__2_2;

    {
      transform_hlds__dependency_graph__conv1_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv1_HeadVar__2_2));
    return transform_hlds__dependency_graph__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
        else
          {
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_29_29;
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__PredTable_16;
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27;
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
            transform_hlds__dependency_graph__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_29_29, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
            transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__IncludeImported_3 == (MR_Integer) 1);
            if (transform_hlds__dependency_graph__succeeded)
              {
                transform_hlds__dependency_graph__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__dependency_graph__PredInfo_17);
              }
            if (transform_hlds__dependency_graph__succeeded)
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
            else
              {
                MR_Word transform_hlds__dependency_graph__ClausesInfo_18;
                MR_Word transform_hlds__dependency_graph__ClausesRep_19;
                MR_Word transform_hlds__dependency_graph__Clauses_21;
                MR_Word transform_hlds__dependency_graph__Goals_22;
                MR_Word transform_hlds__dependency_graph__Caller_23;
                MR_Word transform_hlds__dependency_graph___ItemNumbers_20;

                {
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__dependency_graph__PredInfo_17, &transform_hlds__dependency_graph__ClausesInfo_18);
                }
                {
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__dependency_graph__ClausesInfo_18, &transform_hlds__dependency_graph__ClausesRep_19, &transform_hlds__dependency_graph___ItemNumbers_20);
                }
                {
                  hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(transform_hlds__dependency_graph__ClausesRep_19, &transform_hlds__dependency_graph__Clauses_21);
                }
                {
                  transform_hlds__dependency_graph__Goals_22 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dependency_graph_scalar_common_4[0], transform_hlds__dependency_graph__Clauses_21);
                }
                {
                  mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_29_29, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__Caller_23);
                }
                {
                  transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[1], transform_hlds__dependency_graph__Caller_23, transform_hlds__dependency_graph__Goals_22, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27;

              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_proc_arcs_6_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__IncludeImported_4,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5;
        else
          {
            MR_Integer transform_hlds__dependency_graph__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__PredTable0_19;
            MR_Word transform_hlds__dependency_graph__PredInfo0_20;
            MR_Word transform_hlds__dependency_graph__ProcTable0_21;
            MR_Word transform_hlds__dependency_graph__ProcInfo0_22;
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32;
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo0_20;
            MR_Box transform_hlds__dependency_graph__conv1_ProcInfo0_22;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__3_3, &transform_hlds__dependency_graph__PredTable0_19);
            }
            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable0_19, ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), &transform_hlds__dependency_graph__conv0_PredInfo0_20);
            }
            transform_hlds__dependency_graph__PredInfo0_20 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo0_20);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dependency_graph__PredInfo0_20, &transform_hlds__dependency_graph__ProcTable0_21);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__dependency_graph__ProcTable0_21, transform_hlds__dependency_graph__ProcId_13, &transform_hlds__dependency_graph__conv1_ProcInfo0_22);
            }
            transform_hlds__dependency_graph__ProcInfo0_22 = ((MR_Word) transform_hlds__dependency_graph__conv1_ProcInfo0_22);
            switch (transform_hlds__dependency_graph__IncludeImported_4) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__dependency_graph__Goal_23;
                  MR_Word transform_hlds__dependency_graph__Caller_24;
                  MR_Word transform_hlds__dependency_graph__V_31_31;

                  {
                    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__dependency_graph__ProcInfo0_22, &transform_hlds__dependency_graph__Goal_23);
                  }
                  {
                    transform_hlds__dependency_graph__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_31_31, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
                    MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_31_31, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_13));
                  }
                  {
                    mercury__digraph__lookup_key_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, ((MR_Box) (transform_hlds__dependency_graph__V_31_31)), &transform_hlds__dependency_graph__Caller_24);
                  }
                  {
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0], transform_hlds__dependency_graph__Caller_24, transform_hlds__dependency_graph__Goal_23, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__dependency_graph__PredStatus_25;
                  MR_Word transform_hlds__dependency_graph__Imported_26;

                  {
                    hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__dependency_graph__PredInfo0_20, &transform_hlds__dependency_graph__PredStatus_25);
                  }
                  {
                    transform_hlds__dependency_graph__Imported_26 = hlds__status__pred_status_is_imported_1_f_0(transform_hlds__dependency_graph__PredStatus_25);
                  }
                  switch (transform_hlds__dependency_graph__Imported_26) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word transform_hlds__dependency_graph__V_29_29;
                        MR_Word transform_hlds__dependency_graph__Goal_34;
                        MR_Word transform_hlds__dependency_graph__Caller_35;

                        {
                          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__dependency_graph__ProcInfo0_22, &transform_hlds__dependency_graph__Goal_34);
                        }
                        {
                          transform_hlds__dependency_graph__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_29_29, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
                          MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_29_29, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_13));
                        }
                        {
                          mercury__digraph__lookup_key_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, ((MR_Box) (transform_hlds__dependency_graph__V_29_29)), &transform_hlds__dependency_graph__Caller_35);
                        }
                        {
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0], transform_hlds__dependency_graph__Caller_35, transform_hlds__dependency_graph__Goal_34, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5;
                      break;
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__ProcIds_14;
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32;

              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_5;
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__Imported_3,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
        else
          {
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__PredTable_16;
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
            MR_Word transform_hlds__dependency_graph__ProcIds_18;
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
            switch (transform_hlds__dependency_graph__Imported_3) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
                break;
              case (MR_Integer) 0:
                {
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
                break;
            }
            {
              transform_hlds__dependency_graph__add_proc_arcs_6_p_0(transform_hlds__dependency_graph__ProcIds_18, transform_hlds__dependency_graph__PredId_11, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__Imported_3, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_pred_nodes_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__dependency_graph__HeadVar__5_5 = transform_hlds__dependency_graph__HeadVar__4_4;
        else
          {
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_21_21;
            MR_Word transform_hlds__dependency_graph__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__PredIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__PredTable_14;
            MR_Word transform_hlds__dependency_graph__PredInfo_15;
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19;
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_15;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_14);
            }
            transform_hlds__dependency_graph__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_21_21, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_14, ((MR_Box) (transform_hlds__dependency_graph__PredId_9)), &transform_hlds__dependency_graph__conv0_PredInfo_15);
            }
            transform_hlds__dependency_graph__PredInfo_15 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_15);
            transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__IncludeImported_3 == (MR_Integer) 1);
            if (transform_hlds__dependency_graph__succeeded)
              {
                transform_hlds__dependency_graph__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__dependency_graph__PredInfo_15);
              }
            if (transform_hlds__dependency_graph__succeeded)
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19 = transform_hlds__dependency_graph__HeadVar__4_4;
            else
              {
                MR_Word transform_hlds__dependency_graph__V_16_16;

                {
                  mercury__digraph__add_vertex_4_p_0(transform_hlds__dependency_graph__TypeCtorInfo_21_21, ((MR_Box) (transform_hlds__dependency_graph__PredId_9)), &transform_hlds__dependency_graph__V_16_16, transform_hlds__dependency_graph__HeadVar__4_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_10;
              MR_Word transform_hlds__dependency_graph__HeadVar__4__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19;

              transform_hlds__dependency_graph__HeadVar__4_4 = transform_hlds__dependency_graph__HeadVar__4__tmp_copy_4;
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__Imported_3,
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
        else
          {
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__PredTable_16;
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
            MR_Word transform_hlds__dependency_graph__ProcIds_18;
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
            switch (transform_hlds__dependency_graph__Imported_3) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
                break;
              case (MR_Integer) 0:
                {
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
                break;
            }
            {
              transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(transform_hlds__dependency_graph__ProcIds_18, transform_hlds__dependency_graph__PredId_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__dependency_graph__sets_to_lists_3_p_0(
  MR_Word transform_hlds__dependency_graph__TypeInfo_for_T_11,
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word * transform_hlds__dependency_graph__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__dependency_graph__HeadVar__3_3 = transform_hlds__dependency_graph__HeadVar__2_2;
        else
          {
            MR_Word transform_hlds__dependency_graph__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__Y_9;
            MR_Word transform_hlds__dependency_graph__V_10_10;

            {
              mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeInfo_for_T_11, transform_hlds__dependency_graph__X_5, &transform_hlds__dependency_graph__Y_9);
            }
            {
              transform_hlds__dependency_graph__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__V_10_10, 0) = ((MR_Box) (transform_hlds__dependency_graph__Y_9));
              MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__V_10_10, 1) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Xs_6;
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__V_10_10;

              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
transform_hlds__dependency_graph__write_graph_nodes_6_p_0(
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__dependency_graph__succeeded;

        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_27_27;
            MR_Word transform_hlds__dependency_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__dependency_graph__Nodes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__dependency_graph__NodeKey_19;
            MR_Word transform_hlds__dependency_graph__ChildrenSet_20;
            MR_Word transform_hlds__dependency_graph__Children_21;
            void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__3_3, (MR_Integer) 1)));
            MR_Box transform_hlds__dependency_graph__conv1_STATE_VARIABLE_IO_24_24;

            {
              transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__HeadVar__3_3), ((MR_Box) (transform_hlds__dependency_graph__Node_13)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__dependency_graph__conv1_STATE_VARIABLE_IO_24_24);
            }
            transform_hlds__dependency_graph__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            {
              mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, ((MR_Box) (transform_hlds__dependency_graph__Node_13)), &transform_hlds__dependency_graph__NodeKey_19);
            }
            {
              mercury__digraph__lookup_from_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__NodeKey_19, &transform_hlds__dependency_graph__ChildrenSet_20);
            }
            {
              mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], transform_hlds__dependency_graph__ChildrenSet_20, &transform_hlds__dependency_graph__Children_21);
            }
            {
              transform_hlds__dependency_graph__write_graph_children_6_p_0(transform_hlds__dependency_graph__Children_21, transform_hlds__dependency_graph__Node_13, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__4_4);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Nodes_14;

              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
transform_hlds__dependency_graph__write_graph_5_p_0(
  MR_Word transform_hlds__dependency_graph__DepInfo_6,
  MR_Word transform_hlds__dependency_graph__WriteNode_7,
  MR_Word transform_hlds__dependency_graph__WriteLink_8)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word transform_hlds__dependency_graph__DepGraph_10;
    MR_Word transform_hlds__dependency_graph__DomSet_11;
    MR_Word transform_hlds__dependency_graph__DomList_12;

    {
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_16, transform_hlds__dependency_graph__DepInfo_6, &transform_hlds__dependency_graph__DepGraph_10);
    }
    {
      mercury__digraph__vertices_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_16, transform_hlds__dependency_graph__DepGraph_10, &transform_hlds__dependency_graph__DomSet_11);
    }
    {
      mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_16, transform_hlds__dependency_graph__DomSet_11, &transform_hlds__dependency_graph__DomList_12);
    }
    {
      transform_hlds__dependency_graph__write_graph_nodes_6_p_0(transform_hlds__dependency_graph__DomList_12, transform_hlds__dependency_graph__DepGraph_10, transform_hlds__dependency_graph__WriteNode_7, transform_hlds__dependency_graph__WriteLink_8);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dependency_graph__get_scc_entry_points_4_p_0_1(
  MR_Box transform_hlds__dependency_graph__closure_arg,
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;

    {
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph__is_entry_point_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
    return transform_hlds__dependency_graph__succeeded;
  }
}

void MR_CALL 
transform_hlds__dependency_graph__get_scc_entry_points_4_p_0(
  MR_Word transform_hlds__dependency_graph__SCC_5,
  MR_Word transform_hlds__dependency_graph__HigherSCCs_6,
  MR_Word transform_hlds__dependency_graph__ModuleInfo_7,
  MR_Word * transform_hlds__dependency_graph__EntryPoints_8)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__V_9_9;

    {
      transform_hlds__dependency_graph__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 0) = ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 1) = ((MR_Box) (transform_hlds__dependency_graph__get_scc_entry_points_4_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 3) = ((MR_Box) (transform_hlds__dependency_graph__HigherSCCs_6));
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 4) = ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_7));
    }
    {
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__V_9_9, transform_hlds__dependency_graph__SCC_5, transform_hlds__dependency_graph__EntryPoints_8);
    }
  }
}

void MR_CALL 
transform_hlds__dependency_graph__write_prof_dependency_graph_4_p_0(
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__TypeCtorInfo_16_34;
    MR_Word transform_hlds__dependency_graph__DepInfo_7;
    MR_Word transform_hlds__dependency_graph__DepGraph_30;
    MR_Word transform_hlds__dependency_graph__DomSet_31;
    MR_Word transform_hlds__dependency_graph__DomList_32;

    {
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
    }
    {
      hlds__hlds_module__module_info_dependency_info_2_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, &transform_hlds__dependency_graph__DepInfo_7);
    }
    transform_hlds__dependency_graph__TypeCtorInfo_16_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_34, transform_hlds__dependency_graph__DepInfo_7, &transform_hlds__dependency_graph__DepGraph_30);
    }
    {
      mercury__digraph__vertices_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_34, transform_hlds__dependency_graph__DepGraph_30, &transform_hlds__dependency_graph__DomSet_31);
    }
    {
      mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_34, transform_hlds__dependency_graph__DomSet_31, &transform_hlds__dependency_graph__DomList_32);
    }
    {
      transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, transform_hlds__dependency_graph__DomList_32, transform_hlds__dependency_graph__DepGraph_30);
    }
  }
}

void MR_CALL 
transform_hlds__dependency_graph__write_dependency_graph_4_p_0(
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__TypeCtorInfo_16_38;
    MR_Word transform_hlds__dependency_graph__DepInfo_7;
    MR_Word transform_hlds__dependency_graph__DepGraph_34;
    MR_Word transform_hlds__dependency_graph__DomSet_35;
    MR_Word transform_hlds__dependency_graph__DomList_36;

    {
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
    }
    {
      hlds__hlds_module__module_info_dependency_info_2_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, &transform_hlds__dependency_graph__DepInfo_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% Dependency graph\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n\n% Dependency ordering\n");
    }
    transform_hlds__dependency_graph__TypeCtorInfo_16_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_38, transform_hlds__dependency_graph__DepInfo_7, &transform_hlds__dependency_graph__DepGraph_34);
    }
    {
      mercury__digraph__vertices_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_38, transform_hlds__dependency_graph__DepGraph_34, &transform_hlds__dependency_graph__DomSet_35);
    }
    {
      mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_38, transform_hlds__dependency_graph__DomSet_35, &transform_hlds__dependency_graph__DomList_36);
    }
    {
      transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, transform_hlds__dependency_graph__DomList_36, transform_hlds__dependency_graph__DepGraph_34);
    }
  }
}

void MR_CALL 
transform_hlds__dependency_graph__build_proc_dependency_graph_4_p_0(
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
  MR_Word transform_hlds__dependency_graph__PredIds_6,
  MR_Word transform_hlds__dependency_graph__Imported_7,
  MR_Word * transform_hlds__dependency_graph__DepInfo_8)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
    MR_Word transform_hlds__dependency_graph__TypeInfo_21_25;
    MR_Word transform_hlds__dependency_graph__TypeInfo_22_26;
    MR_Word transform_hlds__dependency_graph__TypeInfo_23_27;
    MR_Word transform_hlds__dependency_graph__TypeInfo_24_28;
    MR_Word transform_hlds__dependency_graph__TypeInfo_25_29;
    MR_Word transform_hlds__dependency_graph__TypeInfo_26_30;
    MR_Word transform_hlds__dependency_graph__DepGraph0_15;
    MR_Word transform_hlds__dependency_graph__DepGraph1_16;
    MR_Word transform_hlds__dependency_graph__DepGraph_17;
    MR_Word transform_hlds__dependency_graph__DepOrd0_18;
    MR_Word transform_hlds__dependency_graph__DepOrd_19;
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20;
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21;
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_16;
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_17;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_25);
    }
    {
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_25, &transform_hlds__dependency_graph__DepGraph0_15);
    }
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_15)), &transform_hlds__dependency_graph__conv1_DepGraph1_16);
    }
    transform_hlds__dependency_graph__DepGraph1_16 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_16);
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 6)));
    {
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_16)), &transform_hlds__dependency_graph__conv3_DepGraph_17);
    }
    transform_hlds__dependency_graph__DepGraph_17 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_17);
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_26);
    }
    {
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_26, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_27);
    }
    {
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_27, transform_hlds__dependency_graph__DepGraph_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_28);
    }
    {
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_28, transform_hlds__dependency_graph__DepGraph_17, &transform_hlds__dependency_graph__DepOrd0_18);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_29);
    }
    {
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_29, transform_hlds__dependency_graph__DepOrd0_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_19);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_30);
    }
    {
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_30, transform_hlds__dependency_graph__DepOrd_19, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21, transform_hlds__dependency_graph__DepInfo_8);
    }
  }
}

void MR_CALL 
transform_hlds__dependency_graph__build_pred_dependency_graph_4_p_0(
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
  MR_Word transform_hlds__dependency_graph__PredIds_6,
  MR_Word transform_hlds__dependency_graph__Imported_7,
  MR_Word * transform_hlds__dependency_graph__DepInfo_8)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[1];
    MR_Word transform_hlds__dependency_graph__TypeInfo_21_25;
    MR_Word transform_hlds__dependency_graph__TypeInfo_22_26;
    MR_Word transform_hlds__dependency_graph__TypeInfo_23_27;
    MR_Word transform_hlds__dependency_graph__TypeInfo_24_28;
    MR_Word transform_hlds__dependency_graph__TypeInfo_25_29;
    MR_Word transform_hlds__dependency_graph__TypeInfo_26_30;
    MR_Word transform_hlds__dependency_graph__DepGraph0_15;
    MR_Word transform_hlds__dependency_graph__DepGraph1_16;
    MR_Word transform_hlds__dependency_graph__DepGraph_17;
    MR_Word transform_hlds__dependency_graph__DepOrd0_18;
    MR_Word transform_hlds__dependency_graph__DepOrd_19;
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20;
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21;
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_16;
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_17;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_25);
    }
    {
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_25, &transform_hlds__dependency_graph__DepGraph0_15);
    }
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_15)), &transform_hlds__dependency_graph__conv1_DepGraph1_16);
    }
    transform_hlds__dependency_graph__DepGraph1_16 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_16);
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 6)));
    {
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_16)), &transform_hlds__dependency_graph__conv3_DepGraph_17);
    }
    transform_hlds__dependency_graph__DepGraph_17 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_17);
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_26);
    }
    {
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_26, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_27);
    }
    {
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_27, transform_hlds__dependency_graph__DepGraph_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_28);
    }
    {
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_28, transform_hlds__dependency_graph__DepGraph_17, &transform_hlds__dependency_graph__DepOrd0_18);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_29);
    }
    {
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_29, transform_hlds__dependency_graph__DepOrd0_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_19);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_30);
    }
    {
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_30, transform_hlds__dependency_graph__DepOrd_19, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21, transform_hlds__dependency_graph__DepInfo_8);
    }
  }
}

void MR_CALL 
transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_8,
  MR_Word * transform_hlds__dependency_graph__DepInfo_5)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11;
    MR_Word transform_hlds__dependency_graph__TypeInfo_21_27;
    MR_Word transform_hlds__dependency_graph__TypeInfo_22_28;
    MR_Word transform_hlds__dependency_graph__TypeInfo_23_29;
    MR_Word transform_hlds__dependency_graph__TypeInfo_24_30;
    MR_Word transform_hlds__dependency_graph__TypeInfo_25_31;
    MR_Word transform_hlds__dependency_graph__TypeInfo_26_32;
    MR_Word transform_hlds__dependency_graph__PredIds_6;
    MR_Word transform_hlds__dependency_graph__DepGraph0_17;
    MR_Word transform_hlds__dependency_graph__DepGraph1_18;
    MR_Word transform_hlds__dependency_graph__DepGraph_19;
    MR_Word transform_hlds__dependency_graph__DepOrd0_20;
    MR_Word transform_hlds__dependency_graph__DepOrd_21;
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_22;
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_23;
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_18;
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_19;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__dependency_graph__PredIds_6);
    }
    transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_27);
    }
    {
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_27, &transform_hlds__dependency_graph__DepGraph0_17);
    }
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_17)), &transform_hlds__dependency_graph__conv1_DepGraph1_18);
    }
    transform_hlds__dependency_graph__DepGraph1_18 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_18);
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 0)), (MR_Integer) 6)));
    {
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_18)), &transform_hlds__dependency_graph__conv3_DepGraph_19);
    }
    transform_hlds__dependency_graph__DepGraph_19 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_19);
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_28);
    }
    {
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_28, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_22);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_29);
    }
    {
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_29, transform_hlds__dependency_graph__DepGraph_19, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_22, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_23);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_30);
    }
    {
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_30, transform_hlds__dependency_graph__DepGraph_19, &transform_hlds__dependency_graph__DepOrd0_20);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_31);
    }
    {
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_31, transform_hlds__dependency_graph__DepOrd0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_21);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_32);
    }
    {
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_32, transform_hlds__dependency_graph__DepOrd_21, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_23, transform_hlds__dependency_graph__DepInfo_5);
    }
    {
      hlds__hlds_module__module_info_set_dependency_info_3_p_0(*transform_hlds__dependency_graph__DepInfo_5, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_8);
    }
  }
}

void MR_CALL 
transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool transform_hlds__dependency_graph__succeeded;
    MR_Word transform_hlds__dependency_graph__MaybeDepInfo_4;

    {
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__dependency_graph__MaybeDepInfo_4);
    }
    if ((transform_hlds__dependency_graph__MaybeDepInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12;
        MR_Word transform_hlds__dependency_graph__TypeInfo_21_28;
        MR_Word transform_hlds__dependency_graph__TypeInfo_22_29;
        MR_Word transform_hlds__dependency_graph__TypeInfo_23_30;
        MR_Word transform_hlds__dependency_graph__TypeInfo_24_31;
        MR_Word transform_hlds__dependency_graph__TypeInfo_25_32;
        MR_Word transform_hlds__dependency_graph__TypeInfo_26_33;
        MR_Word transform_hlds__dependency_graph__PredIds_6;
        MR_Word transform_hlds__dependency_graph__DepInfo_7;
        MR_Word transform_hlds__dependency_graph__DepGraph0_18;
        MR_Word transform_hlds__dependency_graph__DepGraph1_19;
        MR_Word transform_hlds__dependency_graph__DepGraph_20;
        MR_Word transform_hlds__dependency_graph__DepOrd0_21;
        MR_Word transform_hlds__dependency_graph__DepOrd_22;
        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23;
        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24;
        void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_19;
        void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box transform_hlds__dependency_graph__conv3_DepGraph_20;

        {
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__dependency_graph__PredIds_6);
        }
        transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_28);
        }
        {
          mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_28, &transform_hlds__dependency_graph__DepGraph0_18);
        }
        transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_18)), &transform_hlds__dependency_graph__conv1_DepGraph1_19);
        }
        transform_hlds__dependency_graph__DepGraph1_19 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_19);
        transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 0)), (MR_Integer) 6)));
        {
          transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_19)), &transform_hlds__dependency_graph__conv3_DepGraph_20);
        }
        transform_hlds__dependency_graph__DepGraph_20 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_20);
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_29);
        }
        {
          hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_29, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_30);
        }
        {
          hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_30, transform_hlds__dependency_graph__DepGraph_20, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_31);
        }
        {
          mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_31, transform_hlds__dependency_graph__DepGraph_20, &transform_hlds__dependency_graph__DepOrd0_21);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_32);
        }
        {
          transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_32, transform_hlds__dependency_graph__DepOrd0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_22);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_33);
        }
        {
          hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_33, transform_hlds__dependency_graph__DepOrd_22, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24, &transform_hlds__dependency_graph__DepInfo_7);
        }
        {
          hlds__hlds_module__module_info_set_dependency_info_3_p_0(transform_hlds__dependency_graph__DepInfo_7, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
        }
      }
    else
      *transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8;
  }
}

void mercury__transform_hlds__dependency_graph__init(void)
{
}

void mercury__transform_hlds__dependency_graph__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_include_imported_0);
	MR_register_type_ctor_info(&transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_scc_id_0);
}

void mercury__transform_hlds__dependency_graph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.dependency_graph. */
