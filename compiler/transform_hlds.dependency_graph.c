/*
** Automatically generated from `dependency_graph.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 641 "dependency_graph.m"
struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s {
#line 641 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCCs_4;
#line 641 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5;
#line 641 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6;
#line 647 "dependency_graph.m"
  MR_bool transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded;
#line 652 "dependency_graph.m"
  jmp_buf transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__commit_0;
#line 652 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17;
#line 652 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeInfo_19_19;
#line 652 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11;
#line 652 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingKey_14;
#line 652 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingPred_15;
#line 652 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCC_16;
#line 657 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv0_CallingKey_14;
#line 659 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv2_HigherSCC_16;
#line 641 "dependency_graph.m"
};


#line 168 "transform_hlds.dependency_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 171 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 174 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_key_1__pseudo_1;

#line 177 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_1__pseudo_1;

#line 180 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0;

#line 183 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1;

#line 186 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_value_ordered_include_imported_0[2];

#line 189 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_name_ordered_include_imported_0[2];

#line 192 "transform_hlds.dependency_graph.c"
static const MR_Integer transform_hlds__dependency_graph__transform_hlds__dependency_graph__functor_number_map_include_imported_0[2];

#line 195 "transform_hlds.dependency_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dependency_graph__pair__ti_pair_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 198 "transform_hlds.dependency_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dependency_graph__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 201 "transform_hlds.dependency_graph.c"
static const MR_ConstString transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1[1];

#line 204 "transform_hlds.dependency_graph.c"
static const MR_TypeClassMethod transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_method_ids_dependency_node_1[3];

#line 207 "transform_hlds.dependency_graph.c"
static const MR_TypeClassId transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1;

#line 210 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____include_imported_0_0_10001(
#line 213 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 215 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2);

#line 218 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____include_imported_0_0_10001(
#line 221 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 223 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 225 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3);

#line 228 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_0_0_10001(
#line 231 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 233 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2);

#line 236 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_0_0_10001(
#line 239 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 241 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 243 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3);

#line 246 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0_10001(
#line 249 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 251 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2);

#line 254 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0_10001(
#line 257 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 259 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 261 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3);

#line 264 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_pred_map_0_0_10001(
#line 267 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 269 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2);

#line 272 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_pred_map_0_0_10001(
#line 275 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 277 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 279 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3);

#line 282 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 285 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 287 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 289 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 291 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 293 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 295 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 298 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 301 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 303 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 305 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 307 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 309 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 311 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 314 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 317 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 319 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);

#line 322 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 325 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 327 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 329 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 331 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 333 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 335 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 338 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 341 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 343 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 345 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 347 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 349 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 351 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5);

#line 354 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 357 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 359 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);

#line 614 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_p_0(
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_25_25,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3);

#line 614 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_p_0(
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_25_25,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 614 "dependency_graph.m"
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

#line 236 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(
#line 236 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 236 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 236 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 236 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 205 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 205 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

#line 204 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
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

#line 203 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 203 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 211 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 211 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

#line 210 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
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

#line 209 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 209 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 209 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 209 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 209 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 209 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 681 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_pred_map_0_0(
#line 681 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
#line 681 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 681 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3);

#line 681 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_pred_map_0_0(
#line 681 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 681 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2);

#line 683 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0(
#line 683 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
#line 683 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2,
#line 683 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__3_3);

#line 683 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0(
#line 683 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__1_1,
#line 683 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2);

#line 685 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_0_0(
#line 685 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
#line 685 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 685 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3);

#line 685 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_0_0(
#line 685 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 685 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2);

#line 652 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_1(
#line 652 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 657 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_3(
#line 657 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 659 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_5(
#line 659 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 652 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_4(
#line 652 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 652 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_2(
#line 652 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 652 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_6(
#line 652 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg);

#line 641 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0(
#line 641 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HigherSCCs_4,
#line 641 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
#line 641 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__PredProcId_6);

#line 614 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_graph_children_6_p_0(
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4);

#line 571 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_dep_graph_link_5_p_0(
#line 571 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 571 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 571 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8);

#line 560 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_prof_dep_graph_link_5_p_0(
#line 560 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 560 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 560 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8);

#line 469 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(
#line 469 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40,
#line 469 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 469 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ConsId_6,
#line 469 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36,
#line 469 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37);

#line 463 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1(
#line 463 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 463 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 463 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 463 "dependency_graph.m"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_3);

#line 455 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(
#line 455 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23,
#line 455 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 455 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 455 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 455 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4);

#line 444 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_p_0(
#line 444 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17,
#line 444 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 444 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 444 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 444 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4);

#line 353 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(
#line 353 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107,
#line 353 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 353 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Goal_6,
#line 353 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77,
#line 353 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);

#line 337 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0_1(
#line 337 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 337 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);

#line 321 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0(
#line 321 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 321 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 321 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 321 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 321 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 288 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_proc_arcs_6_p_0(
#line 288 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 288 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 288 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 288 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_4,
#line 288 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5,
#line 288 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6);

#line 269 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(
#line 269 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 269 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 269 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 269 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 269 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 246 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_nodes_5_p_0(
#line 246 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 246 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 246 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 246 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 246 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 217 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(
#line 217 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 217 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 217 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 217 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 217 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5);

#line 199 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__dependency_node_1_f_0(
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3,
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1);

#line 195 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_5_p_0(
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

#line 191 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_nodes_5_p_0(
#line 191 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
#line 191 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 191 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 191 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 191 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 191 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5);

#line 179 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__sets_to_lists_3_p_0(
#line 179 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeInfo_for_T_11,
#line 179 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 179 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 179 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__3_3);

#line 639 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph__get_scc_entry_points_4_p_0_1(
#line 639 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 639 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_3[1][6];

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_4[1][5];

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

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__dependency_graph__add_pred_arcs_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_3[1][6] = {
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

static /* final */ const MR_Box transform_hlds__dependency_graph_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 948 "transform_hlds.dependency_graph.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 956 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 964 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 972 "transform_hlds.dependency_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dependency_graph__digraph__pti_digraph_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 980 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0 = {
  (MR_String) "include_imported",
  (MR_Integer) 0
};

#line 986 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDesc transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1 = {
  (MR_String) "do_not_include_imported",
  (MR_Integer) 1
};

#line 992 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_value_ordered_include_imported_0[2] = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0,
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1
};

#line 998 "transform_hlds.dependency_graph.c"
static const MR_EnumFunctorDescPtr transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_name_ordered_include_imported_0[2] = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_1,
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_functor_desc_include_imported_0_0
};

#line 1004 "transform_hlds.dependency_graph.c"
static const MR_Integer transform_hlds__dependency_graph__transform_hlds__dependency_graph__functor_number_map_include_imported_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1010 "transform_hlds.dependency_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_include_imported_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dependency_graph____Unify____include_imported_0_0_10001)),
  ((MR_Box) (transform_hlds__dependency_graph____Compare____include_imported_0_0_10001)),
  (MR_String) "transform_hlds.dependency_graph",
  (MR_String) "include_imported",
  {
    transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_name_ordered_include_imported_0
  },
  {
    transform_hlds__dependency_graph__transform_hlds__dependency_graph__enum_value_ordered_include_imported_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__dependency_graph__transform_hlds__dependency_graph__functor_number_map_include_imported_0
};

#line 1031 "transform_hlds.dependency_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_scc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dependency_graph____Unify____scc_0_0_10001)),
  ((MR_Box) (transform_hlds__dependency_graph____Compare____scc_0_0_10001)),
  (MR_String) "transform_hlds.dependency_graph",
  (MR_String) "scc",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1052 "transform_hlds.dependency_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_scc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dependency_graph____Unify____scc_id_0_0_10001)),
  ((MR_Box) (transform_hlds__dependency_graph____Compare____scc_id_0_0_10001)),
  (MR_String) "transform_hlds.dependency_graph",
  (MR_String) "scc_id",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1073 "transform_hlds.dependency_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dependency_graph__pair__ti_pair_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__dependency_graph__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1082 "transform_hlds.dependency_graph.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__dependency_graph__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &transform_hlds__dependency_graph__pair__ti_pair_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1091 "transform_hlds.dependency_graph.c"
const MR_TypeCtorInfo_Struct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_scc_pred_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dependency_graph____Unify____scc_pred_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dependency_graph____Compare____scc_pred_map_0_0_10001)),
  (MR_String) "transform_hlds.dependency_graph",
  (MR_String) "scc_pred_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__dependency_graph__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1112 "transform_hlds.dependency_graph.c"
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

#line 1124 "transform_hlds.dependency_graph.c"
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

#line 1136 "transform_hlds.dependency_graph.c"
static const MR_ConstString transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1[1] = {
  (MR_String) "T"
};

#line 1141 "transform_hlds.dependency_graph.c"
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

#line 1160 "transform_hlds.dependency_graph.c"
static const MR_TypeClassId transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1 = {
  (MR_String) "transform_hlds.dependency_graph",
  (MR_String) "dependency_node",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_var_names_dependency_node_1,
  transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_method_ids_dependency_node_1
};

#line 1171 "transform_hlds.dependency_graph.c"
const MR_TypeClassDeclStruct transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_decl_dependency_node_1 = {
  &transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_class_id_dependency_node_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1179 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____include_imported_0_0_10001(
#line 1182 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1184 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2)
#line 1186 "transform_hlds.dependency_graph.c"
{
#line 1188 "transform_hlds.dependency_graph.c"
  {
#line 1190 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 1193 "transform_hlds.dependency_graph.c"
    {
#line 1195 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph____Unify____include_imported_0_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2));
    }
#line 1198 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__succeeded;
#line 1200 "transform_hlds.dependency_graph.c"
  }
#line 1202 "transform_hlds.dependency_graph.c"
}

#line 1205 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____include_imported_0_0_10001(
#line 1208 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 1210 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1212 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3)
#line 1214 "transform_hlds.dependency_graph.c"
{
#line 1216 "transform_hlds.dependency_graph.c"
  {
#line 1218 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__1_1;

#line 1221 "transform_hlds.dependency_graph.c"
    {
#line 1223 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph____Compare____include_imported_0_0(&transform_hlds__dependency_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3));
    }
#line 1226 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__1_1));
#line 1228 "transform_hlds.dependency_graph.c"
  }
#line 1230 "transform_hlds.dependency_graph.c"
}

#line 1233 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_0_0_10001(
#line 1236 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1238 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2)
#line 1240 "transform_hlds.dependency_graph.c"
{
#line 1242 "transform_hlds.dependency_graph.c"
  {
#line 1244 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 1247 "transform_hlds.dependency_graph.c"
    {
#line 1249 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph____Unify____scc_0_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2));
    }
#line 1252 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__succeeded;
#line 1254 "transform_hlds.dependency_graph.c"
  }
#line 1256 "transform_hlds.dependency_graph.c"
}

#line 1259 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_0_0_10001(
#line 1262 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 1264 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1266 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3)
#line 1268 "transform_hlds.dependency_graph.c"
{
#line 1270 "transform_hlds.dependency_graph.c"
  {
#line 1272 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__1_1;

#line 1275 "transform_hlds.dependency_graph.c"
    {
#line 1277 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph____Compare____scc_0_0(&transform_hlds__dependency_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3));
    }
#line 1280 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__1_1));
#line 1282 "transform_hlds.dependency_graph.c"
  }
#line 1284 "transform_hlds.dependency_graph.c"
}

#line 1287 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0_10001(
#line 1290 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1292 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2)
#line 1294 "transform_hlds.dependency_graph.c"
{
#line 1296 "transform_hlds.dependency_graph.c"
  {
#line 1298 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 1301 "transform_hlds.dependency_graph.c"
    {
#line 1303 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph____Unify____scc_id_0_0(((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_2));
    }
#line 1306 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__succeeded;
#line 1308 "transform_hlds.dependency_graph.c"
  }
#line 1310 "transform_hlds.dependency_graph.c"
}

#line 1313 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0_10001(
#line 1316 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 1318 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1320 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3)
#line 1322 "transform_hlds.dependency_graph.c"
{
#line 1324 "transform_hlds.dependency_graph.c"
  {
#line 1326 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__1_1;

#line 1329 "transform_hlds.dependency_graph.c"
    {
#line 1331 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph____Compare____scc_id_0_0(&transform_hlds__dependency_graph__conv0_HeadVar__1_1, ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Integer) transform_hlds__dependency_graph__wrapper_arg_3));
    }
#line 1334 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__1_1));
#line 1336 "transform_hlds.dependency_graph.c"
  }
#line 1338 "transform_hlds.dependency_graph.c"
}

#line 1341 "transform_hlds.dependency_graph.c"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_pred_map_0_0_10001(
#line 1344 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1346 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2)
#line 1348 "transform_hlds.dependency_graph.c"
{
#line 1350 "transform_hlds.dependency_graph.c"
  {
#line 1352 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 1355 "transform_hlds.dependency_graph.c"
    {
#line 1357 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph____Unify____scc_pred_map_0_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2));
    }
#line 1360 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__succeeded;
#line 1362 "transform_hlds.dependency_graph.c"
  }
#line 1364 "transform_hlds.dependency_graph.c"
}

#line 1367 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_pred_map_0_0_10001(
#line 1370 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_1,
#line 1372 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1374 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3)
#line 1376 "transform_hlds.dependency_graph.c"
{
#line 1378 "transform_hlds.dependency_graph.c"
  {
#line 1380 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__1_1;

#line 1383 "transform_hlds.dependency_graph.c"
    {
#line 1385 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph____Compare____scc_pred_map_0_0(&transform_hlds__dependency_graph__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3));
    }
#line 1388 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_1 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__1_1));
#line 1390 "transform_hlds.dependency_graph.c"
  }
#line 1392 "transform_hlds.dependency_graph.c"
}

#line 1395 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 1398 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1400 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1402 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1404 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1406 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1408 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1410 "transform_hlds.dependency_graph.c"
{
#line 1412 "transform_hlds.dependency_graph.c"
  {
#line 1414 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1416 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1419 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1421 "transform_hlds.dependency_graph.c"
    {
#line 1423 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1426 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1428 "transform_hlds.dependency_graph.c"
  }
#line 1430 "transform_hlds.dependency_graph.c"
}

#line 1433 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 1436 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1438 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1440 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1442 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1444 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1446 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1448 "transform_hlds.dependency_graph.c"
{
#line 1450 "transform_hlds.dependency_graph.c"
  {
#line 1452 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1454 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1457 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1459 "transform_hlds.dependency_graph.c"
    {
#line 1461 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1464 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1466 "transform_hlds.dependency_graph.c"
  }
#line 1468 "transform_hlds.dependency_graph.c"
}

#line 1471 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 1474 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1476 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
#line 1478 "transform_hlds.dependency_graph.c"
{
#line 1480 "transform_hlds.dependency_graph.c"
  {
#line 1482 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
#line 1484 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1486 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__2_2;

#line 1489 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1491 "transform_hlds.dependency_graph.c"
    {
#line 1493 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 1496 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__2_2));
#line 1498 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__wrapper_arg_2;
#line 1500 "transform_hlds.dependency_graph.c"
  }
#line 1502 "transform_hlds.dependency_graph.c"
}

#line 1505 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0_10001(
#line 1508 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1510 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1512 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1514 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1516 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1518 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1520 "transform_hlds.dependency_graph.c"
{
#line 1522 "transform_hlds.dependency_graph.c"
  {
#line 1524 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1526 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1529 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1531 "transform_hlds.dependency_graph.c"
    {
#line 1533 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1536 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1538 "transform_hlds.dependency_graph.c"
  }
#line 1540 "transform_hlds.dependency_graph.c"
}

#line 1543 "transform_hlds.dependency_graph.c"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0_10001(
#line 1546 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1548 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 1550 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 1552 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_3,
#line 1554 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_4,
#line 1556 "transform_hlds.dependency_graph.c"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_5)
#line 1558 "transform_hlds.dependency_graph.c"
{
#line 1560 "transform_hlds.dependency_graph.c"
  {
#line 1562 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1564 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__5_5;

#line 1567 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1569 "transform_hlds.dependency_graph.c"
    {
#line 1571 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_3), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_4), &transform_hlds__dependency_graph__conv0_HeadVar__5_5);
    }
#line 1574 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__wrapper_arg_5 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__5_5));
#line 1576 "transform_hlds.dependency_graph.c"
  }
#line 1578 "transform_hlds.dependency_graph.c"
}

#line 1581 "transform_hlds.dependency_graph.c"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0_10001(
#line 1584 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 1586 "transform_hlds.dependency_graph.c"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
#line 1588 "transform_hlds.dependency_graph.c"
{
#line 1590 "transform_hlds.dependency_graph.c"
  {
#line 1592 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
#line 1594 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__closure;
#line 1596 "transform_hlds.dependency_graph.c"
    MR_Word transform_hlds__dependency_graph__conv0_HeadVar__2_2;

#line 1599 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 1601 "transform_hlds.dependency_graph.c"
    {
#line 1603 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 1606 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv0_HeadVar__2_2));
#line 1608 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__wrapper_arg_2;
#line 1610 "transform_hlds.dependency_graph.c"
  }
#line 1612 "transform_hlds.dependency_graph.c"
}

#line 614 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_p_0(
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_25_25,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
#line 614 "dependency_graph.m"
{
#line 619 "dependency_graph.m"
  while (MR_TRUE)
#line 619 "dependency_graph.m"
    {
#line 619 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 619 "dependency_graph.m"
      {
#line 619 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 619 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "dependency_graph.m"
          {
#line 619 "dependency_graph.m"
          }
#line 619 "dependency_graph.m"
        else
#line 620 "dependency_graph.m"
          {
#line 620 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildKey_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 620 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 620 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Child_19;
#line 621 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_Child_19;

#line 621 "dependency_graph.m"
            {
#line 621 "dependency_graph.m"
              mercury__digraph__lookup_vertex_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__ChildKey_13, &transform_hlds__dependency_graph__conv0_Child_19);
            }
#line 621 "dependency_graph.m"
            transform_hlds__dependency_graph__Child_19 = ((MR_Word) transform_hlds__dependency_graph__conv0_Child_19);
#line 622 "dependency_graph.m"
            {
#line 622 "dependency_graph.m"
              transform_hlds__dependency_graph__write_dep_graph_link_5_p_0(transform_hlds__dependency_graph__V_25_25, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__Child_19);
            }
#line 623 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 623 "dependency_graph.m"
            {
#line 623 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Children_14;

#line 623 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 623 "dependency_graph.m"
            }
#line 623 "dependency_graph.m"
            continue;
#line 620 "dependency_graph.m"
          }
#line 619 "dependency_graph.m"
      }
#line 619 "dependency_graph.m"
      break;
#line 619 "dependency_graph.m"
    }
#line 614 "dependency_graph.m"
}

#line 614 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_p_0(
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__V_25_25,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
#line 614 "dependency_graph.m"
{
#line 619 "dependency_graph.m"
  while (MR_TRUE)
#line 619 "dependency_graph.m"
    {
#line 619 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 619 "dependency_graph.m"
      {
#line 619 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 619 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "dependency_graph.m"
          {
#line 619 "dependency_graph.m"
          }
#line 619 "dependency_graph.m"
        else
#line 620 "dependency_graph.m"
          {
#line 620 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildKey_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 620 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 620 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Child_19;
#line 621 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_Child_19;

#line 621 "dependency_graph.m"
            {
#line 621 "dependency_graph.m"
              mercury__digraph__lookup_vertex_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__ChildKey_13, &transform_hlds__dependency_graph__conv0_Child_19);
            }
#line 621 "dependency_graph.m"
            transform_hlds__dependency_graph__Child_19 = ((MR_Word) transform_hlds__dependency_graph__conv0_Child_19);
#line 622 "dependency_graph.m"
            {
#line 622 "dependency_graph.m"
              transform_hlds__dependency_graph__write_prof_dep_graph_link_5_p_0(transform_hlds__dependency_graph__V_25_25, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__Child_19);
            }
#line 623 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 623 "dependency_graph.m"
            {
#line 623 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Children_14;

#line 623 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 623 "dependency_graph.m"
            }
#line 623 "dependency_graph.m"
            continue;
#line 620 "dependency_graph.m"
          }
#line 619 "dependency_graph.m"
      }
#line 619 "dependency_graph.m"
      break;
#line 619 "dependency_graph.m"
    }
#line 614 "dependency_graph.m"
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
#line 605 "dependency_graph.m"
  while (MR_TRUE)
#line 605 "dependency_graph.m"
    {
#line 605 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 605 "dependency_graph.m"
      {
#line 605 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 605 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "dependency_graph.m"
          {
#line 605 "dependency_graph.m"
          }
#line 605 "dependency_graph.m"
        else
#line 606 "dependency_graph.m"
          {
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Nodes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__NodeKey_19;
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildrenSet_20;
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_21;

#line 608 "dependency_graph.m"
            {
#line 608 "dependency_graph.m"
              mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, ((MR_Box) (transform_hlds__dependency_graph__Node_13)), &transform_hlds__dependency_graph__NodeKey_19);
            }
#line 609 "dependency_graph.m"
            {
#line 609 "dependency_graph.m"
              mercury__digraph__lookup_from_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__NodeKey_19, &transform_hlds__dependency_graph__ChildrenSet_20);
            }
#line 610 "dependency_graph.m"
            {
#line 610 "dependency_graph.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], transform_hlds__dependency_graph__ChildrenSet_20, &transform_hlds__dependency_graph__Children_21);
            }
#line 611 "dependency_graph.m"
            {
#line 611 "dependency_graph.m"
              transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_53_95_95_91_53_93_95_48_6_p_0(transform_hlds__dependency_graph__V_29_29, transform_hlds__dependency_graph__Children_21, transform_hlds__dependency_graph__Node_13, transform_hlds__dependency_graph__HeadVar__2_2);
            }
#line 612 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 612 "dependency_graph.m"
            {
#line 612 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Nodes_14;

#line 612 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 612 "dependency_graph.m"
            }
#line 612 "dependency_graph.m"
            continue;
#line 606 "dependency_graph.m"
          }
#line 605 "dependency_graph.m"
      }
#line 605 "dependency_graph.m"
      break;
#line 605 "dependency_graph.m"
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
#line 605 "dependency_graph.m"
  while (MR_TRUE)
#line 605 "dependency_graph.m"
    {
#line 605 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 605 "dependency_graph.m"
      {
#line 605 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 605 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "dependency_graph.m"
          {
#line 605 "dependency_graph.m"
          }
#line 605 "dependency_graph.m"
        else
#line 606 "dependency_graph.m"
          {
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Nodes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__NodeKey_19;
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildrenSet_20;
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_21;

#line 608 "dependency_graph.m"
            {
#line 608 "dependency_graph.m"
              mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, ((MR_Box) (transform_hlds__dependency_graph__Node_13)), &transform_hlds__dependency_graph__NodeKey_19);
            }
#line 609 "dependency_graph.m"
            {
#line 609 "dependency_graph.m"
              mercury__digraph__lookup_from_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__NodeKey_19, &transform_hlds__dependency_graph__ChildrenSet_20);
            }
#line 610 "dependency_graph.m"
            {
#line 610 "dependency_graph.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], transform_hlds__dependency_graph__ChildrenSet_20, &transform_hlds__dependency_graph__Children_21);
            }
#line 611 "dependency_graph.m"
            {
#line 611 "dependency_graph.m"
              transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_99_104_105_108_100_114_101_110_95_95_104_111_54_95_95_91_53_93_95_48_6_p_0(transform_hlds__dependency_graph__V_29_29, transform_hlds__dependency_graph__Children_21, transform_hlds__dependency_graph__Node_13, transform_hlds__dependency_graph__HeadVar__2_2);
            }
#line 612 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 612 "dependency_graph.m"
            {
#line 612 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Nodes_14;

#line 612 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 612 "dependency_graph.m"
            }
#line 612 "dependency_graph.m"
            continue;
#line 606 "dependency_graph.m"
          }
#line 605 "dependency_graph.m"
      }
#line 605 "dependency_graph.m"
      break;
#line 605 "dependency_graph.m"
    }
#line 105 "dependency_graph.m"
}

#line 236 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(
#line 236 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 236 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 236 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 236 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 236 "dependency_graph.m"
{
#line 239 "dependency_graph.m"
  while (MR_TRUE)
#line 239 "dependency_graph.m"
    {
#line 239 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 239 "dependency_graph.m"
      {
#line 239 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 239 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 239 "dependency_graph.m"
        else
#line 240 "dependency_graph.m"
          {
#line 240 "dependency_graph.m"
            MR_Integer transform_hlds__dependency_graph__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 240 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 240 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_19_19;
#line 240 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;
#line 241 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_16_16;

#line 241 "dependency_graph.m"
            {
#line 241 "dependency_graph.m"
              transform_hlds__dependency_graph__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 241 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_11));
#line 241 "dependency_graph.m"
            }
#line 241 "dependency_graph.m"
            {
#line 241 "dependency_graph.m"
              mercury__digraph__add_vertex_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__dependency_graph__V_19_19)), &transform_hlds__dependency_graph__V_16_16, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20);
            }
#line 242 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 242 "dependency_graph.m"
            {
#line 242 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__ProcIds_12;
#line 242 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;

#line 242 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 242 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 242 "dependency_graph.m"
            }
#line 242 "dependency_graph.m"
            continue;
#line 240 "dependency_graph.m"
          }
#line 239 "dependency_graph.m"
      }
#line 239 "dependency_graph.m"
      break;
#line 239 "dependency_graph.m"
    }
#line 236 "dependency_graph.m"
}

#line 205 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 205 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
#line 205 "dependency_graph.m"
{
#line 205 "dependency_graph.m"
  {
#line 205 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 205 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__HeadVar__2_2;
#line 205 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__conv0_HeadVar__2_2;

#line 205 "dependency_graph.m"
    {
#line 205 "dependency_graph.m"
      transform_hlds__dependency_graph__conv0_HeadVar__2_2 = mercury__std_util__id_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)));
    }
#line 205 "dependency_graph.m"
    transform_hlds__dependency_graph__HeadVar__2_2 = ((MR_Word) transform_hlds__dependency_graph__conv0_HeadVar__2_2);
#line 205 "dependency_graph.m"
    return transform_hlds__dependency_graph__HeadVar__2_2;
#line 205 "dependency_graph.m"
  }
#line 205 "dependency_graph.m"
}

#line 204 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
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
      transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
#line 204 "dependency_graph.m"
      return;
    }
#line 204 "dependency_graph.m"
  }
#line 204 "dependency_graph.m"
}

#line 203 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_proc_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 203 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 203 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 203 "dependency_graph.m"
{
#line 203 "dependency_graph.m"
  {
#line 203 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 203 "dependency_graph.m"
    {
#line 203 "dependency_graph.m"
      transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
#line 203 "dependency_graph.m"
      return;
    }
#line 203 "dependency_graph.m"
  }
#line 203 "dependency_graph.m"
}

#line 211 "dependency_graph.m"
static MR_Word MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__dependency_node_1_1_f_0(
#line 211 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
#line 211 "dependency_graph.m"
{
#line 348 "dependency_graph.m"
  {
#line 348 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 348 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 348 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));

#line 348 "dependency_graph.m"
    return transform_hlds__dependency_graph__HeadVar__2_2;
#line 348 "dependency_graph.m"
  }
#line 211 "dependency_graph.m"
}

#line 210 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_arcs_5_5_p_0(
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
      transform_hlds__dependency_graph__add_pred_arcs_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
#line 210 "dependency_graph.m"
      return;
    }
#line 210 "dependency_graph.m"
  }
#line 210 "dependency_graph.m"
}

#line 209 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__ClassMethod_for_transform_hlds__dependency_graph__dependency_node____hlds__hlds_pred__pred_id__arity0______transform_hlds__dependency_graph__add_dependency_nodes_5_5_p_0(
#line 209 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 209 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 209 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 209 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 209 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 209 "dependency_graph.m"
{
#line 209 "dependency_graph.m"
  {
#line 209 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 209 "dependency_graph.m"
    {
#line 209 "dependency_graph.m"
      transform_hlds__dependency_graph__add_pred_nodes_5_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__HeadVar__4_4, transform_hlds__dependency_graph__HeadVar__5_5);
#line 209 "dependency_graph.m"
      return;
    }
#line 209 "dependency_graph.m"
  }
#line 209 "dependency_graph.m"
}

#line 681 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_pred_map_0_0(
#line 681 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
#line 681 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 681 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
#line 681 "dependency_graph.m"
{
#line 681 "dependency_graph.m"
  {
#line 681 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 681 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__Cast_HeadVar1_4 = transform_hlds__dependency_graph__HeadVar__2_2;
#line 681 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__Cast_HeadVar2_5 = transform_hlds__dependency_graph__HeadVar__3_3;

#line 681 "dependency_graph.m"
    {
#line 681 "dependency_graph.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_2[1], transform_hlds__dependency_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__dependency_graph__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__dependency_graph__Cast_HeadVar2_5)));
#line 681 "dependency_graph.m"
      return;
    }
#line 681 "dependency_graph.m"
  }
#line 681 "dependency_graph.m"
}

#line 681 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_pred_map_0_0(
#line 681 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 681 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
#line 681 "dependency_graph.m"
{
#line 681 "dependency_graph.m"
  {
#line 681 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 681 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__Cast_HeadVar1_3 = transform_hlds__dependency_graph__HeadVar__1_1;
#line 681 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__Cast_HeadVar2_4 = transform_hlds__dependency_graph__HeadVar__2_2;

#line 681 "dependency_graph.m"
    {
#line 681 "dependency_graph.m"
      return transform_hlds__dependency_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_2[1], ((MR_Box) (transform_hlds__dependency_graph__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__dependency_graph__Cast_HeadVar2_4)));
    }
#line 681 "dependency_graph.m"
    return transform_hlds__dependency_graph__succeeded;
#line 681 "dependency_graph.m"
  }
#line 681 "dependency_graph.m"
}

#line 683 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_id_0_0(
#line 683 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
#line 683 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2,
#line 683 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__3_3)
#line 683 "dependency_graph.m"
{
#line 683 "dependency_graph.m"
  {
#line 683 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 683 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar1_4 = transform_hlds__dependency_graph__HeadVar__2_2;
#line 683 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar2_5 = transform_hlds__dependency_graph__HeadVar__3_3;

#line 683 "dependency_graph.m"
    {
#line 683 "dependency_graph.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Cast_HeadVar1_4, transform_hlds__dependency_graph__Cast_HeadVar2_5);
#line 683 "dependency_graph.m"
      return;
    }
#line 683 "dependency_graph.m"
  }
#line 683 "dependency_graph.m"
}

#line 683 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_id_0_0(
#line 683 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__1_1,
#line 683 "dependency_graph.m"
  MR_Integer transform_hlds__dependency_graph__HeadVar__2_2)
#line 683 "dependency_graph.m"
{
#line 683 "dependency_graph.m"
  {
#line 683 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 683 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar1_3 = transform_hlds__dependency_graph__HeadVar__1_1;
#line 683 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__Cast_HeadVar2_4 = transform_hlds__dependency_graph__HeadVar__2_2;

#line 683 "dependency_graph.m"
    transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__Cast_HeadVar1_3 == transform_hlds__dependency_graph__Cast_HeadVar2_4);
#line 683 "dependency_graph.m"
    return transform_hlds__dependency_graph__succeeded;
#line 683 "dependency_graph.m"
  }
#line 683 "dependency_graph.m"
}

#line 685 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph____Compare____scc_0_0(
#line 685 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__1_1,
#line 685 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 685 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3)
#line 685 "dependency_graph.m"
{
#line 685 "dependency_graph.m"
  {
#line 685 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 685 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__Cast_HeadVar1_4 = transform_hlds__dependency_graph__HeadVar__2_2;
#line 685 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__Cast_HeadVar2_5 = transform_hlds__dependency_graph__HeadVar__3_3;

#line 685 "dependency_graph.m"
    {
#line 685 "dependency_graph.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[3], transform_hlds__dependency_graph__HeadVar__1_1, ((MR_Box) (transform_hlds__dependency_graph__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__dependency_graph__Cast_HeadVar2_5)));
#line 685 "dependency_graph.m"
      return;
    }
#line 685 "dependency_graph.m"
  }
#line 685 "dependency_graph.m"
}

#line 685 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph____Unify____scc_0_0(
#line 685 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 685 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2)
#line 685 "dependency_graph.m"
{
#line 685 "dependency_graph.m"
  {
#line 685 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 685 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__Cast_HeadVar1_3 = transform_hlds__dependency_graph__HeadVar__1_1;
#line 685 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__Cast_HeadVar2_4 = transform_hlds__dependency_graph__HeadVar__2_2;

#line 685 "dependency_graph.m"
    {
#line 685 "dependency_graph.m"
      return transform_hlds__dependency_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[3], ((MR_Box) (transform_hlds__dependency_graph__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__dependency_graph__Cast_HeadVar2_4)));
    }
#line 685 "dependency_graph.m"
    return transform_hlds__dependency_graph__succeeded;
#line 685 "dependency_graph.m"
  }
#line 685 "dependency_graph.m"
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
#line 2442 "transform_hlds.dependency_graph.c"
  {
#line 2444 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__HeadVar__2_1 == transform_hlds__dependency_graph__HeadVar__2_2);

#line 2447 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__succeeded;
#line 2449 "transform_hlds.dependency_graph.c"
  }
#line 51 "dependency_graph.m"
}

#line 652 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_1(
#line 652 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 652 "dependency_graph.m"
{
#line 652 "dependency_graph.m"
  {
#line 652 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 652 "dependency_graph.m"
    MR_builtin_longjmp((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__commit_0, 1);
#line 652 "dependency_graph.m"
  }
#line 652 "dependency_graph.m"
}

#line 657 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_3(
#line 657 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 657 "dependency_graph.m"
{
#line 657 "dependency_graph.m"
  {
#line 657 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 657 "dependency_graph.m"
    (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingKey_14 = ((MR_Word) (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv0_CallingKey_14);
#line 657 "dependency_graph.m"
    {
#line 657 "dependency_graph.m"
      transform_hlds__dependency_graph__is_entry_point_3_p_0_2(transform_hlds__dependency_graph__env_ptr);
#line 657 "dependency_graph.m"
      return;
    }
#line 657 "dependency_graph.m"
  }
#line 657 "dependency_graph.m"
}

#line 659 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_5(
#line 659 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 659 "dependency_graph.m"
{
#line 659 "dependency_graph.m"
  {
#line 659 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 659 "dependency_graph.m"
    (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCC_16 = ((MR_Word) (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv2_HigherSCC_16);
#line 659 "dependency_graph.m"
    {
#line 659 "dependency_graph.m"
      transform_hlds__dependency_graph__is_entry_point_3_p_0_4(transform_hlds__dependency_graph__env_ptr);
#line 659 "dependency_graph.m"
      return;
    }
#line 659 "dependency_graph.m"
  }
#line 659 "dependency_graph.m"
}

#line 652 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_4(
#line 652 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 652 "dependency_graph.m"
{
#line 652 "dependency_graph.m"
  {
#line 652 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 660 "dependency_graph.m"
    {
#line 660 "dependency_graph.m"
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, ((MR_Box) ((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingPred_15)), (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCC_16);
    }
#line 660 "dependency_graph.m"
    if ((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded)
#line 660 "dependency_graph.m"
      {
#line 660 "dependency_graph.m"
        transform_hlds__dependency_graph__is_entry_point_3_p_0_1(transform_hlds__dependency_graph__env_ptr);
#line 660 "dependency_graph.m"
        return;
      }
#line 652 "dependency_graph.m"
  }
#line 652 "dependency_graph.m"
}

#line 652 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_2(
#line 652 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 652 "dependency_graph.m"
{
#line 652 "dependency_graph.m"
  {
#line 652 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 652 "dependency_graph.m"
    {
#line 658 "dependency_graph.m"
      MR_Box transform_hlds__dependency_graph__conv1_CallingPred_15;

#line 658 "dependency_graph.m"
      {
#line 658 "dependency_graph.m"
        mercury__digraph__lookup_vertex_3_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingKey_14, &transform_hlds__dependency_graph__conv1_CallingPred_15);
      }
#line 658 "dependency_graph.m"
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__CallingPred_15 = ((MR_Word) transform_hlds__dependency_graph__conv1_CallingPred_15);
#line 2580 "transform_hlds.dependency_graph.c"
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeInfo_19_19 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[3];
#line 659 "dependency_graph.m"
      {
#line 659 "dependency_graph.m"
        mercury__list__member_2_p_1((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeInfo_19_19, &(transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv2_HigherSCC_16, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCCs_4, transform_hlds__dependency_graph__is_entry_point_3_p_0_5, transform_hlds__dependency_graph__env_ptr);
      }
#line 652 "dependency_graph.m"
    }
#line 652 "dependency_graph.m"
  }
#line 652 "dependency_graph.m"
}

#line 652 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0_6(
#line 652 "dependency_graph.m"
  void * transform_hlds__dependency_graph__env_ptr_arg)
#line 652 "dependency_graph.m"
{
#line 652 "dependency_graph.m"
  {
#line 652 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s * transform_hlds__dependency_graph__env_ptr = (struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s *) transform_hlds__dependency_graph__env_ptr_arg;

#line 652 "dependency_graph.m"
    if (MR_builtin_setjmp((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__commit_0) == 0)
#line 652 "dependency_graph.m"
      {
#line 652 "dependency_graph.m"
        {
#line 652 "dependency_graph.m"
          MR_Word transform_hlds__dependency_graph__DepInfo_10;
#line 652 "dependency_graph.m"
          MR_Word transform_hlds__dependency_graph__PredProcIdKey_12;
#line 652 "dependency_graph.m"
          MR_Word transform_hlds__dependency_graph__CallingKeys_13;

#line 652 "dependency_graph.m"
          {
#line 652 "dependency_graph.m"
            hlds__hlds_module__module_info_dependency_info_2_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5, &transform_hlds__dependency_graph__DepInfo_10);
          }
#line 2624 "transform_hlds.dependency_graph.c"
          (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 653 "dependency_graph.m"
          {
#line 653 "dependency_graph.m"
            hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, transform_hlds__dependency_graph__DepInfo_10, &(transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11);
          }
#line 655 "dependency_graph.m"
          {
#line 655 "dependency_graph.m"
            mercury__digraph__lookup_key_3_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11, ((MR_Box) ((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6)), &transform_hlds__dependency_graph__PredProcIdKey_12);
          }
#line 656 "dependency_graph.m"
          {
#line 656 "dependency_graph.m"
            mercury__digraph__lookup_to_3_p_0((transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__TypeCtorInfo_17_17, (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__DepGraph_11, transform_hlds__dependency_graph__PredProcIdKey_12, &transform_hlds__dependency_graph__CallingKeys_13);
          }
#line 657 "dependency_graph.m"
          {
#line 657 "dependency_graph.m"
            mercury__set__member_2_p_1((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], &(transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__conv0_CallingKey_14, transform_hlds__dependency_graph__CallingKeys_13, transform_hlds__dependency_graph__is_entry_point_3_p_0_3, transform_hlds__dependency_graph__env_ptr);
          }
#line 652 "dependency_graph.m"
        }
#line 652 "dependency_graph.m"
        (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = MR_FALSE;
#line 652 "dependency_graph.m"
      }
#line 652 "dependency_graph.m"
    else
#line 652 "dependency_graph.m"
      (transform_hlds__dependency_graph__env_ptr)->transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = MR_TRUE;
#line 652 "dependency_graph.m"
  }
#line 652 "dependency_graph.m"
}

#line 641 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph__is_entry_point_3_p_0(
#line 641 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HigherSCCs_4,
#line 641 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_5,
#line 641 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__PredProcId_6)
#line 641 "dependency_graph.m"
{
#line 641 "dependency_graph.m"
  {
#line 641 "dependency_graph.m"
    struct transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0_s transform_hlds__dependency_graph__env;

#line 641 "dependency_graph.m"
    (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__HigherSCCs_4 = transform_hlds__dependency_graph__HigherSCCs_4;
#line 641 "dependency_graph.m"
    (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5 = transform_hlds__dependency_graph__ModuleInfo_5;
#line 641 "dependency_graph.m"
    (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6 = transform_hlds__dependency_graph__PredProcId_6;
#line 647 "dependency_graph.m"
    {
#line 647 "dependency_graph.m"
      MR_Word transform_hlds__dependency_graph__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6, (MR_Integer) 0)));
#line 647 "dependency_graph.m"
      MR_Word transform_hlds__dependency_graph__PredInfo_9;
#line 647 "dependency_graph.m"
      MR_Integer transform_hlds__dependency_graph___ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__PredProcId_6, (MR_Integer) 1)));

#line 648 "dependency_graph.m"
      {
#line 648 "dependency_graph.m"
        hlds__hlds_module__module_info_pred_info_3_p_0((transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__ModuleInfo_5, transform_hlds__dependency_graph__PredId_7, &transform_hlds__dependency_graph__PredInfo_9);
      }
#line 649 "dependency_graph.m"
      {
#line 649 "dependency_graph.m"
        (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__dependency_graph__PredInfo_9);
      }
#line 647 "dependency_graph.m"
    }
#line 647 "dependency_graph.m"
    if (!((transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded))
#line 652 "dependency_graph.m"
      {
#line 652 "dependency_graph.m"
        {
#line 652 "dependency_graph.m"
          transform_hlds__dependency_graph__is_entry_point_3_p_0_6(&transform_hlds__dependency_graph__env);
        }
#line 652 "dependency_graph.m"
      }
#line 647 "dependency_graph.m"
    return (transform_hlds__dependency_graph__env).transform_hlds__dependency_graph__is_entry_point_3_p_0_env_0__succeeded;
#line 641 "dependency_graph.m"
  }
#line 641 "dependency_graph.m"
}

#line 614 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_graph_children_6_p_0(
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 614 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4)
#line 614 "dependency_graph.m"
{
#line 619 "dependency_graph.m"
  while (MR_TRUE)
#line 619 "dependency_graph.m"
    {
#line 619 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 619 "dependency_graph.m"
      {
#line 619 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 619 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "dependency_graph.m"
          {
#line 619 "dependency_graph.m"
          }
#line 619 "dependency_graph.m"
        else
#line 620 "dependency_graph.m"
          {
#line 620 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildKey_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 620 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 620 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Child_19;
#line 621 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_Child_19;
#line 622 "dependency_graph.m"
            void MR_CALL (* transform_hlds__dependency_graph__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 622 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv2_STATE_VARIABLE_IO_22_22;

#line 621 "dependency_graph.m"
            {
#line 621 "dependency_graph.m"
              mercury__digraph__lookup_vertex_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__HeadVar__3_3, transform_hlds__dependency_graph__ChildKey_13, &transform_hlds__dependency_graph__conv0_Child_19);
            }
#line 621 "dependency_graph.m"
            transform_hlds__dependency_graph__Child_19 = ((MR_Word) transform_hlds__dependency_graph__conv0_Child_19);
#line 622 "dependency_graph.m"
            transform_hlds__dependency_graph__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__4_4, (MR_Integer) 1)));
#line 622 "dependency_graph.m"
            {
#line 622 "dependency_graph.m"
              transform_hlds__dependency_graph__func_1(((MR_Box) transform_hlds__dependency_graph__HeadVar__4_4), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__dependency_graph__Child_19)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__dependency_graph__conv2_STATE_VARIABLE_IO_22_22);
            }
#line 623 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 623 "dependency_graph.m"
            {
#line 623 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Children_14;

#line 623 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 623 "dependency_graph.m"
            }
#line 623 "dependency_graph.m"
            continue;
#line 620 "dependency_graph.m"
          }
#line 619 "dependency_graph.m"
      }
#line 619 "dependency_graph.m"
      break;
#line 619 "dependency_graph.m"
    }
#line 614 "dependency_graph.m"
}

#line 571 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_dep_graph_link_5_p_0(
#line 571 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 571 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 571 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8)
#line 571 "dependency_graph.m"
{
#line 574 "dependency_graph.m"
  {
#line 574 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PPredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 0)));
#line 574 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__PProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 1)));
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 0)));
#line 574 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__CProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 1)));
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PPredInfo_14;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PProcInfo_15;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CPredInfo_16;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CProcInfo_17;
#line 574 "dependency_graph.m"
    MR_String transform_hlds__dependency_graph__PName_18;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PDet_19;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PModes_20;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PContext_21;
#line 574 "dependency_graph.m"
    MR_String transform_hlds__dependency_graph__CName_22;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CDet_23;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CModes_24;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CContext_25;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__ModeVarSet_26;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__V_29_29;
#line 574 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__V_33_33;

#line 577 "dependency_graph.m"
    {
#line 577 "dependency_graph.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__PPredId_10, transform_hlds__dependency_graph__PProcId_11, &transform_hlds__dependency_graph__PPredInfo_14, &transform_hlds__dependency_graph__PProcInfo_15);
    }
#line 579 "dependency_graph.m"
    {
#line 579 "dependency_graph.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__CPredId_12, transform_hlds__dependency_graph__CProcId_13, &transform_hlds__dependency_graph__CPredInfo_16, &transform_hlds__dependency_graph__CProcInfo_17);
    }
#line 581 "dependency_graph.m"
    {
#line 581 "dependency_graph.m"
      transform_hlds__dependency_graph__PName_18 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dependency_graph__PPredInfo_14);
    }
#line 582 "dependency_graph.m"
    {
#line 582 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__dependency_graph__PProcInfo_15, &transform_hlds__dependency_graph__PDet_19);
    }
#line 583 "dependency_graph.m"
    {
#line 583 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__dependency_graph__PProcInfo_15, &transform_hlds__dependency_graph__PModes_20);
    }
#line 584 "dependency_graph.m"
    {
#line 584 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__dependency_graph__PProcInfo_15, &transform_hlds__dependency_graph__PContext_21);
    }
#line 585 "dependency_graph.m"
    {
#line 585 "dependency_graph.m"
      transform_hlds__dependency_graph__CName_22 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__dependency_graph__CPredInfo_16);
    }
#line 586 "dependency_graph.m"
    {
#line 586 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__dependency_graph__CProcInfo_17, &transform_hlds__dependency_graph__CDet_23);
    }
#line 587 "dependency_graph.m"
    {
#line 587 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__dependency_graph__CProcInfo_17, &transform_hlds__dependency_graph__CModes_24);
    }
#line 588 "dependency_graph.m"
    {
#line 588 "dependency_graph.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__dependency_graph__CProcInfo_17, &transform_hlds__dependency_graph__CContext_25);
    }
#line 589 "dependency_graph.m"
    {
#line 589 "dependency_graph.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &transform_hlds__dependency_graph__ModeVarSet_26);
    }
#line 590 "dependency_graph.m"
    {
#line 590 "dependency_graph.m"
      transform_hlds__dependency_graph__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 590 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_29_29, 0) = ((MR_Box) (transform_hlds__dependency_graph__PName_18));
#line 590 "dependency_graph.m"
    }
#line 590 "dependency_graph.m"
    {
#line 590 "dependency_graph.m"
      parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_7_p_0(transform_hlds__dependency_graph__ModeVarSet_26, transform_hlds__dependency_graph__V_29_29, transform_hlds__dependency_graph__PModes_20, transform_hlds__dependency_graph__PDet_19, transform_hlds__dependency_graph__PContext_21);
    }
#line 592 "dependency_graph.m"
    {
#line 592 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 593 "dependency_graph.m"
    {
#line 593 "dependency_graph.m"
      transform_hlds__dependency_graph__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 593 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_33_33, 0) = ((MR_Box) (transform_hlds__dependency_graph__CName_22));
#line 593 "dependency_graph.m"
    }
#line 593 "dependency_graph.m"
    {
#line 593 "dependency_graph.m"
      parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_7_p_0(transform_hlds__dependency_graph__ModeVarSet_26, transform_hlds__dependency_graph__V_33_33, transform_hlds__dependency_graph__CModes_24, transform_hlds__dependency_graph__CDet_23, transform_hlds__dependency_graph__CContext_25);
    }
#line 595 "dependency_graph.m"
    {
#line 595 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 595 "dependency_graph.m"
      return;
    }
#line 574 "dependency_graph.m"
  }
#line 571 "dependency_graph.m"
}

#line 560 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__write_prof_dep_graph_link_5_p_0(
#line 560 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ModuleInfo_6,
#line 560 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Parent_7,
#line 560 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Child_8)
#line 560 "dependency_graph.m"
{
#line 563 "dependency_graph.m"
  {
#line 563 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 563 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PPredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 0)));
#line 563 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__PProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Parent_7, (MR_Integer) 1)));
#line 563 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__CPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 0)));
#line 563 "dependency_graph.m"
    MR_Integer transform_hlds__dependency_graph__CProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Child_8, (MR_Integer) 1)));
#line 563 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__ProcLabel_28;
#line 563 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__ProcLabel_36;

#line 633 "dependency_graph.m"
    {
#line 633 "dependency_graph.m"
      transform_hlds__dependency_graph__ProcLabel_28 = backend_libs__proc_label__make_proc_label_3_f_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__PPredId_10, transform_hlds__dependency_graph__PProcId_11);
    }
#line 634 "dependency_graph.m"
    {
#line 634 "dependency_graph.m"
      backend_libs__name_mangle__output_proc_label_3_p_0(transform_hlds__dependency_graph__ProcLabel_28);
    }
#line 567 "dependency_graph.m"
    {
#line 567 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 633 "dependency_graph.m"
    {
#line 633 "dependency_graph.m"
      transform_hlds__dependency_graph__ProcLabel_36 = backend_libs__proc_label__make_proc_label_3_f_0(transform_hlds__dependency_graph__ModuleInfo_6, transform_hlds__dependency_graph__CPredId_12, transform_hlds__dependency_graph__CProcId_13);
    }
#line 634 "dependency_graph.m"
    {
#line 634 "dependency_graph.m"
      backend_libs__name_mangle__output_proc_label_3_p_0(transform_hlds__dependency_graph__ProcLabel_36);
    }
#line 569 "dependency_graph.m"
    {
#line 569 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 569 "dependency_graph.m"
      return;
    }
#line 563 "dependency_graph.m"
  }
#line 560 "dependency_graph.m"
}

#line 469 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(
#line 469 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40,
#line 469 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 469 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__ConsId_6,
#line 469 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36,
#line 469 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37)
#line 469 "dependency_graph.m"
{
#line 475 "dependency_graph.m"
  {
#line 475 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;

#line 475 "dependency_graph.m"
    if ((transform_hlds__dependency_graph__ConsId_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "dependency_graph.m"
      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
    else
#line 475 "dependency_graph.m"
      if (((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 2))))
#line 501 "dependency_graph.m"
        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
      else
#line 475 "dependency_graph.m"
        if (((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 1))))
#line 496 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
        else
#line 475 "dependency_graph.m"
          if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 495 "dependency_graph.m"
            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
          else
#line 475 "dependency_graph.m"
            if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 491 "dependency_graph.m"
              *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
            else
#line 475 "dependency_graph.m"
              if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 475 "dependency_graph.m"
                {
#line 475 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__ShroudedPredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 1)));
#line 475 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__PredProcId_10;
#line 483 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Callee_11;
#line 480 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__TypeInfo_42_42;
#line 480 "dependency_graph.m"
                  MR_Box transform_hlds__dependency_graph__V_38_38;
#line 3088 "transform_hlds.dependency_graph.c"
                  MR_Box MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box);

#line 476 "dependency_graph.m"
                  {
#line 476 "dependency_graph.m"
                    transform_hlds__dependency_graph__PredProcId_10 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__dependency_graph__ShroudedPredProcId_8);
                  }
#line 3096 "transform_hlds.dependency_graph.c"
                  transform_hlds__dependency_graph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 0)), (MR_Integer) 7)));
#line 3098 "transform_hlds.dependency_graph.c"
                  {
#line 3100 "transform_hlds.dependency_graph.c"
                    transform_hlds__dependency_graph__V_38_38 = transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40), ((MR_Box) (transform_hlds__dependency_graph__PredProcId_10)));
                  }
#line 3103 "transform_hlds.dependency_graph.c"
                  {
#line 3105 "transform_hlds.dependency_graph.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_42_42);
                  }
#line 480 "dependency_graph.m"
                  {
#line 480 "dependency_graph.m"
                    transform_hlds__dependency_graph__succeeded = mercury__digraph__search_key_3_p_0(transform_hlds__dependency_graph__TypeInfo_42_42, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36, transform_hlds__dependency_graph__V_38_38, &transform_hlds__dependency_graph__Callee_11);
                  }
#line 483 "dependency_graph.m"
                  if (transform_hlds__dependency_graph__succeeded)
#line 482 "dependency_graph.m"
                    {
#line 482 "dependency_graph.m"
                      MR_Word transform_hlds__dependency_graph__TypeInfo_44_44;

#line 3120 "transform_hlds.dependency_graph.c"
                      {
#line 3122 "transform_hlds.dependency_graph.c"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_40, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_44_44);
                      }
#line 482 "dependency_graph.m"
                      {
#line 482 "dependency_graph.m"
                        mercury__digraph__add_edge_4_p_0(transform_hlds__dependency_graph__TypeInfo_44_44, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Callee_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37);
#line 482 "dependency_graph.m"
                        return;
                      }
#line 482 "dependency_graph.m"
                    }
#line 483 "dependency_graph.m"
                  else
#line 482 "dependency_graph.m"
                    *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                }
#line 475 "dependency_graph.m"
              else
#line 475 "dependency_graph.m"
                if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 487 "dependency_graph.m"
                  *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                else
#line 475 "dependency_graph.m"
                  if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 503 "dependency_graph.m"
                    *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                  else
#line 475 "dependency_graph.m"
                    if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 490 "dependency_graph.m"
                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                    else
#line 475 "dependency_graph.m"
                      if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 500 "dependency_graph.m"
                        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                      else
#line 475 "dependency_graph.m"
                        if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 493 "dependency_graph.m"
                          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                        else
#line 475 "dependency_graph.m"
                          if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 489 "dependency_graph.m"
                            *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                          else
#line 475 "dependency_graph.m"
                            if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 492 "dependency_graph.m"
                              *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                            else
#line 475 "dependency_graph.m"
                              if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 502 "dependency_graph.m"
                                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                              else
#line 475 "dependency_graph.m"
                                if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 488 "dependency_graph.m"
                                  *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                                else
#line 475 "dependency_graph.m"
                                  if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 494 "dependency_graph.m"
                                    *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                                  else
#line 475 "dependency_graph.m"
                                    if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 498 "dependency_graph.m"
                                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
                                    else
#line 499 "dependency_graph.m"
                                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_37 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_36;
#line 475 "dependency_graph.m"
  }
#line 469 "dependency_graph.m"
}

#line 463 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1(
#line 463 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 463 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1,
#line 463 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_2,
#line 463 "dependency_graph.m"
  MR_Box * transform_hlds__dependency_graph__wrapper_arg_3)
#line 463 "dependency_graph.m"
{
#line 463 "dependency_graph.m"
  {
#line 463 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 463 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37;

#line 463 "dependency_graph.m"
    {
#line 463 "dependency_graph.m"
      transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_2), &transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37);
    }
#line 463 "dependency_graph.m"
    *transform_hlds__dependency_graph__wrapper_arg_3 = ((MR_Box) (transform_hlds__dependency_graph__conv0_STATE_VARIABLE_DepGraph_37));
#line 463 "dependency_graph.m"
  }
#line 463 "dependency_graph.m"
}

#line 455 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(
#line 455 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23,
#line 455 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 455 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 455 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 455 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4)
#line 455 "dependency_graph.m"
{
#line 459 "dependency_graph.m"
  while (MR_TRUE)
#line 459 "dependency_graph.m"
    {
#line 459 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 459 "dependency_graph.m"
      {
#line 459 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 459 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3;
#line 459 "dependency_graph.m"
        else
#line 460 "dependency_graph.m"
          {
#line 460 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeInfo_29_29;
#line 460 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeInfo_31_31;
#line 460 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Case_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 460 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 460 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 0)));
#line 460 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 1)));
#line 460 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Case_10, (MR_Integer) 2)));
#line 460 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18;
#line 460 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_19_19;
#line 460 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20;
#line 460 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
#line 463 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20;

#line 462 "dependency_graph.m"
            {
#line 462 "dependency_graph.m"
              transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__MainConsId_13, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18);
            }
#line 463 "dependency_graph.m"
            {
#line 463 "dependency_graph.m"
              transform_hlds__dependency_graph__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 463 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 0) = ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_6[0]));
#line 463 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 1) = ((MR_Box) (transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0_1));
#line 463 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 463 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 3) = ((MR_Box) (transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23));
#line 463 "dependency_graph.m"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_19_19, 4) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1));
#line 463 "dependency_graph.m"
            }
#line 3327 "transform_hlds.dependency_graph.c"
            {
#line 3329 "transform_hlds.dependency_graph.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_29_29);
            }
#line 3332 "transform_hlds.dependency_graph.c"
            {
#line 3334 "transform_hlds.dependency_graph.c"
              transform_hlds__dependency_graph__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3336 "transform_hlds.dependency_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1));
#line 3338 "transform_hlds.dependency_graph.c"
              MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeInfo_31_31, 1) = ((MR_Box) (transform_hlds__dependency_graph__TypeInfo_29_29));
#line 3340 "transform_hlds.dependency_graph.c"
            }
#line 463 "dependency_graph.m"
            {
#line 463 "dependency_graph.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, transform_hlds__dependency_graph__TypeInfo_31_31, transform_hlds__dependency_graph__V_19_19, transform_hlds__dependency_graph__OtherConsIds_14, ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_18_18)), &transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20);
            }
#line 463 "dependency_graph.m"
            transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20 = ((MR_Word) transform_hlds__dependency_graph__conv1_STATE_VARIABLE_DepGraph_20_20);
#line 464 "dependency_graph.m"
            {
#line 464 "dependency_graph.m"
              transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_23, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Goal_15, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_20_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
#line 465 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 465 "dependency_graph.m"
            {
#line 465 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__Cases_11;
#line 465 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

#line 465 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
#line 465 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
#line 465 "dependency_graph.m"
            }
#line 465 "dependency_graph.m"
            continue;
#line 460 "dependency_graph.m"
          }
#line 459 "dependency_graph.m"
      }
#line 459 "dependency_graph.m"
      break;
#line 459 "dependency_graph.m"
    }
#line 455 "dependency_graph.m"
}

#line 444 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_p_0(
#line 444 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17,
#line 444 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 444 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 444 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3,
#line 444 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4)
#line 444 "dependency_graph.m"
{
#line 448 "dependency_graph.m"
  while (MR_TRUE)
#line 448 "dependency_graph.m"
    {
#line 448 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 448 "dependency_graph.m"
      {
#line 448 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 448 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3;
#line 448 "dependency_graph.m"
        else
#line 449 "dependency_graph.m"
          {
#line 449 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 0)));
#line 449 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__2_2, (MR_Integer) 1)));
#line 449 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15;

#line 450 "dependency_graph.m"
            {
#line 450 "dependency_graph.m"
              transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_17, transform_hlds__dependency_graph__HeadVar__1_1, transform_hlds__dependency_graph__Goal_10, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15);
            }
#line 451 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 451 "dependency_graph.m"
            {
#line 451 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__Goals_11;
#line 451 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_15;

#line 451 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_3 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
#line 451 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
#line 451 "dependency_graph.m"
            }
#line 451 "dependency_graph.m"
            continue;
#line 449 "dependency_graph.m"
          }
#line 448 "dependency_graph.m"
      }
#line 448 "dependency_graph.m"
      break;
#line 448 "dependency_graph.m"
    }
#line 444 "dependency_graph.m"
}

#line 353 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(
#line 353 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107,
#line 353 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Caller_5,
#line 353 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Goal_6,
#line 353 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77,
#line 353 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78)
#line 353 "dependency_graph.m"
{
#line 357 "dependency_graph.m"
  while (MR_TRUE)
#line 357 "dependency_graph.m"
    {
#line 357 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 357 "dependency_graph.m"
      {
#line 357 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;
#line 357 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Goal_6, (MR_Integer) 0)));
#line 358 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Goal_6, (MR_Integer) 1)));

#line 364 "dependency_graph.m"
        if (((MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) == (MR_mktag((MR_Integer) 0))))
#line 373 "dependency_graph.m"
          {
#line 373 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__SubGoal_19 = (MR_Word) MR_body(((MR_Word) transform_hlds__dependency_graph__GoalExpr_8), (MR_Integer) 0);

#line 374 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 374 "dependency_graph.m"
            {
#line 374 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_19;

#line 374 "dependency_graph.m"
              transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 374 "dependency_graph.m"
            }
#line 374 "dependency_graph.m"
            continue;
#line 373 "dependency_graph.m"
          }
#line 364 "dependency_graph.m"
        else
#line 364 "dependency_graph.m"
          if (((MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) == (MR_mktag((MR_Integer) 2))))
#line 391 "dependency_graph.m"
            {
#line 391 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__PredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)));
#line 391 "dependency_graph.m"
              MR_Integer transform_hlds__dependency_graph__ProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 391 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__Builtin_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 391 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 391 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));
#line 391 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 5)));

#line 394 "dependency_graph.m"
              if ((transform_hlds__dependency_graph__Builtin_31 == (MR_Integer) 0))
#line 393 "dependency_graph.m"
                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 394 "dependency_graph.m"
              else
#line 405 "dependency_graph.m"
                {
#line 405 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__Callee_34;
#line 401 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__TypeInfo_109_109;
#line 401 "dependency_graph.m"
                  MR_Box transform_hlds__dependency_graph__V_88_88;
#line 401 "dependency_graph.m"
                  MR_Word transform_hlds__dependency_graph__V_89_89;

#line 402 "dependency_graph.m"
                  {
#line 402 "dependency_graph.m"
                    transform_hlds__dependency_graph__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 402 "dependency_graph.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_89_89, 0) = ((MR_Box) (transform_hlds__dependency_graph__PredId_28));
#line 402 "dependency_graph.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_89_89, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_29));
#line 402 "dependency_graph.m"
                  }
#line 402 "dependency_graph.m"
                  {
#line 402 "dependency_graph.m"
                    transform_hlds__dependency_graph__V_88_88 = transform_hlds__dependency_graph__dependency_node_1_f_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, transform_hlds__dependency_graph__V_89_89);
                  }
#line 3559 "transform_hlds.dependency_graph.c"
                  {
#line 3561 "transform_hlds.dependency_graph.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_109_109);
                  }
#line 401 "dependency_graph.m"
                  {
#line 401 "dependency_graph.m"
                    transform_hlds__dependency_graph__succeeded = mercury__digraph__search_key_3_p_0(transform_hlds__dependency_graph__TypeInfo_109_109, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__V_88_88, &transform_hlds__dependency_graph__Callee_34);
                  }
#line 405 "dependency_graph.m"
                  if (transform_hlds__dependency_graph__succeeded)
#line 404 "dependency_graph.m"
                    {
#line 404 "dependency_graph.m"
                      MR_Word transform_hlds__dependency_graph__TypeInfo_111_111;

#line 3576 "transform_hlds.dependency_graph.c"
                      {
#line 3578 "transform_hlds.dependency_graph.c"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_111_111);
                      }
#line 404 "dependency_graph.m"
                      {
#line 404 "dependency_graph.m"
                        mercury__digraph__add_edge_4_p_0(transform_hlds__dependency_graph__TypeInfo_111_111, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Callee_34, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 404 "dependency_graph.m"
                        return;
                      }
#line 404 "dependency_graph.m"
                    }
#line 405 "dependency_graph.m"
                  else
#line 404 "dependency_graph.m"
                    *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 405 "dependency_graph.m"
                }
#line 391 "dependency_graph.m"
            }
#line 364 "dependency_graph.m"
          else
#line 364 "dependency_graph.m"
            if (((MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) == (MR_mktag((MR_Integer) 1))))
#line 410 "dependency_graph.m"
              {
#line 410 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Unify_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 410 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)));
#line 410 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 410 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 410 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));

#line 413 "dependency_graph.m"
                if (((MR_tag((MR_Word) transform_hlds__dependency_graph__Unify_38)) == (MR_mktag((MR_Integer) 2))))
#line 412 "dependency_graph.m"
                  *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 413 "dependency_graph.m"
                else
#line 413 "dependency_graph.m"
                  if (((MR_tag((MR_Word) transform_hlds__dependency_graph__Unify_38)) == (MR_mktag((MR_Integer) 0))))
#line 416 "dependency_graph.m"
                    {
#line 416 "dependency_graph.m"
                      MR_Word transform_hlds__dependency_graph__ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 1)));
#line 416 "dependency_graph.m"
                      MR_Word transform_hlds__dependency_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)));
#line 416 "dependency_graph.m"
                      MR_Word transform_hlds__dependency_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 2)));
#line 416 "dependency_graph.m"
                      MR_Word transform_hlds__dependency_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 3)));
#line 416 "dependency_graph.m"
                      MR_Word transform_hlds__dependency_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 4)));
#line 416 "dependency_graph.m"
                      MR_Word transform_hlds__dependency_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 5)));
#line 416 "dependency_graph.m"
                      MR_Word transform_hlds__dependency_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 6)));

#line 417 "dependency_graph.m"
                      {
#line 417 "dependency_graph.m"
                        transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__ConsId_45, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 417 "dependency_graph.m"
                        return;
                      }
#line 416 "dependency_graph.m"
                    }
#line 413 "dependency_graph.m"
                  else
#line 413 "dependency_graph.m"
                    if (((MR_tag((MR_Word) transform_hlds__dependency_graph__Unify_38)) == (MR_mktag((MR_Integer) 1))))
#line 419 "dependency_graph.m"
                      {
#line 419 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__ConsId_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 1)));
#line 419 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)));
#line 419 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 2)));
#line 419 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 3)));
#line 419 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 4)));
#line 419 "dependency_graph.m"
                        MR_Word transform_hlds__dependency_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 5)));

#line 420 "dependency_graph.m"
                        {
#line 420 "dependency_graph.m"
                          transform_hlds__dependency_graph__add_dependency_arcs_in_cons_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__ConsId_99, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 420 "dependency_graph.m"
                          return;
                        }
#line 419 "dependency_graph.m"
                      }
#line 413 "dependency_graph.m"
                    else
#line 413 "dependency_graph.m"
                      if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__Unify_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Unify_38, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 422 "dependency_graph.m"
                        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 413 "dependency_graph.m"
                      else
#line 414 "dependency_graph.m"
                        *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 410 "dependency_graph.m"
              }
#line 364 "dependency_graph.m"
            else
#line 364 "dependency_graph.m"
              if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 425 "dependency_graph.m"
                *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 364 "dependency_graph.m"
              else
#line 364 "dependency_graph.m"
                if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 362 "dependency_graph.m"
                  {
#line 362 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 360 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 363 "dependency_graph.m"
                    {
#line 363 "dependency_graph.m"
                      transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Goals_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 363 "dependency_graph.m"
                      return;
                    }
#line 362 "dependency_graph.m"
                  }
#line 364 "dependency_graph.m"
                else
#line 364 "dependency_graph.m"
                  if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 362 "dependency_graph.m"
                    {
#line 362 "dependency_graph.m"
                      MR_Word transform_hlds__dependency_graph__Goals_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 363 "dependency_graph.m"
                      {
#line 363 "dependency_graph.m"
                        transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Goals_112, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 363 "dependency_graph.m"
                        return;
                      }
#line 362 "dependency_graph.m"
                    }
#line 364 "dependency_graph.m"
                  else
#line 364 "dependency_graph.m"
                    if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 389 "dependency_graph.m"
                      *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 364 "dependency_graph.m"
                    else
#line 364 "dependency_graph.m"
                      if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 368 "dependency_graph.m"
                        {
#line 368 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 368 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph__Then_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 368 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph__Else_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 4)));
#line 368 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_93_93;
#line 368 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_94_94;
#line 368 "dependency_graph.m"
                          MR_Word transform_hlds__dependency_graph___Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 369 "dependency_graph.m"
                          {
#line 369 "dependency_graph.m"
                            transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Cond_16, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_93_93);
                          }
#line 370 "dependency_graph.m"
                          {
#line 370 "dependency_graph.m"
                            transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Then_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_93_93, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_94_94);
                          }
#line 371 "dependency_graph.m"
                          /* direct tailcall eliminated */
#line 371 "dependency_graph.m"
                          {
#line 371 "dependency_graph.m"
                            MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__Else_18;
#line 371 "dependency_graph.m"
                            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_94_94;

#line 371 "dependency_graph.m"
                            transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77;
#line 371 "dependency_graph.m"
                            transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 371 "dependency_graph.m"
                          }
#line 371 "dependency_graph.m"
                          continue;
#line 368 "dependency_graph.m"
                        }
#line 364 "dependency_graph.m"
                      else
#line 364 "dependency_graph.m"
                        if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 376 "dependency_graph.m"
                          {
#line 376 "dependency_graph.m"
                            MR_Word transform_hlds__dependency_graph__Reason_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 376 "dependency_graph.m"
                            MR_Word transform_hlds__dependency_graph__SubGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));
#line 378 "dependency_graph.m"
                            MR_Word transform_hlds__dependency_graph__FGT_22;
#line 378 "dependency_graph.m"
                            MR_Word transform_hlds__dependency_graph__V_21_21;

#line 378 "dependency_graph.m"
                            transform_hlds__dependency_graph__succeeded = ((((MR_tag((MR_Word) transform_hlds__dependency_graph__Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 378 "dependency_graph.m"
                            if (transform_hlds__dependency_graph__succeeded)
#line 378 "dependency_graph.m"
                              {
#line 378 "dependency_graph.m"
                                transform_hlds__dependency_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 1)));
#line 378 "dependency_graph.m"
                                transform_hlds__dependency_graph__FGT_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__Reason_20, (MR_Integer) 2)));
#line 380 "dependency_graph.m"
                                if ((transform_hlds__dependency_graph__FGT_22 == (MR_Integer) 1))
#line 379 "dependency_graph.m"
                                  transform_hlds__dependency_graph__succeeded = MR_TRUE;
#line 380 "dependency_graph.m"
                                else
#line 380 "dependency_graph.m"
                                  if ((transform_hlds__dependency_graph__FGT_22 == (MR_Integer) 2))
#line 380 "dependency_graph.m"
                                    transform_hlds__dependency_graph__succeeded = MR_TRUE;
#line 380 "dependency_graph.m"
                                  else
#line 380 "dependency_graph.m"
                                    transform_hlds__dependency_graph__succeeded = MR_FALSE;
#line 378 "dependency_graph.m"
                              }
#line 385 "dependency_graph.m"
                            if (transform_hlds__dependency_graph__succeeded)
#line 380 "dependency_graph.m"
                              *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77;
#line 385 "dependency_graph.m"
                            else
#line 386 "dependency_graph.m"
                              {
#line 386 "dependency_graph.m"
                                /* direct tailcall eliminated */
#line 386 "dependency_graph.m"
                                {
#line 386 "dependency_graph.m"
                                  MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_98;

#line 386 "dependency_graph.m"
                                  transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 386 "dependency_graph.m"
                                }
#line 386 "dependency_graph.m"
                                continue;
#line 386 "dependency_graph.m"
                              }
#line 376 "dependency_graph.m"
                          }
#line 364 "dependency_graph.m"
                        else
#line 364 "dependency_graph.m"
                          if (((((MR_tag((MR_Word) transform_hlds__dependency_graph__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 427 "dependency_graph.m"
                            {
#line 427 "dependency_graph.m"
                              MR_Word transform_hlds__dependency_graph__ShortHand_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));

#line 433 "dependency_graph.m"
                              if (((MR_tag((MR_Word) transform_hlds__dependency_graph__ShortHand_66)) == (MR_mktag((MR_Integer) 1))))
#line 430 "dependency_graph.m"
                                {
#line 430 "dependency_graph.m"
                                  MR_Word transform_hlds__dependency_graph__MainGoal_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 4)));
#line 430 "dependency_graph.m"
                                  MR_Word transform_hlds__dependency_graph__OrElseGoals_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 5)));
#line 430 "dependency_graph.m"
                                  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_84_84;
#line 429 "dependency_graph.m"
                                  MR_Word transform_hlds__dependency_graph___GoalType_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
#line 429 "dependency_graph.m"
                                  MR_Word transform_hlds__dependency_graph___Outer_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));
#line 429 "dependency_graph.m"
                                  MR_Word transform_hlds__dependency_graph___Inner_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 2)));
#line 429 "dependency_graph.m"
                                  MR_Word transform_hlds__dependency_graph___OrElseInners_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 6)));
#line 429 "dependency_graph.m"
                                  MR_Word transform_hlds__dependency_graph___Vars_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 3)));

#line 431 "dependency_graph.m"
                                  {
#line 431 "dependency_graph.m"
                                    transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__MainGoal_70, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_84_84);
                                  }
#line 432 "dependency_graph.m"
                                  {
#line 432 "dependency_graph.m"
                                    transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__OrElseGoals_71, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_84_84, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 432 "dependency_graph.m"
                                    return;
                                  }
#line 430 "dependency_graph.m"
                                }
#line 433 "dependency_graph.m"
                              else
#line 433 "dependency_graph.m"
                                if (((MR_tag((MR_Word) transform_hlds__dependency_graph__ShortHand_66)) == (MR_mktag((MR_Integer) 0))))
#line 437 "dependency_graph.m"
                                  {
#line 437 "dependency_graph.m"
                                    MR_Word transform_hlds__dependency_graph__RHS_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));
#line 437 "dependency_graph.m"
                                    MR_Word transform_hlds__dependency_graph__Goal_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
#line 437 "dependency_graph.m"
                                    MR_Word transform_hlds__dependency_graph__Goals_119;
#line 437 "dependency_graph.m"
                                    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_123;
#line 437 "dependency_graph.m"
                                    MR_Word transform_hlds__dependency_graph__Goal_130;
#line 449 "dependency_graph.m"
                                    MR_Word transform_hlds__dependency_graph__Goals_131;

#line 438 "dependency_graph.m"
                                    {
#line 438 "dependency_graph.m"
                                      transform_hlds__dependency_graph__Goals_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "dependency_graph.m"
                                      MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Goals_119, 0) = ((MR_Box) (transform_hlds__dependency_graph__RHS_76));
#line 438 "dependency_graph.m"
                                      MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Goals_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "dependency_graph.m"
                                    }
#line 450 "dependency_graph.m"
                                    {
#line 450 "dependency_graph.m"
                                      transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Goal_118, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_123);
                                    }
#line 449 "dependency_graph.m"
                                    transform_hlds__dependency_graph__Goal_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Goals_119, (MR_Integer) 0)));
#line 449 "dependency_graph.m"
                                    transform_hlds__dependency_graph__Goals_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__Goals_119, (MR_Integer) 1)));
#line 450 "dependency_graph.m"
                                    /* direct tailcall eliminated */
#line 450 "dependency_graph.m"
                                    {
#line 450 "dependency_graph.m"
                                      MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__Goal_130;
#line 450 "dependency_graph.m"
                                      MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_15_123;

#line 450 "dependency_graph.m"
                                      transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_77;
#line 450 "dependency_graph.m"
                                      transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 450 "dependency_graph.m"
                                    }
#line 450 "dependency_graph.m"
                                    continue;
#line 437 "dependency_graph.m"
                                  }
#line 433 "dependency_graph.m"
                                else
#line 434 "dependency_graph.m"
                                  {
#line 434 "dependency_graph.m"
                                    MR_Word transform_hlds__dependency_graph__SubGoal_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 2)));
#line 434 "dependency_graph.m"
                                    MR_Word transform_hlds__dependency_graph__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 0)));
#line 434 "dependency_graph.m"
                                    MR_Word transform_hlds__dependency_graph__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__dependency_graph__ShortHand_66, (MR_Integer) 1)));

#line 435 "dependency_graph.m"
                                    /* direct tailcall eliminated */
#line 435 "dependency_graph.m"
                                    {
#line 435 "dependency_graph.m"
                                      MR_Word transform_hlds__dependency_graph__Goal__tmp_copy_6 = transform_hlds__dependency_graph__SubGoal_102;

#line 435 "dependency_graph.m"
                                      transform_hlds__dependency_graph__Goal_6 = transform_hlds__dependency_graph__Goal__tmp_copy_6;
#line 435 "dependency_graph.m"
                                    }
#line 435 "dependency_graph.m"
                                    continue;
#line 434 "dependency_graph.m"
                                  }
#line 427 "dependency_graph.m"
                            }
#line 364 "dependency_graph.m"
                          else
#line 365 "dependency_graph.m"
                            {
#line 365 "dependency_graph.m"
                              MR_Word transform_hlds__dependency_graph__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 3)));
#line 365 "dependency_graph.m"
                              MR_Word transform_hlds__dependency_graph___Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 1)));
#line 365 "dependency_graph.m"
                              MR_Word transform_hlds__dependency_graph___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__dependency_graph__GoalExpr_8, (MR_Integer) 2)));

#line 366 "dependency_graph.m"
                              {
#line 366 "dependency_graph.m"
                                transform_hlds__dependency_graph__add_dependency_arcs_in_cases_4_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_107, transform_hlds__dependency_graph__Caller_5, transform_hlds__dependency_graph__Cases_14, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_77, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_78);
#line 366 "dependency_graph.m"
                                return;
                              }
#line 365 "dependency_graph.m"
                            }
#line 357 "dependency_graph.m"
      }
#line 357 "dependency_graph.m"
      break;
#line 357 "dependency_graph.m"
    }
#line 353 "dependency_graph.m"
}

#line 337 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0_1(
#line 337 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 337 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
#line 337 "dependency_graph.m"
{
#line 337 "dependency_graph.m"
  {
#line 337 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__wrapper_arg_2;
#line 337 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;
#line 337 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__conv1_HeadVar__2_2;

#line 337 "dependency_graph.m"
    {
#line 337 "dependency_graph.m"
      transform_hlds__dependency_graph__conv1_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 337 "dependency_graph.m"
    transform_hlds__dependency_graph__wrapper_arg_2 = ((MR_Box) (transform_hlds__dependency_graph__conv1_HeadVar__2_2));
#line 337 "dependency_graph.m"
    return transform_hlds__dependency_graph__wrapper_arg_2;
#line 337 "dependency_graph.m"
  }
#line 337 "dependency_graph.m"
}

#line 321 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_arcs_5_p_0(
#line 321 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 321 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 321 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 321 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 321 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 321 "dependency_graph.m"
{
#line 324 "dependency_graph.m"
  while (MR_TRUE)
#line 324 "dependency_graph.m"
    {
#line 324 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 324 "dependency_graph.m"
      {
#line 324 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 324 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 324 "dependency_graph.m"
        else
#line 325 "dependency_graph.m"
          {
#line 325 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_29_29;
#line 325 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_16;
#line 325 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
#line 325 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27;
#line 327 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

#line 326 "dependency_graph.m"
            {
#line 326 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
#line 4097 "transform_hlds.dependency_graph.c"
            transform_hlds__dependency_graph__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 327 "dependency_graph.m"
            {
#line 327 "dependency_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_29_29, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
#line 327 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
#line 329 "dependency_graph.m"
            transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__IncludeImported_3 == (MR_Integer) 1);
#line 329 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 330 "dependency_graph.m"
              {
#line 330 "dependency_graph.m"
                transform_hlds__dependency_graph__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__dependency_graph__PredInfo_17);
              }
#line 333 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 330 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 333 "dependency_graph.m"
            else
#line 334 "dependency_graph.m"
              {
#line 334 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__ClausesInfo_18;
#line 334 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__ClausesRep_19;
#line 334 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Clauses_21;
#line 334 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Goals_22;
#line 334 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Caller_23;
#line 335 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph___ItemNumbers_20;

#line 334 "dependency_graph.m"
                {
#line 334 "dependency_graph.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__dependency_graph__PredInfo_17, &transform_hlds__dependency_graph__ClausesInfo_18);
                }
#line 335 "dependency_graph.m"
                {
#line 335 "dependency_graph.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__dependency_graph__ClausesInfo_18, &transform_hlds__dependency_graph__ClausesRep_19, &transform_hlds__dependency_graph___ItemNumbers_20);
                }
#line 336 "dependency_graph.m"
                {
#line 336 "dependency_graph.m"
                  hlds__hlds_clauses__get_clause_list_any_order_2_p_0(transform_hlds__dependency_graph__ClausesRep_19, &transform_hlds__dependency_graph__Clauses_21);
                }
#line 337 "dependency_graph.m"
                {
#line 337 "dependency_graph.m"
                  transform_hlds__dependency_graph__Goals_22 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__dependency_graph_scalar_common_2[2], transform_hlds__dependency_graph__Clauses_21);
                }
#line 338 "dependency_graph.m"
                {
#line 338 "dependency_graph.m"
                  mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_29_29, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__Caller_23);
                }
#line 339 "dependency_graph.m"
                {
#line 339 "dependency_graph.m"
                  transform_hlds__dependency_graph__add_dependency_arcs_in_list_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[1], transform_hlds__dependency_graph__Caller_23, transform_hlds__dependency_graph__Goals_22, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27);
                }
#line 334 "dependency_graph.m"
              }
#line 341 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 341 "dependency_graph.m"
            {
#line 341 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
#line 341 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_27_27;

#line 341 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 341 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 341 "dependency_graph.m"
            }
#line 341 "dependency_graph.m"
            continue;
#line 325 "dependency_graph.m"
          }
#line 324 "dependency_graph.m"
      }
#line 324 "dependency_graph.m"
      break;
#line 324 "dependency_graph.m"
    }
#line 321 "dependency_graph.m"
}

#line 288 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_proc_arcs_6_p_0(
#line 288 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 288 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 288 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 288 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_4,
#line 288 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5,
#line 288 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6)
#line 288 "dependency_graph.m"
{
#line 291 "dependency_graph.m"
  while (MR_TRUE)
#line 291 "dependency_graph.m"
    {
#line 291 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 291 "dependency_graph.m"
      {
#line 291 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 291 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 291 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_6 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5;
#line 291 "dependency_graph.m"
        else
#line 293 "dependency_graph.m"
          {
#line 293 "dependency_graph.m"
            MR_Integer transform_hlds__dependency_graph__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 293 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable0_19;
#line 293 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo0_20;
#line 293 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcTable0_21;
#line 293 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcInfo0_22;
#line 293 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32;
#line 295 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo0_20;
#line 297 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv1_ProcInfo0_22;

#line 294 "dependency_graph.m"
            {
#line 294 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__3_3, &transform_hlds__dependency_graph__PredTable0_19);
            }
#line 295 "dependency_graph.m"
            {
#line 295 "dependency_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable0_19, ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), &transform_hlds__dependency_graph__conv0_PredInfo0_20);
            }
#line 295 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo0_20 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo0_20);
#line 296 "dependency_graph.m"
            {
#line 296 "dependency_graph.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__dependency_graph__PredInfo0_20, &transform_hlds__dependency_graph__ProcTable0_21);
            }
#line 297 "dependency_graph.m"
            {
#line 297 "dependency_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__dependency_graph__ProcTable0_21, ((MR_Box) (transform_hlds__dependency_graph__ProcId_13)), &transform_hlds__dependency_graph__conv1_ProcInfo0_22);
            }
#line 297 "dependency_graph.m"
            transform_hlds__dependency_graph__ProcInfo0_22 = ((MR_Word) transform_hlds__dependency_graph__conv1_ProcInfo0_22);
#line 304 "dependency_graph.m"
            if ((transform_hlds__dependency_graph__IncludeImported_4 == (MR_Integer) 1))
#line 299 "dependency_graph.m"
              {
#line 299 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Goal_23;
#line 299 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Caller_24;
#line 299 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__V_31_31;

#line 300 "dependency_graph.m"
                {
#line 300 "dependency_graph.m"
                  hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__dependency_graph__ProcInfo0_22, &transform_hlds__dependency_graph__Goal_23);
                }
#line 302 "dependency_graph.m"
                {
#line 302 "dependency_graph.m"
                  transform_hlds__dependency_graph__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "dependency_graph.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_31_31, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 302 "dependency_graph.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_31_31, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_13));
#line 302 "dependency_graph.m"
                }
#line 302 "dependency_graph.m"
                {
#line 302 "dependency_graph.m"
                  mercury__digraph__lookup_key_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, ((MR_Box) (transform_hlds__dependency_graph__V_31_31)), &transform_hlds__dependency_graph__Caller_24);
                }
#line 303 "dependency_graph.m"
                {
#line 303 "dependency_graph.m"
                  transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0], transform_hlds__dependency_graph__Caller_24, transform_hlds__dependency_graph__Goal_23, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32);
                }
#line 299 "dependency_graph.m"
              }
#line 304 "dependency_graph.m"
            else
#line 305 "dependency_graph.m"
              {
#line 305 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__ImportStatus_25;
#line 305 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__Imported_26;

#line 306 "dependency_graph.m"
                {
#line 306 "dependency_graph.m"
                  hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__dependency_graph__PredInfo0_20, &transform_hlds__dependency_graph__ImportStatus_25);
                }
#line 307 "dependency_graph.m"
                {
#line 307 "dependency_graph.m"
                  transform_hlds__dependency_graph__Imported_26 = hlds__hlds_pred__status_is_imported_1_f_0(transform_hlds__dependency_graph__ImportStatus_25);
                }
#line 310 "dependency_graph.m"
                if ((transform_hlds__dependency_graph__Imported_26 == (MR_Integer) 0))
#line 311 "dependency_graph.m"
                  {
#line 311 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__V_29_29;
#line 311 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__Goal_34;
#line 311 "dependency_graph.m"
                    MR_Word transform_hlds__dependency_graph__Caller_35;

#line 312 "dependency_graph.m"
                    {
#line 312 "dependency_graph.m"
                      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__dependency_graph__ProcInfo0_22, &transform_hlds__dependency_graph__Goal_34);
                    }
#line 313 "dependency_graph.m"
                    {
#line 313 "dependency_graph.m"
                      transform_hlds__dependency_graph__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "dependency_graph.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_29_29, 0) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 313 "dependency_graph.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_29_29, 1) = ((MR_Box) (transform_hlds__dependency_graph__ProcId_13));
#line 313 "dependency_graph.m"
                    }
#line 313 "dependency_graph.m"
                    {
#line 313 "dependency_graph.m"
                      mercury__digraph__lookup_key_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, ((MR_Box) (transform_hlds__dependency_graph__V_29_29)), &transform_hlds__dependency_graph__Caller_35);
                    }
#line 314 "dependency_graph.m"
                    {
#line 314 "dependency_graph.m"
                      transform_hlds__dependency_graph__add_dependency_arcs_in_goal_4_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0], transform_hlds__dependency_graph__Caller_35, transform_hlds__dependency_graph__Goal_34, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32);
                    }
#line 311 "dependency_graph.m"
                  }
#line 310 "dependency_graph.m"
                else
#line 309 "dependency_graph.m"
                  transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5;
#line 305 "dependency_graph.m"
              }
#line 317 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 317 "dependency_graph.m"
            {
#line 317 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__ProcIds_14;
#line 317 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_32_32;

#line 317 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_5;
#line 317 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 317 "dependency_graph.m"
            }
#line 317 "dependency_graph.m"
            continue;
#line 293 "dependency_graph.m"
          }
#line 291 "dependency_graph.m"
      }
#line 291 "dependency_graph.m"
      break;
#line 291 "dependency_graph.m"
    }
#line 288 "dependency_graph.m"
}

#line 269 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_arcs_5_p_0(
#line 269 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 269 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 269 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 269 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 269 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 269 "dependency_graph.m"
{
#line 272 "dependency_graph.m"
  while (MR_TRUE)
#line 272 "dependency_graph.m"
    {
#line 272 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 272 "dependency_graph.m"
      {
#line 272 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 272 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 272 "dependency_graph.m"
        else
#line 273 "dependency_graph.m"
          {
#line 273 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 273 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_16;
#line 273 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
#line 273 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_18;
#line 273 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
#line 275 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

#line 274 "dependency_graph.m"
            {
#line 274 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
#line 275 "dependency_graph.m"
            {
#line 275 "dependency_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
#line 275 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
#line 281 "dependency_graph.m"
            if ((transform_hlds__dependency_graph__Imported_3 == (MR_Integer) 1))
#line 280 "dependency_graph.m"
              {
#line 280 "dependency_graph.m"
                transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
              }
#line 281 "dependency_graph.m"
            else
#line 283 "dependency_graph.m"
              {
#line 283 "dependency_graph.m"
                transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
              }
#line 285 "dependency_graph.m"
            {
#line 285 "dependency_graph.m"
              transform_hlds__dependency_graph__add_proc_arcs_6_p_0(transform_hlds__dependency_graph__ProcIds_18, transform_hlds__dependency_graph__PredId_11, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__Imported_3, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
#line 286 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 286 "dependency_graph.m"
            {
#line 286 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
#line 286 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

#line 286 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 286 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 286 "dependency_graph.m"
            }
#line 286 "dependency_graph.m"
            continue;
#line 273 "dependency_graph.m"
          }
#line 272 "dependency_graph.m"
      }
#line 272 "dependency_graph.m"
      break;
#line 272 "dependency_graph.m"
    }
#line 269 "dependency_graph.m"
}

#line 246 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_nodes_5_p_0(
#line 246 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 246 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 246 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__IncludeImported_3,
#line 246 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 246 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 246 "dependency_graph.m"
{
#line 250 "dependency_graph.m"
  while (MR_TRUE)
#line 250 "dependency_graph.m"
    {
#line 250 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 250 "dependency_graph.m"
      {
#line 250 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 250 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "dependency_graph.m"
          *transform_hlds__dependency_graph__HeadVar__5_5 = transform_hlds__dependency_graph__HeadVar__4_4;
#line 250 "dependency_graph.m"
        else
#line 251 "dependency_graph.m"
          {
#line 251 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_21_21;
#line 251 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 251 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 251 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_14;
#line 251 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_15;
#line 251 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19;
#line 253 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_15;

#line 252 "dependency_graph.m"
            {
#line 252 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_14);
            }
#line 4566 "transform_hlds.dependency_graph.c"
            transform_hlds__dependency_graph__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 253 "dependency_graph.m"
            {
#line 253 "dependency_graph.m"
              mercury__map__lookup_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_21_21, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_14, ((MR_Box) (transform_hlds__dependency_graph__PredId_9)), &transform_hlds__dependency_graph__conv0_PredInfo_15);
            }
#line 253 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_15 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_15);
#line 257 "dependency_graph.m"
            transform_hlds__dependency_graph__succeeded = (transform_hlds__dependency_graph__IncludeImported_3 == (MR_Integer) 1);
#line 257 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 258 "dependency_graph.m"
              {
#line 258 "dependency_graph.m"
                transform_hlds__dependency_graph__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__dependency_graph__PredInfo_15);
              }
#line 261 "dependency_graph.m"
            if (transform_hlds__dependency_graph__succeeded)
#line 258 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19 = transform_hlds__dependency_graph__HeadVar__4_4;
#line 261 "dependency_graph.m"
            else
#line 262 "dependency_graph.m"
              {
#line 262 "dependency_graph.m"
                MR_Word transform_hlds__dependency_graph__V_16_16;

#line 262 "dependency_graph.m"
                {
#line 262 "dependency_graph.m"
                  mercury__digraph__add_vertex_4_p_0(transform_hlds__dependency_graph__TypeCtorInfo_21_21, ((MR_Box) (transform_hlds__dependency_graph__PredId_9)), &transform_hlds__dependency_graph__V_16_16, transform_hlds__dependency_graph__HeadVar__4_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19);
                }
#line 262 "dependency_graph.m"
              }
#line 264 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 264 "dependency_graph.m"
            {
#line 264 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_10;
#line 264 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__4__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_19_19;

#line 264 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__4_4 = transform_hlds__dependency_graph__HeadVar__4__tmp_copy_4;
#line 264 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 264 "dependency_graph.m"
            }
#line 264 "dependency_graph.m"
            continue;
#line 251 "dependency_graph.m"
          }
#line 250 "dependency_graph.m"
      }
#line 250 "dependency_graph.m"
      break;
#line 250 "dependency_graph.m"
    }
#line 246 "dependency_graph.m"
}

#line 217 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_pred_proc_nodes_5_p_0(
#line 217 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 217 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 217 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__Imported_3,
#line 217 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4,
#line 217 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5)
#line 217 "dependency_graph.m"
{
#line 220 "dependency_graph.m"
  while (MR_TRUE)
#line 220 "dependency_graph.m"
    {
#line 220 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 220 "dependency_graph.m"
      {
#line 220 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 220 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 220 "dependency_graph.m"
          *transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_5 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4;
#line 220 "dependency_graph.m"
        else
#line 221 "dependency_graph.m"
          {
#line 221 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 221 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 221 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredTable_16;
#line 221 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__PredInfo_17;
#line 221 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ProcIds_18;
#line 221 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;
#line 223 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv0_PredInfo_17;

#line 222 "dependency_graph.m"
            {
#line 222 "dependency_graph.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__dependency_graph__HeadVar__2_2, &transform_hlds__dependency_graph__PredTable_16);
            }
#line 223 "dependency_graph.m"
            {
#line 223 "dependency_graph.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__dependency_graph__PredTable_16, ((MR_Box) (transform_hlds__dependency_graph__PredId_11)), &transform_hlds__dependency_graph__conv0_PredInfo_17);
            }
#line 223 "dependency_graph.m"
            transform_hlds__dependency_graph__PredInfo_17 = ((MR_Word) transform_hlds__dependency_graph__conv0_PredInfo_17);
#line 229 "dependency_graph.m"
            if ((transform_hlds__dependency_graph__Imported_3 == (MR_Integer) 1))
#line 228 "dependency_graph.m"
              {
#line 228 "dependency_graph.m"
                transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
              }
#line 229 "dependency_graph.m"
            else
#line 231 "dependency_graph.m"
              {
#line 231 "dependency_graph.m"
                transform_hlds__dependency_graph__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__dependency_graph__PredInfo_17);
              }
#line 233 "dependency_graph.m"
            {
#line 233 "dependency_graph.m"
              transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_110_111_100_101_115_95_95_91_51_93_95_48_5_p_0(transform_hlds__dependency_graph__ProcIds_18, transform_hlds__dependency_graph__PredId_11, transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4, &transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21);
            }
#line 234 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 234 "dependency_graph.m"
            {
#line 234 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__PredIds_12;
#line 234 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_21_21;

#line 234 "dependency_graph.m"
              transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0_4 = transform_hlds__dependency_graph__STATE_VARIABLE_DepGraph_0__tmp_copy_4;
#line 234 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 234 "dependency_graph.m"
            }
#line 234 "dependency_graph.m"
            continue;
#line 221 "dependency_graph.m"
          }
#line 220 "dependency_graph.m"
      }
#line 220 "dependency_graph.m"
      break;
#line 220 "dependency_graph.m"
    }
#line 217 "dependency_graph.m"
}

#line 199 "dependency_graph.m"
static MR_Box MR_CALL 
transform_hlds__dependency_graph__dependency_node_1_f_0(
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3,
#line 199 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1)
#line 199 "dependency_graph.m"
{
#line 4747 "transform_hlds.dependency_graph.c"
  {
#line 4749 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 4751 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__HeadVar__2_2;
#line 4753 "transform_hlds.dependency_graph.c"
    MR_Box MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3, (MR_Integer) 0)), (MR_Integer) 7)));

#line 4756 "transform_hlds.dependency_graph.c"
    {
#line 4758 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_3), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)));
    }
#line 4761 "transform_hlds.dependency_graph.c"
    return transform_hlds__dependency_graph__HeadVar__2_2;
#line 4763 "transform_hlds.dependency_graph.c"
  }
#line 199 "dependency_graph.m"
}

#line 195 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_arcs_5_p_0(
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
#line 4785 "transform_hlds.dependency_graph.c"
  {
#line 4787 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 4789 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6, (MR_Integer) 0)), (MR_Integer) 6)));
#line 4791 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv1_HeadVar__5_5;

#line 4794 "transform_hlds.dependency_graph.c"
    {
#line 4796 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__3_3)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__4_4)), &transform_hlds__dependency_graph__conv1_HeadVar__5_5);
    }
#line 4799 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__HeadVar__5_5 = ((MR_Word) transform_hlds__dependency_graph__conv1_HeadVar__5_5);
#line 4801 "transform_hlds.dependency_graph.c"
  }
#line 195 "dependency_graph.m"
}

#line 191 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__add_dependency_nodes_5_p_0(
#line 191 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6,
#line 191 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 191 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 191 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__3_3,
#line 191 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__4_4,
#line 191 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__5_5)
#line 191 "dependency_graph.m"
{
#line 4823 "transform_hlds.dependency_graph.c"
  {
#line 4825 "transform_hlds.dependency_graph.c"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 4827 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4829 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv1_HeadVar__5_5;

#line 4832 "transform_hlds.dependency_graph.c"
    {
#line 4834 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_6), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__1_1)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__3_3)), ((MR_Box) (transform_hlds__dependency_graph__HeadVar__4_4)), &transform_hlds__dependency_graph__conv1_HeadVar__5_5);
    }
#line 4837 "transform_hlds.dependency_graph.c"
    *transform_hlds__dependency_graph__HeadVar__5_5 = ((MR_Word) transform_hlds__dependency_graph__conv1_HeadVar__5_5);
#line 4839 "transform_hlds.dependency_graph.c"
  }
#line 191 "dependency_graph.m"
}

#line 179 "dependency_graph.m"
static void MR_CALL 
transform_hlds__dependency_graph__sets_to_lists_3_p_0(
#line 179 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__TypeInfo_for_T_11,
#line 179 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__1_1,
#line 179 "dependency_graph.m"
  MR_Word transform_hlds__dependency_graph__HeadVar__2_2,
#line 179 "dependency_graph.m"
  MR_Word * transform_hlds__dependency_graph__HeadVar__3_3)
#line 179 "dependency_graph.m"
{
#line 182 "dependency_graph.m"
  while (MR_TRUE)
#line 182 "dependency_graph.m"
    {
#line 182 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 182 "dependency_graph.m"
      {
#line 182 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 182 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 182 "dependency_graph.m"
          *transform_hlds__dependency_graph__HeadVar__3_3 = transform_hlds__dependency_graph__HeadVar__2_2;
#line 182 "dependency_graph.m"
        else
#line 183 "dependency_graph.m"
          {
#line 183 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 183 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 183 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Y_9;
#line 183 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__V_10_10;

#line 184 "dependency_graph.m"
            {
#line 184 "dependency_graph.m"
              mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeInfo_for_T_11, transform_hlds__dependency_graph__X_5, &transform_hlds__dependency_graph__Y_9);
            }
#line 185 "dependency_graph.m"
            {
#line 185 "dependency_graph.m"
              transform_hlds__dependency_graph__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "dependency_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__V_10_10, 0) = ((MR_Box) (transform_hlds__dependency_graph__Y_9));
#line 185 "dependency_graph.m"
              MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__V_10_10, 1) = ((MR_Box) (transform_hlds__dependency_graph__HeadVar__2_2));
#line 185 "dependency_graph.m"
            }
#line 185 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 185 "dependency_graph.m"
            {
#line 185 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Xs_6;
#line 185 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2 = transform_hlds__dependency_graph__V_10_10;

#line 185 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__2_2 = transform_hlds__dependency_graph__HeadVar__2__tmp_copy_2;
#line 185 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 185 "dependency_graph.m"
            }
#line 185 "dependency_graph.m"
            continue;
#line 183 "dependency_graph.m"
          }
#line 182 "dependency_graph.m"
      }
#line 182 "dependency_graph.m"
      break;
#line 182 "dependency_graph.m"
    }
#line 179 "dependency_graph.m"
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
#line 605 "dependency_graph.m"
  while (MR_TRUE)
#line 605 "dependency_graph.m"
    {
#line 605 "dependency_graph.m"
      /* tailcall optimized into a loop */
#line 605 "dependency_graph.m"
      {
#line 605 "dependency_graph.m"
        MR_bool transform_hlds__dependency_graph__succeeded;

#line 605 "dependency_graph.m"
        if ((transform_hlds__dependency_graph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "dependency_graph.m"
          {
#line 605 "dependency_graph.m"
          }
#line 605 "dependency_graph.m"
        else
#line 606 "dependency_graph.m"
          {
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__TypeCtorInfo_27_27;
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Node_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 0)));
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Nodes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__dependency_graph__HeadVar__1_1, (MR_Integer) 1)));
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__NodeKey_19;
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__ChildrenSet_20;
#line 606 "dependency_graph.m"
            MR_Word transform_hlds__dependency_graph__Children_21;
#line 607 "dependency_graph.m"
            void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__HeadVar__3_3, (MR_Integer) 1)));
#line 607 "dependency_graph.m"
            MR_Box transform_hlds__dependency_graph__conv1_STATE_VARIABLE_IO_24_24;

#line 607 "dependency_graph.m"
            {
#line 607 "dependency_graph.m"
              transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__HeadVar__3_3), ((MR_Box) (transform_hlds__dependency_graph__Node_13)), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__dependency_graph__conv1_STATE_VARIABLE_IO_24_24);
            }
#line 4984 "transform_hlds.dependency_graph.c"
            transform_hlds__dependency_graph__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 608 "dependency_graph.m"
            {
#line 608 "dependency_graph.m"
              mercury__digraph__lookup_key_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, ((MR_Box) (transform_hlds__dependency_graph__Node_13)), &transform_hlds__dependency_graph__NodeKey_19);
            }
#line 609 "dependency_graph.m"
            {
#line 609 "dependency_graph.m"
              mercury__digraph__lookup_from_3_p_0(transform_hlds__dependency_graph__TypeCtorInfo_27_27, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__NodeKey_19, &transform_hlds__dependency_graph__ChildrenSet_20);
            }
#line 610 "dependency_graph.m"
            {
#line 610 "dependency_graph.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__dependency_graph_scalar_common_1[2], transform_hlds__dependency_graph__ChildrenSet_20, &transform_hlds__dependency_graph__Children_21);
            }
#line 611 "dependency_graph.m"
            {
#line 611 "dependency_graph.m"
              transform_hlds__dependency_graph__write_graph_children_6_p_0(transform_hlds__dependency_graph__Children_21, transform_hlds__dependency_graph__Node_13, transform_hlds__dependency_graph__HeadVar__2_2, transform_hlds__dependency_graph__HeadVar__4_4);
            }
#line 612 "dependency_graph.m"
            /* direct tailcall eliminated */
#line 612 "dependency_graph.m"
            {
#line 612 "dependency_graph.m"
              MR_Word transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1 = transform_hlds__dependency_graph__Nodes_14;

#line 612 "dependency_graph.m"
              transform_hlds__dependency_graph__HeadVar__1_1 = transform_hlds__dependency_graph__HeadVar__1__tmp_copy_1;
#line 612 "dependency_graph.m"
            }
#line 612 "dependency_graph.m"
            continue;
#line 606 "dependency_graph.m"
          }
#line 605 "dependency_graph.m"
      }
#line 605 "dependency_graph.m"
      break;
#line 605 "dependency_graph.m"
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
#line 599 "dependency_graph.m"
  {
#line 599 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 599 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 599 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_10;
#line 599 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomSet_11;
#line 599 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomList_12;

#line 600 "dependency_graph.m"
    {
#line 600 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_16, transform_hlds__dependency_graph__DepInfo_6, &transform_hlds__dependency_graph__DepGraph_10);
    }
#line 601 "dependency_graph.m"
    {
#line 601 "dependency_graph.m"
      mercury__digraph__vertices_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_16, transform_hlds__dependency_graph__DepGraph_10, &transform_hlds__dependency_graph__DomSet_11);
    }
#line 602 "dependency_graph.m"
    {
#line 602 "dependency_graph.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_16, transform_hlds__dependency_graph__DomSet_11, &transform_hlds__dependency_graph__DomList_12);
    }
#line 603 "dependency_graph.m"
    {
#line 603 "dependency_graph.m"
      transform_hlds__dependency_graph__write_graph_nodes_6_p_0(transform_hlds__dependency_graph__DomList_12, transform_hlds__dependency_graph__DepGraph_10, transform_hlds__dependency_graph__WriteNode_7, transform_hlds__dependency_graph__WriteLink_8);
#line 603 "dependency_graph.m"
      return;
    }
#line 599 "dependency_graph.m"
  }
#line 95 "dependency_graph.m"
}

#line 639 "dependency_graph.m"
static MR_bool MR_CALL 
transform_hlds__dependency_graph__get_scc_entry_points_4_p_0_1(
#line 639 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__closure_arg,
#line 639 "dependency_graph.m"
  MR_Box transform_hlds__dependency_graph__wrapper_arg_1)
#line 639 "dependency_graph.m"
{
#line 639 "dependency_graph.m"
  {
#line 639 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 639 "dependency_graph.m"
    MR_Box transform_hlds__dependency_graph__closure = transform_hlds__dependency_graph__closure_arg;

#line 639 "dependency_graph.m"
    {
#line 639 "dependency_graph.m"
      return transform_hlds__dependency_graph__succeeded = transform_hlds__dependency_graph__is_entry_point_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__dependency_graph__wrapper_arg_1));
    }
#line 639 "dependency_graph.m"
    return transform_hlds__dependency_graph__succeeded;
#line 639 "dependency_graph.m"
  }
#line 639 "dependency_graph.m"
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
#line 638 "dependency_graph.m"
  {
#line 638 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 638 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__V_9_9;

#line 639 "dependency_graph.m"
    {
#line 639 "dependency_graph.m"
      transform_hlds__dependency_graph__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 639 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 0) = ((MR_Box) (&transform_hlds__dependency_graph_scalar_common_3[0]));
#line 639 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 1) = ((MR_Box) (transform_hlds__dependency_graph__get_scc_entry_points_4_p_0_1));
#line 639 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 639 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 3) = ((MR_Box) (transform_hlds__dependency_graph__HigherSCCs_6));
#line 639 "dependency_graph.m"
      MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__V_9_9, 4) = ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_7));
#line 639 "dependency_graph.m"
    }
#line 639 "dependency_graph.m"
    {
#line 639 "dependency_graph.m"
      mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__dependency_graph__V_9_9, transform_hlds__dependency_graph__SCC_5, transform_hlds__dependency_graph__EntryPoints_8);
#line 639 "dependency_graph.m"
      return;
    }
#line 638 "dependency_graph.m"
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
#line 542 "dependency_graph.m"
  {
#line 542 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 542 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeCtorInfo_16_34;
#line 542 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepInfo_7;
#line 542 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_30;
#line 542 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomSet_31;
#line 542 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomList_32;

#line 543 "dependency_graph.m"
    {
#line 543 "dependency_graph.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
    }
#line 544 "dependency_graph.m"
    {
#line 544 "dependency_graph.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, &transform_hlds__dependency_graph__DepInfo_7);
    }
#line 5191 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__TypeCtorInfo_16_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 600 "dependency_graph.m"
    {
#line 600 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_34, transform_hlds__dependency_graph__DepInfo_7, &transform_hlds__dependency_graph__DepGraph_30);
    }
#line 601 "dependency_graph.m"
    {
#line 601 "dependency_graph.m"
      mercury__digraph__vertices_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_34, transform_hlds__dependency_graph__DepGraph_30, &transform_hlds__dependency_graph__DomSet_31);
    }
#line 602 "dependency_graph.m"
    {
#line 602 "dependency_graph.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_34, transform_hlds__dependency_graph__DomSet_31, &transform_hlds__dependency_graph__DomList_32);
    }
#line 603 "dependency_graph.m"
    {
#line 603 "dependency_graph.m"
      transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, transform_hlds__dependency_graph__DomList_32, transform_hlds__dependency_graph__DepGraph_30);
#line 603 "dependency_graph.m"
      return;
    }
#line 542 "dependency_graph.m"
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
#line 548 "dependency_graph.m"
  {
#line 548 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 548 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeCtorInfo_16_38;
#line 548 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepInfo_7;
#line 548 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_34;
#line 548 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomSet_35;
#line 548 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DomList_36;

#line 549 "dependency_graph.m"
    {
#line 549 "dependency_graph.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
    }
#line 550 "dependency_graph.m"
    {
#line 550 "dependency_graph.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, &transform_hlds__dependency_graph__DepInfo_7);
    }
#line 551 "dependency_graph.m"
    {
#line 551 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "% Dependency graph\n");
    }
#line 552 "dependency_graph.m"
    {
#line 552 "dependency_graph.m"
      mercury__io__write_string_3_p_0((MR_String) "\n\n% Dependency ordering\n");
    }
#line 5264 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__TypeCtorInfo_16_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 600 "dependency_graph.m"
    {
#line 600 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_38, transform_hlds__dependency_graph__DepInfo_7, &transform_hlds__dependency_graph__DepGraph_34);
    }
#line 601 "dependency_graph.m"
    {
#line 601 "dependency_graph.m"
      mercury__digraph__vertices_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_38, transform_hlds__dependency_graph__DepGraph_34, &transform_hlds__dependency_graph__DomSet_35);
    }
#line 602 "dependency_graph.m"
    {
#line 602 "dependency_graph.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__dependency_graph__TypeCtorInfo_16_38, transform_hlds__dependency_graph__DomSet_35, &transform_hlds__dependency_graph__DomList_36);
    }
#line 603 "dependency_graph.m"
    {
#line 603 "dependency_graph.m"
      transform_hlds__dependency_graph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_114_97_112_104_95_110_111_100_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(*transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9, transform_hlds__dependency_graph__DomList_36, transform_hlds__dependency_graph__DepGraph_34);
#line 603 "dependency_graph.m"
      return;
    }
#line 548 "dependency_graph.m"
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
#line 157 "dependency_graph.m"
  {
#line 157 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_21_25;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_22_26;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_23_27;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_24_28;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_25_29;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_26_30;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph0_15;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph1_16;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_17;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd0_18;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd_19;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20;
#line 157 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21;
#line 5338 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5340 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_16;
#line 5342 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5344 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_17;

#line 5347 "transform_hlds.dependency_graph.c"
    {
#line 5349 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_25);
    }
#line 170 "dependency_graph.m"
    {
#line 170 "dependency_graph.m"
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_25, &transform_hlds__dependency_graph__DepGraph0_15);
    }
#line 5357 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5359 "transform_hlds.dependency_graph.c"
    {
#line 5361 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_15)), &transform_hlds__dependency_graph__conv1_DepGraph1_16);
    }
#line 5364 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph1_16 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_16);
#line 5366 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5368 "transform_hlds.dependency_graph.c"
    {
#line 5370 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_16)), &transform_hlds__dependency_graph__conv3_DepGraph_17);
    }
#line 5373 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph_17 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_17);
#line 5375 "transform_hlds.dependency_graph.c"
    {
#line 5377 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_26);
    }
#line 173 "dependency_graph.m"
    {
#line 173 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_26, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20);
    }
#line 5385 "transform_hlds.dependency_graph.c"
    {
#line 5387 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_27);
    }
#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_27, transform_hlds__dependency_graph__DepGraph_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21);
    }
#line 5395 "transform_hlds.dependency_graph.c"
    {
#line 5397 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_28);
    }
#line 175 "dependency_graph.m"
    {
#line 175 "dependency_graph.m"
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_28, transform_hlds__dependency_graph__DepGraph_17, &transform_hlds__dependency_graph__DepOrd0_18);
    }
#line 5405 "transform_hlds.dependency_graph.c"
    {
#line 5407 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_29);
    }
#line 176 "dependency_graph.m"
    {
#line 176 "dependency_graph.m"
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_29, transform_hlds__dependency_graph__DepOrd0_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_19);
    }
#line 5415 "transform_hlds.dependency_graph.c"
    {
#line 5417 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_30);
    }
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_30, transform_hlds__dependency_graph__DepOrd_19, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21, transform_hlds__dependency_graph__DepInfo_8);
#line 177 "dependency_graph.m"
      return;
    }
#line 157 "dependency_graph.m"
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
#line 160 "dependency_graph.m"
  {
#line 160 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[1];
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_21_25;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_22_26;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_23_27;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_24_28;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_25_29;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_26_30;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph0_15;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph1_16;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_17;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd0_18;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd_19;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20;
#line 160 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21;
#line 5477 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5479 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_16;
#line 5481 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5483 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_17;

#line 5486 "transform_hlds.dependency_graph.c"
    {
#line 5488 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_25);
    }
#line 170 "dependency_graph.m"
    {
#line 170 "dependency_graph.m"
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_25, &transform_hlds__dependency_graph__DepGraph0_15);
    }
#line 5496 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5498 "transform_hlds.dependency_graph.c"
    {
#line 5500 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_15)), &transform_hlds__dependency_graph__conv1_DepGraph1_16);
    }
#line 5503 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph1_16 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_16);
#line 5505 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5507 "transform_hlds.dependency_graph.c"
    {
#line 5509 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__ModuleInfo_5)), ((MR_Box) (transform_hlds__dependency_graph__Imported_7)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_16)), &transform_hlds__dependency_graph__conv3_DepGraph_17);
    }
#line 5512 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph_17 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_17);
#line 5514 "transform_hlds.dependency_graph.c"
    {
#line 5516 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_26);
    }
#line 173 "dependency_graph.m"
    {
#line 173 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_26, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20);
    }
#line 5524 "transform_hlds.dependency_graph.c"
    {
#line 5526 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_27);
    }
#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_27, transform_hlds__dependency_graph__DepGraph_17, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_20, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21);
    }
#line 5534 "transform_hlds.dependency_graph.c"
    {
#line 5536 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_28);
    }
#line 175 "dependency_graph.m"
    {
#line 175 "dependency_graph.m"
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_28, transform_hlds__dependency_graph__DepGraph_17, &transform_hlds__dependency_graph__DepOrd0_18);
    }
#line 5544 "transform_hlds.dependency_graph.c"
    {
#line 5546 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_29);
    }
#line 176 "dependency_graph.m"
    {
#line 176 "dependency_graph.m"
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_29, transform_hlds__dependency_graph__DepOrd0_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_19);
    }
#line 5554 "transform_hlds.dependency_graph.c"
    {
#line 5556 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_9, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_30);
    }
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_30, transform_hlds__dependency_graph__DepOrd_19, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_21, transform_hlds__dependency_graph__DepInfo_8);
#line 177 "dependency_graph.m"
      return;
    }
#line 160 "dependency_graph.m"
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
#line 150 "dependency_graph.m"
  {
#line 150 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_21_28;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_22_29;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_23_30;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_24_31;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_25_32;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__TypeInfo_26_33;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__PredIds_6;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9_9;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph0_18;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph1_19;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepGraph_20;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd0_21;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__DepOrd_22;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23;
#line 150 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24;
#line 5618 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5620 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_19;
#line 5622 "transform_hlds.dependency_graph.c"
    void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5624 "transform_hlds.dependency_graph.c"
    MR_Box transform_hlds__dependency_graph__conv3_DepGraph_20;

#line 151 "dependency_graph.m"
    {
#line 151 "dependency_graph.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__dependency_graph__PredIds_6, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9_9);
    }
#line 5632 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
#line 5634 "transform_hlds.dependency_graph.c"
    {
#line 5636 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_28);
    }
#line 170 "dependency_graph.m"
    {
#line 170 "dependency_graph.m"
      mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_28, &transform_hlds__dependency_graph__DepGraph0_18);
    }
#line 5644 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5646 "transform_hlds.dependency_graph.c"
    {
#line 5648 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9_9)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_18)), &transform_hlds__dependency_graph__conv1_DepGraph1_19);
    }
#line 5651 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph1_19 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_19);
#line 5653 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5655 "transform_hlds.dependency_graph.c"
    {
#line 5657 "transform_hlds.dependency_graph.c"
      transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9_9)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_19)), &transform_hlds__dependency_graph__conv3_DepGraph_20);
    }
#line 5660 "transform_hlds.dependency_graph.c"
    transform_hlds__dependency_graph__DepGraph_20 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_20);
#line 5662 "transform_hlds.dependency_graph.c"
    {
#line 5664 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_29);
    }
#line 173 "dependency_graph.m"
    {
#line 173 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_29, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23);
    }
#line 5672 "transform_hlds.dependency_graph.c"
    {
#line 5674 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_30);
    }
#line 174 "dependency_graph.m"
    {
#line 174 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_30, transform_hlds__dependency_graph__DepGraph_20, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_23, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24);
    }
#line 5682 "transform_hlds.dependency_graph.c"
    {
#line 5684 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_31);
    }
#line 175 "dependency_graph.m"
    {
#line 175 "dependency_graph.m"
      mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_31, transform_hlds__dependency_graph__DepGraph_20, &transform_hlds__dependency_graph__DepOrd0_21);
    }
#line 5692 "transform_hlds.dependency_graph.c"
    {
#line 5694 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_32);
    }
#line 176 "dependency_graph.m"
    {
#line 176 "dependency_graph.m"
      transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_32, transform_hlds__dependency_graph__DepOrd0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_22);
    }
#line 5702 "transform_hlds.dependency_graph.c"
    {
#line 5704 "transform_hlds.dependency_graph.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_12, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_33);
    }
#line 177 "dependency_graph.m"
    {
#line 177 "dependency_graph.m"
      hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_33, transform_hlds__dependency_graph__DepOrd_22, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_24, transform_hlds__dependency_graph__DepInfo_5);
    }
#line 154 "dependency_graph.m"
    {
#line 154 "dependency_graph.m"
      hlds__hlds_module__module_info_set_dependency_info_3_p_0(*transform_hlds__dependency_graph__DepInfo_5, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9_9, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_8);
#line 154 "dependency_graph.m"
      return;
    }
#line 150 "dependency_graph.m"
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
#line 138 "dependency_graph.m"
  {
#line 138 "dependency_graph.m"
    MR_bool transform_hlds__dependency_graph__succeeded;
#line 138 "dependency_graph.m"
    MR_Word transform_hlds__dependency_graph__MaybeDepInfo_4;

#line 139 "dependency_graph.m"
    {
#line 139 "dependency_graph.m"
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__dependency_graph__MaybeDepInfo_4);
    }
#line 142 "dependency_graph.m"
    if ((transform_hlds__dependency_graph__MaybeDepInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 143 "dependency_graph.m"
      {
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_21_29;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_22_30;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_23_31;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_24_32;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_25_33;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__TypeInfo_26_34;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__PredIds_6;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepInfo_7;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_10_10;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepGraph0_19;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepGraph1_20;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepGraph_21;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepOrd0_22;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__DepOrd_23;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_24;
#line 143 "dependency_graph.m"
        MR_Word transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_25;
#line 5783 "transform_hlds.dependency_graph.c"
        void MR_CALL (* transform_hlds__dependency_graph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5785 "transform_hlds.dependency_graph.c"
        MR_Box transform_hlds__dependency_graph__conv1_DepGraph1_20;
#line 5787 "transform_hlds.dependency_graph.c"
        void MR_CALL (* transform_hlds__dependency_graph__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5789 "transform_hlds.dependency_graph.c"
        MR_Box transform_hlds__dependency_graph__conv3_DepGraph_21;

#line 144 "dependency_graph.m"
        {
#line 144 "dependency_graph.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__dependency_graph__PredIds_6, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_10_10);
        }
#line 5797 "transform_hlds.dependency_graph.c"
        transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13 = (MR_Word) &transform_hlds__dependency_graph_scalar_common_1[0];
#line 5799 "transform_hlds.dependency_graph.c"
        {
#line 5801 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_21_29);
        }
#line 170 "dependency_graph.m"
        {
#line 170 "dependency_graph.m"
          mercury__digraph__init_1_p_0(transform_hlds__dependency_graph__TypeInfo_21_29, &transform_hlds__dependency_graph__DepGraph0_19);
        }
#line 5809 "transform_hlds.dependency_graph.c"
        transform_hlds__dependency_graph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5811 "transform_hlds.dependency_graph.c"
        {
#line 5813 "transform_hlds.dependency_graph.c"
          transform_hlds__dependency_graph__func_0(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_10_10)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph0_19)), &transform_hlds__dependency_graph__conv1_DepGraph1_20);
        }
#line 5816 "transform_hlds.dependency_graph.c"
        transform_hlds__dependency_graph__DepGraph1_20 = ((MR_Word) transform_hlds__dependency_graph__conv1_DepGraph1_20);
#line 5818 "transform_hlds.dependency_graph.c"
        transform_hlds__dependency_graph__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5820 "transform_hlds.dependency_graph.c"
        {
#line 5822 "transform_hlds.dependency_graph.c"
          transform_hlds__dependency_graph__func_2(((MR_Box) transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13), ((MR_Box) (transform_hlds__dependency_graph__PredIds_6)), ((MR_Box) (transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_10_10)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (transform_hlds__dependency_graph__DepGraph1_20)), &transform_hlds__dependency_graph__conv3_DepGraph_21);
        }
#line 5825 "transform_hlds.dependency_graph.c"
        transform_hlds__dependency_graph__DepGraph_21 = ((MR_Word) transform_hlds__dependency_graph__conv3_DepGraph_21);
#line 5827 "transform_hlds.dependency_graph.c"
        {
#line 5829 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_22_30);
        }
#line 173 "dependency_graph.m"
        {
#line 173 "dependency_graph.m"
          hlds__hlds_module__hlds_dependency_info_init_1_p_0(transform_hlds__dependency_graph__TypeInfo_22_30, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_24);
        }
#line 5837 "transform_hlds.dependency_graph.c"
        {
#line 5839 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_23_31);
        }
#line 174 "dependency_graph.m"
        {
#line 174 "dependency_graph.m"
          hlds__hlds_module__hlds_dependency_info_set_dependency_graph_3_p_0(transform_hlds__dependency_graph__TypeInfo_23_31, transform_hlds__dependency_graph__DepGraph_21, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_15_24, &transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_25);
        }
#line 5847 "transform_hlds.dependency_graph.c"
        {
#line 5849 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_24_32);
        }
#line 175 "dependency_graph.m"
        {
#line 175 "dependency_graph.m"
          mercury__digraph__atsort_2_p_0(transform_hlds__dependency_graph__TypeInfo_24_32, transform_hlds__dependency_graph__DepGraph_21, &transform_hlds__dependency_graph__DepOrd0_22);
        }
#line 5857 "transform_hlds.dependency_graph.c"
        {
#line 5859 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_25_33);
        }
#line 176 "dependency_graph.m"
        {
#line 176 "dependency_graph.m"
          transform_hlds__dependency_graph__sets_to_lists_3_p_0(transform_hlds__dependency_graph__TypeInfo_25_33, transform_hlds__dependency_graph__DepOrd0_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__dependency_graph__DepOrd_23);
        }
#line 5867 "transform_hlds.dependency_graph.c"
        {
#line 5869 "transform_hlds.dependency_graph.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(transform_hlds__dependency_graph__TypeClassInfo_for_dependency_node_13, (MR_Integer) 1, &transform_hlds__dependency_graph__TypeInfo_26_34);
        }
#line 177 "dependency_graph.m"
        {
#line 177 "dependency_graph.m"
          hlds__hlds_module__hlds_dependency_info_set_dependency_ordering_3_p_0(transform_hlds__dependency_graph__TypeInfo_26_34, transform_hlds__dependency_graph__DepOrd_23, transform_hlds__dependency_graph__STATE_VARIABLE_DepInfo_16_25, &transform_hlds__dependency_graph__DepInfo_7);
        }
#line 147 "dependency_graph.m"
        {
#line 147 "dependency_graph.m"
          hlds__hlds_module__module_info_set_dependency_info_3_p_0(transform_hlds__dependency_graph__DepInfo_7, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_10_10, transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9);
#line 147 "dependency_graph.m"
          return;
        }
#line 143 "dependency_graph.m"
      }
#line 142 "dependency_graph.m"
    else
#line 141 "dependency_graph.m"
      *transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__dependency_graph__STATE_VARIABLE_ModuleInfo_0_8;
#line 138 "dependency_graph.m"
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
	MR_register_type_ctor_info(&transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_scc_0);
	MR_register_type_ctor_info(&transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_scc_id_0);
	MR_register_type_ctor_info(&transform_hlds__dependency_graph__transform_hlds__dependency_graph__type_ctor_info_scc_pred_map_0);
}

void mercury__transform_hlds__dependency_graph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.dependency_graph. */
