/*
** Automatically generated from `dependency_graph.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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


#line 172 "transform_hlds.dependency_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 175 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 178 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_key_1__pseudo_1;

#line 181 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_1__pseudo_1;

#line 184 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0;

#line 187 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1;

#line 190 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_value_ordered_include_imported_0[2];

#line 193 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_name_ordered_include_imported_0[2];

#line 196 "transform_hlds.dependency_graph.c"
static const MR_Integer transform_hlds__dependency_graph__transform_hlds__dependency_graph__functor_number_map_include_imported_0[2];

#line 199 "transform_hlds.dependency_graph.c"
static const MR_ConstString transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1[1];

#line 202 "transform_hlds.dependency_graph.c"
static const MR_TypeClassMethod transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_method_ids_dependency_node_1[3];

#line 205 "transform_hlds.dependency_graph.c"
static const MR_TypeClassId transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1;

#line 208 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____include_imported_0_0_10001(
#line 211 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 213 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2);

#line 216 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____include_imported_0_0_10001(
#line 219 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 221 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 223 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3);

#line 226 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0_10001(
#line 229 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 231 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2);

#line 234 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0_10001(
#line 237 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 239 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 241 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3);

#line 244 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 247 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 249 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 251 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 253 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 255 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 257 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 260 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 263 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 265 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 267 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 269 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 271 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 273 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 276 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 279 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 281 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);

#line 284 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 287 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 289 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 291 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 293 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 295 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 297 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 300 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 303 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 305 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 307 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 309 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 311 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 313 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 316 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 319 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 321 "transform_hlds.dependency_graph.c"
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

#line 105 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_29_29,
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2);

#line 105 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_29_29,
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2);

#line 237 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(
#line 237 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 237 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 237 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 237 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 206 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 206 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

#line 205 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
#line 205 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 205 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 205 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 205 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 205 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 204 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 204 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 204 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 204 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 204 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 204 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 212 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 212 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

#line 211 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
#line 211 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 211 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 211 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 211 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 211 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 210 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 210 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 210 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 210 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 210 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 210 "dependency_graph.m"
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

#line 573 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_dep_graph_link_5_p_0(
#line 573 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 573 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 573 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8);

#line 562 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_prof_dep_graph_link_5_p_0(
#line 562 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 562 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 562 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8);

#line 471 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(
#line 471 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40,
#line 471 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 471 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ConsId_6,
#line 471 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36,
#line 471 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37);

#line 465 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1(
#line 465 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 465 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 465 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 465 "dependency_graph.m"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_3);

#line 457 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(
#line 457 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23,
#line 457 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 457 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 457 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 457 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4);

#line 446 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(
#line 446 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17,
#line 446 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 446 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 446 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 446 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4);

#line 354 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(
#line 354 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105,
#line 354 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 354 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Goal_6,
#line 354 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77,
#line 354 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);

#line 338 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0_1(
#line 338 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 338 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);

#line 322 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0(
#line 322 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 322 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 322 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 322 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 322 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 289 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_proc_arcs_6_p_0(
#line 289 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 289 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 289 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 289 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_4,
#line 289 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5,
#line 289 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6);

#line 270 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(
#line 270 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 270 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 270 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 270 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 270 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 247 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_nodes_5_p_0(
#line 247 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 247 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 247 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 247 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 247 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 218 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(
#line 218 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 218 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 218 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 218 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 218 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 200 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__dependency_node_1_f_0(
#line 200 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3,
#line 200 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

#line 196 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_5_p_0(
#line 196 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
#line 196 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 196 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 196 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 196 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 196 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 192 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_nodes_5_p_0(
#line 192 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
#line 192 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 192 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 192 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 192 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 192 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 180 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__sets_to_lists_3_p_0(
#line 180 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeInfo_for_T_11,
#line 180 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 180 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 180 "dependency_graph.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 856 "transform_hlds.dependency_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 864 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 872 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 880 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 888 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0 = {
  (MR_String) "include_imported",
  (MR_Integer) 0
};

#line 894 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1 = {
  (MR_String) "do_not_include_imported",
  (MR_Integer) 1
};

#line 900 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_value_ordered_include_imported_0[2] = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0,
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1
};

#line 906 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_name_ordered_include_imported_0[2] = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1,
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0
};

#line 912 "transform_hlds.dependency_graph.c"
static const MR_Integer transform_hlds__dependency_graph__transform_hlds__dependency_graph__functor_number_map_include_imported_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 918 "transform_hlds.dependency_graph.c"
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

#line 935 "transform_hlds.dependency_graph.c"
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

#line 952 "transform_hlds.dependency_graph.c"
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

#line 964 "transform_hlds.dependency_graph.c"
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

#line 976 "transform_hlds.dependency_graph.c"
static const MR_ConstString transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1[1] = {
  (MR_String) "T"
};

#line 981 "transform_hlds.dependency_graph.c"
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

#line 1000 "transform_hlds.dependency_graph.c"
static const MR_TypeClassId transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1 = {
  (MR_String) "transform_hlds.dependency_graph",
  (MR_String) "dependency_node",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1,
  transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_method_ids_dependency_node_1
};

#line 1011 "transform_hlds.dependency_graph.c"
const MR_TypeClassDeclStruct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_decl_dependency_node_1 = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1019 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____include_imported_0_0_10001(
#line 1022 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1024 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2)
#line 1026 "transform_hlds.dependency_graph.c"
{
#line 1028 "transform_hlds.dependency_graph.c"
  {
#line 1030 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 1033 "transform_hlds.dependency_graph.c"
    {
#line 1035 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph____Unify____include_imported_0_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2));
    }
#line 1038 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__succeeded;
#line 1040 "transform_hlds.dependency_graph.c"
  }
#line 1042 "transform_hlds.dependency_graph.c"
}

#line 1045 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____include_imported_0_0_10001(
#line 1048 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 1050 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1052 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3)
#line 1054 "transform_hlds.dependency_graph.c"
{
#line 1056 "transform_hlds.dependency_graph.c"
  {
#line 1058 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__1_1;

#line 1061 "transform_hlds.dependency_graph.c"
    {
#line 1063 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph____Compare____include_imported_0_0(&transform_hlds__dependency_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3));
    }
#line 1066 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__1_1));
#line 1068 "transform_hlds.dependency_graph.c"
  }
#line 1070 "transform_hlds.dependency_graph.c"
}

#line 1073 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0_10001(
#line 1076 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1078 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2)
#line 1080 "transform_hlds.dependency_graph.c"
{
#line 1082 "transform_hlds.dependency_graph.c"
  {
#line 1084 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 1087 "transform_hlds.dependency_graph.c"
    {
#line 1089 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph____Unify____scc_id_0_0(((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_2));
    }
#line 1092 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__succeeded;
#line 1094 "transform_hlds.dependency_graph.c"
  }
#line 1096 "transform_hlds.dependency_graph.c"
}

#line 1099 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0_10001(
#line 1102 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 1104 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1106 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3)
#line 1108 "transform_hlds.dependency_graph.c"
{
#line 1110 "transform_hlds.dependency_graph.c"
  {
#line 1112 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__1_1;

#line 1115 "transform_hlds.dependency_graph.c"
    {
#line 1117 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph____Compare____scc_id_0_0(&transform_hlds__dependency_graph__conv0_HeadVar__1_1, ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_3));
    }
#line 1120 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__1_1));
#line 1122 "transform_hlds.dependency_graph.c"
  }
#line 1124 "transform_hlds.dependency_graph.c"
}

#line 1127 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 1130 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1132 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1134 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1136 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1138 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1140 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1142 "transform_hlds.dependency_graph.c"
{
#line 1144 "transform_hlds.dependency_graph.c"
  {
#line 1146 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1148 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1151 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1153 "transform_hlds.dependency_graph.c"
    {
#line 1155 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1158 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1160 "transform_hlds.dependency_graph.c"
  }
#line 1162 "transform_hlds.dependency_graph.c"
}

#line 1165 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 1168 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1170 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1172 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1174 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1176 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1178 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1180 "transform_hlds.dependency_graph.c"
{
#line 1182 "transform_hlds.dependency_graph.c"
  {
#line 1184 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1186 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1189 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1191 "transform_hlds.dependency_graph.c"
    {
#line 1193 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1196 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1198 "transform_hlds.dependency_graph.c"
  }
#line 1200 "transform_hlds.dependency_graph.c"
}

#line 1203 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 1206 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1208 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
#line 1210 "transform_hlds.dependency_graph.c"
{
#line 1212 "transform_hlds.dependency_graph.c"
  {
#line 1214 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
#line 1216 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1218 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__2_2;

#line 1221 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1223 "transform_hlds.dependency_graph.c"
    {
#line 1225 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 1228 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__2_2));
#line 1230 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__wrapper_arg_2;
#line 1232 "transform_hlds.dependency_graph.c"
  }
#line 1234 "transform_hlds.dependency_graph.c"
}

#line 1237 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 1240 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1242 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1244 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1246 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1248 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1250 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1252 "transform_hlds.dependency_graph.c"
{
#line 1254 "transform_hlds.dependency_graph.c"
  {
#line 1256 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1258 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1261 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1263 "transform_hlds.dependency_graph.c"
    {
#line 1265 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1268 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1270 "transform_hlds.dependency_graph.c"
  }
#line 1272 "transform_hlds.dependency_graph.c"
}

#line 1275 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 1278 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1280 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1282 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1284 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1286 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1288 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1290 "transform_hlds.dependency_graph.c"
{
#line 1292 "transform_hlds.dependency_graph.c"
  {
#line 1294 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1296 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1299 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1301 "transform_hlds.dependency_graph.c"
    {
#line 1303 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1306 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1308 "transform_hlds.dependency_graph.c"
  }
#line 1310 "transform_hlds.dependency_graph.c"
}

#line 1313 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 1316 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1318 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
#line 1320 "transform_hlds.dependency_graph.c"
{
#line 1322 "transform_hlds.dependency_graph.c"
  {
#line 1324 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
#line 1326 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1328 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__2_2;

#line 1331 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1333 "transform_hlds.dependency_graph.c"
    {
#line 1335 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 1338 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__2_2));
#line 1340 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__wrapper_arg_2;
#line 1342 "transform_hlds.dependency_graph.c"
  }
#line 1344 "transform_hlds.dependency_graph.c"
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

#line 105 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_29_29,
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
#line 105 "dependency_graph.m"
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
#line 105 "dependency_graph.m"
}

#line 105 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_29_29,
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
#line 105 "dependency_graph.m"
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
#line 105 "dependency_graph.m"
}

#line 237 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(
#line 237 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 237 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 237 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 237 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 237 "dependency_graph.m"
{
#line 240 "dependency_graph.m"
  while (MR_TRUE)
#line 240 "dependency_graph.m"
    {
#line 240 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 240 "dependency_graph.m"
      {
#line 240 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 240 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 240 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 240 "dependency_graph.m"
        else
#line 241 "dependency_graph.m"
          {
#line 241 "dependency_graph.m"
            MR_Integer transform_hlds__dependency_graph__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 241 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 241 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_19_19;
#line 241 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;
#line 242 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_16_16;

#line 242 "dependency_graph.m"
            {
#line 242 "dependency_graph.m"
              transform_hlds__dependency_graph__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 242 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_11));
#line 242 "dependency_graph.m"
            }
#line 242 "dependency_graph.m"
            {
#line 242 "dependency_graph.m"
              mercury__digraph__add_vertex_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__dependency_graph__V_19_19)), &transform_hlds__dependency_graph__V_16_16, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20);
            }
#line 243 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 243 "dependency_graph.m"
            {
#line 243 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__ProcIds_12;
#line 243 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;

#line 243 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 243 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 243 "dependency_graph.m"
            }
#line 243 "dependency_graph.m"
            continue;
#line 241 "dependency_graph.m"
          }
#line 240 "dependency_graph.m"
      }
#line 240 "dependency_graph.m"
      break;
#line 240 "dependency_graph.m"
    }
#line 237 "dependency_graph.m"
}

#line 206 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 206 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
#line 206 "dependency_graph.m"
{
#line 206 "dependency_graph.m"
  {
#line 206 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 206 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__HeadVar__2_2;
#line 206 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__conv0_HeadVar__2_2;

#line 206 "dependency_graph.m"
    {
#line 206 "dependency_graph.m"
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = mercury__std_util__id_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)));
    }
#line 206 "dependency_graph.m"
    transform_hlds__dependency_graph__HeadVar__2_2 = ((MR_Word) transform_hlds__dependency_graph__conv0_HeadVar__2_2);
#line 206 "dependency_graph.m"
    return transform_hlds__dependency_graph__HeadVar__2_2;
#line 206 "dependency_graph.m"
  }
#line 206 "dependency_graph.m"
}

#line 205 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
#line 205 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 205 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 205 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 205 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 205 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 205 "dependency_graph.m"
{
#line 205 "dependency_graph.m"
  {
#line 205 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 205 "dependency_graph.m"
    {
#line 205 "dependency_graph.m"
      transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
#line 205 "dependency_graph.m"
      return;
    }
#line 205 "dependency_graph.m"
  }
#line 205 "dependency_graph.m"
}

#line 204 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 204 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 204 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 204 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 204 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 204 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 204 "dependency_graph.m"
{
#line 204 "dependency_graph.m"
  {
#line 204 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 204 "dependency_graph.m"
    {
#line 204 "dependency_graph.m"
      transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
#line 204 "dependency_graph.m"
      return;
    }
#line 204 "dependency_graph.m"
  }
#line 204 "dependency_graph.m"
}

#line 212 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 212 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
#line 212 "dependency_graph.m"
{
#line 349 "dependency_graph.m"
  {
#line 349 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 349 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 349 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));

#line 349 "dependency_graph.m"
    return transform_hlds__dependency_graph__HeadVar__2_2;
#line 349 "dependency_graph.m"
  }
#line 212 "dependency_graph.m"
}

#line 211 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
#line 211 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 211 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 211 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 211 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 211 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 211 "dependency_graph.m"
{
#line 211 "dependency_graph.m"
  {
#line 211 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 211 "dependency_graph.m"
    {
#line 211 "dependency_graph.m"
      transform_hlds__dependency_graph__add_pred_arcs_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
#line 211 "dependency_graph.m"
      return;
    }
#line 211 "dependency_graph.m"
  }
#line 211 "dependency_graph.m"
}

#line 210 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 210 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 210 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 210 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 210 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 210 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 210 "dependency_graph.m"
{
#line 210 "dependency_graph.m"
  {
#line 210 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 210 "dependency_graph.m"
    {
#line 210 "dependency_graph.m"
      transform_hlds__dependency_graph__add_pred_nodes_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
#line 210 "dependency_graph.m"
      return;
    }
#line 210 "dependency_graph.m"
  }
#line 210 "dependency_graph.m"
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
#line 681 "dependency_graph.m"
      return;
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

#line 51 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph____Compare____include_imported_0_0(
#line 51 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
#line 51 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 51 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
#line 51 "dependency_graph.m"
{
#line 51 "dependency_graph.m"
  {
#line 51 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 51 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__dependency_graph__HeadVar__2_2;
#line 51 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__dependency_graph__HeadVar__3_3;

#line 51 "dependency_graph.m"
    {
#line 51 "dependency_graph.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Cast_HeadVar1_4, transform_hlds__dependency_graph__Cast_HeadVar2_5);
#line 51 "dependency_graph.m"
      return;
    }
#line 51 "dependency_graph.m"
  }
#line 51 "dependency_graph.m"
}

#line 51 "dependency_graph.m"
MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____include_imported_0_0(
#line 51 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_1,
#line 51 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
#line 51 "dependency_graph.m"
{
#line 2050 "transform_hlds.dependency_graph.c"
  {
#line 2052 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__HeadVar__2_1 == transform_hlds__dependency_graph__HeadVar__2_2);

#line 2055 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__succeeded;
#line 2057 "transform_hlds.dependency_graph.c"
  }
#line 51 "dependency_graph.m"
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
#line 659 "dependency_graph.m"
      return;
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
#line 661 "dependency_graph.m"
      return;
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
#line 662 "dependency_graph.m"
        return;
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
#line 2188 "transform_hlds.dependency_graph.c"
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
#line 2232 "transform_hlds.dependency_graph.c"
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

#line 573 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_dep_graph_link_5_p_0(
#line 573 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 573 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 573 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8)
#line 573 "dependency_graph.m"
{
#line 576 "dependency_graph.m"
  {
#line 576 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PPredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 0)));
#line 576 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__PProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 1)));
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 0)));
#line 576 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__CProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 1)));
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PPredInfo_14;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PProcInfo_15;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CPredInfo_16;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CProcInfo_17;
#line 576 "dependency_graph.m"
    MR_String transform_hlds__dependency_graph__PName_18;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PDet_19;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PModes_20;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PContext_21;
#line 576 "dependency_graph.m"
    MR_String transform_hlds__dependency_graph__CName_22;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CDet_23;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CModes_24;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CContext_25;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__ModeVarSet_26;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__V_30_30;
#line 576 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__V_35_35;

#line 579 "dependency_graph.m"
    {
#line 579 "dependency_graph.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__PPredId_10, transform_hlds__dependency_graph__PProcId_11, &transform_hlds__dependency_graph__PPredInfo_14, &transform_hlds__dependency_graph__PProcInfo_15);
    }
#line 581 "dependency_graph.m"
    {
#line 581 "dependency_graph.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__CPredId_12, transform_hlds__dependency_graph__CProcId_13, &transform_hlds__dependency_graph__CPredInfo_16, &transform_hlds__dependency_graph__CProcInfo_17);
    }
#line 583 "dependency_graph.m"
    {
#line 583 "dependency_graph.m"
      transform_hlds__dependency_graph__PName_18 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dependency_graph__PPredInfo_14);
    }
#line 584 "dependency_graph.m"
    {
#line 584 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__dependency_graph__PProcInfo_15, &transform_hlds__dependency_graph__PDet_19);
    }
#line 585 "dependency_graph.m"
    {
#line 585 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__dependency_graph__PProcInfo_15, &transform_hlds__dependency_graph__PModes_20);
    }
#line 586 "dependency_graph.m"
    {
#line 586 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__dependency_graph__PProcInfo_15, &transform_hlds__dependency_graph__PContext_21);
    }
#line 587 "dependency_graph.m"
    {
#line 587 "dependency_graph.m"
      transform_hlds__dependency_graph__CName_22 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dependency_graph__CPredInfo_16);
    }
#line 588 "dependency_graph.m"
    {
#line 588 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__dependency_graph__CProcInfo_17, &transform_hlds__dependency_graph__CDet_23);
    }
#line 589 "dependency_graph.m"
    {
#line 589 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__dependency_graph__CProcInfo_17, &transform_hlds__dependency_graph__CModes_24);
    }
#line 590 "dependency_graph.m"
    {
#line 590 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__dependency_graph__CProcInfo_17, &transform_hlds__dependency_graph__CContext_25);
    }
#line 591 "dependency_graph.m"
    {
#line 591 "dependency_graph.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &transform_hlds__dependency_graph__ModeVarSet_26);
    }
#line 593 "dependency_graph.m"
    {
#line 593 "dependency_graph.m"
      transform_hlds__dependency_graph__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 593 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_30_30, 0) = ((MR_Box) (transform_hlds__dependency_graph__PName_18));
#line 593 "dependency_graph.m"
    }
#line 592 "dependency_graph.m"
    {
#line 592 "dependency_graph.m"
      parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_8_p_0((MR_Integer) 0, transform_hlds__dependency_graph__ModeVarSet_26, transform_hlds__dependency_graph__V_30_30, transform_hlds__dependency_graph__PModes_20, transform_hlds__dependency_graph__PDet_19, transform_hlds__dependency_graph__PContext_21);
    }
#line 594 "dependency_graph.m"
    {
#line 594 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 596 "dependency_graph.m"
    {
#line 596 "dependency_graph.m"
      transform_hlds__dependency_graph__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 596 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_35_35, 0) = ((MR_Box) (transform_hlds__dependency_graph__CName_22));
#line 596 "dependency_graph.m"
    }
#line 595 "dependency_graph.m"
    {
#line 595 "dependency_graph.m"
      parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_8_p_0((MR_Integer) 0, transform_hlds__dependency_graph__ModeVarSet_26, transform_hlds__dependency_graph__V_35_35, transform_hlds__dependency_graph__CModes_24, transform_hlds__dependency_graph__CDet_23, transform_hlds__dependency_graph__CContext_25);
    }
#line 597 "dependency_graph.m"
    {
#line 597 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 597 "dependency_graph.m"
      return;
    }
#line 576 "dependency_graph.m"
  }
#line 573 "dependency_graph.m"
}

#line 562 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_prof_dep_graph_link_5_p_0(
#line 562 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 562 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 562 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8)
#line 562 "dependency_graph.m"
{
#line 565 "dependency_graph.m"
  {
#line 565 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 565 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PPredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 0)));
#line 565 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__PProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 1)));
#line 565 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 0)));
#line 565 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__CProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 1)));
#line 565 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__ProcLabel_28;
#line 565 "dependency_graph.m"
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
#line 569 "dependency_graph.m"
    {
#line 569 "dependency_graph.m"
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
#line 571 "dependency_graph.m"
    {
#line 571 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 571 "dependency_graph.m"
      return;
    }
#line 565 "dependency_graph.m"
  }
#line 562 "dependency_graph.m"
}

#line 471 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(
#line 471 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40,
#line 471 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 471 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ConsId_6,
#line 471 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36,
#line 471 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37)
#line 471 "dependency_graph.m"
{
#line 477 "dependency_graph.m"
  {
#line 477 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 477 "dependency_graph.m"
#line 477 "dependency_graph.m"
    switch (MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) {
#line 477 "dependency_graph.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 477 "dependency_graph.m"
      case (MR_Integer) 0:
#line 499 "dependency_graph.m"
        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
        break;
#line 477 "dependency_graph.m"
      case (MR_Integer) 1:
#line 498 "dependency_graph.m"
        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
        break;
#line 477 "dependency_graph.m"
      case (MR_Integer) 2:
#line 503 "dependency_graph.m"
        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
        break;
#line 477 "dependency_graph.m"
      case (MR_Integer) 3:
#line 477 "dependency_graph.m"
#line 477 "dependency_graph.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) {
#line 477 "dependency_graph.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 477 "dependency_graph.m"
          case (MR_Integer) 0:
#line 504 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 1:
#line 505 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 2:
#line 489 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 3:
#line 490 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 4:
#line 477 "dependency_graph.m"
            {
#line 477 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__ShroudedPredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 1)));
#line 477 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__PredProcId_10;
#line 485 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__Callee_11;
#line 482 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__TypeInfo_42_42;
#line 482 "dependency_graph.m"
              MR_Box transform_hlds__dependency_graph__V_38_38;
#line 2720 "transform_hlds.dependency_graph.c"
              MR_Box MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box);

#line 478 "dependency_graph.m"
              {
#line 478 "dependency_graph.m"
                transform_hlds__dependency_graph__PredProcId_10 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__dependency_graph__ShroudedPredProcId_8);
              }
#line 2728 "transform_hlds.dependency_graph.c"
              transform_hlds__dependency_graph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 0)), (MR_Integer) 7)));
#line 2730 "transform_hlds.dependency_graph.c"
              {
#line 2732 "transform_hlds.dependency_graph.c"
                transform_hlds__dependency_graph__V_38_38 = transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40), ((MR_Box) (transform_hlds__dependency_graph__PredProcId_10)));
              }
#line 2735 "transform_hlds.dependency_graph.c"
              {
#line 2737 "transform_hlds.dependency_graph.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_42_42);
              }
#line 482 "dependency_graph.m"
              {
#line 482 "dependency_graph.m"
                transform_hlds__dependency_graph__succeeded = mercury__digraph__search_key_3_p_0(transform_hlds__dependency_graph__TypeInfo_42_42, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36, transform_hlds__dependency_graph__V_38_38, &transform_hlds__dependency_graph__Callee_11);
              }
#line 485 "dependency_graph.m"
              if (transform_hlds__dependency_graph__succeeded)
#line 484 "dependency_graph.m"
                {
#line 484 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__TypeInfo_44_44;

#line 2752 "transform_hlds.dependency_graph.c"
                  {
#line 2754 "transform_hlds.dependency_graph.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_44_44);
                  }
#line 484 "dependency_graph.m"
                  {
#line 484 "dependency_graph.m"
                    mercury__digraph__add_edge_4_p_0(transform_hlds__dependency_graph__TypeInfo_44_44, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Callee_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37);
#line 484 "dependency_graph.m"
                    return;
                  }
#line 484 "dependency_graph.m"
                }
#line 485 "dependency_graph.m"
              else
#line 485 "dependency_graph.m"
                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            }
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 5:
#line 491 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 6:
#line 492 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 7:
#line 493 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 8:
#line 494 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 9:
#line 495 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 10:
#line 496 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 11:
#line 497 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 12:
#line 500 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 13:
#line 501 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
          case (MR_Integer) 14:
#line 502 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 477 "dependency_graph.m"
            break;
#line 477 "dependency_graph.m"
        }
#line 477 "dependency_graph.m"
        break;
#line 477 "dependency_graph.m"
    }
#line 477 "dependency_graph.m"
  }
#line 471 "dependency_graph.m"
}

#line 465 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1(
#line 465 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 465 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 465 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 465 "dependency_graph.m"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_3)
#line 465 "dependency_graph.m"
{
#line 465 "dependency_graph.m"
  {
#line 465 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 465 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37;

#line 465 "dependency_graph.m"
    {
#line 465 "dependency_graph.m"
      transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), &transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37);
    }
#line 465 "dependency_graph.m"
    *transform_hlds__dependency_graph__wrapper_arg_3 = ((MR_Box) (transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37));
#line 465 "dependency_graph.m"
  }
#line 465 "dependency_graph.m"
}

#line 457 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(
#line 457 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23,
#line 457 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 457 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 457 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 457 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4)
#line 457 "dependency_graph.m"
{
#line 461 "dependency_graph.m"
  while (MR_TRUE)
#line 461 "dependency_graph.m"
    {
#line 461 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 461 "dependency_graph.m"
      {
#line 461 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 461 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3;
#line 461 "dependency_graph.m"
        else
#line 462 "dependency_graph.m"
          {
#line 462 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeInfo_29_29;
#line 462 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeInfo_31_31;
#line 462 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Case_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 462 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 462 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 0)));
#line 462 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 1)));
#line 462 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 2)));
#line 462 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18;
#line 462 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_19_19;
#line 462 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;
#line 462 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
#line 465 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20;

#line 464 "dependency_graph.m"
            {
#line 464 "dependency_graph.m"
              transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__MainConsId_13, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18);
            }
#line 465 "dependency_graph.m"
            {
#line 465 "dependency_graph.m"
              transform_hlds__dependency_graph__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 465 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 0) = ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_6[0]));
#line 465 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 1) = ((MR_Box) (transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1));
#line 465 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 465 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 3) = ((MR_Box) (transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23));
#line 465 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 4) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1));
#line 465 "dependency_graph.m"
            }
#line 2957 "transform_hlds.dependency_graph.c"
            {
#line 2959 "transform_hlds.dependency_graph.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_29_29);
            }
#line 2962 "transform_hlds.dependency_graph.c"
            {
#line 2964 "transform_hlds.dependency_graph.c"
              transform_hlds__dependency_graph__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2966 "transform_hlds.dependency_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1));
#line 2968 "transform_hlds.dependency_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeInfo_31_31, 1) = ((MR_Box) (transform_hlds__dependency_graph__TypeInfo_29_29));
#line 2970 "transform_hlds.dependency_graph.c"
            }
#line 465 "dependency_graph.m"
            {
#line 465 "dependency_graph.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, transform_hlds__dependency_graph__TypeInfo_31_31, transform_hlds__dependency_graph__V_19_19, transform_hlds__dependency_graph__OtherConsIds_14, ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18)), &transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20);
            }
#line 465 "dependency_graph.m"
            transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20 = ((MR_Word) transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20);
#line 466 "dependency_graph.m"
            {
#line 466 "dependency_graph.m"
              transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Goal_15, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
#line 467 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 467 "dependency_graph.m"
            {
#line 467 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__Cases_11;
#line 467 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

#line 467 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
#line 467 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
#line 467 "dependency_graph.m"
            }
#line 467 "dependency_graph.m"
            continue;
#line 462 "dependency_graph.m"
          }
#line 461 "dependency_graph.m"
      }
#line 461 "dependency_graph.m"
      break;
#line 461 "dependency_graph.m"
    }
#line 457 "dependency_graph.m"
}

#line 446 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(
#line 446 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17,
#line 446 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 446 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 446 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 446 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4)
#line 446 "dependency_graph.m"
{
#line 450 "dependency_graph.m"
  while (MR_TRUE)
#line 450 "dependency_graph.m"
    {
#line 450 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 450 "dependency_graph.m"
      {
#line 450 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 450 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 450 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3;
#line 450 "dependency_graph.m"
        else
#line 451 "dependency_graph.m"
          {
#line 451 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 451 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 451 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15;

#line 452 "dependency_graph.m"
            {
#line 452 "dependency_graph.m"
              transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Goal_10, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15);
            }
#line 453 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 453 "dependency_graph.m"
            {
#line 453 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__Goals_11;
#line 453 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15;

#line 453 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
#line 453 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
#line 453 "dependency_graph.m"
            }
#line 453 "dependency_graph.m"
            continue;
#line 451 "dependency_graph.m"
          }
#line 450 "dependency_graph.m"
      }
#line 450 "dependency_graph.m"
      break;
#line 450 "dependency_graph.m"
    }
#line 446 "dependency_graph.m"
}

#line 354 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(
#line 354 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105,
#line 354 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 354 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Goal_6,
#line 354 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77,
#line 354 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78)
#line 354 "dependency_graph.m"
{
#line 358 "dependency_graph.m"
  while (MR_TRUE)
#line 358 "dependency_graph.m"
    {
#line 358 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 358 "dependency_graph.m"
      {
#line 358 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;
#line 358 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Goal_6, (MR_Integer) 0)));
#line 359 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Goal_6, (MR_Integer) 1)));

#line 365 "dependency_graph.m"
#line 365 "dependency_graph.m"
        switch (MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) {
#line 365 "dependency_graph.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 365 "dependency_graph.m"
          case (MR_Integer) 0:
#line 374 "dependency_graph.m"
            {
#line 374 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__SubGoal_19 = (MR_Word) MR_body(((MR_Word) transform_hlds__dependency_graph__GoalExpr_8), (MR_Integer) 0);

#line 375 "dependency_graph.m"
              /* direct tailcall eliminated */
#line 375 "dependency_graph.m"
              {
#line 375 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_19;

#line 375 "dependency_graph.m"
                transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 375 "dependency_graph.m"
              }
#line 375 "dependency_graph.m"
              continue;
#line 374 "dependency_graph.m"
            }
#line 365 "dependency_graph.m"
            break;
#line 365 "dependency_graph.m"
          case (MR_Integer) 1:
#line 411 "dependency_graph.m"
            {
#line 411 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__Unify_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 411 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)));
#line 411 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 411 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 411 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));

#line 414 "dependency_graph.m"
#line 414 "dependency_graph.m"
              switch (MR_tag((MR_Word) transform_hlds__dependency_graph__Unify_38)) {
#line 414 "dependency_graph.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 414 "dependency_graph.m"
                case (MR_Integer) 0:
#line 417 "dependency_graph.m"
                  {
#line 417 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 1)));
#line 417 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)));
#line 417 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 2)));
#line 417 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 3)));
#line 417 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 4)));
#line 417 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 5)));
#line 417 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 6)));

#line 418 "dependency_graph.m"
                    {
#line 418 "dependency_graph.m"
                      transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__ConsId_45, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 418 "dependency_graph.m"
                      return;
                    }
#line 417 "dependency_graph.m"
                  }
#line 414 "dependency_graph.m"
                  break;
#line 414 "dependency_graph.m"
                case (MR_Integer) 1:
#line 420 "dependency_graph.m"
                  {
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__ConsId_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 1)));
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)));
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 2)));
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 3)));
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 4)));
#line 420 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 5)));

#line 421 "dependency_graph.m"
                    {
#line 421 "dependency_graph.m"
                      transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__ConsId_97, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 421 "dependency_graph.m"
                      return;
                    }
#line 420 "dependency_graph.m"
                  }
#line 414 "dependency_graph.m"
                  break;
#line 414 "dependency_graph.m"
                case (MR_Integer) 2:
#line 413 "dependency_graph.m"
                  *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 414 "dependency_graph.m"
                  break;
#line 414 "dependency_graph.m"
                case (MR_Integer) 3:
#line 414 "dependency_graph.m"
#line 414 "dependency_graph.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)))) {
#line 414 "dependency_graph.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 414 "dependency_graph.m"
                    case (MR_Integer) 0:
#line 415 "dependency_graph.m"
                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 414 "dependency_graph.m"
                      break;
#line 414 "dependency_graph.m"
                    case (MR_Integer) 1:
#line 423 "dependency_graph.m"
                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 414 "dependency_graph.m"
                      break;
#line 414 "dependency_graph.m"
                  }
#line 414 "dependency_graph.m"
                  break;
#line 414 "dependency_graph.m"
              }
#line 411 "dependency_graph.m"
            }
#line 365 "dependency_graph.m"
            break;
#line 365 "dependency_graph.m"
          case (MR_Integer) 2:
#line 392 "dependency_graph.m"
            {
#line 392 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__PredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)));
#line 392 "dependency_graph.m"
              MR_Integer transform_hlds__dependency_graph__ProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 392 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__Builtin_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 392 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 392 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));
#line 392 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 5)));

#line 395 "dependency_graph.m"
#line 395 "dependency_graph.m"
              switch (transform_hlds__dependency_graph__Builtin_31) {
#line 395 "dependency_graph.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 395 "dependency_graph.m"
                case (MR_Integer) 0:
#line 394 "dependency_graph.m"
                  *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 395 "dependency_graph.m"
                  break;
#line 395 "dependency_graph.m"
                case (MR_Integer) 2:
#line 395 "dependency_graph.m"
                case (MR_Integer) 1:
#line 406 "dependency_graph.m"
                  {
#line 406 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__Callee_34;
#line 402 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__TypeInfo_107_107;
#line 402 "dependency_graph.m"
                    MR_Box transform_hlds__dependency_graph__V_86_86;
#line 402 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_87_87;

#line 403 "dependency_graph.m"
                    {
#line 403 "dependency_graph.m"
                      transform_hlds__dependency_graph__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "dependency_graph.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_87_87, 0) = ((MR_Box) (transform_hlds__dependency_graph__PredId_28));
#line 403 "dependency_graph.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_87_87, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_29));
#line 403 "dependency_graph.m"
                    }
#line 403 "dependency_graph.m"
                    {
#line 403 "dependency_graph.m"
                      transform_hlds__dependency_graph__V_86_86 = transform_hlds__dependency_graph__dependency_node_1_f_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__V_87_87);
                    }
#line 3316 "transform_hlds.dependency_graph.c"
                    {
#line 3318 "transform_hlds.dependency_graph.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_107_107);
                    }
#line 402 "dependency_graph.m"
                    {
#line 402 "dependency_graph.m"
                      transform_hlds__dependency_graph__succeeded = mercury__digraph__search_key_3_p_0(transform_hlds__dependency_graph__TypeInfo_107_107, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__V_86_86, &transform_hlds__dependency_graph__Callee_34);
                    }
#line 406 "dependency_graph.m"
                    if (transform_hlds__dependency_graph__succeeded)
#line 405 "dependency_graph.m"
                      {
#line 405 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__TypeInfo_109_109;

#line 3333 "transform_hlds.dependency_graph.c"
                        {
#line 3335 "transform_hlds.dependency_graph.c"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_109_109);
                        }
#line 405 "dependency_graph.m"
                        {
#line 405 "dependency_graph.m"
                          mercury__digraph__add_edge_4_p_0(transform_hlds__dependency_graph__TypeInfo_109_109, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Callee_34, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 405 "dependency_graph.m"
                          return;
                        }
#line 405 "dependency_graph.m"
                      }
#line 406 "dependency_graph.m"
                    else
#line 406 "dependency_graph.m"
                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 406 "dependency_graph.m"
                  }
#line 395 "dependency_graph.m"
                  break;
#line 395 "dependency_graph.m"
              }
#line 392 "dependency_graph.m"
            }
#line 365 "dependency_graph.m"
            break;
#line 365 "dependency_graph.m"
          case (MR_Integer) 3:
#line 365 "dependency_graph.m"
#line 365 "dependency_graph.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)))) {
#line 365 "dependency_graph.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 365 "dependency_graph.m"
              case (MR_Integer) 0:
#line 390 "dependency_graph.m"
                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 365 "dependency_graph.m"
                break;
#line 365 "dependency_graph.m"
              case (MR_Integer) 1:
#line 426 "dependency_graph.m"
                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 365 "dependency_graph.m"
                break;
#line 365 "dependency_graph.m"
              case (MR_Integer) 2:
#line 363 "dependency_graph.m"
                {
#line 363 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 361 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 364 "dependency_graph.m"
                  {
#line 364 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Goals_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 364 "dependency_graph.m"
                    return;
                  }
#line 363 "dependency_graph.m"
                }
#line 365 "dependency_graph.m"
                break;
#line 365 "dependency_graph.m"
              case (MR_Integer) 3:
#line 363 "dependency_graph.m"
                {
#line 363 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Goals_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 364 "dependency_graph.m"
                  {
#line 364 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Goals_110, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 364 "dependency_graph.m"
                    return;
                  }
#line 363 "dependency_graph.m"
                }
#line 365 "dependency_graph.m"
                break;
#line 365 "dependency_graph.m"
              case (MR_Integer) 4:
#line 366 "dependency_graph.m"
                {
#line 366 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 366 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph___Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 366 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));

#line 367 "dependency_graph.m"
                  {
#line 367 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Cases_14, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 367 "dependency_graph.m"
                    return;
                  }
#line 366 "dependency_graph.m"
                }
#line 365 "dependency_graph.m"
                break;
#line 365 "dependency_graph.m"
              case (MR_Integer) 5:
#line 377 "dependency_graph.m"
                {
#line 377 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Reason_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 377 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__SubGoal_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 379 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__FGT_22;
#line 379 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__V_21_21;

#line 379 "dependency_graph.m"
                  transform_hlds__dependency_graph__succeeded = ((((MR_tag((MR_Word) transform_hlds__dependency_graph__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 379 "dependency_graph.m"
                  if (transform_hlds__dependency_graph__succeeded)
#line 379 "dependency_graph.m"
                    {
#line 379 "dependency_graph.m"
                      transform_hlds__dependency_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 1)));
#line 379 "dependency_graph.m"
                      transform_hlds__dependency_graph__FGT_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 2)));
#line 381 "dependency_graph.m"
#line 381 "dependency_graph.m"
                      switch (transform_hlds__dependency_graph__FGT_22) {
#line 381 "dependency_graph.m"
                        default:
#line 381 "dependency_graph.m"
                          transform_hlds__dependency_graph__succeeded = MR_FALSE;
#line 381 "dependency_graph.m"
                          break;
#line 381 "dependency_graph.m"
                        case (MR_Integer) 1:
#line 380 "dependency_graph.m"
                          transform_hlds__dependency_graph__succeeded = MR_TRUE;
#line 381 "dependency_graph.m"
                          break;
#line 381 "dependency_graph.m"
                        case (MR_Integer) 2:
#line 381 "dependency_graph.m"
                          transform_hlds__dependency_graph__succeeded = MR_TRUE;
#line 381 "dependency_graph.m"
                          break;
#line 381 "dependency_graph.m"
                      }
#line 379 "dependency_graph.m"
                    }
#line 386 "dependency_graph.m"
                  if (transform_hlds__dependency_graph__succeeded)
#line 386 "dependency_graph.m"
                    *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 386 "dependency_graph.m"
                  else
#line 387 "dependency_graph.m"
                    {
#line 387 "dependency_graph.m"
                      /* direct tailcall eliminated */
#line 387 "dependency_graph.m"
                      {
#line 387 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_96;

#line 387 "dependency_graph.m"
                        transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 387 "dependency_graph.m"
                      }
#line 387 "dependency_graph.m"
                      continue;
#line 387 "dependency_graph.m"
                    }
#line 377 "dependency_graph.m"
                }
#line 365 "dependency_graph.m"
                break;
#line 365 "dependency_graph.m"
              case (MR_Integer) 6:
#line 369 "dependency_graph.m"
                {
#line 369 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 369 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Then_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 369 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Else_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));
#line 369 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_91_91;
#line 369 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_92_92;
#line 369 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph___Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 370 "dependency_graph.m"
                  {
#line 370 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Cond_16, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_91_91);
                  }
#line 371 "dependency_graph.m"
                  {
#line 371 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Then_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_91_91, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_92_92);
                  }
#line 372 "dependency_graph.m"
                  /* direct tailcall eliminated */
#line 372 "dependency_graph.m"
                  {
#line 372 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__Else_18;
#line 372 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_92_92;

#line 372 "dependency_graph.m"
                    transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77;
#line 372 "dependency_graph.m"
                    transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 372 "dependency_graph.m"
                  }
#line 372 "dependency_graph.m"
                  continue;
#line 369 "dependency_graph.m"
                }
#line 365 "dependency_graph.m"
                break;
#line 365 "dependency_graph.m"
              case (MR_Integer) 7:
#line 428 "dependency_graph.m"
                {
#line 428 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__ShortHand_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 434 "dependency_graph.m"
#line 434 "dependency_graph.m"
                  switch (MR_tag((MR_Word) transform_hlds__dependency_graph__ShortHand_66)) {
#line 434 "dependency_graph.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 434 "dependency_graph.m"
                    case (MR_Integer) 0:
#line 438 "dependency_graph.m"
                      {
#line 438 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__LHS_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
#line 438 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__RHS_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));
#line 438 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_79_79;

#line 439 "dependency_graph.m"
                        {
#line 439 "dependency_graph.m"
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__LHS_75, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_79_79);
                        }
#line 440 "dependency_graph.m"
                        /* direct tailcall eliminated */
#line 440 "dependency_graph.m"
                        {
#line 440 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__RHS_76;
#line 440 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_79_79;

#line 440 "dependency_graph.m"
                          transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77;
#line 440 "dependency_graph.m"
                          transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 440 "dependency_graph.m"
                        }
#line 440 "dependency_graph.m"
                        continue;
#line 438 "dependency_graph.m"
                      }
#line 434 "dependency_graph.m"
                      break;
#line 434 "dependency_graph.m"
                    case (MR_Integer) 1:
#line 431 "dependency_graph.m"
                      {
#line 431 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__MainGoal_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 4)));
#line 431 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__OrElseGoals_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 5)));
#line 431 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_82_82;
#line 430 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph___GoalType_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
#line 430 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph___Outer_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));
#line 430 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph___Inner_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 2)));
#line 430 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph___OrElseInners_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 6)));
#line 430 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph___Vars_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 3)));

#line 432 "dependency_graph.m"
                        {
#line 432 "dependency_graph.m"
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__MainGoal_70, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_82_82);
                        }
#line 433 "dependency_graph.m"
                        {
#line 433 "dependency_graph.m"
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_105, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__OrElseGoals_71, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_82_82, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 433 "dependency_graph.m"
                          return;
                        }
#line 431 "dependency_graph.m"
                      }
#line 434 "dependency_graph.m"
                      break;
#line 434 "dependency_graph.m"
                    case (MR_Integer) 2:
#line 435 "dependency_graph.m"
                      {
#line 435 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__SubGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 2)));
#line 435 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
#line 435 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));

#line 436 "dependency_graph.m"
                        /* direct tailcall eliminated */
#line 436 "dependency_graph.m"
                        {
#line 436 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_100;

#line 436 "dependency_graph.m"
                          transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 436 "dependency_graph.m"
                        }
#line 436 "dependency_graph.m"
                        continue;
#line 435 "dependency_graph.m"
                      }
#line 434 "dependency_graph.m"
                      break;
#line 434 "dependency_graph.m"
                  }
#line 428 "dependency_graph.m"
                }
#line 365 "dependency_graph.m"
                break;
#line 365 "dependency_graph.m"
            }
#line 365 "dependency_graph.m"
            break;
#line 365 "dependency_graph.m"
        }
#line 358 "dependency_graph.m"
      }
#line 358 "dependency_graph.m"
      break;
#line 358 "dependency_graph.m"
    }
#line 354 "dependency_graph.m"
}

#line 338 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0_1(
#line 338 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 338 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
#line 338 "dependency_graph.m"
{
#line 338 "dependency_graph.m"
  {
#line 338 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
#line 338 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 338 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__conv1_HeadVar__2_2;

#line 338 "dependency_graph.m"
    {
#line 338 "dependency_graph.m"
      transform_hlds__dependency_graph__conv1_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 338 "dependency_graph.m"
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv1_HeadVar__2_2));
#line 338 "dependency_graph.m"
    return transform_hlds__dependency_graph__wrapper_arg_2;
#line 338 "dependency_graph.m"
  }
#line 338 "dependency_graph.m"
}

#line 322 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0(
#line 322 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 322 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 322 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 322 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 322 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 322 "dependency_graph.m"
{
#line 325 "dependency_graph.m"
  while (MR_TRUE)
#line 325 "dependency_graph.m"
    {
#line 325 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 325 "dependency_graph.m"
      {
#line 325 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 325 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 325 "dependency_graph.m"
        else
#line 326 "dependency_graph.m"
          {
#line 326 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_29_29;
#line 326 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 326 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 326 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_16;
#line 326 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
#line 326 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27;
#line 328 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

#line 327 "dependency_graph.m"
            {
#line 327 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
#line 3784 "transform_hlds.dependency_graph.c"
            transform_hlds__dependency_graph__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 328 "dependency_graph.m"
            {
#line 328 "dependency_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_29_29, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
#line 328 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
#line 330 "dependency_graph.m"
            transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__IncludeImported_3 == (MR_Integer) 1);
#line 330 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 331 "dependency_graph.m"
              {
#line 331 "dependency_graph.m"
                transform_hlds__dependency_graph__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__dependency_graph__PredInfo_17);
              }
#line 334 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 334 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 334 "dependency_graph.m"
            else
#line 335 "dependency_graph.m"
              {
#line 335 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__ClausesInfo_18;
#line 335 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__ClausesRep_19;
#line 335 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Clauses_21;
#line 335 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Goals_22;
#line 335 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Caller_23;
#line 336 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph___ItemNumbers_20;

#line 335 "dependency_graph.m"
                {
#line 335 "dependency_graph.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__dependency_graph__PredInfo_17, &transform_hlds__dependency_graph__ClausesInfo_18);
                }
#line 336 "dependency_graph.m"
                {
#line 336 "dependency_graph.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__dependency_graph__ClausesInfo_18, &transform_hlds__dependency_graph__ClausesRep_19, &transform_hlds__dependency_graph___ItemNumbers_20);
                }
#line 337 "dependency_graph.m"
                {
#line 337 "dependency_graph.m"
                  hlds__hlds_clauses__get_clause_list_any_order_2_p_0(transform_hlds__dependency_graph__ClausesRep_19, &transform_hlds__dependency_graph__Clauses_21);
                }
#line 338 "dependency_graph.m"
                {
#line 338 "dependency_graph.m"
                  transform_hlds__dependency_graph__Goals_22 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dependency_graph_scalar_common_4[0], transform_hlds__dependency_graph__Clauses_21);
                }
#line 339 "dependency_graph.m"
                {
#line 339 "dependency_graph.m"
                  mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_29_29, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__Caller_23);
                }
#line 340 "dependency_graph.m"
                {
#line 340 "dependency_graph.m"
                  transform_hlds__dependency_graph__add_dependency_arcs_in_goals_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[1], transform_hlds__dependency_graph__Caller_23, transform_hlds__dependency_graph__Goals_22, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27);
                }
#line 335 "dependency_graph.m"
              }
#line 342 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 342 "dependency_graph.m"
            {
#line 342 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
#line 342 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27;

#line 342 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 342 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 342 "dependency_graph.m"
            }
#line 342 "dependency_graph.m"
            continue;
#line 326 "dependency_graph.m"
          }
#line 325 "dependency_graph.m"
      }
#line 325 "dependency_graph.m"
      break;
#line 325 "dependency_graph.m"
    }
#line 322 "dependency_graph.m"
}

#line 289 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_proc_arcs_6_p_0(
#line 289 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 289 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 289 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 289 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_4,
#line 289 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5,
#line 289 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6)
#line 289 "dependency_graph.m"
{
#line 292 "dependency_graph.m"
  while (MR_TRUE)
#line 292 "dependency_graph.m"
    {
#line 292 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 292 "dependency_graph.m"
      {
#line 292 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 292 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5;
#line 292 "dependency_graph.m"
        else
#line 294 "dependency_graph.m"
          {
#line 294 "dependency_graph.m"
            MR_Integer transform_hlds__dependency_graph__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 294 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 294 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable0_19;
#line 294 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo0_20;
#line 294 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcTable0_21;
#line 294 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcInfo0_22;
#line 294 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32;
#line 296 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo0_20;
#line 298 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv1_ProcInfo0_22;

#line 295 "dependency_graph.m"
            {
#line 295 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__3_3, &transform_hlds__dependency_graph__PredTable0_19);
            }
#line 296 "dependency_graph.m"
            {
#line 296 "dependency_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable0_19, ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), &transform_hlds__dependency_graph__conv0_PredInfo0_20);
            }
#line 296 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo0_20 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo0_20);
#line 297 "dependency_graph.m"
            {
#line 297 "dependency_graph.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__dependency_graph__PredInfo0_20, &transform_hlds__dependency_graph__ProcTable0_21);
            }
#line 298 "dependency_graph.m"
            {
#line 298 "dependency_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__dependency_graph__ProcTable0_21, ((MR_Box) (transform_hlds__dependency_graph__ProcId_13)), &transform_hlds__dependency_graph__conv1_ProcInfo0_22);
            }
#line 298 "dependency_graph.m"
            transform_hlds__dependency_graph__ProcInfo0_22 = ((MR_Word) transform_hlds__dependency_graph__conv1_ProcInfo0_22);
#line 305 "dependency_graph.m"
#line 305 "dependency_graph.m"
            switch (transform_hlds__dependency_graph__IncludeImported_4) {
#line 305 "dependency_graph.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 305 "dependency_graph.m"
              case (MR_Integer) 1:
#line 300 "dependency_graph.m"
                {
#line 300 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Goal_23;
#line 300 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Caller_24;
#line 300 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__V_31_31;

#line 301 "dependency_graph.m"
                  {
#line 301 "dependency_graph.m"
                    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__dependency_graph__ProcInfo0_22, &transform_hlds__dependency_graph__Goal_23);
                  }
#line 303 "dependency_graph.m"
                  {
#line 303 "dependency_graph.m"
                    transform_hlds__dependency_graph__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "dependency_graph.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_31_31, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 303 "dependency_graph.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_31_31, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_13));
#line 303 "dependency_graph.m"
                  }
#line 303 "dependency_graph.m"
                  {
#line 303 "dependency_graph.m"
                    mercury__digraph__lookup_key_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, ((MR_Box) (transform_hlds__dependency_graph__V_31_31)), &transform_hlds__dependency_graph__Caller_24);
                  }
#line 304 "dependency_graph.m"
                  {
#line 304 "dependency_graph.m"
                    transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0], transform_hlds__dependency_graph__Caller_24, transform_hlds__dependency_graph__Goal_23, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32);
                  }
#line 300 "dependency_graph.m"
                }
#line 305 "dependency_graph.m"
                break;
#line 305 "dependency_graph.m"
              case (MR_Integer) 0:
#line 306 "dependency_graph.m"
                {
#line 306 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__ImportStatus_25;
#line 306 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Imported_26;

#line 307 "dependency_graph.m"
                  {
#line 307 "dependency_graph.m"
                    hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__dependency_graph__PredInfo0_20, &transform_hlds__dependency_graph__ImportStatus_25);
                  }
#line 308 "dependency_graph.m"
                  {
#line 308 "dependency_graph.m"
                    transform_hlds__dependency_graph__Imported_26 = parse_tree__status__status_is_imported_1_f_0(transform_hlds__dependency_graph__ImportStatus_25);
                  }
#line 311 "dependency_graph.m"
#line 311 "dependency_graph.m"
                  switch (transform_hlds__dependency_graph__Imported_26) {
#line 311 "dependency_graph.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 311 "dependency_graph.m"
                    case (MR_Integer) 0:
#line 312 "dependency_graph.m"
                      {
#line 312 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__V_29_29;
#line 312 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__Goal_34;
#line 312 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__Caller_35;

#line 313 "dependency_graph.m"
                        {
#line 313 "dependency_graph.m"
                          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__dependency_graph__ProcInfo0_22, &transform_hlds__dependency_graph__Goal_34);
                        }
#line 314 "dependency_graph.m"
                        {
#line 314 "dependency_graph.m"
                          transform_hlds__dependency_graph__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "dependency_graph.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_29_29, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 314 "dependency_graph.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_29_29, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_13));
#line 314 "dependency_graph.m"
                        }
#line 314 "dependency_graph.m"
                        {
#line 314 "dependency_graph.m"
                          mercury__digraph__lookup_key_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, ((MR_Box) (transform_hlds__dependency_graph__V_29_29)), &transform_hlds__dependency_graph__Caller_35);
                        }
#line 315 "dependency_graph.m"
                        {
#line 315 "dependency_graph.m"
                          transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0], transform_hlds__dependency_graph__Caller_35, transform_hlds__dependency_graph__Goal_34, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32);
                        }
#line 312 "dependency_graph.m"
                      }
#line 311 "dependency_graph.m"
                      break;
#line 311 "dependency_graph.m"
                    case (MR_Integer) 1:
#line 310 "dependency_graph.m"
                      transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5;
#line 311 "dependency_graph.m"
                      break;
#line 311 "dependency_graph.m"
                  }
#line 306 "dependency_graph.m"
                }
#line 305 "dependency_graph.m"
                break;
#line 305 "dependency_graph.m"
            }
#line 318 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 318 "dependency_graph.m"
            {
#line 318 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__ProcIds_14;
#line 318 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32;

#line 318 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_5;
#line 318 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 318 "dependency_graph.m"
            }
#line 318 "dependency_graph.m"
            continue;
#line 294 "dependency_graph.m"
          }
#line 292 "dependency_graph.m"
      }
#line 292 "dependency_graph.m"
      break;
#line 292 "dependency_graph.m"
    }
#line 289 "dependency_graph.m"
}

#line 270 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(
#line 270 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 270 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 270 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 270 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 270 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 270 "dependency_graph.m"
{
#line 273 "dependency_graph.m"
  while (MR_TRUE)
#line 273 "dependency_graph.m"
    {
#line 273 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 273 "dependency_graph.m"
      {
#line 273 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 273 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 273 "dependency_graph.m"
        else
#line 274 "dependency_graph.m"
          {
#line 274 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 274 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_16;
#line 274 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
#line 274 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_18;
#line 274 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
#line 276 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

#line 275 "dependency_graph.m"
            {
#line 275 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
#line 276 "dependency_graph.m"
            {
#line 276 "dependency_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
#line 276 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
#line 282 "dependency_graph.m"
#line 282 "dependency_graph.m"
            switch (transform_hlds__dependency_graph__Imported_3) {
#line 282 "dependency_graph.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 282 "dependency_graph.m"
              case (MR_Integer) 1:
#line 281 "dependency_graph.m"
                {
#line 281 "dependency_graph.m"
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
#line 282 "dependency_graph.m"
                break;
#line 282 "dependency_graph.m"
              case (MR_Integer) 0:
#line 284 "dependency_graph.m"
                {
#line 284 "dependency_graph.m"
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
#line 282 "dependency_graph.m"
                break;
#line 282 "dependency_graph.m"
            }
#line 286 "dependency_graph.m"
            {
#line 286 "dependency_graph.m"
              transform_hlds__dependency_graph__add_proc_arcs_6_p_0(transform_hlds__dependency_graph__ProcIds_18, transform_hlds__dependency_graph__PredId_11, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__Imported_3, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
#line 287 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 287 "dependency_graph.m"
            {
#line 287 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
#line 287 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

#line 287 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 287 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 287 "dependency_graph.m"
            }
#line 287 "dependency_graph.m"
            continue;
#line 274 "dependency_graph.m"
          }
#line 273 "dependency_graph.m"
      }
#line 273 "dependency_graph.m"
      break;
#line 273 "dependency_graph.m"
    }
#line 270 "dependency_graph.m"
}

#line 247 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_nodes_5_p_0(
#line 247 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 247 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 247 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 247 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 247 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 247 "dependency_graph.m"
{
#line 251 "dependency_graph.m"
  while (MR_TRUE)
#line 251 "dependency_graph.m"
    {
#line 251 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 251 "dependency_graph.m"
      {
#line 251 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 251 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 251 "dependency_graph.m"
          *transform_hlds__dependency_graph__HeadVar__5_5 = transform_hlds__dependency_graph__HeadVar__4_4;
#line 251 "dependency_graph.m"
        else
#line 252 "dependency_graph.m"
          {
#line 252 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_21_21;
#line 252 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_14;
#line 252 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_15;
#line 252 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19;
#line 254 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_15;

#line 253 "dependency_graph.m"
            {
#line 253 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_14);
            }
#line 4286 "transform_hlds.dependency_graph.c"
            transform_hlds__dependency_graph__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 254 "dependency_graph.m"
            {
#line 254 "dependency_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_21_21, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_14, ((MR_Box) (transform_hlds__dependency_graph__PredId_9)), &transform_hlds__dependency_graph__conv0_PredInfo_15);
            }
#line 254 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_15 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_15);
#line 258 "dependency_graph.m"
            transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__IncludeImported_3 == (MR_Integer) 1);
#line 258 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 259 "dependency_graph.m"
              {
#line 259 "dependency_graph.m"
                transform_hlds__dependency_graph__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__dependency_graph__PredInfo_15);
              }
#line 262 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 262 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19 = transform_hlds__dependency_graph__HeadVar__4_4;
#line 262 "dependency_graph.m"
            else
#line 263 "dependency_graph.m"
              {
#line 263 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__V_16_16;

#line 263 "dependency_graph.m"
                {
#line 263 "dependency_graph.m"
                  mercury__digraph__add_vertex_4_p_0(transform_hlds__dependency_graph__TypeCtorInfo_21_21, ((MR_Box) (transform_hlds__dependency_graph__PredId_9)), &transform_hlds__dependency_graph__V_16_16, transform_hlds__dependency_graph__HeadVar__4_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19);
                }
#line 263 "dependency_graph.m"
              }
#line 265 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 265 "dependency_graph.m"
            {
#line 265 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_10;
#line 265 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__4__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19;

#line 265 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__4_4 = transform_hlds__dependency_graph__HeadVar__4__tmp_copy_4;
#line 265 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 265 "dependency_graph.m"
            }
#line 265 "dependency_graph.m"
            continue;
#line 252 "dependency_graph.m"
          }
#line 251 "dependency_graph.m"
      }
#line 251 "dependency_graph.m"
      break;
#line 251 "dependency_graph.m"
    }
#line 247 "dependency_graph.m"
}

#line 218 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(
#line 218 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 218 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 218 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 218 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 218 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 218 "dependency_graph.m"
{
#line 221 "dependency_graph.m"
  while (MR_TRUE)
#line 221 "dependency_graph.m"
    {
#line 221 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 221 "dependency_graph.m"
      {
#line 221 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 221 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 221 "dependency_graph.m"
        else
#line 222 "dependency_graph.m"
          {
#line 222 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 222 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_16;
#line 222 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
#line 222 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_18;
#line 222 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
#line 224 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

#line 223 "dependency_graph.m"
            {
#line 223 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
#line 224 "dependency_graph.m"
            {
#line 224 "dependency_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
#line 224 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
#line 230 "dependency_graph.m"
#line 230 "dependency_graph.m"
            switch (transform_hlds__dependency_graph__Imported_3) {
#line 230 "dependency_graph.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 230 "dependency_graph.m"
              case (MR_Integer) 1:
#line 229 "dependency_graph.m"
                {
#line 229 "dependency_graph.m"
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
#line 230 "dependency_graph.m"
                break;
#line 230 "dependency_graph.m"
              case (MR_Integer) 0:
#line 232 "dependency_graph.m"
                {
#line 232 "dependency_graph.m"
                  transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
                }
#line 230 "dependency_graph.m"
                break;
#line 230 "dependency_graph.m"
            }
#line 234 "dependency_graph.m"
            {
#line 234 "dependency_graph.m"
              transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(transform_hlds__dependency_graph__ProcIds_18, transform_hlds__dependency_graph__PredId_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
#line 235 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 235 "dependency_graph.m"
            {
#line 235 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
#line 235 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

#line 235 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 235 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 235 "dependency_graph.m"
            }
#line 235 "dependency_graph.m"
            continue;
#line 222 "dependency_graph.m"
          }
#line 221 "dependency_graph.m"
      }
#line 221 "dependency_graph.m"
      break;
#line 221 "dependency_graph.m"
    }
#line 218 "dependency_graph.m"
}

#line 200 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__dependency_node_1_f_0(
#line 200 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3,
#line 200 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
#line 200 "dependency_graph.m"
{
#line 4478 "transform_hlds.dependency_graph.c"
  {
#line 4480 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 4482 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__HeadVar__2_2;
#line 4484 "transform_hlds.dependency_graph.c"
    MR_Box MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3, (MR_Integer) 0)), (MR_Integer) 7)));

#line 4487 "transform_hlds.dependency_graph.c"
    {
#line 4489 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)));
    }
#line 4492 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__HeadVar__2_2;
#line 4494 "transform_hlds.dependency_graph.c"
  }
#line 200 "dependency_graph.m"
}

#line 196 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_5_p_0(
#line 196 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
#line 196 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 196 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 196 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 196 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 196 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 196 "dependency_graph.m"
{
#line 4516 "transform_hlds.dependency_graph.c"
  {
#line 4518 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 4520 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6, (MR_Integer) 0)), (MR_Integer) 6)));
#line 4522 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv1_HeadVar__5_5;

#line 4525 "transform_hlds.dependency_graph.c"
    {
#line 4527 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__3_3)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__4_4)), &transform_hlds__dependency_graph__conv1_HeadVar__5_5);
    }
#line 4530 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__HeadVar__5_5 = ((MR_Word) transform_hlds__dependency_graph__conv1_HeadVar__5_5);
#line 4532 "transform_hlds.dependency_graph.c"
  }
#line 196 "dependency_graph.m"
}

#line 192 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_nodes_5_p_0(
#line 192 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
#line 192 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 192 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 192 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 192 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 192 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 192 "dependency_graph.m"
{
#line 4554 "transform_hlds.dependency_graph.c"
  {
#line 4556 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 4558 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4560 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv1_HeadVar__5_5;

#line 4563 "transform_hlds.dependency_graph.c"
    {
#line 4565 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__3_3)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__4_4)), &transform_hlds__dependency_graph__conv1_HeadVar__5_5);
    }
#line 4568 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__HeadVar__5_5 = ((MR_Word) transform_hlds__dependency_graph__conv1_HeadVar__5_5);
#line 4570 "transform_hlds.dependency_graph.c"
  }
#line 192 "dependency_graph.m"
}

#line 180 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__sets_to_lists_3_p_0(
#line 180 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeInfo_for_T_11,
#line 180 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 180 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 180 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__3_3)
#line 180 "dependency_graph.m"
{
#line 183 "dependency_graph.m"
  while (MR_TRUE)
#line 183 "dependency_graph.m"
    {
#line 183 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 183 "dependency_graph.m"
      {
#line 183 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 183 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "dependency_graph.m"
          *transform_hlds__dependency_graph__HeadVar__3_3 = transform_hlds__dependency_graph__HeadVar__2_2;
#line 183 "dependency_graph.m"
        else
#line 184 "dependency_graph.m"
          {
#line 184 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 184 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 184 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Y_9;
#line 184 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_10_10;

#line 185 "dependency_graph.m"
            {
#line 185 "dependency_graph.m"
              mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeInfo_for_T_11, transform_hlds__dependency_graph__X_5, &transform_hlds__dependency_graph__Y_9);
            }
#line 186 "dependency_graph.m"
            {
#line 186 "dependency_graph.m"
              transform_hlds__dependency_graph__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "dependency_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__V_10_10, 0) = ((MR_Box) (transform_hlds__dependency_graph__Y_9));
#line 186 "dependency_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__V_10_10, 1) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 186 "dependency_graph.m"
            }
#line 186 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 186 "dependency_graph.m"
            {
#line 186 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Xs_6;
#line 186 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__V_10_10;

#line 186 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
#line 186 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 186 "dependency_graph.m"
            }
#line 186 "dependency_graph.m"
            continue;
#line 184 "dependency_graph.m"
          }
#line 183 "dependency_graph.m"
      }
#line 183 "dependency_graph.m"
      break;
#line 183 "dependency_graph.m"
    }
#line 180 "dependency_graph.m"
}

#line 105 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__write_graph_nodes_6_p_0(
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 105 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4)
#line 105 "dependency_graph.m"
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
#line 4715 "transform_hlds.dependency_graph.c"
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
#line 105 "dependency_graph.m"
}

#line 95 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__write_graph_5_p_0(
#line 95 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__DepInfo_6,
#line 95 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__WriteNode_7,
#line 95 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__WriteLink_8)
#line 95 "dependency_graph.m"
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
#line 605 "dependency_graph.m"
      return;
    }
#line 601 "dependency_graph.m"
  }
#line 95 "dependency_graph.m"
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
      return transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph__is_entry_point_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 641 "dependency_graph.m"
    return transform_hlds__dependency_graph__succeeded;
#line 641 "dependency_graph.m"
  }
#line 641 "dependency_graph.m"
}

#line 87 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__get_scc_entry_points_4_p_0(
#line 87 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__SCC_5,
#line 87 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HigherSCCs_6,
#line 87 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_7,
#line 87 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__EntryPoints_8)
#line 87 "dependency_graph.m"
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
#line 641 "dependency_graph.m"
      return;
    }
#line 640 "dependency_graph.m"
  }
#line 87 "dependency_graph.m"
}

#line 79 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__write_prof_dependency_graph_4_p_0(
#line 79 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8,
#line 79 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9)
#line 79 "dependency_graph.m"
{
#line 544 "dependency_graph.m"
  {
#line 544 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 544 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeCtorInfo_16_34;
#line 544 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepInfo_7;
#line 544 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_30;
#line 544 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomSet_31;
#line 544 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomList_32;

#line 545 "dependency_graph.m"
    {
#line 545 "dependency_graph.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
    }
#line 546 "dependency_graph.m"
    {
#line 546 "dependency_graph.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, &transform_hlds__dependency_graph__DepInfo_7);
    }
#line 4922 "transform_hlds.dependency_graph.c"
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
#line 605 "dependency_graph.m"
      return;
    }
#line 544 "dependency_graph.m"
  }
#line 79 "dependency_graph.m"
}

#line 71 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__write_dependency_graph_4_p_0(
#line 71 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8,
#line 71 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9)
#line 71 "dependency_graph.m"
{
#line 550 "dependency_graph.m"
  {
#line 550 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 550 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeCtorInfo_16_38;
#line 550 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepInfo_7;
#line 550 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_34;
#line 550 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomSet_35;
#line 550 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomList_36;

#line 551 "dependency_graph.m"
    {
#line 551 "dependency_graph.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
    }
#line 552 "dependency_graph.m"
    {
#line 552 "dependency_graph.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, &transform_hlds__dependency_graph__DepInfo_7);
    }
#line 553 "dependency_graph.m"
    {
#line 553 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "% Dependency graph\n");
    }
#line 554 "dependency_graph.m"
    {
#line 554 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "\n\n% Dependency ordering\n");
    }
#line 4995 "transform_hlds.dependency_graph.c"
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
#line 605 "dependency_graph.m"
      return;
    }
#line 550 "dependency_graph.m"
  }
#line 71 "dependency_graph.m"
}

#line 62 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__build_proc_dependency_graph_4_p_0(
#line 62 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
#line 62 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__PredIds_6,
#line 62 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_7,
#line 62 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__DepInfo_8)
#line 62 "dependency_graph.m"
{
#line 158 "dependency_graph.m"
  {
#line 158 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_21_25;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_22_26;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_23_27;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_24_28;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_25_29;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_26_30;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph0_15;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph1_16;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_17;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd0_18;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd_19;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20;
#line 158 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21;
#line 5069 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5071 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_16;
#line 5073 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5075 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_17;

#line 5078 "transform_hlds.dependency_graph.c"
    {
#line 5080 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_25);
    }
#line 171 "dependency_graph.m"
    {
#line 171 "dependency_graph.m"
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_25, &transform_hlds__dependency_graph__DepGraph0_15);
    }
#line 5088 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5090 "transform_hlds.dependency_graph.c"
    {
#line 5092 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_15)), &transform_hlds__dependency_graph__conv1_DepGraph1_16);
    }
#line 5095 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph1_16 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_16);
#line 5097 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5099 "transform_hlds.dependency_graph.c"
    {
#line 5101 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_16)), &transform_hlds__dependency_graph__conv3_DepGraph_17);
    }
#line 5104 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph_17 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_17);
#line 5106 "transform_hlds.dependency_graph.c"
    {
#line 5108 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_26);
    }
#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_26, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20);
    }
#line 5116 "transform_hlds.dependency_graph.c"
    {
#line 5118 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_27);
    }
#line 175 "dependency_graph.m"
    {
#line 175 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_27, transform_hlds__dependency_graph__DepGraph_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21);
    }
#line 5126 "transform_hlds.dependency_graph.c"
    {
#line 5128 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_28);
    }
#line 176 "dependency_graph.m"
    {
#line 176 "dependency_graph.m"
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_28, transform_hlds__dependency_graph__DepGraph_17, &transform_hlds__dependency_graph__DepOrd0_18);
    }
#line 5136 "transform_hlds.dependency_graph.c"
    {
#line 5138 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_29);
    }
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_29, transform_hlds__dependency_graph__DepOrd0_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_19);
    }
#line 5146 "transform_hlds.dependency_graph.c"
    {
#line 5148 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_30);
    }
#line 178 "dependency_graph.m"
    {
#line 178 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_30, transform_hlds__dependency_graph__DepOrd_19, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21, transform_hlds__dependency_graph__DepInfo_8);
#line 178 "dependency_graph.m"
      return;
    }
#line 158 "dependency_graph.m"
  }
#line 62 "dependency_graph.m"
}

#line 57 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__build_pred_dependency_graph_4_p_0(
#line 57 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
#line 57 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__PredIds_6,
#line 57 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_7,
#line 57 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__DepInfo_8)
#line 57 "dependency_graph.m"
{
#line 161 "dependency_graph.m"
  {
#line 161 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 161 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[1];
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
#line 5208 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5210 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_16;
#line 5212 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5214 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_17;

#line 5217 "transform_hlds.dependency_graph.c"
    {
#line 5219 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_25);
    }
#line 171 "dependency_graph.m"
    {
#line 171 "dependency_graph.m"
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_25, &transform_hlds__dependency_graph__DepGraph0_15);
    }
#line 5227 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5229 "transform_hlds.dependency_graph.c"
    {
#line 5231 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_15)), &transform_hlds__dependency_graph__conv1_DepGraph1_16);
    }
#line 5234 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph1_16 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_16);
#line 5236 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5238 "transform_hlds.dependency_graph.c"
    {
#line 5240 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_16)), &transform_hlds__dependency_graph__conv3_DepGraph_17);
    }
#line 5243 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph_17 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_17);
#line 5245 "transform_hlds.dependency_graph.c"
    {
#line 5247 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_26);
    }
#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_26, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20);
    }
#line 5255 "transform_hlds.dependency_graph.c"
    {
#line 5257 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_27);
    }
#line 175 "dependency_graph.m"
    {
#line 175 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_27, transform_hlds__dependency_graph__DepGraph_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21);
    }
#line 5265 "transform_hlds.dependency_graph.c"
    {
#line 5267 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_28);
    }
#line 176 "dependency_graph.m"
    {
#line 176 "dependency_graph.m"
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_28, transform_hlds__dependency_graph__DepGraph_17, &transform_hlds__dependency_graph__DepOrd0_18);
    }
#line 5275 "transform_hlds.dependency_graph.c"
    {
#line 5277 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_29);
    }
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_29, transform_hlds__dependency_graph__DepOrd0_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_19);
    }
#line 5285 "transform_hlds.dependency_graph.c"
    {
#line 5287 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_30);
    }
#line 178 "dependency_graph.m"
    {
#line 178 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_30, transform_hlds__dependency_graph__DepOrd_19, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21, transform_hlds__dependency_graph__DepInfo_8);
#line 178 "dependency_graph.m"
      return;
    }
#line 161 "dependency_graph.m"
  }
#line 57 "dependency_graph.m"
}

#line 48 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(
#line 48 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7,
#line 48 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_8,
#line 48 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__DepInfo_5)
#line 48 "dependency_graph.m"
{
#line 151 "dependency_graph.m"
  {
#line 151 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_21_27;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_22_28;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_23_29;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_24_30;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_25_31;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_26_32;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PredIds_6;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph0_17;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph1_18;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_19;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd0_20;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd_21;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_22;
#line 151 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_23;
#line 5347 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5349 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_18;
#line 5351 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5353 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_19;

#line 152 "dependency_graph.m"
    {
#line 152 "dependency_graph.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__dependency_graph__PredIds_6);
    }
#line 5361 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
#line 5363 "transform_hlds.dependency_graph.c"
    {
#line 5365 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_27);
    }
#line 171 "dependency_graph.m"
    {
#line 171 "dependency_graph.m"
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_27, &transform_hlds__dependency_graph__DepGraph0_17);
    }
#line 5373 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5375 "transform_hlds.dependency_graph.c"
    {
#line 5377 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_17)), &transform_hlds__dependency_graph__conv1_DepGraph1_18);
    }
#line 5380 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph1_18 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_18);
#line 5382 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5384 "transform_hlds.dependency_graph.c"
    {
#line 5386 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_18)), &transform_hlds__dependency_graph__conv3_DepGraph_19);
    }
#line 5389 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph_19 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_19);
#line 5391 "transform_hlds.dependency_graph.c"
    {
#line 5393 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_28);
    }
#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_28, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_22);
    }
#line 5401 "transform_hlds.dependency_graph.c"
    {
#line 5403 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_29);
    }
#line 175 "dependency_graph.m"
    {
#line 175 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_29, transform_hlds__dependency_graph__DepGraph_19, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_22, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_23);
    }
#line 5411 "transform_hlds.dependency_graph.c"
    {
#line 5413 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_30);
    }
#line 176 "dependency_graph.m"
    {
#line 176 "dependency_graph.m"
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_30, transform_hlds__dependency_graph__DepGraph_19, &transform_hlds__dependency_graph__DepOrd0_20);
    }
#line 5421 "transform_hlds.dependency_graph.c"
    {
#line 5423 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_31);
    }
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_31, transform_hlds__dependency_graph__DepOrd0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_21);
    }
#line 5431 "transform_hlds.dependency_graph.c"
    {
#line 5433 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_11, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_32);
    }
#line 178 "dependency_graph.m"
    {
#line 178 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_32, transform_hlds__dependency_graph__DepOrd_21, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_23, transform_hlds__dependency_graph__DepInfo_5);
    }
#line 155 "dependency_graph.m"
    {
#line 155 "dependency_graph.m"
      hlds__hlds_module__module_info_set_dependency_info_3_p_0(*transform_hlds__dependency_graph__DepInfo_5, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_8);
#line 155 "dependency_graph.m"
      return;
    }
#line 151 "dependency_graph.m"
  }
#line 48 "dependency_graph.m"
}

#line 40 "dependency_graph.m"
void MR_CALL 
transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(
#line 40 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8,
#line 40 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9)
#line 40 "dependency_graph.m"
{
#line 139 "dependency_graph.m"
  {
#line 139 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 139 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__MaybeDepInfo_4;

#line 140 "dependency_graph.m"
    {
#line 140 "dependency_graph.m"
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__dependency_graph__MaybeDepInfo_4);
    }
#line 143 "dependency_graph.m"
    if ((transform_hlds__dependency_graph__MaybeDepInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "dependency_graph.m"
      {
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_21_28;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_22_29;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_23_30;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_24_31;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_25_32;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_26_33;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__PredIds_6;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepInfo_7;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepGraph0_18;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepGraph1_19;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepGraph_20;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepOrd0_21;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepOrd_22;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23;
#line 144 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24;
#line 5510 "transform_hlds.dependency_graph.c"
        void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5512 "transform_hlds.dependency_graph.c"
        MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_19;
#line 5514 "transform_hlds.dependency_graph.c"
        void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5516 "transform_hlds.dependency_graph.c"
        MR_Box transform_hlds__dependency_graph__conv3_DepGraph_20;

#line 145 "dependency_graph.m"
        {
#line 145 "dependency_graph.m"
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__dependency_graph__PredIds_6);
        }
#line 5524 "transform_hlds.dependency_graph.c"
        transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
#line 5526 "transform_hlds.dependency_graph.c"
        {
#line 5528 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_28);
        }
#line 171 "dependency_graph.m"
        {
#line 171 "dependency_graph.m"
          mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_28, &transform_hlds__dependency_graph__DepGraph0_18);
        }
#line 5536 "transform_hlds.dependency_graph.c"
        transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5538 "transform_hlds.dependency_graph.c"
        {
#line 5540 "transform_hlds.dependency_graph.c"
          transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_18)), &transform_hlds__dependency_graph__conv1_DepGraph1_19);
        }
#line 5543 "transform_hlds.dependency_graph.c"
        transform_hlds__dependency_graph__DepGraph1_19 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_19);
#line 5545 "transform_hlds.dependency_graph.c"
        transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5547 "transform_hlds.dependency_graph.c"
        {
#line 5549 "transform_hlds.dependency_graph.c"
          transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_19)), &transform_hlds__dependency_graph__conv3_DepGraph_20);
        }
#line 5552 "transform_hlds.dependency_graph.c"
        transform_hlds__dependency_graph__DepGraph_20 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_20);
#line 5554 "transform_hlds.dependency_graph.c"
        {
#line 5556 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_29);
        }
#line 174 "dependency_graph.m"
        {
#line 174 "dependency_graph.m"
          hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_29, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23);
        }
#line 5564 "transform_hlds.dependency_graph.c"
        {
#line 5566 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_30);
        }
#line 175 "dependency_graph.m"
        {
#line 175 "dependency_graph.m"
          hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_30, transform_hlds__dependency_graph__DepGraph_20, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24);
        }
#line 5574 "transform_hlds.dependency_graph.c"
        {
#line 5576 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_31);
        }
#line 176 "dependency_graph.m"
        {
#line 176 "dependency_graph.m"
          mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_31, transform_hlds__dependency_graph__DepGraph_20, &transform_hlds__dependency_graph__DepOrd0_21);
        }
#line 5584 "transform_hlds.dependency_graph.c"
        {
#line 5586 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_32);
        }
#line 177 "dependency_graph.m"
        {
#line 177 "dependency_graph.m"
          transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_32, transform_hlds__dependency_graph__DepOrd0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_22);
        }
#line 5594 "transform_hlds.dependency_graph.c"
        {
#line 5596 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_33);
        }
#line 178 "dependency_graph.m"
        {
#line 178 "dependency_graph.m"
          hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_33, transform_hlds__dependency_graph__DepOrd_22, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24, &transform_hlds__dependency_graph__DepInfo_7);
        }
#line 148 "dependency_graph.m"
        {
#line 148 "dependency_graph.m"
          hlds__hlds_module__module_info_set_dependency_info_3_p_0(transform_hlds__dependency_graph__DepInfo_7, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
#line 148 "dependency_graph.m"
          return;
        }
#line 144 "dependency_graph.m"
      }
#line 143 "dependency_graph.m"
    else
#line 142 "dependency_graph.m"
      *transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8;
#line 139 "dependency_graph.m"
  }
#line 40 "dependency_graph.m"
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
