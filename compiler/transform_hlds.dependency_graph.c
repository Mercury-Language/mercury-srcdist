/*
** Automatically generated from `dependency_graph.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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



#line 643 "dependency_graph.m"
struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s {
#line 643 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCCs_4;
#line 643 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5;
#line 643 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6;
#line 649 "dependency_graph.m"
  MR_bool transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded;
#line 654 "dependency_graph.m"
  jmp_buf transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__commit_0;
#line 654 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17;
#line 654 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeInfo_19_19;
#line 654 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11;
#line 654 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingKey_14;
#line 654 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingPred_15;
#line 654 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCC_16;
#line 659 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv0_CallingKey_14;
#line 661 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv2_HigherSCC_16;
#line 643 "dependency_graph.m"
};


#line 178 "transform_hlds.dependency_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 181 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 184 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_key_1__pseudo_1;

#line 187 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_1__pseudo_1;

#line 190 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0;

#line 193 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1;

#line 196 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_value_ordered_include_imported_0[2];

#line 199 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_name_ordered_include_imported_0[2];

#line 202 "transform_hlds.dependency_graph.c"
static const MR_Integer transform_hlds__dependency_graph__transform_hlds__dependency_graph__functor_number_map_include_imported_0[2];

#line 205 "transform_hlds.dependency_graph.c"
static const MR_ConstString transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1[1];

#line 208 "transform_hlds.dependency_graph.c"
static const MR_TypeClassMethod transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_method_ids_dependency_node_1[3];

#line 211 "transform_hlds.dependency_graph.c"
static const MR_TypeClassId transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1;

#line 214 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____include_imported_0_0_10001(
#line 217 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 219 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2);

#line 222 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____include_imported_0_0_10001(
#line 225 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 227 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 229 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3);

#line 232 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0_10001(
#line 235 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 237 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2);

#line 240 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0_10001(
#line 243 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 245 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 247 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3);

#line 250 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 253 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 255 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 257 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 259 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 261 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 263 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 266 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 269 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 271 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 273 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 275 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 277 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 279 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 282 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 285 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 287 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);

#line 290 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 293 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 295 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 297 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 299 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 301 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 303 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 306 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 309 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 311 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 313 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 315 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 317 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 319 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 322 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 325 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 327 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);

#line 616 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_p_0(
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_25_25,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3);

#line 616 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_p_0(
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_25_25,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3);

#line 106 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_29_29,
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2);

#line 106 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_29_29,
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2);

#line 240 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(
#line 240 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 240 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 240 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 240 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 209 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 209 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

#line 208 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
#line 208 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 208 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 208 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 208 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 208 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 207 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 207 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 207 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 207 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 207 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 207 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 215 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 215 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

#line 214 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
#line 214 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 214 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 214 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 214 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 214 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 213 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 213 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 213 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 213 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 213 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 213 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 681 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0(
#line 681 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
#line 681 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2,
#line 681 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__3_3);

#line 681 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0(
#line 681 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__1_1,
#line 681 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2);

#line 203 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__dependency_node_1_f_0(
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3,
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

#line 199 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_5_p_0(
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 199 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 195 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_nodes_5_p_0(
#line 195 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
#line 195 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 195 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 195 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 195 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 195 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 654 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_1(
#line 654 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 659 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_3(
#line 659 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 661 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_5(
#line 661 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 654 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_4(
#line 654 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 654 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_2(
#line 654 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 654 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_6(
#line 654 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 643 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0(
#line 643 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HigherSCCs_4,
#line 643 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
#line 643 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__PredProcId_6);

#line 616 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_graph_children_6_p_0(
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4);

#line 575 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_dep_graph_link_5_p_0(
#line 575 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 575 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 575 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8);

#line 564 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_prof_dep_graph_link_5_p_0(
#line 564 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 564 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 564 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8);

#line 474 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(
#line 474 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40,
#line 474 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 474 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ConsId_6,
#line 474 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36,
#line 474 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37);

#line 468 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1(
#line 468 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 468 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 468 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 468 "dependency_graph.m"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_3);

#line 460 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(
#line 460 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23,
#line 460 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 460 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 460 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 460 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4);

#line 449 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(
#line 449 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17,
#line 449 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 449 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 449 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 449 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4);

#line 357 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(
#line 357 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105,
#line 357 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 357 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Goal_6,
#line 357 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77,
#line 357 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);

#line 341 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0_1(
#line 341 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 341 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);

#line 325 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0(
#line 325 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 325 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 325 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 325 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 325 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 292 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_proc_arcs_6_p_0(
#line 292 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 292 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 292 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 292 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_4,
#line 292 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5,
#line 292 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6);

#line 273 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(
#line 273 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 273 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 273 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 273 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 273 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 250 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_nodes_5_p_0(
#line 250 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 250 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 250 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 250 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 250 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 221 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(
#line 221 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 221 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 221 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 221 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 221 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 183 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__sets_to_lists_3_p_0(
#line 183 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeInfo_for_T_11,
#line 183 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 183 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 183 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__3_3);

#line 641 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph__get_scc_entry_points_4_p_0_1(
#line 641 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 641 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_2[1][6];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_3[1][5];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_4[1][3];

static /* final */ const MR_Integer transform_hlds__dependency_graph_scalar_common_5[1][2];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_6[1][8];




static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_1[4][2] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 860 "transform_hlds.dependency_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 868 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 876 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 884 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 892 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0 = {
  (MR_String) "include_imported",
  (MR_Integer) 0
};

#line 898 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1 = {
  (MR_String) "do_not_include_imported",
  (MR_Integer) 1
};

#line 904 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_value_ordered_include_imported_0[2] = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0,
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1
};

#line 910 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_name_ordered_include_imported_0[2] = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1,
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0
};

#line 916 "transform_hlds.dependency_graph.c"
static const MR_Integer transform_hlds__dependency_graph__transform_hlds__dependency_graph__functor_number_map_include_imported_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 922 "transform_hlds.dependency_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_include_imported_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 939 "transform_hlds.dependency_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_scc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 956 "transform_hlds.dependency_graph.c"
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

#line 968 "transform_hlds.dependency_graph.c"
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

#line 980 "transform_hlds.dependency_graph.c"
static const MR_ConstString transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1[1] = {
  (MR_String) "T"
};

#line 985 "transform_hlds.dependency_graph.c"
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

#line 1004 "transform_hlds.dependency_graph.c"
static const MR_TypeClassId transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1 = {
  (MR_String) "transform_hlds.dependency_graph",
  (MR_String) "dependency_node",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1,
  transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_method_ids_dependency_node_1
};

#line 1015 "transform_hlds.dependency_graph.c"
const MR_TypeClassDeclStruct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_decl_dependency_node_1 = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1023 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____include_imported_0_0_10001(
#line 1026 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1028 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2)
#line 1030 "transform_hlds.dependency_graph.c"
{
#line 1032 "transform_hlds.dependency_graph.c"
  {
#line 1034 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 1037 "transform_hlds.dependency_graph.c"
    {
#line 1039 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph____Unify____include_imported_0_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2));
    }
#line 1042 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__succeeded;
#line 1044 "transform_hlds.dependency_graph.c"
  }
#line 1046 "transform_hlds.dependency_graph.c"
}

#line 1049 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____include_imported_0_0_10001(
#line 1052 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 1054 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1056 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3)
#line 1058 "transform_hlds.dependency_graph.c"
{
#line 1060 "transform_hlds.dependency_graph.c"
  {
#line 1062 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__1_1;

#line 1065 "transform_hlds.dependency_graph.c"
    {
#line 1067 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph____Compare____include_imported_0_0(&transform_hlds__dependency_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3));
    }
#line 1070 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__1_1));
#line 1072 "transform_hlds.dependency_graph.c"
  }
#line 1074 "transform_hlds.dependency_graph.c"
}

#line 1077 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0_10001(
#line 1080 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1082 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2)
#line 1084 "transform_hlds.dependency_graph.c"
{
#line 1086 "transform_hlds.dependency_graph.c"
  {
#line 1088 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 1091 "transform_hlds.dependency_graph.c"
    {
#line 1093 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph____Unify____scc_id_0_0(((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_2));
    }
#line 1096 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__succeeded;
#line 1098 "transform_hlds.dependency_graph.c"
  }
#line 1100 "transform_hlds.dependency_graph.c"
}

#line 1103 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0_10001(
#line 1106 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 1108 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1110 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3)
#line 1112 "transform_hlds.dependency_graph.c"
{
#line 1114 "transform_hlds.dependency_graph.c"
  {
#line 1116 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__1_1;

#line 1119 "transform_hlds.dependency_graph.c"
    {
#line 1121 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph____Compare____scc_id_0_0(&transform_hlds__dependency_graph__conv0_HeadVar__1_1, ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_3));
    }
#line 1124 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__1_1));
#line 1126 "transform_hlds.dependency_graph.c"
  }
#line 1128 "transform_hlds.dependency_graph.c"
}

#line 1131 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 1134 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1136 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1138 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1140 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1142 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1144 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1146 "transform_hlds.dependency_graph.c"
{
#line 1148 "transform_hlds.dependency_graph.c"
  {
#line 1150 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1152 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1155 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1157 "transform_hlds.dependency_graph.c"
    {
#line 1159 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1162 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1164 "transform_hlds.dependency_graph.c"
  }
#line 1166 "transform_hlds.dependency_graph.c"
}

#line 1169 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 1172 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1174 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1176 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1178 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1180 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1182 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1184 "transform_hlds.dependency_graph.c"
{
#line 1186 "transform_hlds.dependency_graph.c"
  {
#line 1188 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1190 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1193 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1195 "transform_hlds.dependency_graph.c"
    {
#line 1197 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1200 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1202 "transform_hlds.dependency_graph.c"
  }
#line 1204 "transform_hlds.dependency_graph.c"
}

#line 1207 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 1210 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1212 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
#line 1214 "transform_hlds.dependency_graph.c"
{
#line 1216 "transform_hlds.dependency_graph.c"
  {
#line 1218 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
#line 1220 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1222 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__2_2;

#line 1225 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1227 "transform_hlds.dependency_graph.c"
    {
#line 1229 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 1232 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__2_2));
#line 1234 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__wrapper_arg_2;
#line 1236 "transform_hlds.dependency_graph.c"
  }
#line 1238 "transform_hlds.dependency_graph.c"
}

#line 1241 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 1244 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1246 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1248 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1250 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1252 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1254 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1256 "transform_hlds.dependency_graph.c"
{
#line 1258 "transform_hlds.dependency_graph.c"
  {
#line 1260 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1262 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1265 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1267 "transform_hlds.dependency_graph.c"
    {
#line 1269 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1272 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1274 "transform_hlds.dependency_graph.c"
  }
#line 1276 "transform_hlds.dependency_graph.c"
}

#line 1279 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 1282 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1284 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1286 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1288 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1290 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1292 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1294 "transform_hlds.dependency_graph.c"
{
#line 1296 "transform_hlds.dependency_graph.c"
  {
#line 1298 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1300 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1303 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1305 "transform_hlds.dependency_graph.c"
    {
#line 1307 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1310 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1312 "transform_hlds.dependency_graph.c"
  }
#line 1314 "transform_hlds.dependency_graph.c"
}

#line 1317 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 1320 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1322 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
#line 1324 "transform_hlds.dependency_graph.c"
{
#line 1326 "transform_hlds.dependency_graph.c"
  {
#line 1328 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
#line 1330 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1332 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__2_2;

#line 1335 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1337 "transform_hlds.dependency_graph.c"
    {
#line 1339 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 1342 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__2_2));
#line 1344 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__wrapper_arg_2;
#line 1346 "transform_hlds.dependency_graph.c"
  }
#line 1348 "transform_hlds.dependency_graph.c"
}

#line 616 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_p_0(
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_25_25,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
#line 616 "dependency_graph.m"
{
#line 621 "dependency_graph.m"
  while (MR_TRUE)
#line 621 "dependency_graph.m"
    {
#line 621 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 621 "dependency_graph.m"
      {
#line 621 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 621 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "dependency_graph.m"
          {
#line 621 "dependency_graph.m"
          }
#line 621 "dependency_graph.m"
        else
#line 622 "dependency_graph.m"
          {
#line 622 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildKey_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 622 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 622 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Child_19;
#line 623 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_Child_19;

#line 623 "dependency_graph.m"
            {
#line 623 "dependency_graph.m"
              mercury__digraph__lookup_vertex_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__ChildKey_13, &transform_hlds__dependency_graph__conv0_Child_19);
            }
#line 623 "dependency_graph.m"
            transform_hlds__dependency_graph__Child_19 = ((MR_Word) transform_hlds__dependency_graph__conv0_Child_19);
#line 624 "dependency_graph.m"
            {
#line 624 "dependency_graph.m"
              transform_hlds__dependency_graph__write_dep_graph_link_5_p_0(transform_hlds__dependency_graph__V_25_25, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__Child_19);
            }
#line 625 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 625 "dependency_graph.m"
            {
#line 625 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Children_14;

#line 625 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 625 "dependency_graph.m"
            }
#line 625 "dependency_graph.m"
            continue;
#line 622 "dependency_graph.m"
          }
#line 621 "dependency_graph.m"
      }
#line 621 "dependency_graph.m"
      break;
#line 621 "dependency_graph.m"
    }
#line 616 "dependency_graph.m"
}

#line 616 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_p_0(
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_25_25,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
#line 616 "dependency_graph.m"
{
#line 621 "dependency_graph.m"
  while (MR_TRUE)
#line 621 "dependency_graph.m"
    {
#line 621 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 621 "dependency_graph.m"
      {
#line 621 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 621 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "dependency_graph.m"
          {
#line 621 "dependency_graph.m"
          }
#line 621 "dependency_graph.m"
        else
#line 622 "dependency_graph.m"
          {
#line 622 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildKey_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 622 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 622 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Child_19;
#line 623 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_Child_19;

#line 623 "dependency_graph.m"
            {
#line 623 "dependency_graph.m"
              mercury__digraph__lookup_vertex_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__ChildKey_13, &transform_hlds__dependency_graph__conv0_Child_19);
            }
#line 623 "dependency_graph.m"
            transform_hlds__dependency_graph__Child_19 = ((MR_Word) transform_hlds__dependency_graph__conv0_Child_19);
#line 624 "dependency_graph.m"
            {
#line 624 "dependency_graph.m"
              transform_hlds__dependency_graph__write_prof_dep_graph_link_5_p_0(transform_hlds__dependency_graph__V_25_25, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__Child_19);
            }
#line 625 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 625 "dependency_graph.m"
            {
#line 625 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Children_14;

#line 625 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 625 "dependency_graph.m"
            }
#line 625 "dependency_graph.m"
            continue;
#line 622 "dependency_graph.m"
          }
#line 621 "dependency_graph.m"
      }
#line 621 "dependency_graph.m"
      break;
#line 621 "dependency_graph.m"
    }
#line 616 "dependency_graph.m"
}

#line 106 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_29_29,
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
#line 106 "dependency_graph.m"
{
#line 607 "dependency_graph.m"
  while (MR_TRUE)
#line 607 "dependency_graph.m"
    {
#line 607 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 607 "dependency_graph.m"
      {
#line 607 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 607 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "dependency_graph.m"
          {
#line 607 "dependency_graph.m"
          }
#line 607 "dependency_graph.m"
        else
#line 608 "dependency_graph.m"
          {
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Nodes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__NodeKey_19;
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildrenSet_20;
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_21;

#line 610 "dependency_graph.m"
            {
#line 610 "dependency_graph.m"
              mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, ((MR_Box) (transform_hlds__dependency_graph__Node_13)), &transform_hlds__dependency_graph__NodeKey_19);
            }
#line 611 "dependency_graph.m"
            {
#line 611 "dependency_graph.m"
              mercury__digraph__lookup_from_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__NodeKey_19, &transform_hlds__dependency_graph__ChildrenSet_20);
            }
#line 612 "dependency_graph.m"
            {
#line 612 "dependency_graph.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], transform_hlds__dependency_graph__ChildrenSet_20, &transform_hlds__dependency_graph__Children_21);
            }
#line 613 "dependency_graph.m"
            {
#line 613 "dependency_graph.m"
              transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_p_0(transform_hlds__dependency_graph__V_29_29, transform_hlds__dependency_graph__Children_21, transform_hlds__dependency_graph__Node_13, transform_hlds__dependency_graph__HeadVar__2_2);
            }
#line 614 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 614 "dependency_graph.m"
            {
#line 614 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Nodes_14;

#line 614 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 614 "dependency_graph.m"
            }
#line 614 "dependency_graph.m"
            continue;
#line 608 "dependency_graph.m"
          }
#line 607 "dependency_graph.m"
      }
#line 607 "dependency_graph.m"
      break;
#line 607 "dependency_graph.m"
    }
#line 106 "dependency_graph.m"
}

#line 106 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_29_29,
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
#line 106 "dependency_graph.m"
{
#line 607 "dependency_graph.m"
  while (MR_TRUE)
#line 607 "dependency_graph.m"
    {
#line 607 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 607 "dependency_graph.m"
      {
#line 607 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 607 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "dependency_graph.m"
          {
#line 607 "dependency_graph.m"
          }
#line 607 "dependency_graph.m"
        else
#line 608 "dependency_graph.m"
          {
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Nodes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__NodeKey_19;
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildrenSet_20;
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_21;

#line 610 "dependency_graph.m"
            {
#line 610 "dependency_graph.m"
              mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, ((MR_Box) (transform_hlds__dependency_graph__Node_13)), &transform_hlds__dependency_graph__NodeKey_19);
            }
#line 611 "dependency_graph.m"
            {
#line 611 "dependency_graph.m"
              mercury__digraph__lookup_from_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__NodeKey_19, &transform_hlds__dependency_graph__ChildrenSet_20);
            }
#line 612 "dependency_graph.m"
            {
#line 612 "dependency_graph.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], transform_hlds__dependency_graph__ChildrenSet_20, &transform_hlds__dependency_graph__Children_21);
            }
#line 613 "dependency_graph.m"
            {
#line 613 "dependency_graph.m"
              transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_p_0(transform_hlds__dependency_graph__V_29_29, transform_hlds__dependency_graph__Children_21, transform_hlds__dependency_graph__Node_13, transform_hlds__dependency_graph__HeadVar__2_2);
            }
#line 614 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 614 "dependency_graph.m"
            {
#line 614 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Nodes_14;

#line 614 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 614 "dependency_graph.m"
            }
#line 614 "dependency_graph.m"
            continue;
#line 608 "dependency_graph.m"
          }
#line 607 "dependency_graph.m"
      }
#line 607 "dependency_graph.m"
      break;
#line 607 "dependency_graph.m"
    }
#line 106 "dependency_graph.m"
}

#line 240 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(
#line 240 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 240 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 240 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 240 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 240 "dependency_graph.m"
{
#line 243 "dependency_graph.m"
  while (MR_TRUE)
#line 243 "dependency_graph.m"
    {
#line 243 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 243 "dependency_graph.m"
      {
#line 243 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 243 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 243 "dependency_graph.m"
        else
#line 244 "dependency_graph.m"
          {
#line 244 "dependency_graph.m"
            MR_Integer transform_hlds__dependency_graph__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 244 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 244 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_19_19;
#line 244 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;
#line 245 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_16_16;

#line 245 "dependency_graph.m"
            {
#line 245 "dependency_graph.m"
              transform_hlds__dependency_graph__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 245 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_11));
#line 245 "dependency_graph.m"
            }
#line 245 "dependency_graph.m"
            {
#line 245 "dependency_graph.m"
              mercury__digraph__add_vertex_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__dependency_graph__V_19_19)), &transform_hlds__dependency_graph__V_16_16, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20);
            }
#line 246 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 246 "dependency_graph.m"
            {
#line 246 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__ProcIds_12;
#line 246 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;

#line 246 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 246 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 246 "dependency_graph.m"
            }
#line 246 "dependency_graph.m"
            continue;
#line 244 "dependency_graph.m"
          }
#line 243 "dependency_graph.m"
      }
#line 243 "dependency_graph.m"
      break;
#line 243 "dependency_graph.m"
    }
#line 240 "dependency_graph.m"
}

#line 209 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 209 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
#line 209 "dependency_graph.m"
{
#line 209 "dependency_graph.m"
  {
#line 209 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 209 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__HeadVar__2_2;
#line 209 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__conv0_HeadVar__2_2;

#line 209 "dependency_graph.m"
    {
#line 209 "dependency_graph.m"
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = mercury__std_util__id_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)));
    }
#line 209 "dependency_graph.m"
    transform_hlds__dependency_graph__HeadVar__2_2 = ((MR_Word) transform_hlds__dependency_graph__conv0_HeadVar__2_2);
#line 209 "dependency_graph.m"
    return transform_hlds__dependency_graph__HeadVar__2_2;
#line 209 "dependency_graph.m"
  }
#line 209 "dependency_graph.m"
}

#line 208 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
#line 208 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 208 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 208 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 208 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 208 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 208 "dependency_graph.m"
{
#line 208 "dependency_graph.m"
  {
#line 208 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 208 "dependency_graph.m"
    {
#line 208 "dependency_graph.m"
      transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
    }
#line 208 "dependency_graph.m"
  }
#line 208 "dependency_graph.m"
}

#line 207 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 207 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 207 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 207 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 207 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 207 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 207 "dependency_graph.m"
{
#line 207 "dependency_graph.m"
  {
#line 207 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 207 "dependency_graph.m"
    {
#line 207 "dependency_graph.m"
      transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
    }
#line 207 "dependency_graph.m"
  }
#line 207 "dependency_graph.m"
}

#line 215 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 215 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
#line 215 "dependency_graph.m"
{
#line 352 "dependency_graph.m"
  {
#line 352 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 352 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 352 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));

#line 352 "dependency_graph.m"
    return transform_hlds__dependency_graph__HeadVar__2_2;
#line 352 "dependency_graph.m"
  }
#line 215 "dependency_graph.m"
}

#line 214 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
#line 214 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 214 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 214 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 214 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 214 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 214 "dependency_graph.m"
{
#line 214 "dependency_graph.m"
  {
#line 214 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 214 "dependency_graph.m"
    {
#line 214 "dependency_graph.m"
      transform_hlds__dependency_graph__add_pred_arcs_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
    }
#line 214 "dependency_graph.m"
  }
#line 214 "dependency_graph.m"
}

#line 213 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 213 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 213 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 213 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 213 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 213 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 213 "dependency_graph.m"
{
#line 213 "dependency_graph.m"
  {
#line 213 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 213 "dependency_graph.m"
    {
#line 213 "dependency_graph.m"
      transform_hlds__dependency_graph__add_pred_nodes_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
    }
#line 213 "dependency_graph.m"
  }
#line 213 "dependency_graph.m"
}

#line 681 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0(
#line 681 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
#line 681 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2,
#line 681 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__3_3)
#line 681 "dependency_graph.m"
{
#line 681 "dependency_graph.m"
  {
#line 681 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 681 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar1_4 = transform_hlds__dependency_graph__HeadVar__2_2;
#line 681 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar2_5 = transform_hlds__dependency_graph__HeadVar__3_3;

#line 681 "dependency_graph.m"
    {
#line 681 "dependency_graph.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Cast_HeadVar1_4, transform_hlds__dependency_graph__Cast_HeadVar2_5);
    }
#line 681 "dependency_graph.m"
  }
#line 681 "dependency_graph.m"
}

#line 681 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0(
#line 681 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__1_1,
#line 681 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2)
#line 681 "dependency_graph.m"
{
#line 681 "dependency_graph.m"
  {
#line 681 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 681 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar1_3 = transform_hlds__dependency_graph__HeadVar__1_1;
#line 681 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar2_4 = transform_hlds__dependency_graph__HeadVar__2_2;

#line 681 "dependency_graph.m"
    transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__Cast_HeadVar1_3 == transform_hlds__dependency_graph__Cast_HeadVar2_4);
#line 681 "dependency_graph.m"
    return transform_hlds__dependency_graph__succeeded;
#line 681 "dependency_graph.m"
  }
#line 681 "dependency_graph.m"
}

#line 52 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph____Compare____include_imported_0_0(
#line 52 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
#line 52 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 52 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
#line 52 "dependency_graph.m"
{
#line 52 "dependency_graph.m"
  {
#line 52 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 52 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__dependency_graph__HeadVar__2_2;
#line 52 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__dependency_graph__HeadVar__3_3;

#line 52 "dependency_graph.m"
    {
#line 52 "dependency_graph.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Cast_HeadVar1_4, transform_hlds__dependency_graph__Cast_HeadVar2_5);
    }
#line 52 "dependency_graph.m"
  }
#line 52 "dependency_graph.m"
}

#line 52 "dependency_graph.m"
MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____include_imported_0_0(
#line 52 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_1,
#line 52 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
#line 52 "dependency_graph.m"
{
#line 2042 "transform_hlds.dependency_graph.c"
  {
#line 2044 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__HeadVar__2_1 == transform_hlds__dependency_graph__HeadVar__2_2);

#line 2047 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__succeeded;
#line 2049 "transform_hlds.dependency_graph.c"
  }
#line 52 "dependency_graph.m"
}

#line 203 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__dependency_node_1_f_0(
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3,
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
#line 203 "dependency_graph.m"
{
#line 203 "dependency_graph.m"
  {
#line 203 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 203 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__HeadVar__2_2;
#line 203 "dependency_graph.m"
    MR_Box MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3, (MR_Integer) 0)), (MR_Integer) 7)));

#line 203 "dependency_graph.m"
    {
#line 203 "dependency_graph.m"
      transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)));
    }
#line 203 "dependency_graph.m"
    return transform_hlds__dependency_graph__HeadVar__2_2;
#line 203 "dependency_graph.m"
  }
#line 203 "dependency_graph.m"
}

#line 199 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_5_p_0(
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 199 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 199 "dependency_graph.m"
{
#line 199 "dependency_graph.m"
  {
#line 199 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 199 "dependency_graph.m"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6, (MR_Integer) 0)), (MR_Integer) 6)));
#line 199 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__conv1_HeadVar__5_5;

#line 199 "dependency_graph.m"
    {
#line 199 "dependency_graph.m"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__3_3)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__4_4)), &transform_hlds__dependency_graph__conv1_HeadVar__5_5);
    }
#line 199 "dependency_graph.m"
    *transform_hlds__dependency_graph__HeadVar__5_5 = ((MR_Word) transform_hlds__dependency_graph__conv1_HeadVar__5_5);
#line 199 "dependency_graph.m"
  }
#line 199 "dependency_graph.m"
}

#line 195 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_nodes_5_p_0(
#line 195 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
#line 195 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 195 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 195 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 195 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 195 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 195 "dependency_graph.m"
{
#line 195 "dependency_graph.m"
  {
#line 195 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 195 "dependency_graph.m"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 195 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__conv1_HeadVar__5_5;

#line 195 "dependency_graph.m"
    {
#line 195 "dependency_graph.m"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__3_3)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__4_4)), &transform_hlds__dependency_graph__conv1_HeadVar__5_5);
    }
#line 195 "dependency_graph.m"
    *transform_hlds__dependency_graph__HeadVar__5_5 = ((MR_Word) transform_hlds__dependency_graph__conv1_HeadVar__5_5);
#line 195 "dependency_graph.m"
  }
#line 195 "dependency_graph.m"
}

#line 654 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_1(
#line 654 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 654 "dependency_graph.m"
{
#line 654 "dependency_graph.m"
  {
#line 654 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 654 "dependency_graph.m"
    MR_builtin_longjmp((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__commit_0, 1);
#line 654 "dependency_graph.m"
  }
#line 654 "dependency_graph.m"
}

#line 659 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_3(
#line 659 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 659 "dependency_graph.m"
{
#line 659 "dependency_graph.m"
  {
#line 659 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 659 "dependency_graph.m"
    (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingKey_14 = ((MR_Word) (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv0_CallingKey_14);
#line 659 "dependency_graph.m"
    {
#line 659 "dependency_graph.m"
      transform_hlds__dependency_graph__is_entry_point_3_p_0_2(transform_hlds__dependency_graph__env_ptr);
    }
#line 659 "dependency_graph.m"
  }
#line 659 "dependency_graph.m"
}

#line 661 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_5(
#line 661 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 661 "dependency_graph.m"
{
#line 661 "dependency_graph.m"
  {
#line 661 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 661 "dependency_graph.m"
    (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCC_16 = ((MR_Word) (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv2_HigherSCC_16);
#line 661 "dependency_graph.m"
    {
#line 661 "dependency_graph.m"
      transform_hlds__dependency_graph__is_entry_point_3_p_0_4(transform_hlds__dependency_graph__env_ptr);
    }
#line 661 "dependency_graph.m"
  }
#line 661 "dependency_graph.m"
}

#line 654 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_4(
#line 654 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 654 "dependency_graph.m"
{
#line 654 "dependency_graph.m"
  {
#line 654 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 662 "dependency_graph.m"
    {
#line 662 "dependency_graph.m"
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, ((MR_Box) ((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingPred_15)), (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCC_16);
    }
#line 662 "dependency_graph.m"
    if ((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded)
#line 662 "dependency_graph.m"
      {
#line 662 "dependency_graph.m"
        transform_hlds__dependency_graph__is_entry_point_3_p_0_1(transform_hlds__dependency_graph__env_ptr);
      }
#line 654 "dependency_graph.m"
  }
#line 654 "dependency_graph.m"
}

#line 654 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_2(
#line 654 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 654 "dependency_graph.m"
{
#line 654 "dependency_graph.m"
  {
#line 654 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 654 "dependency_graph.m"
    {
#line 660 "dependency_graph.m"
      MR_Box transform_hlds__dependency_graph__conv1_CallingPred_15;

#line 660 "dependency_graph.m"
      {
#line 660 "dependency_graph.m"
        mercury__digraph__lookup_vertex_3_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingKey_14, &transform_hlds__dependency_graph__conv1_CallingPred_15);
      }
#line 660 "dependency_graph.m"
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingPred_15 = ((MR_Word) transform_hlds__dependency_graph__conv1_CallingPred_15);
#line 2280 "transform_hlds.dependency_graph.c"
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeInfo_19_19 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[3];
#line 661 "dependency_graph.m"
      {
#line 661 "dependency_graph.m"
        mercury__list__member_2_p_1((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeInfo_19_19, &(transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv2_HigherSCC_16, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCCs_4, transform_hlds__dependency_graph__is_entry_point_3_p_0_5, transform_hlds__dependency_graph__env_ptr);
      }
#line 654 "dependency_graph.m"
    }
#line 654 "dependency_graph.m"
  }
#line 654 "dependency_graph.m"
}

#line 654 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_6(
#line 654 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 654 "dependency_graph.m"
{
#line 654 "dependency_graph.m"
  {
#line 654 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 654 "dependency_graph.m"
    if (MR_builtin_setjmp((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__commit_0) == 0)
#line 654 "dependency_graph.m"
      {
#line 654 "dependency_graph.m"
        {
#line 654 "dependency_graph.m"
          MR_Word transform_hlds__dependency_graph__DepInfo_10;
#line 654 "dependency_graph.m"
          MR_Word transform_hlds__dependency_graph__PredProcIdKey_12;
#line 654 "dependency_graph.m"
          MR_Word transform_hlds__dependency_graph__CallingKeys_13;

#line 654 "dependency_graph.m"
          {
#line 654 "dependency_graph.m"
            hlds__hlds_module__module_info_dependency_info_2_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5, &transform_hlds__dependency_graph__DepInfo_10);
          }
#line 2324 "transform_hlds.dependency_graph.c"
          (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 655 "dependency_graph.m"
          {
#line 655 "dependency_graph.m"
            hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, transform_hlds__dependency_graph__DepInfo_10, &(transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11);
          }
#line 657 "dependency_graph.m"
          {
#line 657 "dependency_graph.m"
            mercury__digraph__lookup_key_3_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11, ((MR_Box) ((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6)), &transform_hlds__dependency_graph__PredProcIdKey_12);
          }
#line 658 "dependency_graph.m"
          {
#line 658 "dependency_graph.m"
            mercury__digraph__lookup_to_3_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11, transform_hlds__dependency_graph__PredProcIdKey_12, &transform_hlds__dependency_graph__CallingKeys_13);
          }
#line 659 "dependency_graph.m"
          {
#line 659 "dependency_graph.m"
            mercury__set__member_2_p_1((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], &(transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv0_CallingKey_14, transform_hlds__dependency_graph__CallingKeys_13, transform_hlds__dependency_graph__is_entry_point_3_p_0_3, transform_hlds__dependency_graph__env_ptr);
          }
#line 654 "dependency_graph.m"
        }
#line 654 "dependency_graph.m"
        (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = MR_FALSE;
#line 654 "dependency_graph.m"
      }
#line 654 "dependency_graph.m"
    else
#line 654 "dependency_graph.m"
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = MR_TRUE;
#line 654 "dependency_graph.m"
  }
#line 654 "dependency_graph.m"
}

#line 643 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0(
#line 643 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HigherSCCs_4,
#line 643 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
#line 643 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__PredProcId_6)
#line 643 "dependency_graph.m"
{
#line 643 "dependency_graph.m"
  {
#line 643 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s transform_hlds__dependency_graph__env;

#line 643 "dependency_graph.m"
    (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCCs_4 = transform_hlds__dependency_graph__HigherSCCs_4;
#line 643 "dependency_graph.m"
    (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5 = transform_hlds__dependency_graph__ModuleInfo_5;
#line 643 "dependency_graph.m"
    (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6 = transform_hlds__dependency_graph__PredProcId_6;
#line 649 "dependency_graph.m"
    {
#line 649 "dependency_graph.m"
      MR_Word transform_hlds__dependency_graph__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6, (MR_Integer) 0)));
#line 649 "dependency_graph.m"
      MR_Word transform_hlds__dependency_graph__PredInfo_9;
#line 649 "dependency_graph.m"
      MR_Integer transform_hlds__dependency_graph___ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6, (MR_Integer) 1)));

#line 650 "dependency_graph.m"
      {
#line 650 "dependency_graph.m"
        hlds__hlds_module__module_info_pred_info_3_p_0((transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5, transform_hlds__dependency_graph__PredId_7, &transform_hlds__dependency_graph__PredInfo_9);
      }
#line 651 "dependency_graph.m"
      {
#line 651 "dependency_graph.m"
        (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__dependency_graph__PredInfo_9);
      }
#line 649 "dependency_graph.m"
    }
#line 649 "dependency_graph.m"
    if (!((transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded))
#line 654 "dependency_graph.m"
      {
#line 654 "dependency_graph.m"
        {
#line 654 "dependency_graph.m"
          transform_hlds__dependency_graph__is_entry_point_3_p_0_6(&transform_hlds__dependency_graph__env);
        }
#line 654 "dependency_graph.m"
      }
#line 649 "dependency_graph.m"
    return (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded;
#line 643 "dependency_graph.m"
  }
#line 643 "dependency_graph.m"
}

#line 616 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_graph_children_6_p_0(
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 616 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4)
#line 616 "dependency_graph.m"
{
#line 621 "dependency_graph.m"
  while (MR_TRUE)
#line 621 "dependency_graph.m"
    {
#line 621 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 621 "dependency_graph.m"
      {
#line 621 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 621 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "dependency_graph.m"
          {
#line 621 "dependency_graph.m"
          }
#line 621 "dependency_graph.m"
        else
#line 622 "dependency_graph.m"
          {
#line 622 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildKey_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 622 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 622 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Child_19;
#line 623 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_Child_19;
#line 624 "dependency_graph.m"
            void MR_CALL (* transform_hlds__dependency_graph__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 624 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv2_STATE_VARIABLE_IO_22_22;

#line 623 "dependency_graph.m"
            {
#line 623 "dependency_graph.m"
              mercury__digraph__lookup_vertex_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__ChildKey_13, &transform_hlds__dependency_graph__conv0_Child_19);
            }
#line 623 "dependency_graph.m"
            transform_hlds__dependency_graph__Child_19 = ((MR_Word) transform_hlds__dependency_graph__conv0_Child_19);
#line 624 "dependency_graph.m"
            transform_hlds__dependency_graph__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__4_4, (MR_Integer) 1)));
#line 624 "dependency_graph.m"
            {
#line 624 "dependency_graph.m"
              transform_hlds__dependency_graph__func_1(((MR_Box) transform_hlds__dependency_graph__HeadVar__4_4), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__dependency_graph__Child_19)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__dependency_graph__conv2_STATE_VARIABLE_IO_22_22);
            }
#line 625 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 625 "dependency_graph.m"
            {
#line 625 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Children_14;

#line 625 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 625 "dependency_graph.m"
            }
#line 625 "dependency_graph.m"
            continue;
#line 622 "dependency_graph.m"
          }
#line 621 "dependency_graph.m"
      }
#line 621 "dependency_graph.m"
      break;
#line 621 "dependency_graph.m"
    }
#line 616 "dependency_graph.m"
}

#line 575 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_dep_graph_link_5_p_0(
#line 575 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 575 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 575 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8)
#line 575 "dependency_graph.m"
{
#line 578 "dependency_graph.m"
  {
#line 578 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PPredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 0)));
#line 578 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__PProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 1)));
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 0)));
#line 578 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__CProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 1)));
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PPredInfo_14;
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PProcInfo_15;
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CPredInfo_16;
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CProcInfo_17;
#line 578 "dependency_graph.m"
    MR_String transform_hlds__dependency_graph__PName_18;
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PDet_19;
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PModes_20;
#line 578 "dependency_graph.m"
    MR_String transform_hlds__dependency_graph__CName_21;
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CDet_22;
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CModes_23;
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__ModeVarSet_24;
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__V_28_28;
#line 578 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__V_33_33;

#line 581 "dependency_graph.m"
    {
#line 581 "dependency_graph.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__PPredId_10, transform_hlds__dependency_graph__PProcId_11, &transform_hlds__dependency_graph__PPredInfo_14, &transform_hlds__dependency_graph__PProcInfo_15);
    }
#line 583 "dependency_graph.m"
    {
#line 583 "dependency_graph.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__CPredId_12, transform_hlds__dependency_graph__CProcId_13, &transform_hlds__dependency_graph__CPredInfo_16, &transform_hlds__dependency_graph__CProcInfo_17);
    }
#line 585 "dependency_graph.m"
    {
#line 585 "dependency_graph.m"
      transform_hlds__dependency_graph__PName_18 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dependency_graph__PPredInfo_14);
    }
#line 586 "dependency_graph.m"
    {
#line 586 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__dependency_graph__PProcInfo_15, &transform_hlds__dependency_graph__PDet_19);
    }
#line 587 "dependency_graph.m"
    {
#line 587 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__dependency_graph__PProcInfo_15, &transform_hlds__dependency_graph__PModes_20);
    }
#line 588 "dependency_graph.m"
    {
#line 588 "dependency_graph.m"
      transform_hlds__dependency_graph__CName_21 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dependency_graph__CPredInfo_16);
    }
#line 589 "dependency_graph.m"
    {
#line 589 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__dependency_graph__CProcInfo_17, &transform_hlds__dependency_graph__CDet_22);
    }
#line 590 "dependency_graph.m"
    {
#line 590 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__dependency_graph__CProcInfo_17, &transform_hlds__dependency_graph__CModes_23);
    }
#line 591 "dependency_graph.m"
    {
#line 591 "dependency_graph.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &transform_hlds__dependency_graph__ModeVarSet_24);
    }
#line 593 "dependency_graph.m"
    {
#line 593 "dependency_graph.m"
      transform_hlds__dependency_graph__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 593 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_28_28, 0) = ((MR_Box) (transform_hlds__dependency_graph__PName_18));
#line 593 "dependency_graph.m"
    }
#line 592 "dependency_graph.m"
    {
#line 592 "dependency_graph.m"
      parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, transform_hlds__dependency_graph__ModeVarSet_24, transform_hlds__dependency_graph__V_28_28, transform_hlds__dependency_graph__PModes_20, transform_hlds__dependency_graph__PDet_19);
    }
#line 594 "dependency_graph.m"
    {
#line 594 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 596 "dependency_graph.m"
    {
#line 596 "dependency_graph.m"
      transform_hlds__dependency_graph__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 596 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_33_33, 0) = ((MR_Box) (transform_hlds__dependency_graph__CName_21));
#line 596 "dependency_graph.m"
    }
#line 595 "dependency_graph.m"
    {
#line 595 "dependency_graph.m"
      parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, transform_hlds__dependency_graph__ModeVarSet_24, transform_hlds__dependency_graph__V_33_33, transform_hlds__dependency_graph__CModes_23, transform_hlds__dependency_graph__CDet_22);
    }
#line 597 "dependency_graph.m"
    {
#line 597 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 578 "dependency_graph.m"
  }
#line 575 "dependency_graph.m"
}

#line 564 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_prof_dep_graph_link_5_p_0(
#line 564 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 564 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 564 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8)
#line 564 "dependency_graph.m"
{
#line 567 "dependency_graph.m"
  {
#line 567 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 567 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PPredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 0)));
#line 567 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__PProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 1)));
#line 567 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 0)));
#line 567 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__CProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 1)));
#line 567 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__ProcLabel_28;
#line 567 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__ProcLabel_36;

#line 635 "dependency_graph.m"
    {
#line 635 "dependency_graph.m"
      transform_hlds__dependency_graph__ProcLabel_28 = backend_libs__proc_label__make_proc_label_3_f_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__PPredId_10, transform_hlds__dependency_graph__PProcId_11);
    }
#line 636 "dependency_graph.m"
    {
#line 636 "dependency_graph.m"
      backend_libs__name_mangle__output_proc_label_3_p_0(transform_hlds__dependency_graph__ProcLabel_28);
    }
#line 571 "dependency_graph.m"
    {
#line 571 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 635 "dependency_graph.m"
    {
#line 635 "dependency_graph.m"
      transform_hlds__dependency_graph__ProcLabel_36 = backend_libs__proc_label__make_proc_label_3_f_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__CPredId_12, transform_hlds__dependency_graph__CProcId_13);
    }
#line 636 "dependency_graph.m"
    {
#line 636 "dependency_graph.m"
      backend_libs__name_mangle__output_proc_label_3_p_0(transform_hlds__dependency_graph__ProcLabel_36);
    }
#line 573 "dependency_graph.m"
    {
#line 573 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 567 "dependency_graph.m"
  }
#line 564 "dependency_graph.m"
}

#line 474 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(
#line 474 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40,
#line 474 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 474 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ConsId_6,
#line 474 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36,
#line 474 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37)
#line 474 "dependency_graph.m"
{
#line 480 "dependency_graph.m"
  {
#line 480 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 480 "dependency_graph.m"
#line 480 "dependency_graph.m"
    switch (MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) {
#line 480 "dependency_graph.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 480 "dependency_graph.m"
      case (MR_Integer) 0:
#line 502 "dependency_graph.m"
        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
        break;
#line 480 "dependency_graph.m"
      case (MR_Integer) 1:
#line 501 "dependency_graph.m"
        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
        break;
#line 480 "dependency_graph.m"
      case (MR_Integer) 2:
#line 506 "dependency_graph.m"
        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
        break;
#line 480 "dependency_graph.m"
      case (MR_Integer) 3:
#line 480 "dependency_graph.m"
#line 480 "dependency_graph.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) {
#line 480 "dependency_graph.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 480 "dependency_graph.m"
          case (MR_Integer) 0:
#line 507 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 1:
#line 508 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 2:
#line 492 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 3:
#line 493 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 4:
#line 480 "dependency_graph.m"
            {
#line 480 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__ShroudedPredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 1)));
#line 480 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__PredProcId_10;
#line 482 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__Callee_11;
#line 485 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__TypeInfo_42_42;
#line 485 "dependency_graph.m"
              MR_Box transform_hlds__dependency_graph__V_38_38;
#line 203 "dependency_graph.m"
              MR_Box MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box);

#line 481 "dependency_graph.m"
              {
#line 481 "dependency_graph.m"
                transform_hlds__dependency_graph__PredProcId_10 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__dependency_graph__ShroudedPredProcId_8);
              }
#line 203 "dependency_graph.m"
              transform_hlds__dependency_graph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 0)), (MR_Integer) 7)));
#line 203 "dependency_graph.m"
              {
#line 203 "dependency_graph.m"
                transform_hlds__dependency_graph__V_38_38 = transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40), ((MR_Box) (transform_hlds__dependency_graph__PredProcId_10)));
              }
#line 485 "dependency_graph.m"
              {
#line 485 "dependency_graph.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_42_42);
              }
#line 485 "dependency_graph.m"
              {
#line 485 "dependency_graph.m"
                transform_hlds__dependency_graph__succeeded = mercury__digraph__search_key_3_p_0(transform_hlds__dependency_graph__TypeInfo_42_42, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36, transform_hlds__dependency_graph__V_38_38, &transform_hlds__dependency_graph__Callee_11);
              }
#line 482 "dependency_graph.m"
              if (transform_hlds__dependency_graph__succeeded)
#line 487 "dependency_graph.m"
                {
#line 487 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__TypeInfo_44_44;

#line 487 "dependency_graph.m"
                  {
#line 487 "dependency_graph.m"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_44_44);
                  }
#line 487 "dependency_graph.m"
                  {
#line 487 "dependency_graph.m"
                    mercury__digraph__add_edge_4_p_0(transform_hlds__dependency_graph__TypeInfo_44_44, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Callee_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37);
                  }
#line 487 "dependency_graph.m"
                }
#line 482 "dependency_graph.m"
              else
#line 482 "dependency_graph.m"
                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            }
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 5:
#line 494 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 6:
#line 495 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 7:
#line 496 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 8:
#line 497 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 9:
#line 498 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 10:
#line 499 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 11:
#line 500 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 12:
#line 503 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 13:
#line 504 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
          case (MR_Integer) 14:
#line 505 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 480 "dependency_graph.m"
            break;
#line 480 "dependency_graph.m"
        }
#line 480 "dependency_graph.m"
        break;
#line 480 "dependency_graph.m"
    }
#line 480 "dependency_graph.m"
  }
#line 474 "dependency_graph.m"
}

#line 468 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1(
#line 468 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 468 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 468 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 468 "dependency_graph.m"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_3)
#line 468 "dependency_graph.m"
{
#line 468 "dependency_graph.m"
  {
#line 468 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 468 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37;

#line 468 "dependency_graph.m"
    {
#line 468 "dependency_graph.m"
      transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), &transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37);
    }
#line 468 "dependency_graph.m"
    *transform_hlds__dependency_graph__wrapper_arg_3 = ((MR_Box) (transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37));
#line 468 "dependency_graph.m"
  }
#line 468 "dependency_graph.m"
}

#line 460 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(
#line 460 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23,
#line 460 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 460 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 460 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 460 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4)
#line 460 "dependency_graph.m"
{
#line 464 "dependency_graph.m"
  while (MR_TRUE)
#line 464 "dependency_graph.m"
    {
#line 464 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 464 "dependency_graph.m"
      {
#line 464 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 464 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3;
#line 464 "dependency_graph.m"
        else
#line 465 "dependency_graph.m"
          {
#line 465 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeInfo_29_29;
#line 465 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeInfo_31_31;
#line 465 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Case_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 465 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 465 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 0)));
#line 465 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 1)));
#line 465 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 2)));
#line 465 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18;
#line 465 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_19_19;
#line 465 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;
#line 465 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
#line 468 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20;

#line 467 "dependency_graph.m"
            {
#line 467 "dependency_graph.m"
              transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__MainConsId_13, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18);
            }
#line 468 "dependency_graph.m"
            {
#line 468 "dependency_graph.m"
              transform_hlds__dependency_graph__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 468 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 0) = ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_6[0]));
#line 468 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 1) = ((MR_Box) (transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1));
#line 468 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 468 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 3) = ((MR_Box) (transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23));
#line 468 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 4) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1));
#line 468 "dependency_graph.m"
            }
#line 468 "dependency_graph.m"
            {
#line 468 "dependency_graph.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_29_29);
            }
#line 3034 "transform_hlds.dependency_graph.c"
            {
#line 3036 "transform_hlds.dependency_graph.c"
              transform_hlds__dependency_graph__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3038 "transform_hlds.dependency_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1));
#line 3040 "transform_hlds.dependency_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeInfo_31_31, 1) = ((MR_Box) (transform_hlds__dependency_graph__TypeInfo_29_29));
#line 3042 "transform_hlds.dependency_graph.c"
            }
#line 468 "dependency_graph.m"
            {
#line 468 "dependency_graph.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, transform_hlds__dependency_graph__TypeInfo_31_31, transform_hlds__dependency_graph__V_19_19, transform_hlds__dependency_graph__OtherConsIds_14, ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18)), &transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20);
            }
#line 468 "dependency_graph.m"
            transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20 = ((MR_Word) transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20);
#line 469 "dependency_graph.m"
            {
#line 469 "dependency_graph.m"
              transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Goal_15, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
#line 470 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 470 "dependency_graph.m"
            {
#line 470 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__Cases_11;
#line 470 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

#line 470 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
#line 470 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
#line 470 "dependency_graph.m"
            }
#line 470 "dependency_graph.m"
            continue;
#line 465 "dependency_graph.m"
          }
#line 464 "dependency_graph.m"
      }
#line 464 "dependency_graph.m"
      break;
#line 464 "dependency_graph.m"
    }
#line 460 "dependency_graph.m"
}

#line 449 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(
#line 449 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17,
#line 449 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 449 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 449 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 449 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4)
#line 449 "dependency_graph.m"
{
#line 453 "dependency_graph.m"
  while (MR_TRUE)
#line 453 "dependency_graph.m"
    {
#line 453 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 453 "dependency_graph.m"
      {
#line 453 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 453 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3;
#line 453 "dependency_graph.m"
        else
#line 454 "dependency_graph.m"
          {
#line 454 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 454 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 454 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15;

#line 455 "dependency_graph.m"
            {
#line 455 "dependency_graph.m"
              transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Goal_10, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15);
            }
#line 456 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 456 "dependency_graph.m"
            {
#line 456 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__Goals_11;
#line 456 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15;

#line 456 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
#line 456 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
#line 456 "dependency_graph.m"
            }
#line 456 "dependency_graph.m"
            continue;
#line 454 "dependency_graph.m"
          }
#line 453 "dependency_graph.m"
      }
#line 453 "dependency_graph.m"
      break;
#line 453 "dependency_graph.m"
    }
#line 449 "dependency_graph.m"
}

#line 357 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(
#line 357 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105,
#line 357 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 357 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Goal_6,
#line 357 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77,
#line 357 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78)
#line 357 "dependency_graph.m"
{
#line 361 "dependency_graph.m"
  while (MR_TRUE)
#line 361 "dependency_graph.m"
    {
#line 361 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 361 "dependency_graph.m"
      {
#line 361 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;
#line 361 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Goal_6, (MR_Integer) 0)));
#line 362 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Goal_6, (MR_Integer) 1)));

#line 368 "dependency_graph.m"
#line 368 "dependency_graph.m"
        switch (MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) {
#line 368 "dependency_graph.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 368 "dependency_graph.m"
          case (MR_Integer) 0:
#line 377 "dependency_graph.m"
            {
#line 377 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__SubGoal_19 = (MR_Word) MR_body(((MR_Word) transform_hlds__dependency_graph__GoalExpr_8), (MR_Integer) 0);

#line 378 "dependency_graph.m"
              /* direct tailcall eliminated */
#line 378 "dependency_graph.m"
              {
#line 378 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_19;

#line 378 "dependency_graph.m"
                transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 378 "dependency_graph.m"
              }
#line 378 "dependency_graph.m"
              continue;
#line 377 "dependency_graph.m"
            }
#line 368 "dependency_graph.m"
            break;
#line 368 "dependency_graph.m"
          case (MR_Integer) 1:
#line 414 "dependency_graph.m"
            {
#line 414 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__Unify_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 414 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)));
#line 414 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 414 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 414 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));

#line 417 "dependency_graph.m"
#line 417 "dependency_graph.m"
              switch (MR_tag((MR_Word) transform_hlds__dependency_graph__Unify_38)) {
#line 417 "dependency_graph.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 417 "dependency_graph.m"
                case (MR_Integer) 0:
#line 420 "dependency_graph.m"
                  {
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 1)));
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)));
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 2)));
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 3)));
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 4)));
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 5)));
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 6)));

#line 421 "dependency_graph.m"
                    {
#line 421 "dependency_graph.m"
                      transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__ConsId_45, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                    }
#line 420 "dependency_graph.m"
                  }
#line 417 "dependency_graph.m"
                  break;
#line 417 "dependency_graph.m"
                case (MR_Integer) 1:
#line 423 "dependency_graph.m"
                  {
#line 423 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__ConsId_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 1)));
#line 423 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)));
#line 423 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 2)));
#line 423 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 3)));
#line 423 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 4)));
#line 423 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 5)));

#line 424 "dependency_graph.m"
                    {
#line 424 "dependency_graph.m"
                      transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__ConsId_97, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                    }
#line 423 "dependency_graph.m"
                  }
#line 417 "dependency_graph.m"
                  break;
#line 417 "dependency_graph.m"
                case (MR_Integer) 2:
#line 416 "dependency_graph.m"
                  *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 417 "dependency_graph.m"
                  break;
#line 417 "dependency_graph.m"
                case (MR_Integer) 3:
#line 417 "dependency_graph.m"
#line 417 "dependency_graph.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)))) {
#line 417 "dependency_graph.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 417 "dependency_graph.m"
                    case (MR_Integer) 0:
#line 418 "dependency_graph.m"
                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 417 "dependency_graph.m"
                      break;
#line 417 "dependency_graph.m"
                    case (MR_Integer) 1:
#line 426 "dependency_graph.m"
                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 417 "dependency_graph.m"
                      break;
#line 417 "dependency_graph.m"
                  }
#line 417 "dependency_graph.m"
                  break;
#line 417 "dependency_graph.m"
              }
#line 414 "dependency_graph.m"
            }
#line 368 "dependency_graph.m"
            break;
#line 368 "dependency_graph.m"
          case (MR_Integer) 2:
#line 395 "dependency_graph.m"
            {
#line 395 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__PredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)));
#line 395 "dependency_graph.m"
              MR_Integer transform_hlds__dependency_graph__ProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 395 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__Builtin_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 395 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 395 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));
#line 395 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 5)));

#line 398 "dependency_graph.m"
#line 398 "dependency_graph.m"
              switch (transform_hlds__dependency_graph__Builtin_31) {
#line 398 "dependency_graph.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 398 "dependency_graph.m"
                case (MR_Integer) 0:
#line 397 "dependency_graph.m"
                  *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 398 "dependency_graph.m"
                  break;
#line 398 "dependency_graph.m"
                case (MR_Integer) 2:
#line 398 "dependency_graph.m"
                case (MR_Integer) 1:
#line 402 "dependency_graph.m"
                  {
#line 402 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__Callee_34;
#line 405 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__TypeInfo_107_107;
#line 405 "dependency_graph.m"
                    MR_Box transform_hlds__dependency_graph__V_86_86;
#line 405 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_87_87;

#line 406 "dependency_graph.m"
                    {
#line 406 "dependency_graph.m"
                      transform_hlds__dependency_graph__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "dependency_graph.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_87_87, 0) = ((MR_Box) (transform_hlds__dependency_graph__PredId_28));
#line 406 "dependency_graph.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_87_87, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_29));
#line 406 "dependency_graph.m"
                    }
#line 406 "dependency_graph.m"
                    {
#line 406 "dependency_graph.m"
                      transform_hlds__dependency_graph__V_86_86 = transform_hlds__dependency_graph__dependency_node_1_f_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__V_87_87);
                    }
#line 405 "dependency_graph.m"
                    {
#line 405 "dependency_graph.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_107_107);
                    }
#line 405 "dependency_graph.m"
                    {
#line 405 "dependency_graph.m"
                      transform_hlds__dependency_graph__succeeded = mercury__digraph__search_key_3_p_0(transform_hlds__dependency_graph__TypeInfo_107_107, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__V_86_86, &transform_hlds__dependency_graph__Callee_34);
                    }
#line 402 "dependency_graph.m"
                    if (transform_hlds__dependency_graph__succeeded)
#line 408 "dependency_graph.m"
                      {
#line 408 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__TypeInfo_109_109;

#line 408 "dependency_graph.m"
                        {
#line 408 "dependency_graph.m"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_109_109);
                        }
#line 408 "dependency_graph.m"
                        {
#line 408 "dependency_graph.m"
                          mercury__digraph__add_edge_4_p_0(transform_hlds__dependency_graph__TypeInfo_109_109, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Callee_34, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                        }
#line 408 "dependency_graph.m"
                      }
#line 402 "dependency_graph.m"
                    else
#line 402 "dependency_graph.m"
                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 402 "dependency_graph.m"
                  }
#line 398 "dependency_graph.m"
                  break;
#line 398 "dependency_graph.m"
              }
#line 395 "dependency_graph.m"
            }
#line 368 "dependency_graph.m"
            break;
#line 368 "dependency_graph.m"
          case (MR_Integer) 3:
#line 368 "dependency_graph.m"
#line 368 "dependency_graph.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)))) {
#line 368 "dependency_graph.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 368 "dependency_graph.m"
              case (MR_Integer) 0:
#line 393 "dependency_graph.m"
                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 368 "dependency_graph.m"
                break;
#line 368 "dependency_graph.m"
              case (MR_Integer) 1:
#line 429 "dependency_graph.m"
                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 368 "dependency_graph.m"
                break;
#line 368 "dependency_graph.m"
              case (MR_Integer) 2:
#line 366 "dependency_graph.m"
                {
#line 366 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 364 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 367 "dependency_graph.m"
                  {
#line 367 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Goals_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                  }
#line 366 "dependency_graph.m"
                }
#line 368 "dependency_graph.m"
                break;
#line 368 "dependency_graph.m"
              case (MR_Integer) 3:
#line 366 "dependency_graph.m"
                {
#line 366 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Goals_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 367 "dependency_graph.m"
                  {
#line 367 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Goals_110, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                  }
#line 366 "dependency_graph.m"
                }
#line 368 "dependency_graph.m"
                break;
#line 368 "dependency_graph.m"
              case (MR_Integer) 4:
#line 369 "dependency_graph.m"
                {
#line 369 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 369 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph___Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 369 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));

#line 370 "dependency_graph.m"
                  {
#line 370 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Cases_14, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                  }
#line 369 "dependency_graph.m"
                }
#line 368 "dependency_graph.m"
                break;
#line 368 "dependency_graph.m"
              case (MR_Integer) 5:
#line 380 "dependency_graph.m"
                {
#line 380 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Reason_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 380 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__SubGoal_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 382 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__FGT_22;
#line 382 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__V_21_21;

#line 382 "dependency_graph.m"
                  transform_hlds__dependency_graph__succeeded = ((((MR_tag((MR_Word) transform_hlds__dependency_graph__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 382 "dependency_graph.m"
                  if (transform_hlds__dependency_graph__succeeded)
#line 382 "dependency_graph.m"
                    {
#line 382 "dependency_graph.m"
                      transform_hlds__dependency_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 1)));
#line 382 "dependency_graph.m"
                      transform_hlds__dependency_graph__FGT_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 2)));
#line 384 "dependency_graph.m"
#line 384 "dependency_graph.m"
                      switch (transform_hlds__dependency_graph__FGT_22) {
#line 384 "dependency_graph.m"
                        default:
#line 384 "dependency_graph.m"
                          transform_hlds__dependency_graph__succeeded = MR_FALSE;
#line 384 "dependency_graph.m"
                          break;
#line 384 "dependency_graph.m"
                        case (MR_Integer) 1:
#line 383 "dependency_graph.m"
                          transform_hlds__dependency_graph__succeeded = MR_TRUE;
#line 384 "dependency_graph.m"
                          break;
#line 384 "dependency_graph.m"
                        case (MR_Integer) 2:
#line 384 "dependency_graph.m"
                          transform_hlds__dependency_graph__succeeded = MR_TRUE;
#line 384 "dependency_graph.m"
                          break;
#line 384 "dependency_graph.m"
                      }
#line 382 "dependency_graph.m"
                    }
#line 381 "dependency_graph.m"
                  if (transform_hlds__dependency_graph__succeeded)
#line 381 "dependency_graph.m"
                    *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 381 "dependency_graph.m"
                  else
#line 390 "dependency_graph.m"
                    {
#line 390 "dependency_graph.m"
                      /* direct tailcall eliminated */
#line 390 "dependency_graph.m"
                      {
#line 390 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_96;

#line 390 "dependency_graph.m"
                        transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 390 "dependency_graph.m"
                      }
#line 390 "dependency_graph.m"
                      continue;
#line 390 "dependency_graph.m"
                    }
#line 380 "dependency_graph.m"
                }
#line 368 "dependency_graph.m"
                break;
#line 368 "dependency_graph.m"
              case (MR_Integer) 6:
#line 372 "dependency_graph.m"
                {
#line 372 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 372 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Then_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 372 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Else_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));
#line 372 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_91_91;
#line 372 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_92_92;
#line 372 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph___Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 373 "dependency_graph.m"
                  {
#line 373 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Cond_16, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_91_91);
                  }
#line 374 "dependency_graph.m"
                  {
#line 374 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Then_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_91_91, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_92_92);
                  }
#line 375 "dependency_graph.m"
                  /* direct tailcall eliminated */
#line 375 "dependency_graph.m"
                  {
#line 375 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__Else_18;
#line 375 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_92_92;

#line 375 "dependency_graph.m"
                    transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77;
#line 375 "dependency_graph.m"
                    transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 375 "dependency_graph.m"
                  }
#line 375 "dependency_graph.m"
                  continue;
#line 372 "dependency_graph.m"
                }
#line 368 "dependency_graph.m"
                break;
#line 368 "dependency_graph.m"
              case (MR_Integer) 7:
#line 431 "dependency_graph.m"
                {
#line 431 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__ShortHand_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 437 "dependency_graph.m"
#line 437 "dependency_graph.m"
                  switch (MR_tag((MR_Word) transform_hlds__dependency_graph__ShortHand_66)) {
#line 437 "dependency_graph.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 437 "dependency_graph.m"
                    case (MR_Integer) 0:
#line 441 "dependency_graph.m"
                      {
#line 441 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__LHS_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
#line 441 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__RHS_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));
#line 441 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_79_79;

#line 442 "dependency_graph.m"
                        {
#line 442 "dependency_graph.m"
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__LHS_75, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_79_79);
                        }
#line 443 "dependency_graph.m"
                        /* direct tailcall eliminated */
#line 443 "dependency_graph.m"
                        {
#line 443 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__RHS_76;
#line 443 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_79_79;

#line 443 "dependency_graph.m"
                          transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77;
#line 443 "dependency_graph.m"
                          transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 443 "dependency_graph.m"
                        }
#line 443 "dependency_graph.m"
                        continue;
#line 441 "dependency_graph.m"
                      }
#line 437 "dependency_graph.m"
                      break;
#line 437 "dependency_graph.m"
                    case (MR_Integer) 1:
#line 434 "dependency_graph.m"
                      {
#line 434 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__MainGoal_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 4)));
#line 434 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__OrElseGoals_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 5)));
#line 434 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_82_82;
#line 433 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph___GoalType_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
#line 433 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph___Outer_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));
#line 433 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph___Inner_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 2)));
#line 433 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph___OrElseInners_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 6)));
#line 433 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph___Vars_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 3)));

#line 435 "dependency_graph.m"
                        {
#line 435 "dependency_graph.m"
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__MainGoal_70, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_82_82);
                        }
#line 436 "dependency_graph.m"
                        {
#line 436 "dependency_graph.m"
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__OrElseGoals_71, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_82_82, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
                        }
#line 434 "dependency_graph.m"
                      }
#line 437 "dependency_graph.m"
                      break;
#line 437 "dependency_graph.m"
                    case (MR_Integer) 2:
#line 438 "dependency_graph.m"
                      {
#line 438 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__SubGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 2)));
#line 438 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
#line 438 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));

#line 439 "dependency_graph.m"
                        /* direct tailcall eliminated */
#line 439 "dependency_graph.m"
                        {
#line 439 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_100;

#line 439 "dependency_graph.m"
                          transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 439 "dependency_graph.m"
                        }
#line 439 "dependency_graph.m"
                        continue;
#line 438 "dependency_graph.m"
                      }
#line 437 "dependency_graph.m"
                      break;
#line 437 "dependency_graph.m"
                  }
#line 431 "dependency_graph.m"
                }
#line 368 "dependency_graph.m"
                break;
#line 368 "dependency_graph.m"
            }
#line 368 "dependency_graph.m"
            break;
#line 368 "dependency_graph.m"
        }
#line 361 "dependency_graph.m"
      }
#line 361 "dependency_graph.m"
      break;
#line 361 "dependency_graph.m"
    }
#line 357 "dependency_graph.m"
}

#line 341 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0_1(
#line 341 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 341 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
#line 341 "dependency_graph.m"
{
#line 341 "dependency_graph.m"
  {
#line 341 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
#line 341 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 341 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__conv1_HeadVar__2_2;

#line 341 "dependency_graph.m"
    {
#line 341 "dependency_graph.m"
      transform_hlds__dependency_graph__conv1_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 341 "dependency_graph.m"
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv1_HeadVar__2_2));
#line 341 "dependency_graph.m"
    return transform_hlds__dependency_graph__wrapper_arg_2;
#line 341 "dependency_graph.m"
  }
#line 341 "dependency_graph.m"
}

#line 325 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0(
#line 325 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 325 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 325 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 325 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 325 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 325 "dependency_graph.m"
{
#line 328 "dependency_graph.m"
  while (MR_TRUE)
#line 328 "dependency_graph.m"
    {
#line 328 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 328 "dependency_graph.m"
      {
#line 328 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 328 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 328 "dependency_graph.m"
        else
#line 329 "dependency_graph.m"
          {
#line 329 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_29_29;
#line 329 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 329 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 329 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_16;
#line 329 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
#line 329 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27;
#line 331 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

#line 330 "dependency_graph.m"
            {
#line 330 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
#line 3842 "transform_hlds.dependency_graph.c"
            transform_hlds__dependency_graph__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 331 "dependency_graph.m"
            {
#line 331 "dependency_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_29_29, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
#line 331 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
#line 333 "dependency_graph.m"
            transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__IncludeImported_3 == (MR_Integer) 1);
#line 333 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 334 "dependency_graph.m"
              {
#line 334 "dependency_graph.m"
                transform_hlds__dependency_graph__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__dependency_graph__PredInfo_17);
              }
#line 332 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 332 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 332 "dependency_graph.m"
            else
#line 338 "dependency_graph.m"
              {
#line 338 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__ClausesInfo_18;
#line 338 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__ClausesRep_19;
#line 338 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Clauses_21;
#line 338 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Goals_22;
#line 338 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Caller_23;
#line 339 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph___ItemNumbers_20;

#line 338 "dependency_graph.m"
                {
#line 338 "dependency_graph.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__dependency_graph__PredInfo_17, &transform_hlds__dependency_graph__ClausesInfo_18);
                }
#line 339 "dependency_graph.m"
                {
#line 339 "dependency_graph.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__dependency_graph__ClausesInfo_18, &transform_hlds__dependency_graph__ClausesRep_19, &transform_hlds__dependency_graph___ItemNumbers_20);
                }
#line 340 "dependency_graph.m"
                {
#line 340 "dependency_graph.m"
                  hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(transform_hlds__dependency_graph__ClausesRep_19, &transform_hlds__dependency_graph__Clauses_21);
                }
#line 341 "dependency_graph.m"
                {
#line 341 "dependency_graph.m"
                  transform_hlds__dependency_graph__Goals_22 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dependency_graph_scalar_common_4[0], transform_hlds__dependency_graph__Clauses_21);
                }
#line 342 "dependency_graph.m"
                {
#line 342 "dependency_graph.m"
                  mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_29_29, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__Caller_23);
                }
#line 343 "dependency_graph.m"
                {
#line 343 "dependency_graph.m"
                  transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[1], transform_hlds__dependency_graph__Caller_23, transform_hlds__dependency_graph__Goals_22, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27);
                }
#line 338 "dependency_graph.m"
              }
#line 345 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 345 "dependency_graph.m"
            {
#line 345 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
#line 345 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27;

#line 345 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 345 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 345 "dependency_graph.m"
            }
#line 345 "dependency_graph.m"
            continue;
#line 329 "dependency_graph.m"
          }
#line 328 "dependency_graph.m"
      }
#line 328 "dependency_graph.m"
      break;
#line 328 "dependency_graph.m"
    }
#line 325 "dependency_graph.m"
}

#line 292 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_proc_arcs_6_p_0(
#line 292 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 292 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 292 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 292 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_4,
#line 292 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5,
#line 292 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6)
#line 292 "dependency_graph.m"
{
#line 295 "dependency_graph.m"
  while (MR_TRUE)
#line 295 "dependency_graph.m"
    {
#line 295 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 295 "dependency_graph.m"
      {
#line 295 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 295 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5;
#line 295 "dependency_graph.m"
        else
#line 297 "dependency_graph.m"
          {
#line 297 "dependency_graph.m"
            MR_Integer transform_hlds__dependency_graph__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 297 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 297 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable0_19;
#line 297 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo0_20;
#line 297 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcTable0_21;
#line 297 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcInfo0_22;
#line 297 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32;
#line 299 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo0_20;
#line 301 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv1_ProcInfo0_22;

#line 298 "dependency_graph.m"
            {
#line 298 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__3_3, &transform_hlds__dependency_graph__PredTable0_19);
            }
#line 299 "dependency_graph.m"
            {
#line 299 "dependency_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable0_19, ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), &transform_hlds__dependency_graph__conv0_PredInfo0_20);
            }
#line 299 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo0_20 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo0_20);
#line 300 "dependency_graph.m"
            {
#line 300 "dependency_graph.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dependency_graph__PredInfo0_20, &transform_hlds__dependency_graph__ProcTable0_21);
            }
#line 301 "dependency_graph.m"
            {
#line 301 "dependency_graph.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__dependency_graph__ProcTable0_21, transform_hlds__dependency_graph__ProcId_13, &transform_hlds__dependency_graph__conv1_ProcInfo0_22);
            }
#line 301 "dependency_graph.m"
            transform_hlds__dependency_graph__ProcInfo0_22 = ((MR_Word) transform_hlds__dependency_graph__conv1_ProcInfo0_22);
#line 308 "dependency_graph.m"
#line 308 "dependency_graph.m"
            switch (transform_hlds__dependency_graph__IncludeImported_4) {
#line 308 "dependency_graph.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 308 "dependency_graph.m"
              case (MR_Integer) 1:
#line 303 "dependency_graph.m"
                {
#line 303 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Goal_23;
#line 303 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Caller_24;
#line 303 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__V_31_31;

#line 304 "dependency_graph.m"
                  {
#line 304 "dependency_graph.m"
                    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__dependency_graph__ProcInfo0_22, &transform_hlds__dependency_graph__Goal_23);
                  }
#line 306 "dependency_graph.m"
                  {
#line 306 "dependency_graph.m"
                    transform_hlds__dependency_graph__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 306 "dependency_graph.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_31_31, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 306 "dependency_graph.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_31_31, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_13));
#line 306 "dependency_graph.m"
                  }
#line 306 "dependency_graph.m"
                  {
#line 306 "dependency_graph.m"
                    mercury__digraph__lookup_key_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, ((MR_Box) (transform_hlds__dependency_graph__V_31_31)), &transform_hlds__dependency_graph__Caller_24);
                  }
#line 307 "dependency_graph.m"
                  {
#line 307 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0], transform_hlds__dependency_graph__Caller_24, transform_hlds__dependency_graph__Goal_23, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32);
                  }
#line 303 "dependency_graph.m"
                }
#line 308 "dependency_graph.m"
                break;
#line 308 "dependency_graph.m"
              case (MR_Integer) 0:
#line 309 "dependency_graph.m"
                {
#line 309 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__PredStatus_25;
#line 309 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Imported_26;

#line 310 "dependency_graph.m"
                  {
#line 310 "dependency_graph.m"
                    hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__dependency_graph__PredInfo0_20, &transform_hlds__dependency_graph__PredStatus_25);
                  }
#line 311 "dependency_graph.m"
                  {
#line 311 "dependency_graph.m"
                    transform_hlds__dependency_graph__Imported_26 = hlds__status__pred_status_is_imported_1_f_0(transform_hlds__dependency_graph__PredStatus_25);
                  }
#line 314 "dependency_graph.m"
#line 314 "dependency_graph.m"
                  switch (transform_hlds__dependency_graph__Imported_26) {
#line 314 "dependency_graph.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 314 "dependency_graph.m"
                    case (MR_Integer) 0:
#line 315 "dependency_graph.m"
                      {
#line 315 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__V_29_29;
#line 315 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__Goal_34;
#line 315 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__Caller_35;

#line 316 "dependency_graph.m"
                        {
#line 316 "dependency_graph.m"
                          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__dependency_graph__ProcInfo0_22, &transform_hlds__dependency_graph__Goal_34);
                        }
#line 317 "dependency_graph.m"
                        {
#line 317 "dependency_graph.m"
                          transform_hlds__dependency_graph__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "dependency_graph.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_29_29, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 317 "dependency_graph.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_29_29, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_13));
#line 317 "dependency_graph.m"
                        }
#line 317 "dependency_graph.m"
                        {
#line 317 "dependency_graph.m"
                          mercury__digraph__lookup_key_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, ((MR_Box) (transform_hlds__dependency_graph__V_29_29)), &transform_hlds__dependency_graph__Caller_35);
                        }
#line 318 "dependency_graph.m"
                        {
#line 318 "dependency_graph.m"
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0], transform_hlds__dependency_graph__Caller_35, transform_hlds__dependency_graph__Goal_34, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32);
                        }
#line 315 "dependency_graph.m"
                      }
#line 314 "dependency_graph.m"
                      break;
#line 314 "dependency_graph.m"
                    case (MR_Integer) 1:
#line 313 "dependency_graph.m"
                      transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5;
#line 314 "dependency_graph.m"
                      break;
#line 314 "dependency_graph.m"
                  }
#line 309 "dependency_graph.m"
                }
#line 308 "dependency_graph.m"
                break;
#line 308 "dependency_graph.m"
            }
#line 321 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 321 "dependency_graph.m"
            {
#line 321 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__ProcIds_14;
#line 321 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32;

#line 321 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_5;
#line 321 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 321 "dependency_graph.m"
            }
#line 321 "dependency_graph.m"
            continue;
#line 297 "dependency_graph.m"
          }
#line 295 "dependency_graph.m"
      }
#line 295 "dependency_graph.m"
      break;
#line 295 "dependency_graph.m"
    }
#line 292 "dependency_graph.m"
}

#line 273 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(
#line 273 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 273 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 273 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 273 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 273 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 273 "dependency_graph.m"
{
#line 276 "dependency_graph.m"
  while (MR_TRUE)
#line 276 "dependency_graph.m"
    {
#line 276 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 276 "dependency_graph.m"
      {
#line 276 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 276 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 276 "dependency_graph.m"
        else
#line 277 "dependency_graph.m"
          {
#line 277 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 277 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 277 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_16;
#line 277 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
#line 277 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_18;
#line 277 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
#line 279 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

#line 278 "dependency_graph.m"
            {
#line 278 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
#line 279 "dependency_graph.m"
            {
#line 279 "dependency_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
#line 279 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
#line 285 "dependency_graph.m"
#line 285 "dependency_graph.m"
            switch (transform_hlds__dependency_graph__Imported_3) {
#line 285 "dependency_graph.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 285 "dependency_graph.m"
              case (MR_Integer) 1:
#line 284 "dependency_graph.m"
                {
#line 284 "dependency_graph.m"
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
#line 285 "dependency_graph.m"
                break;
#line 285 "dependency_graph.m"
              case (MR_Integer) 0:
#line 287 "dependency_graph.m"
                {
#line 287 "dependency_graph.m"
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
#line 285 "dependency_graph.m"
                break;
#line 285 "dependency_graph.m"
            }
#line 289 "dependency_graph.m"
            {
#line 289 "dependency_graph.m"
              transform_hlds__dependency_graph__add_proc_arcs_6_p_0(transform_hlds__dependency_graph__ProcIds_18, transform_hlds__dependency_graph__PredId_11, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__Imported_3, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
#line 290 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 290 "dependency_graph.m"
            {
#line 290 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
#line 290 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

#line 290 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 290 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 290 "dependency_graph.m"
            }
#line 290 "dependency_graph.m"
            continue;
#line 277 "dependency_graph.m"
          }
#line 276 "dependency_graph.m"
      }
#line 276 "dependency_graph.m"
      break;
#line 276 "dependency_graph.m"
    }
#line 273 "dependency_graph.m"
}

#line 250 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_nodes_5_p_0(
#line 250 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 250 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 250 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 250 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 250 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 250 "dependency_graph.m"
{
#line 254 "dependency_graph.m"
  while (MR_TRUE)
#line 254 "dependency_graph.m"
    {
#line 254 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 254 "dependency_graph.m"
      {
#line 254 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 254 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "dependency_graph.m"
          *transform_hlds__dependency_graph__HeadVar__5_5 = transform_hlds__dependency_graph__HeadVar__4_4;
#line 254 "dependency_graph.m"
        else
#line 255 "dependency_graph.m"
          {
#line 255 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_21_21;
#line 255 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_14;
#line 255 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_15;
#line 255 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19;
#line 257 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_15;

#line 256 "dependency_graph.m"
            {
#line 256 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_14);
            }
#line 4344 "transform_hlds.dependency_graph.c"
            transform_hlds__dependency_graph__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 257 "dependency_graph.m"
            {
#line 257 "dependency_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_21_21, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_14, ((MR_Box) (transform_hlds__dependency_graph__PredId_9)), &transform_hlds__dependency_graph__conv0_PredInfo_15);
            }
#line 257 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_15 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_15);
#line 261 "dependency_graph.m"
            transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__IncludeImported_3 == (MR_Integer) 1);
#line 261 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 262 "dependency_graph.m"
              {
#line 262 "dependency_graph.m"
                transform_hlds__dependency_graph__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__dependency_graph__PredInfo_15);
              }
#line 260 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 260 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19 = transform_hlds__dependency_graph__HeadVar__4_4;
#line 260 "dependency_graph.m"
            else
#line 266 "dependency_graph.m"
              {
#line 266 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__V_16_16;

#line 266 "dependency_graph.m"
                {
#line 266 "dependency_graph.m"
                  mercury__digraph__add_vertex_4_p_0(transform_hlds__dependency_graph__TypeCtorInfo_21_21, ((MR_Box) (transform_hlds__dependency_graph__PredId_9)), &transform_hlds__dependency_graph__V_16_16, transform_hlds__dependency_graph__HeadVar__4_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19);
                }
#line 266 "dependency_graph.m"
              }
#line 268 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 268 "dependency_graph.m"
            {
#line 268 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_10;
#line 268 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__4__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19;

#line 268 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__4_4 = transform_hlds__dependency_graph__HeadVar__4__tmp_copy_4;
#line 268 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 268 "dependency_graph.m"
            }
#line 268 "dependency_graph.m"
            continue;
#line 255 "dependency_graph.m"
          }
#line 254 "dependency_graph.m"
      }
#line 254 "dependency_graph.m"
      break;
#line 254 "dependency_graph.m"
    }
#line 250 "dependency_graph.m"
}

#line 221 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(
#line 221 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 221 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 221 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 221 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 221 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 221 "dependency_graph.m"
{
#line 224 "dependency_graph.m"
  while (MR_TRUE)
#line 224 "dependency_graph.m"
    {
#line 224 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 224 "dependency_graph.m"
      {
#line 224 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 224 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 224 "dependency_graph.m"
        else
#line 225 "dependency_graph.m"
          {
#line 225 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 225 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 225 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_16;
#line 225 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
#line 225 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_18;
#line 225 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
#line 227 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

#line 226 "dependency_graph.m"
            {
#line 226 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
#line 227 "dependency_graph.m"
            {
#line 227 "dependency_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
#line 227 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
#line 233 "dependency_graph.m"
#line 233 "dependency_graph.m"
            switch (transform_hlds__dependency_graph__Imported_3) {
#line 233 "dependency_graph.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 233 "dependency_graph.m"
              case (MR_Integer) 1:
#line 232 "dependency_graph.m"
                {
#line 232 "dependency_graph.m"
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
#line 233 "dependency_graph.m"
                break;
#line 233 "dependency_graph.m"
              case (MR_Integer) 0:
#line 235 "dependency_graph.m"
                {
#line 235 "dependency_graph.m"
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
#line 233 "dependency_graph.m"
                break;
#line 233 "dependency_graph.m"
            }
#line 237 "dependency_graph.m"
            {
#line 237 "dependency_graph.m"
              transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(transform_hlds__dependency_graph__ProcIds_18, transform_hlds__dependency_graph__PredId_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
#line 238 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 238 "dependency_graph.m"
            {
#line 238 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
#line 238 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

#line 238 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 238 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 238 "dependency_graph.m"
            }
#line 238 "dependency_graph.m"
            continue;
#line 225 "dependency_graph.m"
          }
#line 224 "dependency_graph.m"
      }
#line 224 "dependency_graph.m"
      break;
#line 224 "dependency_graph.m"
    }
#line 221 "dependency_graph.m"
}

#line 183 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__sets_to_lists_3_p_0(
#line 183 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeInfo_for_T_11,
#line 183 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 183 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 183 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__3_3)
#line 183 "dependency_graph.m"
{
#line 186 "dependency_graph.m"
  while (MR_TRUE)
#line 186 "dependency_graph.m"
    {
#line 186 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 186 "dependency_graph.m"
      {
#line 186 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 186 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "dependency_graph.m"
          *transform_hlds__dependency_graph__HeadVar__3_3 = transform_hlds__dependency_graph__HeadVar__2_2;
#line 186 "dependency_graph.m"
        else
#line 187 "dependency_graph.m"
          {
#line 187 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 187 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 187 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Y_9;
#line 187 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_10_10;

#line 188 "dependency_graph.m"
            {
#line 188 "dependency_graph.m"
              mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeInfo_for_T_11, transform_hlds__dependency_graph__X_5, &transform_hlds__dependency_graph__Y_9);
            }
#line 189 "dependency_graph.m"
            {
#line 189 "dependency_graph.m"
              transform_hlds__dependency_graph__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "dependency_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__V_10_10, 0) = ((MR_Box) (transform_hlds__dependency_graph__Y_9));
#line 189 "dependency_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__V_10_10, 1) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 189 "dependency_graph.m"
            }
#line 189 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 189 "dependency_graph.m"
            {
#line 189 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Xs_6;
#line 189 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__V_10_10;

#line 189 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
#line 189 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 189 "dependency_graph.m"
            }
#line 189 "dependency_graph.m"
            continue;
#line 187 "dependency_graph.m"
          }
#line 186 "dependency_graph.m"
      }
#line 186 "dependency_graph.m"
      break;
#line 186 "dependency_graph.m"
    }
#line 183 "dependency_graph.m"
}

#line 106 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__write_graph_nodes_6_p_0(
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 106 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4)
#line 106 "dependency_graph.m"
{
#line 607 "dependency_graph.m"
  while (MR_TRUE)
#line 607 "dependency_graph.m"
    {
#line 607 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 607 "dependency_graph.m"
      {
#line 607 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 607 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "dependency_graph.m"
          {
#line 607 "dependency_graph.m"
          }
#line 607 "dependency_graph.m"
        else
#line 608 "dependency_graph.m"
          {
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_27_27;
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Nodes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__NodeKey_19;
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildrenSet_20;
#line 608 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_21;
#line 609 "dependency_graph.m"
            void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__3_3, (MR_Integer) 1)));
#line 609 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv1_STATE_VARIABLE_IO_24_24;

#line 609 "dependency_graph.m"
            {
#line 609 "dependency_graph.m"
              transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__HeadVar__3_3), ((MR_Box) (transform_hlds__dependency_graph__Node_13)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__dependency_graph__conv1_STATE_VARIABLE_IO_24_24);
            }
#line 4667 "transform_hlds.dependency_graph.c"
            transform_hlds__dependency_graph__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 610 "dependency_graph.m"
            {
#line 610 "dependency_graph.m"
              mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, ((MR_Box) (transform_hlds__dependency_graph__Node_13)), &transform_hlds__dependency_graph__NodeKey_19);
            }
#line 611 "dependency_graph.m"
            {
#line 611 "dependency_graph.m"
              mercury__digraph__lookup_from_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__NodeKey_19, &transform_hlds__dependency_graph__ChildrenSet_20);
            }
#line 612 "dependency_graph.m"
            {
#line 612 "dependency_graph.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], transform_hlds__dependency_graph__ChildrenSet_20, &transform_hlds__dependency_graph__Children_21);
            }
#line 613 "dependency_graph.m"
            {
#line 613 "dependency_graph.m"
              transform_hlds__dependency_graph__write_graph_children_6_p_0(transform_hlds__dependency_graph__Children_21, transform_hlds__dependency_graph__Node_13, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__4_4);
            }
#line 614 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 614 "dependency_graph.m"
            {
#line 614 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Nodes_14;

#line 614 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 614 "dependency_graph.m"
            }
#line 614 "dependency_graph.m"
            continue;
#line 608 "dependency_graph.m"
          }
#line 607 "dependency_graph.m"
      }
#line 607 "dependency_graph.m"
      break;
#line 607 "dependency_graph.m"
    }
#line 106 "dependency_graph.m"
}

#line 96 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__write_graph_5_p_0(
#line 96 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__DepInfo_6,
#line 96 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__WriteNode_7,
#line 96 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__WriteLink_8)
#line 96 "dependency_graph.m"
{
#line 601 "dependency_graph.m"
  {
#line 601 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 601 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 601 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_10;
#line 601 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomSet_11;
#line 601 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomList_12;

#line 602 "dependency_graph.m"
    {
#line 602 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_16, transform_hlds__dependency_graph__DepInfo_6, &transform_hlds__dependency_graph__DepGraph_10);
    }
#line 603 "dependency_graph.m"
    {
#line 603 "dependency_graph.m"
      mercury__digraph__vertices_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_16, transform_hlds__dependency_graph__DepGraph_10, &transform_hlds__dependency_graph__DomSet_11);
    }
#line 604 "dependency_graph.m"
    {
#line 604 "dependency_graph.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_16, transform_hlds__dependency_graph__DomSet_11, &transform_hlds__dependency_graph__DomList_12);
    }
#line 605 "dependency_graph.m"
    {
#line 605 "dependency_graph.m"
      transform_hlds__dependency_graph__write_graph_nodes_6_p_0(transform_hlds__dependency_graph__DomList_12, transform_hlds__dependency_graph__DepGraph_10, transform_hlds__dependency_graph__WriteNode_7, transform_hlds__dependency_graph__WriteLink_8);
    }
#line 601 "dependency_graph.m"
  }
#line 96 "dependency_graph.m"
}

#line 641 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph__get_scc_entry_points_4_p_0_1(
#line 641 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 641 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
#line 641 "dependency_graph.m"
{
#line 641 "dependency_graph.m"
  {
#line 641 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 641 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;

#line 641 "dependency_graph.m"
    {
#line 641 "dependency_graph.m"
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph__is_entry_point_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 641 "dependency_graph.m"
    return transform_hlds__dependency_graph__succeeded;
#line 641 "dependency_graph.m"
  }
#line 641 "dependency_graph.m"
}

#line 88 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__get_scc_entry_points_4_p_0(
#line 88 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__SCC_5,
#line 88 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HigherSCCs_6,
#line 88 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_7,
#line 88 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__EntryPoints_8)
#line 88 "dependency_graph.m"
{
#line 640 "dependency_graph.m"
  {
#line 640 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 640 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__V_9_9;

#line 641 "dependency_graph.m"
    {
#line 641 "dependency_graph.m"
      transform_hlds__dependency_graph__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 641 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 0) = ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_2[0]));
#line 641 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 1) = ((MR_Box) (transform_hlds__dependency_graph__get_scc_entry_points_4_p_0_1));
#line 641 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 641 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 3) = ((MR_Box) (transform_hlds__dependency_graph__HigherSCCs_6));
#line 641 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 4) = ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_7));
#line 641 "dependency_graph.m"
    }
#line 641 "dependency_graph.m"
    {
#line 641 "dependency_graph.m"
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__V_9_9, transform_hlds__dependency_graph__SCC_5, transform_hlds__dependency_graph__EntryPoints_8);
    }
#line 640 "dependency_graph.m"
  }
#line 88 "dependency_graph.m"
}

#line 80 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__write_prof_dependency_graph_4_p_0(
#line 80 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8,
#line 80 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9)
#line 80 "dependency_graph.m"
{
#line 546 "dependency_graph.m"
  {
#line 546 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 546 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeCtorInfo_16_34;
#line 546 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepInfo_7;
#line 546 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_30;
#line 546 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomSet_31;
#line 546 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomList_32;

#line 547 "dependency_graph.m"
    {
#line 547 "dependency_graph.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
    }
#line 548 "dependency_graph.m"
    {
#line 548 "dependency_graph.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, &transform_hlds__dependency_graph__DepInfo_7);
    }
#line 4870 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__TypeCtorInfo_16_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 602 "dependency_graph.m"
    {
#line 602 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_34, transform_hlds__dependency_graph__DepInfo_7, &transform_hlds__dependency_graph__DepGraph_30);
    }
#line 603 "dependency_graph.m"
    {
#line 603 "dependency_graph.m"
      mercury__digraph__vertices_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_34, transform_hlds__dependency_graph__DepGraph_30, &transform_hlds__dependency_graph__DomSet_31);
    }
#line 604 "dependency_graph.m"
    {
#line 604 "dependency_graph.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_34, transform_hlds__dependency_graph__DomSet_31, &transform_hlds__dependency_graph__DomList_32);
    }
#line 605 "dependency_graph.m"
    {
#line 605 "dependency_graph.m"
      transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, transform_hlds__dependency_graph__DomList_32, transform_hlds__dependency_graph__DepGraph_30);
    }
#line 546 "dependency_graph.m"
  }
#line 80 "dependency_graph.m"
}

#line 72 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__write_dependency_graph_4_p_0(
#line 72 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8,
#line 72 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9)
#line 72 "dependency_graph.m"
{
#line 552 "dependency_graph.m"
  {
#line 552 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 552 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeCtorInfo_16_38;
#line 552 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepInfo_7;
#line 552 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_34;
#line 552 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomSet_35;
#line 552 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomList_36;

#line 553 "dependency_graph.m"
    {
#line 553 "dependency_graph.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
    }
#line 554 "dependency_graph.m"
    {
#line 554 "dependency_graph.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, &transform_hlds__dependency_graph__DepInfo_7);
    }
#line 555 "dependency_graph.m"
    {
#line 555 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "% Dependency graph\n");
    }
#line 556 "dependency_graph.m"
    {
#line 556 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "\n\n% Dependency ordering\n");
    }
#line 4941 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__TypeCtorInfo_16_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 602 "dependency_graph.m"
    {
#line 602 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_38, transform_hlds__dependency_graph__DepInfo_7, &transform_hlds__dependency_graph__DepGraph_34);
    }
#line 603 "dependency_graph.m"
    {
#line 603 "dependency_graph.m"
      mercury__digraph__vertices_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_38, transform_hlds__dependency_graph__DepGraph_34, &transform_hlds__dependency_graph__DomSet_35);
    }
#line 604 "dependency_graph.m"
    {
#line 604 "dependency_graph.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_38, transform_hlds__dependency_graph__DomSet_35, &transform_hlds__dependency_graph__DomList_36);
    }
#line 605 "dependency_graph.m"
    {
#line 605 "dependency_graph.m"
      transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, transform_hlds__dependency_graph__DomList_36, transform_hlds__dependency_graph__DepGraph_34);
    }
#line 552 "dependency_graph.m"
  }
#line 72 "dependency_graph.m"
}

#line 63 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__build_proc_dependency_graph_4_p_0(
#line 63 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
#line 63 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__PredIds_6,
#line 63 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_7,
#line 63 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__DepInfo_8)
#line 63 "dependency_graph.m"
{
#line 161 "dependency_graph.m"
  {
#line 161 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_21_25;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_22_26;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_23_27;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_24_28;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_25_29;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_26_30;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph0_15;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph1_16;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_17;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd0_18;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd_19;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21;
#line 195 "dependency_graph.m"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 195 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_16;
#line 199 "dependency_graph.m"
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 199 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_17;

#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_25);
    }
#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_25, &transform_hlds__dependency_graph__DepGraph0_15);
    }
#line 195 "dependency_graph.m"
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 195 "dependency_graph.m"
    {
#line 195 "dependency_graph.m"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_15)), &transform_hlds__dependency_graph__conv1_DepGraph1_16);
    }
#line 195 "dependency_graph.m"
    transform_hlds__dependency_graph__DepGraph1_16 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_16);
#line 199 "dependency_graph.m"
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 6)));
#line 199 "dependency_graph.m"
    {
#line 199 "dependency_graph.m"
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_16)), &transform_hlds__dependency_graph__conv3_DepGraph_17);
    }
#line 199 "dependency_graph.m"
    transform_hlds__dependency_graph__DepGraph_17 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_17);
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_26);
    }
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_26, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20);
    }
#line 178 "dependency_graph.m"
    {
#line 178 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_27);
    }
#line 178 "dependency_graph.m"
    {
#line 178 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_27, transform_hlds__dependency_graph__DepGraph_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21);
    }
#line 179 "dependency_graph.m"
    {
#line 179 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_28);
    }
#line 179 "dependency_graph.m"
    {
#line 179 "dependency_graph.m"
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_28, transform_hlds__dependency_graph__DepGraph_17, &transform_hlds__dependency_graph__DepOrd0_18);
    }
#line 180 "dependency_graph.m"
    {
#line 180 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_29);
    }
#line 180 "dependency_graph.m"
    {
#line 180 "dependency_graph.m"
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_29, transform_hlds__dependency_graph__DepOrd0_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_19);
    }
#line 181 "dependency_graph.m"
    {
#line 181 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_30);
    }
#line 181 "dependency_graph.m"
    {
#line 181 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_30, transform_hlds__dependency_graph__DepOrd_19, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21, transform_hlds__dependency_graph__DepInfo_8);
    }
#line 161 "dependency_graph.m"
  }
#line 63 "dependency_graph.m"
}

#line 58 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__build_pred_dependency_graph_4_p_0(
#line 58 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
#line 58 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__PredIds_6,
#line 58 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_7,
#line 58 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__DepInfo_8)
#line 58 "dependency_graph.m"
{
#line 164 "dependency_graph.m"
  {
#line 164 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[1];
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_21_25;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_22_26;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_23_27;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_24_28;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_25_29;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_26_30;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph0_15;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph1_16;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_17;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd0_18;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd_19;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20;
#line 164 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21;
#line 195 "dependency_graph.m"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 195 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_16;
#line 199 "dependency_graph.m"
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 199 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_17;

#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_25);
    }
#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_25, &transform_hlds__dependency_graph__DepGraph0_15);
    }
#line 195 "dependency_graph.m"
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 195 "dependency_graph.m"
    {
#line 195 "dependency_graph.m"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_15)), &transform_hlds__dependency_graph__conv1_DepGraph1_16);
    }
#line 195 "dependency_graph.m"
    transform_hlds__dependency_graph__DepGraph1_16 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_16);
#line 199 "dependency_graph.m"
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 6)));
#line 199 "dependency_graph.m"
    {
#line 199 "dependency_graph.m"
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_16)), &transform_hlds__dependency_graph__conv3_DepGraph_17);
    }
#line 199 "dependency_graph.m"
    transform_hlds__dependency_graph__DepGraph_17 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_17);
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_26);
    }
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_26, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20);
    }
#line 178 "dependency_graph.m"
    {
#line 178 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_27);
    }
#line 178 "dependency_graph.m"
    {
#line 178 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_27, transform_hlds__dependency_graph__DepGraph_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21);
    }
#line 179 "dependency_graph.m"
    {
#line 179 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_28);
    }
#line 179 "dependency_graph.m"
    {
#line 179 "dependency_graph.m"
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_28, transform_hlds__dependency_graph__DepGraph_17, &transform_hlds__dependency_graph__DepOrd0_18);
    }
#line 180 "dependency_graph.m"
    {
#line 180 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_29);
    }
#line 180 "dependency_graph.m"
    {
#line 180 "dependency_graph.m"
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_29, transform_hlds__dependency_graph__DepOrd0_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_19);
    }
#line 181 "dependency_graph.m"
    {
#line 181 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_30);
    }
#line 181 "dependency_graph.m"
    {
#line 181 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_30, transform_hlds__dependency_graph__DepOrd_19, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21, transform_hlds__dependency_graph__DepInfo_8);
    }
#line 164 "dependency_graph.m"
  }
#line 58 "dependency_graph.m"
}

#line 49 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(
#line 49 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7,
#line 49 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_8,
#line 49 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__DepInfo_5)
#line 49 "dependency_graph.m"
{
#line 154 "dependency_graph.m"
  {
#line 154 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_21_27;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_22_28;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_23_29;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_24_30;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_25_31;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_26_32;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PredIds_6;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph0_17;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph1_18;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_19;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd0_20;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd_21;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_22;
#line 154 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_23;
#line 195 "dependency_graph.m"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 195 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_18;
#line 199 "dependency_graph.m"
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 199 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_19;

#line 155 "dependency_graph.m"
    {
#line 155 "dependency_graph.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__dependency_graph__PredIds_6);
    }
#line 5301 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_27);
    }
#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_27, &transform_hlds__dependency_graph__DepGraph0_17);
    }
#line 195 "dependency_graph.m"
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 195 "dependency_graph.m"
    {
#line 195 "dependency_graph.m"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_17)), &transform_hlds__dependency_graph__conv1_DepGraph1_18);
    }
#line 195 "dependency_graph.m"
    transform_hlds__dependency_graph__DepGraph1_18 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_18);
#line 199 "dependency_graph.m"
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 0)), (MR_Integer) 6)));
#line 199 "dependency_graph.m"
    {
#line 199 "dependency_graph.m"
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_18)), &transform_hlds__dependency_graph__conv3_DepGraph_19);
    }
#line 199 "dependency_graph.m"
    transform_hlds__dependency_graph__DepGraph_19 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_19);
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_28);
    }
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_28, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_22);
    }
#line 178 "dependency_graph.m"
    {
#line 178 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_29);
    }
#line 178 "dependency_graph.m"
    {
#line 178 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_29, transform_hlds__dependency_graph__DepGraph_19, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_22, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_23);
    }
#line 179 "dependency_graph.m"
    {
#line 179 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_30);
    }
#line 179 "dependency_graph.m"
    {
#line 179 "dependency_graph.m"
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_30, transform_hlds__dependency_graph__DepGraph_19, &transform_hlds__dependency_graph__DepOrd0_20);
    }
#line 180 "dependency_graph.m"
    {
#line 180 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_31);
    }
#line 180 "dependency_graph.m"
    {
#line 180 "dependency_graph.m"
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_31, transform_hlds__dependency_graph__DepOrd0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_21);
    }
#line 181 "dependency_graph.m"
    {
#line 181 "dependency_graph.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_32);
    }
#line 181 "dependency_graph.m"
    {
#line 181 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_32, transform_hlds__dependency_graph__DepOrd_21, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_23, transform_hlds__dependency_graph__DepInfo_5);
    }
#line 158 "dependency_graph.m"
    {
#line 158 "dependency_graph.m"
      hlds__hlds_module__module_info_set_dependency_info_3_p_0(*transform_hlds__dependency_graph__DepInfo_5, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_8);
    }
#line 154 "dependency_graph.m"
  }
#line 49 "dependency_graph.m"
}

#line 41 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(
#line 41 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8,
#line 41 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9)
#line 41 "dependency_graph.m"
{
#line 142 "dependency_graph.m"
  {
#line 142 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 142 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__MaybeDepInfo_4;

#line 143 "dependency_graph.m"
    {
#line 143 "dependency_graph.m"
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__dependency_graph__MaybeDepInfo_4);
    }
#line 146 "dependency_graph.m"
    if ((transform_hlds__dependency_graph__MaybeDepInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "dependency_graph.m"
      {
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_21_28;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_22_29;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_23_30;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_24_31;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_25_32;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_26_33;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__PredIds_6;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepInfo_7;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepGraph0_18;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepGraph1_19;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepGraph_20;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepOrd0_21;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepOrd_22;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23;
#line 147 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24;
#line 195 "dependency_graph.m"
        void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 195 "dependency_graph.m"
        MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_19;
#line 199 "dependency_graph.m"
        void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 199 "dependency_graph.m"
        MR_Box transform_hlds__dependency_graph__conv3_DepGraph_20;

#line 148 "dependency_graph.m"
        {
#line 148 "dependency_graph.m"
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__dependency_graph__PredIds_6);
        }
#line 5462 "transform_hlds.dependency_graph.c"
        transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
#line 174 "dependency_graph.m"
        {
#line 174 "dependency_graph.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_28);
        }
#line 174 "dependency_graph.m"
        {
#line 174 "dependency_graph.m"
          mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_28, &transform_hlds__dependency_graph__DepGraph0_18);
        }
#line 195 "dependency_graph.m"
        transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 195 "dependency_graph.m"
        {
#line 195 "dependency_graph.m"
          transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_18)), &transform_hlds__dependency_graph__conv1_DepGraph1_19);
        }
#line 195 "dependency_graph.m"
        transform_hlds__dependency_graph__DepGraph1_19 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_19);
#line 199 "dependency_graph.m"
        transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 0)), (MR_Integer) 6)));
#line 199 "dependency_graph.m"
        {
#line 199 "dependency_graph.m"
          transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_19)), &transform_hlds__dependency_graph__conv3_DepGraph_20);
        }
#line 199 "dependency_graph.m"
        transform_hlds__dependency_graph__DepGraph_20 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_20);
#line 177 "dependency_graph.m"
        {
#line 177 "dependency_graph.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_29);
        }
#line 177 "dependency_graph.m"
        {
#line 177 "dependency_graph.m"
          hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_29, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23);
        }
#line 178 "dependency_graph.m"
        {
#line 178 "dependency_graph.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_30);
        }
#line 178 "dependency_graph.m"
        {
#line 178 "dependency_graph.m"
          hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_30, transform_hlds__dependency_graph__DepGraph_20, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24);
        }
#line 179 "dependency_graph.m"
        {
#line 179 "dependency_graph.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_31);
        }
#line 179 "dependency_graph.m"
        {
#line 179 "dependency_graph.m"
          mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_31, transform_hlds__dependency_graph__DepGraph_20, &transform_hlds__dependency_graph__DepOrd0_21);
        }
#line 180 "dependency_graph.m"
        {
#line 180 "dependency_graph.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_32);
        }
#line 180 "dependency_graph.m"
        {
#line 180 "dependency_graph.m"
          transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_32, transform_hlds__dependency_graph__DepOrd0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_22);
        }
#line 181 "dependency_graph.m"
        {
#line 181 "dependency_graph.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_33);
        }
#line 181 "dependency_graph.m"
        {
#line 181 "dependency_graph.m"
          hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_33, transform_hlds__dependency_graph__DepOrd_22, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24, &transform_hlds__dependency_graph__DepInfo_7);
        }
#line 151 "dependency_graph.m"
        {
#line 151 "dependency_graph.m"
          hlds__hlds_module__module_info_set_dependency_info_3_p_0(transform_hlds__dependency_graph__DepInfo_7, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
        }
#line 147 "dependency_graph.m"
      }
#line 146 "dependency_graph.m"
    else
#line 145 "dependency_graph.m"
      *transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8;
#line 142 "dependency_graph.m"
  }
#line 41 "dependency_graph.m"
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
