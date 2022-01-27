/*
** Automatically generated from `transform_hlds.ctgc.structure_reuse.indirect.m'
** by the Mercury compiler,
** version DEV
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


/* :- module transform_hlds.ctgc.structure_reuse.indirect. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__indirect__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.indirect.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "ll_backend.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
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
#include "hlds.hlds_out.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.datastruct.mih"
#include "transform_hlds.ctgc.fixpoint_table.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"



#line 191 "structure_reuse.indirect.m"
struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0_s {
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__ReuseVersionMap_7;
#line 191 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__HeadVar__3_14;
#line 191 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__cont;
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__cont_env_ptr;
#line 191 "structure_reuse.indirect.m"
  MR_bool transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__succeeded;
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__TypeCtorInfo_20_20;
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__TypeCtorInfo_21_21;
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__OrigPPId_9;
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_15_15;
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_22_22;
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_25_25;
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_26_26;
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_29_29;
#line 193 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__conv0_OrigPPId_9;
#line 194 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__conv2_V_22_22;
#line 194 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__conv1_HeadVar__3_14;
#line 191 "structure_reuse.indirect.m"
};

#line 191 "structure_reuse.indirect.m"
struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s {
#line 191 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__wrapper_arg_1;
#line 191 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont;
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont_env_ptr;
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__conv0_HeadVar__3_14;
#line 191 "structure_reuse.indirect.m"
};


#line 204 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

#line 207 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 210 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;

#line 213 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;

#line 216 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;

#line 219 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 222 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 225 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0;

#line 228 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1;

#line 231 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_value_ordered_conditional_reuse_handling_0[2];

#line 234 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_name_ordered_conditional_reuse_handling_0[2];

#line 237 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_conditional_reuse_handling_0[2];

#line 240 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;

#line 243 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 246 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 249 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;

#line 252 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;

#line 255 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_analysis_info_0_0[8];

#line 258 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_analysis_info_0_0[8];

#line 261 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0;

#line 264 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_analysis_info_0_0[1];

#line 267 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_analysis_info_0[1];

#line 270 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_analysis_info_0[1];

#line 273 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_analysis_info_0[1];

#line 276 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

#line 279 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 282 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_background_info_0_0[10];

#line 285 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_background_info_0_0[10];

#line 288 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0;

#line 291 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_background_info_0_0[1];

#line 294 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_background_info_0[1];

#line 297 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_background_info_0[1];

#line 300 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_background_info_0[1];

#line 303 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1builtin__type_ctor_info_int_0;

#line 306 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_sr_request_0_0[2];

#line 309 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_sr_request_0_0[2];

#line 312 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0;

#line 315 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_sr_request_0_0[1];

#line 318 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_sr_request_0[1];

#line 321 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_sr_request_0[1];

#line 324 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_sr_request_0[1];

#line 327 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0;

#line 330 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1;

#line 333 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2;

#line 336 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_verify_indirect_reuse_reason_0_3[1];

#line 339 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3;

#line 342 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4;

#line 345 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5;

#line 348 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_0[5];

#line 351 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_1[1];

#line 354 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_verify_indirect_reuse_reason_0[2];

#line 357 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_verify_indirect_reuse_reason_0[6];

#line 360 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_verify_indirect_reuse_reason_0[6];

#line 363 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0_10001(
#line 366 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 368 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 371 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0_10001(
#line 374 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 376 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 378 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 381 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0_10001(
#line 384 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 386 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 389 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0_10001(
#line 392 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 394 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 396 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 399 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0_10001(
#line 402 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 404 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 407 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0_10001(
#line 410 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 412 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 414 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 417 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0_10001(
#line 420 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 422 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 425 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0_10001(
#line 428 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 430 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 432 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 435 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0_10001(
#line 438 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 440 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 443 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0_10001(
#line 446 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 448 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 450 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 453 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0_10001(
#line 456 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 458 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 461 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0_10001(
#line 464 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 466 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 468 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 471 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0_10001(
#line 474 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 476 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 479 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0_10001(
#line 482 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 484 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 486 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 193 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_2(
#line 193 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg);

#line 194 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_4(
#line 194 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg);

#line 191 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_3(
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg);

#line 191 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_1(
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg);

#line 191 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0(
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_5,
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_7,
#line 191 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_14,
#line 191 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__cont,
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr);

#line 734 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0(
#line 734 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 734 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 734 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 734 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0(
#line 734 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 734 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 1106 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0(
#line 1106 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 1106 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 1106 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 1106 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0(
#line 1106 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 1106 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 335 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0(
#line 335 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 335 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 335 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 335 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0(
#line 335 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 335 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 352 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0(
#line 352 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 352 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 352 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 352 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0(
#line 352 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 352 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 103 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0(
#line 103 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 103 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 103 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 103 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0(
#line 103 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 103 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 730 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0(
#line 730 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 730 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 730 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 730 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0(
#line 730 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_1,
#line 730 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 1174 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(
#line 1174 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_4,
#line 1174 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_5);

#line 1156 "structure_reuse.indirect.m"
static MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_f_0(
#line 1156 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_4,
#line 1156 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Table_5);

#line 1153 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_p_0(
#line 1153 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_5,
#line 1153 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6,
#line 1153 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_8,
#line 1153 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_9);

#line 1201 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0_1(
#line 1201 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1201 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 1201 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 1140 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0(
#line 1140 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_7,
#line 1140 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_8,
#line 1140 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Id_9,
#line 1140 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_10,
#line 1140 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_12,
#line 1140 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_13);

#line 1123 "structure_reuse.indirect.m"
static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_f_0(
#line 1123 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Tin_3);

#line 1070 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__add_request_6_p_0(
#line 1070 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7,
#line 1070 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8,
#line 1070 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_9,
#line 1070 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IntraModule_10,
#line 1070 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20,
#line 1070 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_21);

#line 1056 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(
#line 1056 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__List_1,
#line 1056 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 1056 "structure_reuse.indirect.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__indirect__Index_3,
#line 1056 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__4_4);

#line 1009 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(
#line 1009 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 1009 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_9,
#line 1009 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_10,
#line 1009 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11,
#line 1009 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Reason_12);

#line 969 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(
#line 969 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 969 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__OrigPPId_9,
#line 969 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_10,
#line 969 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_11,
#line 969 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22,
#line 969 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_23,
#line 969 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_13);

#line 929 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0_1(
#line 929 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 929 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1);

#line 899 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0(
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9,
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10,
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11,
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_12,
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14,
#line 899 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_15,
#line 899 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16);

#line 810 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_p_0(
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25,
#line 810 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27,
#line 810 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28);

#line 742 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_14,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21,
#line 742 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_23,
#line 742 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24);

#line 703 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(
#line 703 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 703 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_7,
#line 703 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_8,
#line 703 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12,
#line 703 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13);

#line 690 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_p_0(
#line 690 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 690 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9,
#line 690 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Case0_10,
#line 690 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Case_11,
#line 690 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12,
#line 690 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_19,
#line 690 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_20);

#line 678 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_p_0(
#line 678 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 678 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9,
#line 678 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal0_10,
#line 678 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Goal_11,
#line 678 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12,
#line 678 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_15,
#line 678 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_16);

#line 633 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_p_0(
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GenDetails_9,
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallArgs_10,
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Modes_11,
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_12,
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34,
#line 633 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35);

#line 571 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_p_0(
#line 571 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 571 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_32,
#line 571 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_33,
#line 571 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34,
#line 571 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35);

#line 516 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_3(
#line 516 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 516 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 516 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 516 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 516 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 516 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5);

#line 507 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_2(
#line 507 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 507 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 507 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 507 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 507 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 507 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5);

#line 464 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_1(
#line 464 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 464 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 464 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 464 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 464 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4);

#line 453 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(
#line 453 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 453 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89,
#line 453 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90,
#line 453 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91,
#line 453 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);

#line 418 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(
#line 418 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5,
#line 418 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6,
#line 418 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17,
#line 418 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_18);

#line 414 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0_1(
#line 414 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 414 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 414 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 414 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 402 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(
#line 402 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 402 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_7,
#line 402 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8,
#line 402 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12,
#line 402 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13);

#line 388 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_f_0(
#line 388 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_7,
#line 388 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8,
#line 388 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__DepProcs_9,
#line 388 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Requests_10,
#line 388 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntermodRequests_11);

#line 366 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_f_0(
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8,
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_9,
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10,
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11,
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_12,
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_13);

#line 247 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_p_0(
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_16,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43,
#line 247 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_44,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_45,
#line 247 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_46,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_47,
#line 247 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_48,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_49,
#line 247 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_50,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_51,
#line 247 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_52);

#line 225 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_p_0(
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_16,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_27,
#line 225 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_28,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_29,
#line 225 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_30,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_31,
#line 225 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_32,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_33,
#line 225 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_34,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_35,
#line 225 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_36);

#line 211 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0_1(
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 211 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 211 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 211 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 211 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 211 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11);

#line 200 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_15,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_16,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22,
#line 200 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_24,
#line 200 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_25,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26,
#line 200 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28,
#line 200 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30,
#line 200 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31);

#line 182 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_4(
#line 182 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 182 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 182 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 182 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 1187 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_3(
#line 1187 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1187 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1);

#line 191 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_1(
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg);

#line 191 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2(
#line 191 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 191 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 191 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__cont,
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr);

#line 162 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0(
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_14,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_23,
#line 162 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25,
#line 162 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_26,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_27,
#line 162 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_28,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_29,
#line 162 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_30,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_31,
#line 162 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_32);

#line 145 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(
#line 145 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_5,
#line 145 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_6,
#line 145 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_9,
#line 145 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_10);

#line 142 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_2(
#line 142 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 142 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 142 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 142 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 1187 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_1(
#line 1187 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1187 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1);

#line 126 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0(
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_14,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22,
#line 126 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24,
#line 126 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_25,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26,
#line 126 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28,
#line 126 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30,
#line 126 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31);

#line 158 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0_1(
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 158 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 158 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 158 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 158 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 158 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11);

#line 118 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0_1(
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 118 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 118 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 118 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 118 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 118 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_3[1][15];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_4[2][6];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[3][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_6[1][16];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_7[1][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_8[2][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_9[1][5];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_3[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_6[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_8[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_9[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1580 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
  }
};

#line 1589 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1597 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0
  }
};

#line 1605 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0
  }
};

#line 1613 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0
  }
};

#line 1622 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1631 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1639 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0 = {
  (MR_String) "allow_conditional_reuse",
  (MR_Integer) 0
};

#line 1645 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1 = {
  (MR_String) "ignore_conditional_reuse",
  (MR_Integer) 1
};

#line 1651 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_value_ordered_conditional_reuse_handling_0[2] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1
};

#line 1657 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_name_ordered_conditional_reuse_handling_0[2] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1
};

#line 1663 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_conditional_reuse_handling_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1669 "transform_hlds.ctgc.structure_reuse.indirect.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_conditional_reuse_handling_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.indirect",
  (MR_String) "conditional_reuse_handling",
  {     transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_name_ordered_conditional_reuse_handling_0 },
  {     transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_value_ordered_conditional_reuse_handling_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_conditional_reuse_handling_0
};

#line 1686 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0
  }
};

#line 1694 "transform_hlds.ctgc.structure_reuse.indirect.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_dep_procs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.indirect",
  (MR_String) "dep_procs",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1711 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1719 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1727 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0
  }
};

#line 1736 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0
  }
};

#line 1744 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_analysis_info_0_0[8] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0
};

#line 1756 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_analysis_info_0_0[8] = {
  (MR_String) "sharing_as",
  (MR_String) "reuse_as",
  (MR_String) "analysis_status",
  (MR_String) "static_vars",
  (MR_String) "fptable",
  (MR_String) "dep_procs",
  (MR_String) "requests",
  (MR_String) "inter_requests"
};

#line 1768 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0 = {
  (MR_String) "ir_analysis_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_analysis_info_0_0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_analysis_info_0_0,
  NULL,
  NULL
};

#line 1783 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_analysis_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0
};

#line 1788 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_analysis_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_analysis_info_0_0
  }
};

#line 1797 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_analysis_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0
};

#line 1802 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_analysis_info_0[1] = {
  (MR_Integer) 0
};

#line 1807 "transform_hlds.ctgc.structure_reuse.indirect.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.indirect",
  (MR_String) "ir_analysis_info",
  {     transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_analysis_info_0 },
  {     transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_analysis_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_analysis_info_0
};

#line 1824 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
  }
};

#line 1833 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1841 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_background_info_0_0[10] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1855 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_background_info_0_0[10] = {
  (MR_String) "module_info",
  (MR_String) "pred_proc_id",
  (MR_String) "pred_info",
  (MR_String) "proc_info",
  (MR_String) "sharing_table",
  (MR_String) "reuse_table",
  (MR_String) "headvars",
  (MR_String) "max_conditions",
  (MR_String) "very_verbose",
  (MR_String) "debug_indirect"
};

#line 1869 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0 = {
  (MR_String) "ir_background_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_background_info_0_0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_background_info_0_0,
  NULL,
  NULL
};

#line 1884 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_background_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0
};

#line 1889 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_background_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_background_info_0_0
  }
};

#line 1898 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_background_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0
};

#line 1903 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_background_info_0[1] = {
  (MR_Integer) 0
};

#line 1908 "transform_hlds.ctgc.structure_reuse.indirect.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.indirect",
  (MR_String) "ir_background_info",
  {     transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_background_info_0 },
  {     transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_background_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_background_info_0
};

#line 1925 "transform_hlds.ctgc.structure_reuse.indirect.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_fixpoint_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.indirect",
  (MR_String) "sr_fixpoint_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1942 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1950 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_sr_request_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1956 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_sr_request_0_0[2] = {
  (MR_String) "srreq_ppid",
  (MR_String) "srreq_args"
};

#line 1962 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0 = {
  (MR_String) "sr_request",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_sr_request_0_0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_sr_request_0_0,
  NULL,
  NULL
};

#line 1977 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_sr_request_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0
};

#line 1982 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_sr_request_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_sr_request_0_0
  }
};

#line 1991 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_sr_request_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0
};

#line 1996 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_sr_request_0[1] = {
  (MR_Integer) 0
};

#line 2001 "transform_hlds.ctgc.structure_reuse.indirect.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.indirect",
  (MR_String) "sr_request",
  {     transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_sr_request_0 },
  {     transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_sr_request_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_sr_request_0
};

#line 2018 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0 = {
  (MR_String) "callee_has_no_reuses",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2033 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1 = {
  (MR_String) "callee_has_only_unconditional_reuse",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2048 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2 = {
  (MR_String) "current_sharing_is_top",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2063 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_verify_indirect_reuse_reason_0_3[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2068 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3 = {
  (MR_String) "reuse_is_unsafe",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 3,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_verify_indirect_reuse_reason_0_3,
  NULL,
  NULL,
  NULL
};

#line 2083 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4 = {
  (MR_String) "reuse_is_unconditional",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2098 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5 = {
  (MR_String) "reuse_is_conditional",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2113 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_0[5] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5
};

#line 2122 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3
};

#line 2127 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_verify_indirect_reuse_reason_0[2] = {
  {
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_1
  }
};

#line 2141 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_verify_indirect_reuse_reason_0[6] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3
};

#line 2151 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_verify_indirect_reuse_reason_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2161 "transform_hlds.ctgc.structure_reuse.indirect.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_verify_indirect_reuse_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.indirect",
  (MR_String) "verify_indirect_reuse_reason",
  {     transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_verify_indirect_reuse_reason_0 },
  {     transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_verify_indirect_reuse_reason_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_verify_indirect_reuse_reason_0
};

#line 2178 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0_10001(
#line 2181 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2183 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2185 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2187 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2189 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2192 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2194 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2197 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2199 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2201 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2204 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0_10001(
#line 2207 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2209 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2211 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2213 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2215 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2217 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2220 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2222 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2225 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2227 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2229 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2232 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0_10001(
#line 2235 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2237 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2239 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2241 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2243 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2246 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2248 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2251 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2253 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2255 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2258 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0_10001(
#line 2261 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2263 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2265 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2267 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2269 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2271 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2274 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2276 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2279 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2281 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2283 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2286 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0_10001(
#line 2289 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2291 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2293 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2295 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2297 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2300 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2302 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2305 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2307 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2309 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2312 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0_10001(
#line 2315 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2317 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2319 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2321 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2323 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2325 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2328 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2330 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2333 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2335 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2337 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2340 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0_10001(
#line 2343 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2345 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2347 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2349 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2351 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2354 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2356 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2359 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2361 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2363 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2366 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0_10001(
#line 2369 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2371 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2373 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2375 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2377 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2379 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2382 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2384 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2387 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2389 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2391 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2394 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0_10001(
#line 2397 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2399 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2401 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2403 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2405 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2408 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2410 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2413 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2415 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2417 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2420 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0_10001(
#line 2423 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2425 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2427 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2429 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2431 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2433 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2436 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2438 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2441 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2443 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2445 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2448 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0_10001(
#line 2451 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2453 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2455 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2457 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2459 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2462 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2464 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2467 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2469 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2471 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2474 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0_10001(
#line 2477 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2479 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2481 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2483 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2485 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2487 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2490 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2492 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2495 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2497 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2499 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2502 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0_10001(
#line 2505 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2507 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2509 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2511 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2513 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2516 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2518 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2521 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2523 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2525 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2528 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0_10001(
#line 2531 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2533 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2535 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2537 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2539 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2541 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2544 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2546 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2549 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2551 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2553 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 193 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_2(
#line 193 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg)
#line 193 "structure_reuse.indirect.m"
{
#line 193 "structure_reuse.indirect.m"
  {
#line 193 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__indirect__env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg;

#line 193 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__OrigPPId_9 = ((MR_Word) (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__conv0_OrigPPId_9);
#line 193 "structure_reuse.indirect.m"
    {
#line 193 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_1(transform_hlds__ctgc__structure_reuse__indirect__env_ptr);
#line 193 "structure_reuse.indirect.m"
      return;
    }
#line 193 "structure_reuse.indirect.m"
  }
#line 193 "structure_reuse.indirect.m"
}

#line 194 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_4(
#line 194 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg)
#line 194 "structure_reuse.indirect.m"
{
#line 194 "structure_reuse.indirect.m"
  {
#line 194 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__indirect__env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg;

#line 194 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_22_22 = ((MR_Word) (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__conv2_V_22_22);
#line 194 "structure_reuse.indirect.m"
    *((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__HeadVar__3_14) = ((MR_Word) (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__conv1_HeadVar__3_14);
#line 194 "structure_reuse.indirect.m"
    {
#line 194 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_3(transform_hlds__ctgc__structure_reuse__indirect__env_ptr);
#line 194 "structure_reuse.indirect.m"
      return;
    }
#line 194 "structure_reuse.indirect.m"
  }
#line 194 "structure_reuse.indirect.m"
}

#line 191 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_3(
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg)
#line 191 "structure_reuse.indirect.m"
{
#line 191 "structure_reuse.indirect.m"
  {
#line 191 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__indirect__env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg;

#line 194 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_22_22, (MR_Integer) 0)));
#line 194 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_22_22, (MR_Integer) 1)));
#line 194 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_15_15, (MR_Integer) 0)));
#line 194 "structure_reuse.indirect.m"
    (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_15_15, (MR_Integer) 1)) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_26_26));
#line 194 "structure_reuse.indirect.m"
    {
#line 194 "structure_reuse.indirect.m"
      (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_25_25, (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_29_29);
    }
#line 194 "structure_reuse.indirect.m"
    if ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__succeeded)
#line 194 "structure_reuse.indirect.m"
      {
#line 194 "structure_reuse.indirect.m"
        ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__cont)((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__cont_env_ptr);
#line 194 "structure_reuse.indirect.m"
        return;
      }
#line 191 "structure_reuse.indirect.m"
  }
#line 191 "structure_reuse.indirect.m"
}

#line 191 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_1(
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg)
#line 191 "structure_reuse.indirect.m"
{
#line 191 "structure_reuse.indirect.m"
  {
#line 191 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__indirect__env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg;

#line 191 "structure_reuse.indirect.m"
    {
#line 194 "structure_reuse.indirect.m"
      MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_10_10;

#line 194 "structure_reuse.indirect.m"
      {
#line 194 "structure_reuse.indirect.m"
        MR_Word base;
#line 194 "structure_reuse.indirect.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 194 "structure_reuse.indirect.m"
        (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__V_15_15 = base;
#line 194 "structure_reuse.indirect.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__OrigPPId_9));
#line 194 "structure_reuse.indirect.m"
        MR_hl_field(MR_mktag(0), base, 1) = NULL;
#line 194 "structure_reuse.indirect.m"
      }
#line 2680 "transform_hlds.ctgc.structure_reuse.indirect.c"
      (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__TypeCtorInfo_21_21 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;
#line 194 "structure_reuse.indirect.m"
      {
#line 194 "structure_reuse.indirect.m"
        mercury__map__member_3_p_0((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__TypeCtorInfo_21_21, (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__TypeCtorInfo_20_20, (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__ReuseVersionMap_7, &(transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__conv2_V_22_22, &(transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__conv1_HeadVar__3_14, transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_4, transform_hlds__ctgc__structure_reuse__indirect__env_ptr);
      }
#line 191 "structure_reuse.indirect.m"
    }
#line 191 "structure_reuse.indirect.m"
  }
#line 191 "structure_reuse.indirect.m"
}

#line 191 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0(
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_5,
#line 191 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_7,
#line 191 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_14,
#line 191 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__cont,
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr)
#line 191 "structure_reuse.indirect.m"
{
#line 191 "structure_reuse.indirect.m"
  {
#line 191 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0_s transform_hlds__ctgc__structure_reuse__indirect__env;

#line 191 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__ReuseVersionMap_7 = transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_7;
#line 191 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__HeadVar__3_14 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_14;
#line 191 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__cont = transform_hlds__ctgc__structure_reuse__indirect__cont;
#line 191 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__cont_env_ptr = transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr;
#line 2722 "transform_hlds.ctgc.structure_reuse.indirect.c"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 193 "structure_reuse.indirect.m"
    {
#line 193 "structure_reuse.indirect.m"
      mercury__list__member_2_p_1((transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__TypeCtorInfo_20_20, &(transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_env_0__conv0_OrigPPId_9, transform_hlds__ctgc__structure_reuse__indirect__SCC_5, transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0_2, &transform_hlds__ctgc__structure_reuse__indirect__env);
    }
#line 191 "structure_reuse.indirect.m"
  }
#line 191 "structure_reuse.indirect.m"
}

#line 734 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0(
#line 734 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 734 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 734 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 734 "structure_reuse.indirect.m"
{
#line 734 "structure_reuse.indirect.m"
  {
#line 734 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 734 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_16 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 734 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_17 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 734 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_16 == transform_hlds__ctgc__structure_reuse__indirect__CastY_17);
#line 734 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 2758 "transform_hlds.ctgc.structure_reuse.indirect.c"
      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 734 "structure_reuse.indirect.m"
    else
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)) {
#line 734 "structure_reuse.indirect.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
        case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)) {
#line 734 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 1:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 2:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 3:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 4:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                  }
#line 734 "structure_reuse.indirect.m"
                  break;
#line 734 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 2824 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                  break;
#line 734 "structure_reuse.indirect.m"
              }
#line 734 "structure_reuse.indirect.m"
              break;
#line 734 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 1:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 2:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 3:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 4:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                  }
#line 734 "structure_reuse.indirect.m"
                  break;
#line 734 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 2882 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                  break;
#line 734 "structure_reuse.indirect.m"
              }
#line 734 "structure_reuse.indirect.m"
              break;
#line 734 "structure_reuse.indirect.m"
            case (MR_Integer) 2:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 1:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 2:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 3:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 4:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                  }
#line 734 "structure_reuse.indirect.m"
                  break;
#line 734 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 2940 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                  break;
#line 734 "structure_reuse.indirect.m"
              }
#line 734 "structure_reuse.indirect.m"
              break;
#line 734 "structure_reuse.indirect.m"
            case (MR_Integer) 3:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 1:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 2:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 3:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 4:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                  }
#line 734 "structure_reuse.indirect.m"
                  break;
#line 734 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 2998 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                  break;
#line 734 "structure_reuse.indirect.m"
              }
#line 734 "structure_reuse.indirect.m"
              break;
#line 734 "structure_reuse.indirect.m"
            case (MR_Integer) 4:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 1:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 2:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 3:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                    case (MR_Integer) 4:
#line 734 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 734 "structure_reuse.indirect.m"
                      break;
#line 734 "structure_reuse.indirect.m"
                  }
#line 734 "structure_reuse.indirect.m"
                  break;
#line 734 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 3056 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                  break;
#line 734 "structure_reuse.indirect.m"
              }
#line 734 "structure_reuse.indirect.m"
              break;
#line 734 "structure_reuse.indirect.m"
          }
#line 734 "structure_reuse.indirect.m"
          break;
#line 734 "structure_reuse.indirect.m"
        case (MR_Integer) 1:
#line 734 "structure_reuse.indirect.m"
          {
#line 734 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));

#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
            switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
              case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
                switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 734 "structure_reuse.indirect.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
                  case (MR_Integer) 0:
#line 3089 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                    break;
#line 734 "structure_reuse.indirect.m"
                  case (MR_Integer) 1:
#line 3095 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                    break;
#line 734 "structure_reuse.indirect.m"
                  case (MR_Integer) 2:
#line 3101 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 734 "structure_reuse.indirect.m"
                    break;
#line 734 "structure_reuse.indirect.m"
                  case (MR_Integer) 3:
#line 3107 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                    break;
#line 734 "structure_reuse.indirect.m"
                  case (MR_Integer) 4:
#line 3113 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 734 "structure_reuse.indirect.m"
                    break;
#line 734 "structure_reuse.indirect.m"
                }
#line 734 "structure_reuse.indirect.m"
                break;
#line 734 "structure_reuse.indirect.m"
              case (MR_Integer) 1:
#line 734 "structure_reuse.indirect.m"
                {
#line 734 "structure_reuse.indirect.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 0)));

#line 734 "structure_reuse.indirect.m"
                  {
#line 734 "structure_reuse.indirect.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6], transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_19_19)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_11_11)));
#line 734 "structure_reuse.indirect.m"
                    return;
                  }
#line 734 "structure_reuse.indirect.m"
                }
#line 734 "structure_reuse.indirect.m"
                break;
#line 734 "structure_reuse.indirect.m"
            }
#line 734 "structure_reuse.indirect.m"
          }
#line 734 "structure_reuse.indirect.m"
          break;
#line 734 "structure_reuse.indirect.m"
      }
#line 734 "structure_reuse.indirect.m"
  }
#line 734 "structure_reuse.indirect.m"
}

#line 734 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0(
#line 734 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 734 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 734 "structure_reuse.indirect.m"
{
#line 734 "structure_reuse.indirect.m"
  {
#line 734 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 734 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_15 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 734 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_16 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 734 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_15 == transform_hlds__ctgc__structure_reuse__indirect__CastY_16);
#line 734 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 734 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 734 "structure_reuse.indirect.m"
    else
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1)) {
#line 734 "structure_reuse.indirect.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
        case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
#line 734 "structure_reuse.indirect.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1)) {
#line 734 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 734 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 734 "structure_reuse.indirect.m"
              {
#line 734 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_3 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 734 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 734 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastY_4 == transform_hlds__ctgc__structure_reuse__indirect__CastX_3);
#line 734 "structure_reuse.indirect.m"
              }
#line 734 "structure_reuse.indirect.m"
              break;
#line 734 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 734 "structure_reuse.indirect.m"
              {
#line 734 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_5 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 734 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_6 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 734 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastY_6 == transform_hlds__ctgc__structure_reuse__indirect__CastX_5);
#line 734 "structure_reuse.indirect.m"
              }
#line 734 "structure_reuse.indirect.m"
              break;
#line 734 "structure_reuse.indirect.m"
            case (MR_Integer) 2:
#line 734 "structure_reuse.indirect.m"
              {
#line 734 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 734 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 734 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastY_8 == transform_hlds__ctgc__structure_reuse__indirect__CastX_7);
#line 734 "structure_reuse.indirect.m"
              }
#line 734 "structure_reuse.indirect.m"
              break;
#line 734 "structure_reuse.indirect.m"
            case (MR_Integer) 3:
#line 734 "structure_reuse.indirect.m"
              {
#line 734 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 734 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 734 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastY_12 == transform_hlds__ctgc__structure_reuse__indirect__CastX_11);
#line 734 "structure_reuse.indirect.m"
              }
#line 734 "structure_reuse.indirect.m"
              break;
#line 734 "structure_reuse.indirect.m"
            case (MR_Integer) 4:
#line 734 "structure_reuse.indirect.m"
              {
#line 734 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_13 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 734 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_14 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 734 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastY_14 == transform_hlds__ctgc__structure_reuse__indirect__CastX_13);
#line 734 "structure_reuse.indirect.m"
              }
#line 734 "structure_reuse.indirect.m"
              break;
#line 734 "structure_reuse.indirect.m"
          }
#line 734 "structure_reuse.indirect.m"
          break;
#line 734 "structure_reuse.indirect.m"
        case (MR_Integer) 1:
#line 734 "structure_reuse.indirect.m"
          {
#line 734 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_17_17;
#line 734 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 0)));
#line 734 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_10_10;

#line 734 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 734 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 734 "structure_reuse.indirect.m"
              {
#line 734 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 3288 "transform_hlds.ctgc.structure_reuse.indirect.c"
                transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_17_17 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6];
#line 3290 "transform_hlds.ctgc.structure_reuse.indirect.c"
                {
#line 3292 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  return transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_17_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_9_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_10_10)));
                }
#line 734 "structure_reuse.indirect.m"
              }
#line 734 "structure_reuse.indirect.m"
          }
#line 734 "structure_reuse.indirect.m"
          break;
#line 734 "structure_reuse.indirect.m"
      }
#line 734 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 734 "structure_reuse.indirect.m"
  }
#line 734 "structure_reuse.indirect.m"
}

#line 31 "structure_reuse.indirect.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0(
#line 31 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 31 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 31 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 31 "structure_reuse.indirect.m"
{
#line 31 "structure_reuse.indirect.m"
  {
#line 31 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 31 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 31 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 31 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_9 == transform_hlds__ctgc__structure_reuse__indirect__CastY_10);
#line 31 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 3334 "transform_hlds.ctgc.structure_reuse.indirect.c"
      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 31 "structure_reuse.indirect.m"
    else
#line 31 "structure_reuse.indirect.m"
      {
#line 31 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 31 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 0)));
#line 31 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 1)));
#line 31 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8;

#line 31 "structure_reuse.indirect.m"
        {
#line 31 "structure_reuse.indirect.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_8_8, transform_hlds__ctgc__structure_reuse__indirect__V_4_4, transform_hlds__ctgc__structure_reuse__indirect__V_6_6);
        }
#line 3356 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_8_8 == (MR_Integer) 0);
#line 31 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 31 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 31 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_8_8;
#line 31 "structure_reuse.indirect.m"
        else
#line 31 "structure_reuse.indirect.m"
          {
#line 31 "structure_reuse.indirect.m"
            {
#line 31 "structure_reuse.indirect.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4], transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_7_7)));
#line 31 "structure_reuse.indirect.m"
              return;
            }
#line 31 "structure_reuse.indirect.m"
          }
#line 31 "structure_reuse.indirect.m"
      }
#line 31 "structure_reuse.indirect.m"
  }
#line 31 "structure_reuse.indirect.m"
}

#line 31 "structure_reuse.indirect.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0(
#line 31 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 31 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 31 "structure_reuse.indirect.m"
{
#line 31 "structure_reuse.indirect.m"
  {
#line 31 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 31 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 31 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 31 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_7 == transform_hlds__ctgc__structure_reuse__indirect__CastY_8);
#line 31 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 31 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 31 "structure_reuse.indirect.m"
    else
#line 31 "structure_reuse.indirect.m"
      {
#line 31 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_10_10;
#line 31 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 0)));
#line 31 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 1)));
#line 31 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));

#line 3423 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 3425 "transform_hlds.ctgc.structure_reuse.indirect.c"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_3_3, transform_hlds__ctgc__structure_reuse__indirect__V_5_5);
        }
#line 31 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 31 "structure_reuse.indirect.m"
          {
#line 3432 "transform_hlds.ctgc.structure_reuse.indirect.c"
            transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_10_10 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4];
#line 3434 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 3436 "transform_hlds.ctgc.structure_reuse.indirect.c"
              return transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_10_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_6_6)));
            }
#line 31 "structure_reuse.indirect.m"
          }
#line 31 "structure_reuse.indirect.m"
      }
#line 31 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 31 "structure_reuse.indirect.m"
  }
#line 31 "structure_reuse.indirect.m"
}

#line 1106 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0(
#line 1106 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 1106 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 1106 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 1106 "structure_reuse.indirect.m"
{
#line 1106 "structure_reuse.indirect.m"
  {
#line 1106 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1106 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 1106 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 1106 "structure_reuse.indirect.m"
    {
#line 1106 "structure_reuse.indirect.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5)));
#line 1106 "structure_reuse.indirect.m"
      return;
    }
#line 1106 "structure_reuse.indirect.m"
  }
#line 1106 "structure_reuse.indirect.m"
}

#line 1106 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0(
#line 1106 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 1106 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 1106 "structure_reuse.indirect.m"
{
#line 1106 "structure_reuse.indirect.m"
  {
#line 1106 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1106 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 1106 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 1106 "structure_reuse.indirect.m"
    {
#line 1106 "structure_reuse.indirect.m"
      return transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_4)));
    }
#line 1106 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1106 "structure_reuse.indirect.m"
  }
#line 1106 "structure_reuse.indirect.m"
}

#line 335 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0(
#line 335 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 335 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 335 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 335 "structure_reuse.indirect.m"
{
#line 335 "structure_reuse.indirect.m"
  {
#line 335 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 335 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_33 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 335 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_34 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 335 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_33 == transform_hlds__ctgc__structure_reuse__indirect__CastY_34);
#line 335 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 3536 "transform_hlds.ctgc.structure_reuse.indirect.c"
      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 335 "structure_reuse.indirect.m"
    else
#line 335 "structure_reuse.indirect.m"
      {
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 2)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 3)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 4)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 5)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 6)));
#line 335 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 7)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 8)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 9)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 0)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 1)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 2)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 3)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 4)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 5)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 6)));
#line 335 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 7)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 8)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 9)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24;

#line 335 "structure_reuse.indirect.m"
        {
#line 335 "structure_reuse.indirect.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_24_24, transform_hlds__ctgc__structure_reuse__indirect__V_4_4, transform_hlds__ctgc__structure_reuse__indirect__V_14_14);
        }
#line 3590 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_24_24 == (MR_Integer) 0);
#line 335 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 335 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_24_24;
#line 335 "structure_reuse.indirect.m"
        else
#line 335 "structure_reuse.indirect.m"
          {
#line 335 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25;

#line 335 "structure_reuse.indirect.m"
            {
#line 335 "structure_reuse.indirect.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_25_25, transform_hlds__ctgc__structure_reuse__indirect__V_5_5, transform_hlds__ctgc__structure_reuse__indirect__V_15_15);
            }
#line 3610 "transform_hlds.ctgc.structure_reuse.indirect.c"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_25_25 == (MR_Integer) 0);
#line 335 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 335 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_25_25;
#line 335 "structure_reuse.indirect.m"
            else
#line 335 "structure_reuse.indirect.m"
              {
#line 335 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;

#line 335 "structure_reuse.indirect.m"
                {
#line 335 "structure_reuse.indirect.m"
                  hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_26_26, transform_hlds__ctgc__structure_reuse__indirect__V_6_6, transform_hlds__ctgc__structure_reuse__indirect__V_16_16);
                }
#line 3630 "transform_hlds.ctgc.structure_reuse.indirect.c"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_26_26 == (MR_Integer) 0);
#line 335 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 335 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 335 "structure_reuse.indirect.m"
                else
#line 335 "structure_reuse.indirect.m"
                  {
#line 335 "structure_reuse.indirect.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_27_27;

#line 335 "structure_reuse.indirect.m"
                    {
#line 335 "structure_reuse.indirect.m"
                      hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_27_27, transform_hlds__ctgc__structure_reuse__indirect__V_7_7, transform_hlds__ctgc__structure_reuse__indirect__V_17_17);
                    }
#line 3650 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_27_27 == (MR_Integer) 0);
#line 335 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 335 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_27_27;
#line 335 "structure_reuse.indirect.m"
                    else
#line 335 "structure_reuse.indirect.m"
                      {
#line 335 "structure_reuse.indirect.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;

#line 335 "structure_reuse.indirect.m"
                        {
#line 335 "structure_reuse.indirect.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[1], &transform_hlds__ctgc__structure_reuse__indirect__V_28_28, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_8_8)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_18_18)));
                        }
#line 3670 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_28_28 == (MR_Integer) 0);
#line 335 "structure_reuse.indirect.m"
                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 335 "structure_reuse.indirect.m"
                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 335 "structure_reuse.indirect.m"
                        else
#line 335 "structure_reuse.indirect.m"
                          {
#line 335 "structure_reuse.indirect.m"
                            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;

#line 335 "structure_reuse.indirect.m"
                            {
#line 335 "structure_reuse.indirect.m"
                              transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_29_29, transform_hlds__ctgc__structure_reuse__indirect__V_9_9, transform_hlds__ctgc__structure_reuse__indirect__V_19_19);
                            }
#line 3690 "transform_hlds.ctgc.structure_reuse.indirect.c"
                            transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_29_29 == (MR_Integer) 0);
#line 335 "structure_reuse.indirect.m"
                            transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 335 "structure_reuse.indirect.m"
                            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                              *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 335 "structure_reuse.indirect.m"
                            else
#line 335 "structure_reuse.indirect.m"
                              {
#line 335 "structure_reuse.indirect.m"
                                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;

#line 335 "structure_reuse.indirect.m"
                                {
#line 335 "structure_reuse.indirect.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6], &transform_hlds__ctgc__structure_reuse__indirect__V_30_30, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_10_10)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_20_20)));
                                }
#line 3710 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_30_30 == (MR_Integer) 0);
#line 335 "structure_reuse.indirect.m"
                                transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 335 "structure_reuse.indirect.m"
                                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 335 "structure_reuse.indirect.m"
                                else
#line 335 "structure_reuse.indirect.m"
                                  {
#line 335 "structure_reuse.indirect.m"
                                    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;

#line 335 "structure_reuse.indirect.m"
                                    {
#line 335 "structure_reuse.indirect.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__structure_reuse__indirect__V_31_31, transform_hlds__ctgc__structure_reuse__indirect__V_11_11, transform_hlds__ctgc__structure_reuse__indirect__V_21_21);
                                    }
#line 3730 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_31_31 == (MR_Integer) 0);
#line 335 "structure_reuse.indirect.m"
                                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 335 "structure_reuse.indirect.m"
                                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 335 "structure_reuse.indirect.m"
                                    else
#line 335 "structure_reuse.indirect.m"
                                      {
#line 335 "structure_reuse.indirect.m"
                                        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 335 "structure_reuse.indirect.m"
                                        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_12_12;
#line 335 "structure_reuse.indirect.m"
                                        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_22_22;

#line 335 "structure_reuse.indirect.m"
                                        {
#line 335 "structure_reuse.indirect.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__structure_reuse__indirect__V_32_32, transform_hlds__ctgc__structure_reuse__indirect__V_45_45, transform_hlds__ctgc__structure_reuse__indirect__V_46_46);
                                        }
#line 3754 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_32_32 == (MR_Integer) 0);
#line 335 "structure_reuse.indirect.m"
                                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 335 "structure_reuse.indirect.m"
                                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                                          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 335 "structure_reuse.indirect.m"
                                        else
#line 335 "structure_reuse.indirect.m"
                                          {
#line 335 "structure_reuse.indirect.m"
                                            MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_13_13;
#line 335 "structure_reuse.indirect.m"
                                            MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_23_23;

#line 335 "structure_reuse.indirect.m"
                                            {
#line 335 "structure_reuse.indirect.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__indirect__V_47_47, transform_hlds__ctgc__structure_reuse__indirect__V_48_48);
#line 335 "structure_reuse.indirect.m"
                                              return;
                                            }
#line 335 "structure_reuse.indirect.m"
                                          }
#line 335 "structure_reuse.indirect.m"
                                      }
#line 335 "structure_reuse.indirect.m"
                                  }
#line 335 "structure_reuse.indirect.m"
                              }
#line 335 "structure_reuse.indirect.m"
                          }
#line 335 "structure_reuse.indirect.m"
                      }
#line 335 "structure_reuse.indirect.m"
                  }
#line 335 "structure_reuse.indirect.m"
              }
#line 335 "structure_reuse.indirect.m"
          }
#line 335 "structure_reuse.indirect.m"
      }
#line 335 "structure_reuse.indirect.m"
  }
#line 335 "structure_reuse.indirect.m"
}

#line 335 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0(
#line 335 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 335 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 335 "structure_reuse.indirect.m"
{
#line 335 "structure_reuse.indirect.m"
  {
#line 335 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 335 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_23 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 335 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_24 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 335 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_23 == transform_hlds__ctgc__structure_reuse__indirect__CastY_24);
#line 335 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 335 "structure_reuse.indirect.m"
    else
#line 335 "structure_reuse.indirect.m"
      {
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_29_29;
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_31_31;
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 0)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 1)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 2)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 3)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 4)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 5)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 6)));
#line 335 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 7)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 8)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 9)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 2)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 3)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 4)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 5)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 6)));
#line 335 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 7)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 8)));
#line 335 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 9)));

#line 3876 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 3878 "transform_hlds.ctgc.structure_reuse.indirect.c"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_3_3, transform_hlds__ctgc__structure_reuse__indirect__V_13_13);
        }
#line 335 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
          {
#line 3885 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 3887 "transform_hlds.ctgc.structure_reuse.indirect.c"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_4_4, transform_hlds__ctgc__structure_reuse__indirect__V_14_14);
            }
#line 335 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
              {
#line 3894 "transform_hlds.ctgc.structure_reuse.indirect.c"
                {
#line 3896 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_5_5, transform_hlds__ctgc__structure_reuse__indirect__V_15_15);
                }
#line 335 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                  {
#line 3903 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    {
#line 3905 "transform_hlds.ctgc.structure_reuse.indirect.c"
                      transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_6_6, transform_hlds__ctgc__structure_reuse__indirect__V_16_16);
                    }
#line 335 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                      {
#line 3912 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_29_29 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[1];
#line 3914 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        {
#line 3916 "transform_hlds.ctgc.structure_reuse.indirect.c"
                          transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_29_29, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_17_17)));
                        }
#line 335 "structure_reuse.indirect.m"
                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                          {
#line 3923 "transform_hlds.ctgc.structure_reuse.indirect.c"
                            {
#line 3925 "transform_hlds.ctgc.structure_reuse.indirect.c"
                              transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_8_8, transform_hlds__ctgc__structure_reuse__indirect__V_18_18);
                            }
#line 335 "structure_reuse.indirect.m"
                            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                              {
#line 3932 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_31_31 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6];
#line 3934 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                {
#line 3936 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                  transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_31_31, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_9_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_19_19)));
                                }
#line 335 "structure_reuse.indirect.m"
                                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                                  {
#line 3943 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_10_10 == transform_hlds__ctgc__structure_reuse__indirect__V_20_20);
#line 335 "structure_reuse.indirect.m"
                                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 335 "structure_reuse.indirect.m"
                                      {
#line 3949 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_11_11 == transform_hlds__ctgc__structure_reuse__indirect__V_21_21);
#line 335 "structure_reuse.indirect.m"
                                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 3953 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                          transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_12_12 == transform_hlds__ctgc__structure_reuse__indirect__V_22_22);
#line 335 "structure_reuse.indirect.m"
                                      }
#line 335 "structure_reuse.indirect.m"
                                  }
#line 335 "structure_reuse.indirect.m"
                              }
#line 335 "structure_reuse.indirect.m"
                          }
#line 335 "structure_reuse.indirect.m"
                      }
#line 335 "structure_reuse.indirect.m"
                  }
#line 335 "structure_reuse.indirect.m"
              }
#line 335 "structure_reuse.indirect.m"
          }
#line 335 "structure_reuse.indirect.m"
      }
#line 335 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 335 "structure_reuse.indirect.m"
  }
#line 335 "structure_reuse.indirect.m"
}

#line 352 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0(
#line 352 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 352 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 352 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 352 "structure_reuse.indirect.m"
{
#line 352 "structure_reuse.indirect.m"
  {
#line 352 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 352 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_27 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 352 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_28 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 352 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_27 == transform_hlds__ctgc__structure_reuse__indirect__CastY_28);
#line 352 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 4004 "transform_hlds.ctgc.structure_reuse.indirect.c"
      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 352 "structure_reuse.indirect.m"
    else
#line 352 "structure_reuse.indirect.m"
      {
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 2)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 3)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 4)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 5)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 6)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 7)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 0)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 1)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 2)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 3)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 4)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 5)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 6)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 7)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20;

#line 352 "structure_reuse.indirect.m"
        {
#line 352 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_20_20, transform_hlds__ctgc__structure_reuse__indirect__V_4_4, transform_hlds__ctgc__structure_reuse__indirect__V_12_12);
        }
#line 4050 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_20_20 == (MR_Integer) 0);
#line 352 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 352 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_20_20;
#line 352 "structure_reuse.indirect.m"
        else
#line 352 "structure_reuse.indirect.m"
          {
#line 352 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21;

#line 352 "structure_reuse.indirect.m"
            {
#line 352 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_21_21, transform_hlds__ctgc__structure_reuse__indirect__V_5_5, transform_hlds__ctgc__structure_reuse__indirect__V_13_13);
            }
#line 4070 "transform_hlds.ctgc.structure_reuse.indirect.c"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_21_21 == (MR_Integer) 0);
#line 352 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 352 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_21_21;
#line 352 "structure_reuse.indirect.m"
            else
#line 352 "structure_reuse.indirect.m"
              {
#line 352 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22;
#line 352 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_6_6;
#line 352 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_14_14;

#line 352 "structure_reuse.indirect.m"
                {
#line 352 "structure_reuse.indirect.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__structure_reuse__indirect__V_22_22, transform_hlds__ctgc__structure_reuse__indirect__V_37_37, transform_hlds__ctgc__structure_reuse__indirect__V_38_38);
                }
#line 4094 "transform_hlds.ctgc.structure_reuse.indirect.c"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_22_22 == (MR_Integer) 0);
#line 352 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 352 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_22_22;
#line 352 "structure_reuse.indirect.m"
                else
#line 352 "structure_reuse.indirect.m"
                  {
#line 352 "structure_reuse.indirect.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23;

#line 352 "structure_reuse.indirect.m"
                    {
#line 352 "structure_reuse.indirect.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[5], &transform_hlds__ctgc__structure_reuse__indirect__V_23_23, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_15_15)));
                    }
#line 4114 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_23_23 == (MR_Integer) 0);
#line 352 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 352 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_23_23;
#line 352 "structure_reuse.indirect.m"
                    else
#line 352 "structure_reuse.indirect.m"
                      {
#line 352 "structure_reuse.indirect.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24;

#line 352 "structure_reuse.indirect.m"
                        {
#line 352 "structure_reuse.indirect.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], &transform_hlds__ctgc__structure_reuse__indirect__V_24_24, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_8_8)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_16_16)));
                        }
#line 4134 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_24_24 == (MR_Integer) 0);
#line 352 "structure_reuse.indirect.m"
                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 352 "structure_reuse.indirect.m"
                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
                          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_24_24;
#line 352 "structure_reuse.indirect.m"
                        else
#line 352 "structure_reuse.indirect.m"
                          {
#line 352 "structure_reuse.indirect.m"
                            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25;

#line 352 "structure_reuse.indirect.m"
                            {
#line 352 "structure_reuse.indirect.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], &transform_hlds__ctgc__structure_reuse__indirect__V_25_25, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_9_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_17_17)));
                            }
#line 4154 "transform_hlds.ctgc.structure_reuse.indirect.c"
                            transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_25_25 == (MR_Integer) 0);
#line 352 "structure_reuse.indirect.m"
                            transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 352 "structure_reuse.indirect.m"
                            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
                              *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_25_25;
#line 352 "structure_reuse.indirect.m"
                            else
#line 352 "structure_reuse.indirect.m"
                              {
#line 352 "structure_reuse.indirect.m"
                                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;

#line 352 "structure_reuse.indirect.m"
                                {
#line 352 "structure_reuse.indirect.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2], &transform_hlds__ctgc__structure_reuse__indirect__V_26_26, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_10_10)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_18_18)));
                                }
#line 4174 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_26_26 == (MR_Integer) 0);
#line 352 "structure_reuse.indirect.m"
                                transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 352 "structure_reuse.indirect.m"
                                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
                                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 352 "structure_reuse.indirect.m"
                                else
#line 352 "structure_reuse.indirect.m"
                                  {
#line 352 "structure_reuse.indirect.m"
                                    {
#line 352 "structure_reuse.indirect.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2], transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_11_11)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_19_19)));
#line 352 "structure_reuse.indirect.m"
                                      return;
                                    }
#line 352 "structure_reuse.indirect.m"
                                  }
#line 352 "structure_reuse.indirect.m"
                              }
#line 352 "structure_reuse.indirect.m"
                          }
#line 352 "structure_reuse.indirect.m"
                      }
#line 352 "structure_reuse.indirect.m"
                  }
#line 352 "structure_reuse.indirect.m"
              }
#line 352 "structure_reuse.indirect.m"
          }
#line 352 "structure_reuse.indirect.m"
      }
#line 352 "structure_reuse.indirect.m"
  }
#line 352 "structure_reuse.indirect.m"
}

#line 352 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0(
#line 352 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 352 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 352 "structure_reuse.indirect.m"
{
#line 352 "structure_reuse.indirect.m"
  {
#line 352 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 352 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_19 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 352 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_20 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 352 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_19 == transform_hlds__ctgc__structure_reuse__indirect__CastY_20);
#line 352 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 352 "structure_reuse.indirect.m"
    else
#line 352 "structure_reuse.indirect.m"
      {
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_23_23;
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_24_24;
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_25_25;
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_26_26;
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_27_27;
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 0)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 1)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 2)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 3)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 4)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 5)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 6)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 7)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 2)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 3)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 4)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 5)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 6)));
#line 352 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 7)));

#line 4285 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 4287 "transform_hlds.ctgc.structure_reuse.indirect.c"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_3_3, transform_hlds__ctgc__structure_reuse__indirect__V_11_11);
        }
#line 352 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
          {
#line 4294 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 4296 "transform_hlds.ctgc.structure_reuse.indirect.c"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_4_4, transform_hlds__ctgc__structure_reuse__indirect__V_12_12);
            }
#line 352 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
              {
#line 4303 "transform_hlds.ctgc.structure_reuse.indirect.c"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_5_5 == transform_hlds__ctgc__structure_reuse__indirect__V_13_13);
#line 352 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
                  {
#line 4309 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_23_23 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[5];
#line 4311 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    {
#line 4313 "transform_hlds.ctgc.structure_reuse.indirect.c"
                      transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_23_23, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_6_6)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_14_14)));
                    }
#line 352 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
                      {
#line 4320 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_24_24 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0];
#line 4322 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        {
#line 4324 "transform_hlds.ctgc.structure_reuse.indirect.c"
                          transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_24_24, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_15_15)));
                        }
#line 352 "structure_reuse.indirect.m"
                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
                          {
#line 4331 "transform_hlds.ctgc.structure_reuse.indirect.c"
                            transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_25_25 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1];
#line 4333 "transform_hlds.ctgc.structure_reuse.indirect.c"
                            {
#line 4335 "transform_hlds.ctgc.structure_reuse.indirect.c"
                              transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_25_25, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_8_8)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_16_16)));
                            }
#line 352 "structure_reuse.indirect.m"
                            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
                              {
#line 4342 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_26_26 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
#line 4344 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                {
#line 4346 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                  transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_26_26, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_9_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_17_17)));
                                }
#line 352 "structure_reuse.indirect.m"
                                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 352 "structure_reuse.indirect.m"
                                  {
#line 4353 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                    transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_27_27 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
#line 4355 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                    {
#line 4357 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                      return transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_27_27, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_10_10)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_18_18)));
                                    }
#line 352 "structure_reuse.indirect.m"
                                  }
#line 352 "structure_reuse.indirect.m"
                              }
#line 352 "structure_reuse.indirect.m"
                          }
#line 352 "structure_reuse.indirect.m"
                      }
#line 352 "structure_reuse.indirect.m"
                  }
#line 352 "structure_reuse.indirect.m"
              }
#line 352 "structure_reuse.indirect.m"
          }
#line 352 "structure_reuse.indirect.m"
      }
#line 352 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 352 "structure_reuse.indirect.m"
  }
#line 352 "structure_reuse.indirect.m"
}

#line 103 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0(
#line 103 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 103 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 103 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 103 "structure_reuse.indirect.m"
{
#line 103 "structure_reuse.indirect.m"
  {
#line 103 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 103 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 103 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 103 "structure_reuse.indirect.m"
    {
#line 103 "structure_reuse.indirect.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5)));
#line 103 "structure_reuse.indirect.m"
      return;
    }
#line 103 "structure_reuse.indirect.m"
  }
#line 103 "structure_reuse.indirect.m"
}

#line 103 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0(
#line 103 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 103 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 103 "structure_reuse.indirect.m"
{
#line 103 "structure_reuse.indirect.m"
  {
#line 103 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 103 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 103 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 103 "structure_reuse.indirect.m"
    {
#line 103 "structure_reuse.indirect.m"
      return transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_4)));
    }
#line 103 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 103 "structure_reuse.indirect.m"
  }
#line 103 "structure_reuse.indirect.m"
}

#line 730 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0(
#line 730 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 730 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 730 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 730 "structure_reuse.indirect.m"
{
#line 730 "structure_reuse.indirect.m"
  {
#line 730 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 730 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 730 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 730 "structure_reuse.indirect.m"
    {
#line 730 "structure_reuse.indirect.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4, transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5);
#line 730 "structure_reuse.indirect.m"
      return;
    }
#line 730 "structure_reuse.indirect.m"
  }
#line 730 "structure_reuse.indirect.m"
}

#line 730 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0(
#line 730 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_1,
#line 730 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 730 "structure_reuse.indirect.m"
{
#line 4486 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 4488 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_1 == transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 4491 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 4493 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 730 "structure_reuse.indirect.m"
}

#line 1174 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(
#line 1174 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_4,
#line 1174 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_5)
#line 1174 "structure_reuse.indirect.m"
{
#line 1179 "structure_reuse.indirect.m"
  {
#line 1179 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1179 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6;
#line 1179 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs0_7;

#line 1177 "structure_reuse.indirect.m"
    {
#line 1177 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_4, transform_hlds__ctgc__structure_reuse__indirect__PPId_5, &transform_hlds__ctgc__structure_reuse__indirect__ReuseAs0_7);
    }
#line 1179 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1178 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6 = transform_hlds__ctgc__structure_reuse__indirect__ReuseAs0_7;
#line 1179 "structure_reuse.indirect.m"
    else
#line 1183 "structure_reuse.indirect.m"
      {
#line 1183 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8;

#line 1183 "structure_reuse.indirect.m"
        {
#line 1183 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_8_8 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
        }
#line 1183 "structure_reuse.indirect.m"
        {
#line 1183 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_8_8));
#line 1183 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6, 1) = ((MR_Box) ((MR_Integer) 2));
#line 1183 "structure_reuse.indirect.m"
        }
#line 1183 "structure_reuse.indirect.m"
      }
#line 1179 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6;
#line 1179 "structure_reuse.indirect.m"
  }
#line 1174 "structure_reuse.indirect.m"
}

#line 1156 "structure_reuse.indirect.m"
static MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_f_0(
#line 1156 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_4,
#line 1156 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Table_5)
#line 1156 "structure_reuse.indirect.m"
{
#line 1207 "structure_reuse.indirect.m"
  {
#line 1207 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1207 "structure_reuse.indirect.m"
    MR_String transform_hlds__ctgc__structure_reuse__indirect__Descr_6;
#line 1207 "structure_reuse.indirect.m"
    MR_String transform_hlds__ctgc__structure_reuse__indirect__Rec_7;
#line 1207 "structure_reuse.indirect.m"
    MR_String transform_hlds__ctgc__structure_reuse__indirect__Descr0_10;
#line 1207 "structure_reuse.indirect.m"
    MR_String transform_hlds__ctgc__structure_reuse__indirect__V_12_12;
#line 1218 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_8;
#line 1214 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_11_11;
#line 1227 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv0_V_11_11;
#line 1215 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9;

#line 1208 "structure_reuse.indirect.m"
    {
#line 1208 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__fixpoint_table__is_recursive_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__Table_5);
    }
#line 1210 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1209 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Rec_7 = (MR_String) "(rec)";
#line 1210 "structure_reuse.indirect.m"
    else
#line 1211 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Rec_7 = (MR_String) "(non-rec)";
#line 1227 "structure_reuse.indirect.m"
    {
#line 1227 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PPId_4)), transform_hlds__ctgc__structure_reuse__indirect__Table_5, &transform_hlds__ctgc__structure_reuse__indirect__conv0_V_11_11);
    }
#line 1227 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1227 "structure_reuse.indirect.m"
      {
#line 1227 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv0_V_11_11);
#line 1227 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 1227 "structure_reuse.indirect.m"
      }
#line 1214 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1214 "structure_reuse.indirect.m"
      {
#line 1215 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_11_11, (MR_Integer) 0)));
#line 1215 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_11_11, (MR_Integer) 1)));
#line 1215 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 1214 "structure_reuse.indirect.m"
      }
#line 1218 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1217 "structure_reuse.indirect.m"
      {
#line 1217 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__Descr0_10 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_8);
      }
#line 1218 "structure_reuse.indirect.m"
    else
#line 1219 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Descr0_10 = (MR_String) "-";
#line 1221 "structure_reuse.indirect.m"
    {
#line 1221 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", transform_hlds__ctgc__structure_reuse__indirect__Rec_7);
    }
#line 1221 "structure_reuse.indirect.m"
    {
#line 1221 "structure_reuse.indirect.m"
      return transform_hlds__ctgc__structure_reuse__indirect__Descr_6 = mercury__string__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__Descr0_10, transform_hlds__ctgc__structure_reuse__indirect__V_12_12);
    }
#line 1207 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__Descr_6;
#line 1207 "structure_reuse.indirect.m"
  }
#line 1156 "structure_reuse.indirect.m"
}

#line 1153 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_p_0(
#line 1153 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_5,
#line 1153 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6,
#line 1153 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_8,
#line 1153 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_9)
#line 1153 "structure_reuse.indirect.m"
{
#line 1205 "structure_reuse.indirect.m"
  {
#line 1205 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1205 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6;

#line 1205 "structure_reuse.indirect.m"
    {
#line 1205 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PPId_5)), &transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_8, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_9);
    }
#line 1205 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1205 "structure_reuse.indirect.m"
      {
#line 1205 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6);
#line 1205 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 1205 "structure_reuse.indirect.m"
      }
#line 1205 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1205 "structure_reuse.indirect.m"
  }
#line 1153 "structure_reuse.indirect.m"
}

#line 1201 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0_1(
#line 1201 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1201 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 1201 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 1201 "structure_reuse.indirect.m"
{
#line 1201 "structure_reuse.indirect.m"
  {
#line 1201 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1201 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;

#line 1201 "structure_reuse.indirect.m"
    {
#line 1201 "structure_reuse.indirect.m"
      return transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_and_status_subsumed_by_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 1201 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1201 "structure_reuse.indirect.m"
  }
#line 1201 "structure_reuse.indirect.m"
}

#line 1140 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0(
#line 1140 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_7,
#line 1140 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_8,
#line 1140 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Id_9,
#line 1140 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_10,
#line 1140 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_12,
#line 1140 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_13)
#line 1140 "structure_reuse.indirect.m"
{
#line 1199 "structure_reuse.indirect.m"
  {
#line 1199 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1199 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14;

#line 1201 "structure_reuse.indirect.m"
    {
#line 1201 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1201 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[2]));
#line 1201 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0_1));
#line 1201 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1201 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_7));
#line 1201 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_8));
#line 1201 "structure_reuse.indirect.m"
    }
#line 1200 "structure_reuse.indirect.m"
    {
#line 1200 "structure_reuse.indirect.m"
      transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__indirect__V_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Id_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_10)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_12, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_13);
#line 1200 "structure_reuse.indirect.m"
      return;
    }
#line 1199 "structure_reuse.indirect.m"
  }
#line 1140 "structure_reuse.indirect.m"
}

#line 1123 "structure_reuse.indirect.m"
static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_f_0(
#line 1123 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Tin_3)
#line 1123 "structure_reuse.indirect.m"
{
#line 1192 "structure_reuse.indirect.m"
  {
#line 1192 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1192 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 1192 "structure_reuse.indirect.m"
    {
#line 1192 "structure_reuse.indirect.m"
      return transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2 = transform_hlds__ctgc__fixpoint_table__which_run_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__Tin_3);
    }
#line 1192 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 1192 "structure_reuse.indirect.m"
  }
#line 1123 "structure_reuse.indirect.m"
}

#line 1070 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__add_request_6_p_0(
#line 1070 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7,
#line 1070 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8,
#line 1070 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_9,
#line 1070 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IntraModule_10,
#line 1070 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20,
#line 1070 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_21)
#line 1070 "structure_reuse.indirect.m"
{
#line 1073 "structure_reuse.indirect.m"
  {
#line 1073 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1073 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8, (MR_Integer) 0)));
#line 1073 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 0)));
#line 1073 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_15;
#line 1073 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ImportStatus_16;
#line 1074 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8, (MR_Integer) 1)));
#line 1075 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 1)));
#line 1075 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 2)));
#line 1075 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 3)));
#line 1075 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 4)));
#line 1075 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 5)));
#line 1075 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 6)));
#line 1075 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 7)));
#line 1075 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 8)));
#line 1075 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 9)));

#line 1076 "structure_reuse.indirect.m"
    {
#line 1076 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_14, transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_12, &transform_hlds__ctgc__structure_reuse__indirect__PredInfo_15);
    }
#line 1077 "structure_reuse.indirect.m"
    {
#line 1077 "structure_reuse.indirect.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__PredInfo_15, &transform_hlds__ctgc__structure_reuse__indirect__ImportStatus_16);
    }
#line 1079 "structure_reuse.indirect.m"
    {
#line 1079 "structure_reuse.indirect.m"
      MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22;

#line 1079 "structure_reuse.indirect.m"
      {
#line 1079 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = parse_tree__status__status_defined_in_this_module_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__ImportStatus_16);
      }
#line 1079 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_22_22 == (MR_Integer) 1);
#line 1079 "structure_reuse.indirect.m"
    }
#line 1080 "structure_reuse.indirect.m"
    if (!(transform_hlds__ctgc__structure_reuse__indirect__succeeded))
#line 1080 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__ImportStatus_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1083 "structure_reuse.indirect.m"
      {
#line 1083 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Request_17;
#line 1083 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24;
#line 1083 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_43_43;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_44_44;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_45_45;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_47_47;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_48_48;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_49_49;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_50_50;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_51_51;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_52_52;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_53_53;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_54_54;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_56_56;
#line 1085 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_55_55;

#line 1083 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__IntraModule_10 = (MR_Integer) 1;
#line 1084 "structure_reuse.indirect.m"
        {
#line 1084 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__Request_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Request_17, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8));
#line 1084 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Request_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_9));
#line 1084 "structure_reuse.indirect.m"
        }
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
#line 1085 "structure_reuse.indirect.m"
        {
#line 1085 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0, transform_hlds__ctgc__structure_reuse__indirect__V_25_25, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Request_17)));
        }
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
#line 1085 "structure_reuse.indirect.m"
        {
#line 1085 "structure_reuse.indirect.m"
          MR_Word base;
#line 1085 "structure_reuse.indirect.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_21 = base;
#line 1085 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_49_49));
#line 1085 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_50_50));
#line 1085 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_51_51));
#line 1085 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_52_52));
#line 1085 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_53_53));
#line 1085 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_54_54));
#line 1085 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_24_24));
#line 1085 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_56_56));
#line 1085 "structure_reuse.indirect.m"
        }
#line 1083 "structure_reuse.indirect.m"
      }
#line 1086 "structure_reuse.indirect.m"
    else
#line 1087 "structure_reuse.indirect.m"
      {
#line 1087 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Globals_18;
#line 1087 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntermoduleAnalysis_19;

#line 1087 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__IntraModule_10 = (MR_Integer) 0;
#line 1088 "structure_reuse.indirect.m"
        {
#line 1088 "structure_reuse.indirect.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_14, &transform_hlds__ctgc__structure_reuse__indirect__Globals_18);
        }
#line 1089 "structure_reuse.indirect.m"
        {
#line 1089 "structure_reuse.indirect.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_18, (MR_Integer) 334, &transform_hlds__ctgc__structure_reuse__indirect__IntermoduleAnalysis_19);
        }
#line 1096 "structure_reuse.indirect.m"
#line 1096 "structure_reuse.indirect.m"
        switch (transform_hlds__ctgc__structure_reuse__indirect__IntermoduleAnalysis_19) {
#line 1096 "structure_reuse.indirect.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1096 "structure_reuse.indirect.m"
          case (MR_Integer) 0:
#line 1097 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_21 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20;
#line 1096 "structure_reuse.indirect.m"
            break;
#line 1096 "structure_reuse.indirect.m"
          case (MR_Integer) 1:
#line 1092 "structure_reuse.indirect.m"
            {
#line 1092 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 1092 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 1092 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Request_30;
#line 1095 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57;
#line 1095 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_58_58;
#line 1095 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59;
#line 1095 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60;
#line 1095 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 1095 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_62_62;
#line 1095 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63;
#line 1094 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64;
#line 1094 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_65_65;
#line 1094 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66;
#line 1094 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_67_67;
#line 1094 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_68_68;
#line 1094 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_69_69;
#line 1094 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_70_70;
#line 1094 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_71_71;

#line 1093 "structure_reuse.indirect.m"
              {
#line 1093 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__Request_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1093 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Request_30, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8));
#line 1093 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Request_30, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_9));
#line 1093 "structure_reuse.indirect.m"
              }
#line 1095 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
#line 1095 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
#line 1095 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
#line 1095 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
#line 1095 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
#line 1095 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
#line 1095 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
#line 1095 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
#line 1095 "structure_reuse.indirect.m"
              {
#line 1095 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0, transform_hlds__ctgc__structure_reuse__indirect__V_29_29, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Request_30)));
              }
#line 1094 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
#line 1094 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
#line 1094 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
#line 1094 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
#line 1094 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
#line 1094 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
#line 1094 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
#line 1094 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
#line 1094 "structure_reuse.indirect.m"
              {
#line 1094 "structure_reuse.indirect.m"
                MR_Word base;
#line 1094 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1094 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_21 = base;
#line 1094 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_64_64));
#line 1094 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_65_65));
#line 1094 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_66_66));
#line 1094 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_67_67));
#line 1094 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_68_68));
#line 1094 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_69_69));
#line 1094 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_70_70));
#line 1094 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_28_28));
#line 1094 "structure_reuse.indirect.m"
              }
#line 1092 "structure_reuse.indirect.m"
            }
#line 1096 "structure_reuse.indirect.m"
            break;
#line 1096 "structure_reuse.indirect.m"
        }
#line 1087 "structure_reuse.indirect.m"
      }
#line 1073 "structure_reuse.indirect.m"
  }
#line 1070 "structure_reuse.indirect.m"
}

#line 1056 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(
#line 1056 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__List_1,
#line 1056 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 1056 "structure_reuse.indirect.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__indirect__Index_3,
#line 1056 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__4_4)
#line 1056 "structure_reuse.indirect.m"
{
#line 1059 "structure_reuse.indirect.m"
  {
#line 1059 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 1059 "structure_reuse.indirect.m"
    if ((transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1059 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1059 "structure_reuse.indirect.m"
    else
#line 1060 "structure_reuse.indirect.m"
      {
#line 1060 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 1060 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 1060 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Indices0_12;
#line 1060 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = (transform_hlds__ctgc__structure_reuse__indirect__Index_3 + (MR_Integer) 1);

#line 1061 "structure_reuse.indirect.m"
        {
#line 1061 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__List_1, transform_hlds__ctgc__structure_reuse__indirect__Vars_9, transform_hlds__ctgc__structure_reuse__indirect__V_13_13, &transform_hlds__ctgc__structure_reuse__indirect__Indices0_12);
        }
#line 1062 "structure_reuse.indirect.m"
        {
#line 1062 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3], ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Var_8)), transform_hlds__ctgc__structure_reuse__indirect__List_1);
        }
#line 1064 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1063 "structure_reuse.indirect.m"
          {
#line 1063 "structure_reuse.indirect.m"
            MR_Word base;
#line 1063 "structure_reuse.indirect.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__4_4 = base;
#line 1063 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Index_3));
#line 1063 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Indices0_12));
#line 1063 "structure_reuse.indirect.m"
          }
#line 1064 "structure_reuse.indirect.m"
        else
#line 1065 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__4_4 = transform_hlds__ctgc__structure_reuse__indirect__Indices0_12;
#line 1060 "structure_reuse.indirect.m"
      }
#line 1059 "structure_reuse.indirect.m"
  }
#line 1056 "structure_reuse.indirect.m"
}

#line 1009 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(
#line 1009 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 1009 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_9,
#line 1009 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_10,
#line 1009 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11,
#line 1009 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Reason_12)
#line 1009 "structure_reuse.indirect.m"
{
#line 1014 "structure_reuse.indirect.m"
  {
#line 1014 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1014 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));
#line 1014 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 1015 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 1015 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 1015 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 1015 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 1015 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 1015 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 1015 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 1015 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));

#line 1033 "structure_reuse.indirect.m"
#line 1033 "structure_reuse.indirect.m"
    switch (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_14) {
#line 1033 "structure_reuse.indirect.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1033 "structure_reuse.indirect.m"
      case (MR_Integer) 0:
#line 1034 "structure_reuse.indirect.m"
        {
#line 1034 "structure_reuse.indirect.m"
        }
#line 1033 "structure_reuse.indirect.m"
        break;
#line 1033 "structure_reuse.indirect.m"
      case (MR_Integer) 1:
#line 1017 "structure_reuse.indirect.m"
        {
#line 1017 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalReuse_16;
#line 1017 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__Context_17;
#line 1017 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__VarSet_18;
#line 1017 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21;
#line 1021 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_56_56;
#line 1021 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57;
#line 1021 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_58_58;
#line 1021 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59;
#line 1021 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60;
#line 1021 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 1021 "structure_reuse.indirect.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_62_62;
#line 1021 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63;
#line 1021 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64;

#line 1019 "structure_reuse.indirect.m"
          {
#line 1019 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__GoalReuse_16 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11);
          }
#line 1020 "structure_reuse.indirect.m"
          {
#line 1020 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11);
          }
#line 1021 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 1021 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 1021 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 1021 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 1021 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 1021 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 1021 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 1021 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 1021 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 1021 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));
#line 1021 "structure_reuse.indirect.m"
          {
#line 1021 "structure_reuse.indirect.m"
            hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_21_21, &transform_hlds__ctgc__structure_reuse__indirect__VarSet_18);
          }
#line 1022 "structure_reuse.indirect.m"
          {
#line 1022 "structure_reuse.indirect.m"
            mercury__io__write_string_3_p_0((MR_String) "\tcall to ");
          }
#line 1023 "structure_reuse.indirect.m"
          {
#line 1023 "structure_reuse.indirect.m"
            hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_38_38, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_9);
          }
#line 1024 "structure_reuse.indirect.m"
          {
#line 1024 "structure_reuse.indirect.m"
            mercury__io__write_string_3_p_0((MR_String) "\n\tfrom ");
          }
#line 1025 "structure_reuse.indirect.m"
          {
#line 1025 "structure_reuse.indirect.m"
            parse_tree__prog_out__write_context_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Context_17);
          }
#line 1026 "structure_reuse.indirect.m"
          {
#line 1026 "structure_reuse.indirect.m"
            mercury__io__write_string_3_p_0((MR_String) "\n\twith NoClobbers = ");
          }
#line 1027 "structure_reuse.indirect.m"
          {
#line 1027 "structure_reuse.indirect.m"
            mercury__io__write_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4], ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_10)));
          }
#line 1028 "structure_reuse.indirect.m"
          {
#line 1028 "structure_reuse.indirect.m"
            mercury__io__write_string_3_p_0((MR_String) "\n\t\treuse: ");
          }
#line 1029 "structure_reuse.indirect.m"
          {
#line 1029 "structure_reuse.indirect.m"
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_reuse_description_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalReuse_16)));
          }
#line 1030 "structure_reuse.indirect.m"
          {
#line 1030 "structure_reuse.indirect.m"
            mercury__io__write_string_3_p_0((MR_String) "\n\t\treason: ");
          }
#line 1047 "structure_reuse.indirect.m"
#line 1047 "structure_reuse.indirect.m"
          switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__Reason_12)) {
#line 1047 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1047 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 1047 "structure_reuse.indirect.m"
              {
#line 1048 "structure_reuse.indirect.m"
                {
#line 1048 "structure_reuse.indirect.m"
                  mercury__io__write_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_verify_indirect_reuse_reason_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Reason_12)));
                }
#line 1047 "structure_reuse.indirect.m"
              }
#line 1047 "structure_reuse.indirect.m"
              break;
#line 1047 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 1050 "structure_reuse.indirect.m"
              {
#line 1050 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__Vars_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__Reason_12, (MR_Integer) 0)));

#line 1051 "structure_reuse.indirect.m"
                {
#line 1051 "structure_reuse.indirect.m"
                  mercury__io__write_string_3_p_0((MR_String) "reuse_is_unsafe(");
                }
#line 1052 "structure_reuse.indirect.m"
                {
#line 1052 "structure_reuse.indirect.m"
                  parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__indirect__VarSet_18, (MR_Integer) 1, transform_hlds__ctgc__structure_reuse__indirect__Vars_72);
                }
#line 1053 "structure_reuse.indirect.m"
                {
#line 1053 "structure_reuse.indirect.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
#line 1050 "structure_reuse.indirect.m"
              }
#line 1047 "structure_reuse.indirect.m"
              break;
#line 1047 "structure_reuse.indirect.m"
          }
#line 1032 "structure_reuse.indirect.m"
          {
#line 1032 "structure_reuse.indirect.m"
            mercury__io__nl_2_p_0();
#line 1032 "structure_reuse.indirect.m"
            return;
          }
#line 1017 "structure_reuse.indirect.m"
        }
#line 1033 "structure_reuse.indirect.m"
        break;
#line 1033 "structure_reuse.indirect.m"
    }
#line 1014 "structure_reuse.indirect.m"
  }
#line 1009 "structure_reuse.indirect.m"
}

#line 969 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(
#line 969 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 969 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__OrigPPId_9,
#line 969 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_10,
#line 969 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_11,
#line 969 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22,
#line 969 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_23,
#line 969 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_13)
#line 969 "structure_reuse.indirect.m"
{
#line 973 "structure_reuse.indirect.m"
  {
#line 973 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 973 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_16;
#line 973 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Status_17;
#line 973 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25;
#line 973 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27;
#line 973 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 973 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 981 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status0_14;
#line 981 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_15;
#line 976 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 4)));
#line 976 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 0)));
#line 976 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 1)));
#line 976 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 2)));
#line 976 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 3)));
#line 976 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 5)));
#line 976 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 6)));
#line 976 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 7)));
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_58_58;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_62_62;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_65_65;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_68_68;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_69_69;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_70_70;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_71_71;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_72_72;
#line 990 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_67_67;
#line 995 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_18;
#line 995 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePredInfo_20;
#line 995 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 995 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_19_19;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_73_73;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_74_74;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_75_75;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_76_76;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_77_77;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78;
#line 996 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_79_79;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81;

#line 976 "structure_reuse.indirect.m"
    {
#line 976 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__PPId_10, &transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status0_14, transform_hlds__ctgc__structure_reuse__indirect__V_24_24, &transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_15);
    }
#line 981 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 979 "structure_reuse.indirect.m"
      {
#line 980 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_41_41;
#line 980 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42;
#line 980 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_43_43;
#line 980 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_44_44;
#line 980 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46;
#line 980 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_47_47;
#line 980 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_48_48;
#line 980 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_45_45;

#line 979 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_16 = transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status0_14;
#line 980 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 0)));
#line 980 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 1)));
#line 980 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 2)));
#line 980 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 3)));
#line 980 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 4)));
#line 980 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 5)));
#line 980 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 6)));
#line 980 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 7)));
#line 980 "structure_reuse.indirect.m"
        {
#line 980 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 980 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_41_41));
#line 980 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_42_42));
#line 980 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_43_43));
#line 980 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_44_44));
#line 980 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_15));
#line 980 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_46_46));
#line 980 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_47_47));
#line 980 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_48_48));
#line 980 "structure_reuse.indirect.m"
        }
#line 979 "structure_reuse.indirect.m"
      }
#line 981 "structure_reuse.indirect.m"
    else
#line 983 "structure_reuse.indirect.m"
      {
#line 983 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 983 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 983 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 983 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 983 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 983 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 983 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 983 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 983 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 983 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));

#line 983 "structure_reuse.indirect.m"
        {
#line 983 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_16 = transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_26_26, transform_hlds__ctgc__structure_reuse__indirect__PPId_10);
        }
#line 983 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22;
#line 983 "structure_reuse.indirect.m"
      }
#line 986 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_16, (MR_Integer) 0)));
#line 986 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__Status_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_16, (MR_Integer) 1)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
#line 990 "structure_reuse.indirect.m"
    {
#line 990 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = analysis__lub_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__Status_17, transform_hlds__ctgc__structure_reuse__indirect__V_29_29);
    }
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
#line 990 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
#line 990 "structure_reuse.indirect.m"
    {
#line 990 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 990 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_65_65));
#line 990 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_66_66));
#line 990 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_28_28));
#line 990 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_68_68));
#line 990 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_69_69));
#line 990 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_70_70));
#line 990 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_71_71));
#line 990 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_72_72));
#line 990 "structure_reuse.indirect.m"
    }
#line 995 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__OrigPPId_9, (MR_Integer) 0)));
#line 995 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__OrigPPId_9, (MR_Integer) 1)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));
#line 996 "structure_reuse.indirect.m"
    {
#line 996 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_30_30, transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_18, &transform_hlds__ctgc__structure_reuse__indirect__CalleePredInfo_20);
    }
#line 998 "structure_reuse.indirect.m"
    {
#line 998 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__CalleePredInfo_20);
    }
#line 995 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 995 "structure_reuse.indirect.m"
      {
#line 999 "structure_reuse.indirect.m"
        {
#line 999 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__CalleePredInfo_20);
        }
#line 999 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 995 "structure_reuse.indirect.m"
      }
#line 1003 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1001 "structure_reuse.indirect.m"
      {
#line 1001 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Dep_21;
#line 1001 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 1001 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_33_33;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_90_90;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_93_93;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_96_96;
#line 1002 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_94_94;

#line 1001 "structure_reuse.indirect.m"
        {
#line 1001 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__Dep_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Dep_21, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__OrigPPId_9));
#line 1001 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Dep_21, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_11));
#line 1001 "structure_reuse.indirect.m"
        }
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 0)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 1)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 2)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 3)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 4)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 5)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 6)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 7)));
#line 1002 "structure_reuse.indirect.m"
        {
#line 1002 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__indirect__V_33_33, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Dep_21)));
        }
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 0)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 1)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 2)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 3)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 4)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 5)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 6)));
#line 1002 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 7)));
#line 1002 "structure_reuse.indirect.m"
        {
#line 1002 "structure_reuse.indirect.m"
          MR_Word base;
#line 1002 "structure_reuse.indirect.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_23 = base;
#line 1002 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_89_89));
#line 1002 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_90_90));
#line 1002 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_91_91));
#line 1002 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_92_92));
#line 1002 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_93_93));
#line 1002 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_32_32));
#line 1002 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_95_95));
#line 1002 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_96_96));
#line 1002 "structure_reuse.indirect.m"
        }
#line 1001 "structure_reuse.indirect.m"
      }
#line 1003 "structure_reuse.indirect.m"
    else
#line 1003 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_23 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27;
#line 973 "structure_reuse.indirect.m"
  }
#line 969 "structure_reuse.indirect.m"
}

#line 929 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0_1(
#line 929 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 929 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1)
#line 929 "structure_reuse.indirect.m"
{
#line 929 "structure_reuse.indirect.m"
  {
#line 929 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 929 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 929 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__2_2;

#line 929 "structure_reuse.indirect.m"
    {
#line 929 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1));
    }
#line 929 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__2_2));
#line 929 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 929 "structure_reuse.indirect.m"
  }
#line 929 "structure_reuse.indirect.m"
}

#line 899 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0(
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9,
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10,
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11,
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_12,
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 899 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14,
#line 899 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_15,
#line 899 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16)
#line 899 "structure_reuse.indirect.m"
{
#line 904 "structure_reuse.indirect.m"
  {
#line 904 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_89_89;
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 0)));
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 2)));
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 3)));
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingAs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 0)));
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ActualVarTypes_21;
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallerTypeVarSet_22;
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallerHeadTypeParams_23;
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeTypes_24;
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ActualReuseAs_25;
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__LiveData_26;
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProjectedLiveData_27;
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__StaticVars_28;
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Result_29;
#line 904 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36;
#line 905 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 1)));
#line 905 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 4)));
#line 905 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 5)));
#line 905 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 6)));
#line 905 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 7)));
#line 905 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 8)));
#line 905 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 9)));
#line 908 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 1)));
#line 908 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 2)));
#line 908 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 3)));
#line 908 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 4)));
#line 908 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 5)));
#line 908 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 6)));
#line 908 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 7)));
#line 919 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_73_73;
#line 919 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_74_74;
#line 919 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_75_75;
#line 919 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_76_76;
#line 919 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_77_77;
#line 919 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78;
#line 919 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_79_79;

#line 909 "structure_reuse.indirect.m"
    {
#line 909 "structure_reuse.indirect.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_19, &transform_hlds__ctgc__structure_reuse__indirect__ActualVarTypes_21);
    }
#line 910 "structure_reuse.indirect.m"
    {
#line 910 "structure_reuse.indirect.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__PredInfo_18, &transform_hlds__ctgc__structure_reuse__indirect__CallerTypeVarSet_22);
    }
#line 911 "structure_reuse.indirect.m"
    {
#line 911 "structure_reuse.indirect.m"
      hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__PredInfo_18, &transform_hlds__ctgc__structure_reuse__indirect__CallerHeadTypeParams_23);
    }
#line 912 "structure_reuse.indirect.m"
    {
#line 912 "structure_reuse.indirect.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__ActualVarTypes_21, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, &transform_hlds__ctgc__structure_reuse__indirect__CalleeTypes_24);
    }
#line 913 "structure_reuse.indirect.m"
    {
#line 913 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_8_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_17, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_12, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, transform_hlds__ctgc__structure_reuse__indirect__CalleeTypes_24, transform_hlds__ctgc__structure_reuse__indirect__CallerTypeVarSet_22, transform_hlds__ctgc__structure_reuse__indirect__CallerHeadTypeParams_23, transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14, &transform_hlds__ctgc__structure_reuse__indirect__ActualReuseAs_25);
    }
#line 916 "structure_reuse.indirect.m"
    {
#line 916 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__LiveData_26 = transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_17, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_19, transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11, transform_hlds__ctgc__structure_reuse__indirect__SharingAs_20);
    }
#line 918 "structure_reuse.indirect.m"
    {
#line 918 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__ProjectedLiveData_27 = transform_hlds__ctgc__livedata__livedata_project_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, transform_hlds__ctgc__structure_reuse__indirect__LiveData_26);
    }
#line 6073 "transform_hlds.ctgc.structure_reuse.indirect.c"
    transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_89_89 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3];
#line 919 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 0)));
#line 919 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 1)));
#line 919 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 2)));
#line 919 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 3)));
#line 919 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 4)));
#line 919 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 5)));
#line 919 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 6)));
#line 919 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 7)));
#line 919 "structure_reuse.indirect.m"
    {
#line 919 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__StaticVars_28 = mercury__set__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_89_89, transform_hlds__ctgc__structure_reuse__indirect__V_36_36);
    }
#line 921 "structure_reuse.indirect.m"
    {
#line 921 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_17, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_19, transform_hlds__ctgc__structure_reuse__indirect__ProjectedLiveData_27, transform_hlds__ctgc__structure_reuse__indirect__SharingAs_20, transform_hlds__ctgc__structure_reuse__indirect__StaticVars_28, transform_hlds__ctgc__structure_reuse__indirect__ActualReuseAs_25, &transform_hlds__ctgc__structure_reuse__indirect__Result_29);
    }
#line 934 "structure_reuse.indirect.m"
    if ((transform_hlds__ctgc__structure_reuse__indirect__Result_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 924 "structure_reuse.indirect.m"
      {
#line 924 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_90_90;
#line 924 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__LFU_30;
#line 924 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__LBU_31;
#line 924 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__LU_32;
#line 924 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__LuList_33;
#line 924 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__LuData_34;
#line 924 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85;
#line 930 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_86_86;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88;

#line 925 "structure_reuse.indirect.m"
        {
#line 925 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__LFU_30 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11);
        }
#line 926 "structure_reuse.indirect.m"
        {
#line 926 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__LBU_31 = hlds__hlds_goal__goal_info_get_lbu_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11);
        }
#line 6148 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 927 "structure_reuse.indirect.m"
        {
#line 927 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__LU_32 = parse_tree__set_of_var__union_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_90_90, transform_hlds__ctgc__structure_reuse__indirect__LFU_30, transform_hlds__ctgc__structure_reuse__indirect__LBU_31);
        }
#line 928 "structure_reuse.indirect.m"
        {
#line 928 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__LuList_33 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_90_90, transform_hlds__ctgc__structure_reuse__indirect__LU_32);
        }
#line 929 "structure_reuse.indirect.m"
        {
#line 929 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__LuData_34 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_89_89, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[2], transform_hlds__ctgc__structure_reuse__indirect__LuList_33);
        }
#line 930 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 0)));
#line 930 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 1)));
#line 930 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 2)));
#line 930 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 3)));
#line 930 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 4)));
#line 930 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 5)));
#line 930 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 6)));
#line 930 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 7)));
#line 930 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 8)));
#line 930 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 9)));
#line 930 "structure_reuse.indirect.m"
        {
#line 930 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_15 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_17, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_19, transform_hlds__ctgc__structure_reuse__indirect__V_38_38, transform_hlds__ctgc__structure_reuse__indirect__LuData_34, transform_hlds__ctgc__structure_reuse__indirect__SharingAs_20, transform_hlds__ctgc__structure_reuse__indirect__ActualReuseAs_25);
        }
#line 933 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 924 "structure_reuse.indirect.m"
      }
#line 934 "structure_reuse.indirect.m"
    else
#line 935 "structure_reuse.indirect.m"
      {
#line 935 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Reason_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__Result_29, (MR_Integer) 0)));

#line 936 "structure_reuse.indirect.m"
        {
#line 936 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_15 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
        }
#line 942 "structure_reuse.indirect.m"
#line 942 "structure_reuse.indirect.m"
        switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__Reason_35)) {
#line 942 "structure_reuse.indirect.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 942 "structure_reuse.indirect.m"
          case (MR_Integer) 0:
#line 941 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 942 "structure_reuse.indirect.m"
            break;
#line 942 "structure_reuse.indirect.m"
          case (MR_Integer) 1:
#line 943 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__Reason_35, (MR_Integer) 0)));
#line 942 "structure_reuse.indirect.m"
            break;
#line 942 "structure_reuse.indirect.m"
          case (MR_Integer) 2:
#line 945 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__Reason_35, (MR_Integer) 0)));
#line 942 "structure_reuse.indirect.m"
            break;
#line 942 "structure_reuse.indirect.m"
        }
#line 935 "structure_reuse.indirect.m"
      }
#line 904 "structure_reuse.indirect.m"
  }
#line 899 "structure_reuse.indirect.m"
}

#line 810 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_p_0(
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25,
#line 810 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26,
#line 810 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27,
#line 810 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28)
#line 810 "structure_reuse.indirect.m"
{
#line 816 "structure_reuse.indirect.m"
  {
#line 816 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 816 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17;
#line 816 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_18;

#line 817 "structure_reuse.indirect.m"
    {
#line 817 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14, &transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17, &transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_18);
    }
#line 820 "structure_reuse.indirect.m"
    {
#line 820 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17);
    }
#line 860 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 822 "structure_reuse.indirect.m"
      {
#line 822 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_130_130;
#line 822 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums0_19;
#line 822 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20;
#line 822 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;

#line 822 "structure_reuse.indirect.m"
        {
#line 822 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_18, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, (MR_Integer) 1, &transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums0_19);
        }
#line 6298 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_130_130 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 824 "structure_reuse.indirect.m"
        {
#line 824 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_130_130, transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums0_19, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12);
        }
#line 823 "structure_reuse.indirect.m"
        {
#line 823 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_130_130, transform_hlds__ctgc__structure_reuse__indirect__V_30_30);
        }
#line 826 "structure_reuse.indirect.m"
        {
#line 826 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4], ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12)));
        }
#line 834 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 829 "structure_reuse.indirect.m"
          {
#line 830 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34;

#line 829 "structure_reuse.indirect.m"
            {
#line 829 "structure_reuse.indirect.m"
              hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26);
            }
#line 832 "structure_reuse.indirect.m"
            {
#line 832 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 832 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__V_34_34, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_18));
#line 832 "structure_reuse.indirect.m"
            }
#line 831 "structure_reuse.indirect.m"
            {
#line 831 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26, transform_hlds__ctgc__structure_reuse__indirect__V_34_34);
            }
#line 829 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27;
#line 829 "structure_reuse.indirect.m"
          }
#line 834 "structure_reuse.indirect.m"
        else
#line 844 "structure_reuse.indirect.m"
          {
#line 839 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 5)));
#line 839 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 0)));
#line 839 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 1)));
#line 839 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 2)));
#line 839 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 3)));
#line 839 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 4)));
#line 839 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 6)));
#line 839 "structure_reuse.indirect.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 7)));
#line 839 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 8)));
#line 839 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 9)));
#line 839 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect___ReusePPId_22;

#line 839 "structure_reuse.indirect.m"
            {
#line 839 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_36_36, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20, &transform_hlds__ctgc__structure_reuse__indirect___ReusePPId_22);
            }
#line 844 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 842 "structure_reuse.indirect.m"
              {
#line 842 "structure_reuse.indirect.m"
                {
#line 842 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, (MR_Integer) 0, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28);
#line 842 "structure_reuse.indirect.m"
                  return;
                }
#line 842 "structure_reuse.indirect.m"
              }
#line 844 "structure_reuse.indirect.m"
            else
#line 847 "structure_reuse.indirect.m"
              {
#line 847 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntraModule_23;
#line 855 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46;

#line 846 "structure_reuse.indirect.m"
                {
#line 846 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__add_request_6_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20, &transform_hlds__ctgc__structure_reuse__indirect__IntraModule_23, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28);
                }
#line 851 "structure_reuse.indirect.m"
#line 851 "structure_reuse.indirect.m"
                switch (transform_hlds__ctgc__structure_reuse__indirect__IntraModule_23) {
#line 851 "structure_reuse.indirect.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 851 "structure_reuse.indirect.m"
                  case (MR_Integer) 0:
#line 852 "structure_reuse.indirect.m"
                    {
#line 853 "structure_reuse.indirect.m"
                      {
#line 853 "structure_reuse.indirect.m"
                        hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26);
                      }
#line 852 "structure_reuse.indirect.m"
                    }
#line 851 "structure_reuse.indirect.m"
                    break;
#line 851 "structure_reuse.indirect.m"
                  case (MR_Integer) 1:
#line 849 "structure_reuse.indirect.m"
                    {
#line 850 "structure_reuse.indirect.m"
                      {
#line 850 "structure_reuse.indirect.m"
                        hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26);
                      }
#line 849 "structure_reuse.indirect.m"
                    }
#line 851 "structure_reuse.indirect.m"
                    break;
#line 851 "structure_reuse.indirect.m"
                }
#line 857 "structure_reuse.indirect.m"
                {
#line 857 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 857 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__V_46_46, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_18));
#line 857 "structure_reuse.indirect.m"
                }
#line 856 "structure_reuse.indirect.m"
                {
#line 856 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26, transform_hlds__ctgc__structure_reuse__indirect__V_46_46);
#line 856 "structure_reuse.indirect.m"
                  return;
                }
#line 847 "structure_reuse.indirect.m"
              }
#line 844 "structure_reuse.indirect.m"
          }
#line 822 "structure_reuse.indirect.m"
      }
#line 860 "structure_reuse.indirect.m"
    else
#line 872 "structure_reuse.indirect.m"
      {
#line 861 "structure_reuse.indirect.m"
        {
#line 861 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17);
        }
#line 872 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 864 "structure_reuse.indirect.m"
          {
#line 864 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_24;
#line 864 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
#line 864 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_50_50;
#line 864 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_52_52;
#line 864 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
#line 864 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
#line 864 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
#line 864 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
#line 864 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
#line 864 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
#line 864 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
#line 865 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89;
#line 865 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91;
#line 865 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92;
#line 865 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_93_93;
#line 865 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_94_94;
#line 865 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;
#line 865 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_96_96;
#line 865 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_90_90;

#line 864 "structure_reuse.indirect.m"
            {
#line 864 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_48_48, &transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_24);
            }
#line 865 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
#line 865 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
#line 865 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
#line 865 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
#line 865 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
#line 865 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
#line 865 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
#line 865 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
#line 865 "structure_reuse.indirect.m"
            {
#line 865 "structure_reuse.indirect.m"
              MR_Word base;
#line 865 "structure_reuse.indirect.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 865 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28 = base;
#line 865 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_89_89));
#line 865 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_24));
#line 865 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_91_91));
#line 865 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_92_92));
#line 865 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_93_93));
#line 865 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_94_94));
#line 865 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_95_95));
#line 865 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_96_96));
#line 865 "structure_reuse.indirect.m"
            }
#line 866 "structure_reuse.indirect.m"
            {
#line 866 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_52_52, 0) = ((MR_Box) ((MR_Integer) 1));
#line 866 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_52_52, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12));
#line 866 "structure_reuse.indirect.m"
            }
#line 866 "structure_reuse.indirect.m"
            {
#line 866 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 866 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__V_50_50, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_52_52));
#line 866 "structure_reuse.indirect.m"
            }
#line 866 "structure_reuse.indirect.m"
            {
#line 866 "structure_reuse.indirect.m"
              hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_50_50, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26);
            }
#line 869 "structure_reuse.indirect.m"
            {
#line 869 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
#line 869 "structure_reuse.indirect.m"
              return;
            }
#line 864 "structure_reuse.indirect.m"
          }
#line 872 "structure_reuse.indirect.m"
        else
#line 887 "structure_reuse.indirect.m"
          {
#line 873 "structure_reuse.indirect.m"
            {
#line 873 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17);
            }
#line 887 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 878 "structure_reuse.indirect.m"
              {
#line 878 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 0)));
#line 878 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
#line 878 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 878 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63;
#line 878 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_71;
#line 878 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 3)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 1)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 2)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 4)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 5)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 6)));
#line 876 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 7)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 8)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 9)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
#line 876 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
#line 879 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_122_122;
#line 879 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_124_124;
#line 879 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_125_125;
#line 879 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_126_126;
#line 879 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_127_127;
#line 879 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_128_128;
#line 879 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_129_129;
#line 879 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_123_123;

#line 876 "structure_reuse.indirect.m"
                {
#line 876 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_57_57, transform_hlds__ctgc__structure_reuse__indirect__V_99_99, transform_hlds__ctgc__structure_reuse__indirect__V_59_59, transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17, &transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_71);
                }
#line 879 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
#line 879 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
#line 879 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
#line 879 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
#line 879 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
#line 879 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
#line 879 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
#line 879 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
#line 879 "structure_reuse.indirect.m"
                {
#line 879 "structure_reuse.indirect.m"
                  MR_Word base;
#line 879 "structure_reuse.indirect.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 879 "structure_reuse.indirect.m"
                  *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28 = base;
#line 879 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_122_122));
#line 879 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_71));
#line 879 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_124_124));
#line 879 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_125_125));
#line 879 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_126_126));
#line 879 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_127_127));
#line 879 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_128_128));
#line 879 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_129_129));
#line 879 "structure_reuse.indirect.m"
                }
#line 881 "structure_reuse.indirect.m"
                {
#line 881 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_63_63, 0) = ((MR_Box) ((MR_Integer) 0));
#line 881 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_63_63, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12));
#line 881 "structure_reuse.indirect.m"
                }
#line 881 "structure_reuse.indirect.m"
                {
#line 881 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 881 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_61_61, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_63_63));
#line 881 "structure_reuse.indirect.m"
                }
#line 880 "structure_reuse.indirect.m"
                {
#line 880 "structure_reuse.indirect.m"
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_61_61, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26);
                }
#line 884 "structure_reuse.indirect.m"
                {
#line 884 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
#line 884 "structure_reuse.indirect.m"
                  return;
                }
#line 878 "structure_reuse.indirect.m"
              }
#line 887 "structure_reuse.indirect.m"
            else
#line 888 "structure_reuse.indirect.m"
              {
#line 888 "structure_reuse.indirect.m"
                {
#line 888 "structure_reuse.indirect.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.verify_indirect_reuse_conditional\'/9", (MR_String) "unknown NewReuseAs");
#line 888 "structure_reuse.indirect.m"
                  return;
                }
#line 888 "structure_reuse.indirect.m"
              }
#line 887 "structure_reuse.indirect.m"
          }
#line 872 "structure_reuse.indirect.m"
      }
#line 816 "structure_reuse.indirect.m"
  }
#line 810 "structure_reuse.indirect.m"
}

#line 742 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_14,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21,
#line 742 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22,
#line 742 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_23,
#line 742 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24)
#line 742 "structure_reuse.indirect.m"
{
#line 751 "structure_reuse.indirect.m"
  {
#line 751 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 751 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17;
#line 751 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25;
#line 960 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_76;
#line 955 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 5)));
#line 955 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 0)));
#line 955 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 1)));
#line 955 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 2)));
#line 955 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 3)));
#line 955 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 4)));
#line 955 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 6)));
#line 955 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 7)));
#line 955 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 8)));
#line 955 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 9)));

#line 955 "structure_reuse.indirect.m"
    {
#line 955 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_77_77, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, &transform_hlds__ctgc__structure_reuse__indirect__PPId_76);
    }
#line 960 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 958 "structure_reuse.indirect.m"
      {
#line 958 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__PPId_76, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_23, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, &transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17);
      }
#line 960 "structure_reuse.indirect.m"
    else
#line 965 "structure_reuse.indirect.m"
      {
#line 961 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 965 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 963 "structure_reuse.indirect.m"
          {
#line 963 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_23, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, &transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17);
          }
#line 965 "structure_reuse.indirect.m"
        else
#line 966 "structure_reuse.indirect.m"
          {
#line 966 "structure_reuse.indirect.m"
            {
#line 966 "structure_reuse.indirect.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.lookup_reuse_as\'/6", (MR_String) "conditions failed");
#line 966 "structure_reuse.indirect.m"
              return;
            }
#line 966 "structure_reuse.indirect.m"
          }
#line 965 "structure_reuse.indirect.m"
      }
#line 758 "structure_reuse.indirect.m"
    {
#line 758 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17);
    }
#line 768 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 760 "structure_reuse.indirect.m"
      {
#line 765 "structure_reuse.indirect.m"
        {
#line 765 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 760 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25;
#line 760 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21;
#line 760 "structure_reuse.indirect.m"
      }
#line 768 "structure_reuse.indirect.m"
    else
#line 782 "structure_reuse.indirect.m"
      {
#line 769 "structure_reuse.indirect.m"
        {
#line 769 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17);
        }
#line 782 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 773 "structure_reuse.indirect.m"
          {
#line 773 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_20;
#line 773 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
#line 773 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 773 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 773 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
#line 773 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
#line 773 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
#line 773 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
#line 773 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
#line 773 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
#line 773 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
#line 774 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_54_54;
#line 774 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_56_56;
#line 774 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57;
#line 774 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_58_58;
#line 774 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59;
#line 774 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60;
#line 774 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 774 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_55_55;

#line 773 "structure_reuse.indirect.m"
            {
#line 773 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_28_28, &transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_20);
            }
#line 774 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
#line 774 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
#line 774 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
#line 774 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
#line 774 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
#line 774 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
#line 774 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
#line 774 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
#line 774 "structure_reuse.indirect.m"
            {
#line 774 "structure_reuse.indirect.m"
              MR_Word base;
#line 774 "structure_reuse.indirect.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 774 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24 = base;
#line 774 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_54_54));
#line 774 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_20));
#line 774 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_56_56));
#line 774 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_57_57));
#line 774 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_58_58));
#line 774 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_59_59));
#line 774 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_60_60));
#line 774 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_61_61));
#line 774 "structure_reuse.indirect.m"
            }
#line 775 "structure_reuse.indirect.m"
            {
#line 775 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 0) = ((MR_Box) ((MR_Integer) 1));
#line 775 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12));
#line 775 "structure_reuse.indirect.m"
            }
#line 775 "structure_reuse.indirect.m"
            {
#line 775 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 775 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__V_30_30, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_32_32));
#line 775 "structure_reuse.indirect.m"
            }
#line 775 "structure_reuse.indirect.m"
            {
#line 775 "structure_reuse.indirect.m"
              hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_30_30, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22);
            }
#line 778 "structure_reuse.indirect.m"
            {
#line 778 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
#line 778 "structure_reuse.indirect.m"
              return;
            }
#line 773 "structure_reuse.indirect.m"
          }
#line 782 "structure_reuse.indirect.m"
        else
#line 805 "structure_reuse.indirect.m"
#line 805 "structure_reuse.indirect.m"
          switch (transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_14) {
#line 805 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 805 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 801 "structure_reuse.indirect.m"
              {
#line 794 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
#line 794 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
#line 794 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
#line 794 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
#line 794 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
#line 794 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
#line 794 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
#line 794 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));

#line 794 "structure_reuse.indirect.m"
                {
#line 794 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_39_39);
                }
#line 801 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 796 "structure_reuse.indirect.m"
                  {
#line 796 "structure_reuse.indirect.m"
                    {
#line 796 "structure_reuse.indirect.m"
                      hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22);
                    }
#line 798 "structure_reuse.indirect.m"
                    {
#line 798 "structure_reuse.indirect.m"
                      transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                    }
#line 796 "structure_reuse.indirect.m"
                    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25;
#line 796 "structure_reuse.indirect.m"
                  }
#line 801 "structure_reuse.indirect.m"
                else
#line 802 "structure_reuse.indirect.m"
                  {
#line 802 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24);
#line 802 "structure_reuse.indirect.m"
                    return;
                  }
#line 801 "structure_reuse.indirect.m"
              }
#line 805 "structure_reuse.indirect.m"
              break;
#line 805 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 806 "structure_reuse.indirect.m"
              {
#line 807 "structure_reuse.indirect.m"
                {
#line 807 "structure_reuse.indirect.m"
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22);
                }
#line 806 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25;
#line 806 "structure_reuse.indirect.m"
              }
#line 805 "structure_reuse.indirect.m"
              break;
#line 805 "structure_reuse.indirect.m"
          }
#line 782 "structure_reuse.indirect.m"
      }
#line 751 "structure_reuse.indirect.m"
  }
#line 742 "structure_reuse.indirect.m"
}

#line 703 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(
#line 703 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 703 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_7,
#line 703 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_8,
#line 703 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12,
#line 703 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13)
#line 703 "structure_reuse.indirect.m"
{
#line 706 "structure_reuse.indirect.m"
  {
#line 706 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 706 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 9)));
#line 707 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 0)));
#line 707 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 1)));
#line 707 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 2)));
#line 707 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 3)));
#line 707 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 4)));
#line 707 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 5)));
#line 707 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 6)));
#line 707 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 7)));
#line 707 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 8)));
#line 723 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 723 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 723 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 723 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 723 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 723 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_33_33;
#line 723 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34;
#line 723 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_27_27;

#line 720 "structure_reuse.indirect.m"
#line 720 "structure_reuse.indirect.m"
    switch (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_10) {
#line 720 "structure_reuse.indirect.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 720 "structure_reuse.indirect.m"
      case (MR_Integer) 0:
#line 721 "structure_reuse.indirect.m"
        {
#line 721 "structure_reuse.indirect.m"
        }
#line 720 "structure_reuse.indirect.m"
        break;
#line 720 "structure_reuse.indirect.m"
      case (MR_Integer) 1:
#line 710 "structure_reuse.indirect.m"
        {
#line 712 "structure_reuse.indirect.m"
          {
#line 712 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewSharing_8);
          }
#line 712 "structure_reuse.indirect.m"
          if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 712 "structure_reuse.indirect.m"
            {
#line 713 "structure_reuse.indirect.m"
              {
#line 713 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__OldSharing_7);
              }
#line 713 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 712 "structure_reuse.indirect.m"
            }
#line 716 "structure_reuse.indirect.m"
          if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 715 "structure_reuse.indirect.m"
            {
#line 715 "structure_reuse.indirect.m"
              {
#line 715 "structure_reuse.indirect.m"
                mercury__io__write_string_3_p_0((MR_String) "\tsharing is now top\n");
              }
#line 715 "structure_reuse.indirect.m"
            }
#line 716 "structure_reuse.indirect.m"
          else
#line 716 "structure_reuse.indirect.m"
            {
#line 716 "structure_reuse.indirect.m"
            }
#line 710 "structure_reuse.indirect.m"
        }
#line 720 "structure_reuse.indirect.m"
        break;
#line 720 "structure_reuse.indirect.m"
    }
#line 723 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 0)));
#line 723 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 1)));
#line 723 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 2)));
#line 723 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 3)));
#line 723 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 4)));
#line 723 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 5)));
#line 723 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 6)));
#line 723 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 7)));
#line 723 "structure_reuse.indirect.m"
    {
#line 723 "structure_reuse.indirect.m"
      MR_Word base;
#line 723 "structure_reuse.indirect.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 723 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13 = base;
#line 723 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewSharing_8));
#line 723 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_28_28));
#line 723 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_29_29));
#line 723 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_30_30));
#line 723 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_31_31));
#line 723 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_32_32));
#line 723 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_33_33));
#line 723 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_34_34));
#line 723 "structure_reuse.indirect.m"
    }
#line 706 "structure_reuse.indirect.m"
  }
#line 703 "structure_reuse.indirect.m"
}

#line 690 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_p_0(
#line 690 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 690 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9,
#line 690 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Case0_10,
#line 690 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Case_11,
#line 690 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12,
#line 690 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_19,
#line 690 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_20)
#line 690 "structure_reuse.indirect.m"
{
#line 695 "structure_reuse.indirect.m"
  {
#line 695 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 695 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__MainConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Case0_10, (MR_Integer) 0)));
#line 695 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__OtherConsIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Case0_10, (MR_Integer) 1)));
#line 695 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Case0_10, (MR_Integer) 2)));
#line 695 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17;
#line 695 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal_18;
#line 698 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 0)));
#line 698 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 1)));
#line 698 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 2)));
#line 698 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 3)));
#line 698 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 5)));
#line 698 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 6)));
#line 698 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 7)));
#line 698 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 4)));
#line 700 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 700 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 700 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 700 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_33_33;
#line 700 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34;
#line 700 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_35_35;
#line 700 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36;

#line 698 "structure_reuse.indirect.m"
    {
#line 698 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 698 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_22_22));
#line 698 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_23_23));
#line 698 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_24_24));
#line 698 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_25_25));
#line 698 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_19));
#line 698 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_27_27));
#line 698 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_28_28));
#line 698 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_29_29));
#line 698 "structure_reuse.indirect.m"
    }
#line 699 "structure_reuse.indirect.m"
    {
#line 699 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, transform_hlds__ctgc__structure_reuse__indirect__Goal0_16, &transform_hlds__ctgc__structure_reuse__indirect__Goal_18, transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12);
    }
#line 700 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 0)));
#line 700 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 1)));
#line 700 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 2)));
#line 700 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 3)));
#line 700 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 4)));
#line 700 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 5)));
#line 700 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 6)));
#line 700 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 7)));
#line 701 "structure_reuse.indirect.m"
    {
#line 701 "structure_reuse.indirect.m"
      MR_Word base;
#line 701 "structure_reuse.indirect.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 701 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__Case_11 = base;
#line 701 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__MainConsId_14));
#line 701 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__OtherConsIds_15));
#line 701 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Goal_18));
#line 701 "structure_reuse.indirect.m"
    }
#line 695 "structure_reuse.indirect.m"
  }
#line 690 "structure_reuse.indirect.m"
}

#line 678 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_p_0(
#line 678 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 678 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9,
#line 678 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal0_10,
#line 678 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Goal_11,
#line 678 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12,
#line 678 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_15,
#line 678 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_16)
#line 678 "structure_reuse.indirect.m"
{
#line 683 "structure_reuse.indirect.m"
  {
#line 683 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 683 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14;
#line 685 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 0)));
#line 685 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 1)));
#line 685 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 2)));
#line 685 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 3)));
#line 685 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 5)));
#line 685 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 6)));
#line 685 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 7)));
#line 685 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 4)));
#line 687 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 687 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_27_27;
#line 687 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 687 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 687 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 687 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 687 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;

#line 685 "structure_reuse.indirect.m"
    {
#line 685 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 685 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_18_18));
#line 685 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_19_19));
#line 685 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_20_20));
#line 685 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_21_21));
#line 685 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_15));
#line 685 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_23_23));
#line 685 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_24_24));
#line 685 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_25_25));
#line 685 "structure_reuse.indirect.m"
    }
#line 686 "structure_reuse.indirect.m"
    {
#line 686 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, transform_hlds__ctgc__structure_reuse__indirect__Goal0_10, transform_hlds__ctgc__structure_reuse__indirect__Goal_11, transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12);
    }
#line 687 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 0)));
#line 687 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 1)));
#line 687 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 2)));
#line 687 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 3)));
#line 687 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 4)));
#line 687 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 5)));
#line 687 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 6)));
#line 687 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 7)));
#line 683 "structure_reuse.indirect.m"
  }
#line 678 "structure_reuse.indirect.m"
}

#line 633 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_p_0(
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GenDetails_9,
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallArgs_10,
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Modes_11,
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_12,
#line 633 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34,
#line 633 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35)
#line 633 "structure_reuse.indirect.m"
{
#line 638 "structure_reuse.indirect.m"
  {
#line 638 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 638 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 638 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 639 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 639 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 639 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 639 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 639 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 639 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 639 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 639 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));

#line 7531 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 7532 "transform_hlds.ctgc.structure_reuse.indirect.c"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__GenDetails_9)) {
#line 7534 "transform_hlds.ctgc.structure_reuse.indirect.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 7536 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 0:
#line 7538 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 1:
#line 7540 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 7542 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallerVarTypes_24;
#line 7544 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__ActualTypes_25;

#line 645 "structure_reuse.indirect.m"
          {
#line 645 "structure_reuse.indirect.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_15, &transform_hlds__ctgc__structure_reuse__indirect__CallerVarTypes_24);
          }
#line 646 "structure_reuse.indirect.m"
          {
#line 646 "structure_reuse.indirect.m"
            parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__CallerVarTypes_24, transform_hlds__ctgc__structure_reuse__indirect__CallArgs_10, &transform_hlds__ctgc__structure_reuse__indirect__ActualTypes_25);
          }
#line 648 "structure_reuse.indirect.m"
          {
#line 648 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_14, transform_hlds__ctgc__structure_reuse__indirect__Modes_11, transform_hlds__ctgc__structure_reuse__indirect__ActualTypes_25);
          }
#line 7562 "transform_hlds.ctgc.structure_reuse.indirect.c"
          if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 662 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34;
#line 7566 "transform_hlds.ctgc.structure_reuse.indirect.c"
          else
#line 7568 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 7570 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Context_132;
#line 7572 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_String transform_hlds__ctgc__structure_reuse__indirect__ContextString_133;
#line 7574 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_String transform_hlds__ctgc__structure_reuse__indirect__Msg_134;
#line 7576 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_135;
#line 7578 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_136;
#line 7580 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_String transform_hlds__ctgc__structure_reuse__indirect__V_138_138;
#line 7582 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_140_140;
#line 7584 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_141_141;
#line 7586 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_142_142;
#line 7588 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_143_143;
#line 7590 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_144_144;
#line 7592 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_145_145;
#line 7594 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_146_146;
#line 7596 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_147_147;
#line 7598 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_148;
#line 707 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;
#line 707 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_96_96;
#line 707 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_97_97;
#line 707 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_98_98;
#line 707 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_99_99;
#line 707 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_100_100;
#line 707 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_101_101;
#line 707 "structure_reuse.indirect.m"
              MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_102_102;
#line 707 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_103_103;

#line 665 "structure_reuse.indirect.m"
              {
#line 665 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__Context_132 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_12);
              }
#line 666 "structure_reuse.indirect.m"
              {
#line 666 "structure_reuse.indirect.m"
                parse_tree__prog_out__context_to_string_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__Context_132, &transform_hlds__ctgc__structure_reuse__indirect__ContextString_133);
              }
#line 667 "structure_reuse.indirect.m"
              {
#line 667 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_138_138 = mercury__string__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__ContextString_133, (MR_String) ")");
              }
#line 667 "structure_reuse.indirect.m"
              {
#line 667 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__Msg_134 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", transform_hlds__ctgc__structure_reuse__indirect__V_138_138);
              }
#line 668 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__OldSharing_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
#line 668 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
#line 668 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
#line 668 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
#line 668 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
#line 668 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
#line 668 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
#line 668 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));
#line 670 "structure_reuse.indirect.m"
              {
#line 670 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_140_140 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 670 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_140_140, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Msg_134));
#line 670 "structure_reuse.indirect.m"
              }
#line 669 "structure_reuse.indirect.m"
              {
#line 669 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__NewSharing_136 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_140_140, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_135);
              }
#line 707 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 707 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 707 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 707 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 707 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 707 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 707 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 707 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 707 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 707 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));
#line 720 "structure_reuse.indirect.m"
#line 720 "structure_reuse.indirect.m"
              switch (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_148) {
#line 720 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 720 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 721 "structure_reuse.indirect.m"
                  {
#line 721 "structure_reuse.indirect.m"
                  }
#line 720 "structure_reuse.indirect.m"
                  break;
#line 720 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 710 "structure_reuse.indirect.m"
                  {
#line 712 "structure_reuse.indirect.m"
                    {
#line 712 "structure_reuse.indirect.m"
                      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewSharing_136);
                    }
#line 712 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 712 "structure_reuse.indirect.m"
                      {
#line 713 "structure_reuse.indirect.m"
                        {
#line 713 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__OldSharing_135);
                        }
#line 713 "structure_reuse.indirect.m"
                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 712 "structure_reuse.indirect.m"
                      }
#line 716 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 715 "structure_reuse.indirect.m"
                      {
#line 715 "structure_reuse.indirect.m"
                        {
#line 715 "structure_reuse.indirect.m"
                          mercury__io__write_string_3_p_0((MR_String) "\tsharing is now top\n");
                        }
#line 715 "structure_reuse.indirect.m"
                      }
#line 716 "structure_reuse.indirect.m"
                    else
#line 716 "structure_reuse.indirect.m"
                      {
#line 716 "structure_reuse.indirect.m"
                      }
#line 710 "structure_reuse.indirect.m"
                  }
#line 720 "structure_reuse.indirect.m"
                  break;
#line 720 "structure_reuse.indirect.m"
              }
#line 723 "structure_reuse.indirect.m"
              {
#line 723 "structure_reuse.indirect.m"
                MR_Word base;
#line 723 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 723 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35 = base;
#line 723 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewSharing_136));
#line 723 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_141_141));
#line 723 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_142_142));
#line 723 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_143_143));
#line 723 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_144_144));
#line 723 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_145_145));
#line 723 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_146_146));
#line 723 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_147_147));
#line 723 "structure_reuse.indirect.m"
              }
#line 7772 "transform_hlds.ctgc.structure_reuse.indirect.c"
            }
#line 7774 "transform_hlds.ctgc.structure_reuse.indirect.c"
        }
#line 7776 "transform_hlds.ctgc.structure_reuse.indirect.c"
        break;
#line 7778 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 2:
#line 7780 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 3:
#line 7782 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 7784 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__Context_29;
#line 7786 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_String transform_hlds__ctgc__structure_reuse__indirect__ContextString_30;
#line 7788 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_String transform_hlds__ctgc__structure_reuse__indirect__Msg_31;
#line 7790 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_32;
#line 7792 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_33;
#line 7794 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_String transform_hlds__ctgc__structure_reuse__indirect__V_37_37;
#line 7796 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39;
#line 7798 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59;
#line 7800 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60;
#line 7802 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 7804 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_62_62;
#line 7806 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63;
#line 7808 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64;
#line 7810 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_65_65;
#line 7812 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_72;
#line 707 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78;
#line 707 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_79_79;
#line 707 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80;
#line 707 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81;
#line 707 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82;
#line 707 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83;
#line 707 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84;
#line 707 "structure_reuse.indirect.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_85_85;
#line 707 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86;

#line 665 "structure_reuse.indirect.m"
          {
#line 665 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_12);
          }
#line 666 "structure_reuse.indirect.m"
          {
#line 666 "structure_reuse.indirect.m"
            parse_tree__prog_out__context_to_string_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__Context_29, &transform_hlds__ctgc__structure_reuse__indirect__ContextString_30);
          }
#line 667 "structure_reuse.indirect.m"
          {
#line 667 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = mercury__string__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__ContextString_30, (MR_String) ")");
          }
#line 667 "structure_reuse.indirect.m"
          {
#line 667 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__Msg_31 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", transform_hlds__ctgc__structure_reuse__indirect__V_37_37);
          }
#line 668 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__OldSharing_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
#line 668 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
#line 668 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
#line 668 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
#line 668 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
#line 668 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
#line 668 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
#line 668 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));
#line 670 "structure_reuse.indirect.m"
          {
#line 670 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 670 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_39_39, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Msg_31));
#line 670 "structure_reuse.indirect.m"
          }
#line 669 "structure_reuse.indirect.m"
          {
#line 669 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__NewSharing_33 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_39_39, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_32);
          }
#line 707 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 707 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 707 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 707 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 707 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 707 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 707 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 707 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 707 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 707 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));
#line 720 "structure_reuse.indirect.m"
#line 720 "structure_reuse.indirect.m"
          switch (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_72) {
#line 720 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 720 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 721 "structure_reuse.indirect.m"
              {
#line 721 "structure_reuse.indirect.m"
              }
#line 720 "structure_reuse.indirect.m"
              break;
#line 720 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 710 "structure_reuse.indirect.m"
              {
#line 712 "structure_reuse.indirect.m"
                {
#line 712 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewSharing_33);
                }
#line 712 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 712 "structure_reuse.indirect.m"
                  {
#line 713 "structure_reuse.indirect.m"
                    {
#line 713 "structure_reuse.indirect.m"
                      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__OldSharing_32);
                    }
#line 713 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 712 "structure_reuse.indirect.m"
                  }
#line 716 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 715 "structure_reuse.indirect.m"
                  {
#line 715 "structure_reuse.indirect.m"
                    {
#line 715 "structure_reuse.indirect.m"
                      mercury__io__write_string_3_p_0((MR_String) "\tsharing is now top\n");
                    }
#line 715 "structure_reuse.indirect.m"
                  }
#line 716 "structure_reuse.indirect.m"
                else
#line 716 "structure_reuse.indirect.m"
                  {
#line 716 "structure_reuse.indirect.m"
                  }
#line 710 "structure_reuse.indirect.m"
              }
#line 720 "structure_reuse.indirect.m"
              break;
#line 720 "structure_reuse.indirect.m"
          }
#line 723 "structure_reuse.indirect.m"
          {
#line 723 "structure_reuse.indirect.m"
            MR_Word base;
#line 723 "structure_reuse.indirect.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 723 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35 = base;
#line 723 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewSharing_33));
#line 723 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_59_59));
#line 723 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_60_60));
#line 723 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_61_61));
#line 723 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_62_62));
#line 723 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_63_63));
#line 723 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_64_64));
#line 723 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_65_65));
#line 723 "structure_reuse.indirect.m"
          }
#line 7986 "transform_hlds.ctgc.structure_reuse.indirect.c"
        }
#line 7988 "transform_hlds.ctgc.structure_reuse.indirect.c"
        break;
#line 7990 "transform_hlds.ctgc.structure_reuse.indirect.c"
    }
#line 638 "structure_reuse.indirect.m"
  }
#line 633 "structure_reuse.indirect.m"
}

#line 571 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_p_0(
#line 571 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 571 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_32,
#line 571 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_33,
#line 571 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34,
#line 571 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35)
#line 571 "structure_reuse.indirect.m"
{
#line 575 "structure_reuse.indirect.m"
  {
#line 575 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 0)));
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 2)));
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 3)));
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 4)));
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_32, (MR_Integer) 0)));
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_32, (MR_Integer) 1)));
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 0)));
#line 575 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CalleeProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 1)));
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 2)));
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Reuse0_21;
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_30;
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_31;
#line 575 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39;
#line 576 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 1)));
#line 576 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 5)));
#line 576 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 6)));
#line 576 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 7)));
#line 576 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 8)));
#line 576 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 9)));
#line 582 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect___Builtin_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 3)));
#line 582 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect___Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 4)));
#line 582 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect___Sym_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 5)));
#line 628 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_94_94;
#line 628 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;
#line 628 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_96_96;
#line 628 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_97_97;
#line 628 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_98_98;
#line 628 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_99_99;
#line 628 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_100_100;

#line 584 "structure_reuse.indirect.m"
    {
#line 584 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Reuse0_21 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_14);
    }
#line 8080 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 8081 "transform_hlds.ctgc.structure_reuse.indirect.c"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__Reuse0_21)) {
#line 8083 "transform_hlds.ctgc.structure_reuse.indirect.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 8085 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 0:
#line 8087 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 8088 "transform_hlds.ctgc.structure_reuse.indirect.c"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__Reuse0_21)) {
#line 8090 "transform_hlds.ctgc.structure_reuse.indirect.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 8092 "transform_hlds.ctgc.structure_reuse.indirect.c"
          case (MR_Integer) 0:
#line 8094 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 8096 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Integer transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 7)));
#line 8098 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_140;
#line 8100 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_142;
#line 8102 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_145_145;
#line 614 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 0)));
#line 614 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 1)));
#line 614 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 2)));
#line 614 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 3)));
#line 614 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 4)));
#line 614 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 5)));
#line 614 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 6)));
#line 614 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 8)));
#line 614 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 9)));
#line 615 "structure_reuse.indirect.m"
              MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_120_120;
#line 615 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
#line 615 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
#line 615 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
#line 615 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
#line 615 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
#line 615 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
#line 615 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
#line 615 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));

#line 615 "structure_reuse.indirect.m"
              {
#line 615 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_120_120 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_121_121);
              }
#line 615 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_120_120 >= transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_139);
#line 617 "structure_reuse.indirect.m"
              if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 616 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_140 = (MR_Integer) 1;
#line 617 "structure_reuse.indirect.m"
              else
#line 618 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_140 = (MR_Integer) 0;
#line 621 "structure_reuse.indirect.m"
              {
#line 621 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_145_145, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_15));
#line 621 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_145_145, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleeProcId_16));
#line 621 "structure_reuse.indirect.m"
              }
#line 621 "structure_reuse.indirect.m"
              {
#line 621 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__V_145_145, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_17, transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_140, transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_14, &transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_142, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39);
              }
#line 624 "structure_reuse.indirect.m"
              {
#line 624 "structure_reuse.indirect.m"
                MR_Word base;
#line 624 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 624 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_33 = base;
#line 624 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13));
#line 624 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_142));
#line 624 "structure_reuse.indirect.m"
              }
#line 8185 "transform_hlds.ctgc.structure_reuse.indirect.c"
            }
#line 8187 "transform_hlds.ctgc.structure_reuse.indirect.c"
            break;
#line 8189 "transform_hlds.ctgc.structure_reuse.indirect.c"
          case (MR_Integer) 1:
#line 8191 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 626 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_33 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_32;
#line 626 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34;
#line 8197 "transform_hlds.ctgc.structure_reuse.indirect.c"
            }
#line 8199 "transform_hlds.ctgc.structure_reuse.indirect.c"
            break;
#line 8201 "transform_hlds.ctgc.structure_reuse.indirect.c"
        }
#line 8203 "transform_hlds.ctgc.structure_reuse.indirect.c"
        break;
#line 8205 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 1:
#line 8207 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 2:
#line 8209 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 3:
#line 8211 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 8213 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Integer transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 7)));
#line 8215 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_27;
#line 8217 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_29;
#line 8219 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38;
#line 614 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 0)));
#line 614 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 1)));
#line 614 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 2)));
#line 614 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 3)));
#line 614 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 4)));
#line 614 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 5)));
#line 614 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 6)));
#line 614 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 8)));
#line 614 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 9)));
#line 615 "structure_reuse.indirect.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_36_36;
#line 615 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
#line 615 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
#line 615 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
#line 615 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
#line 615 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
#line 615 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
#line 615 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
#line 615 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));

#line 615 "structure_reuse.indirect.m"
          {
#line 615 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_37_37);
          }
#line 615 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_36_36 >= transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_26);
#line 617 "structure_reuse.indirect.m"
          if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 616 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_27 = (MR_Integer) 1;
#line 617 "structure_reuse.indirect.m"
          else
#line 618 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_27 = (MR_Integer) 0;
#line 621 "structure_reuse.indirect.m"
          {
#line 621 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_38_38, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_15));
#line 621 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_38_38, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleeProcId_16));
#line 621 "structure_reuse.indirect.m"
          }
#line 621 "structure_reuse.indirect.m"
          {
#line 621 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__V_38_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_17, transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_27, transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_14, &transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_29, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39);
          }
#line 624 "structure_reuse.indirect.m"
          {
#line 624 "structure_reuse.indirect.m"
            MR_Word base;
#line 624 "structure_reuse.indirect.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 624 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_33 = base;
#line 624 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13));
#line 624 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_29));
#line 624 "structure_reuse.indirect.m"
          }
#line 8302 "transform_hlds.ctgc.structure_reuse.indirect.c"
        }
#line 8304 "transform_hlds.ctgc.structure_reuse.indirect.c"
        break;
#line 8306 "transform_hlds.ctgc.structure_reuse.indirect.c"
    }
#line 628 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__OldSharing_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 0)));
#line 628 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 1)));
#line 628 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 2)));
#line 628 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 3)));
#line 628 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 4)));
#line 628 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 5)));
#line 628 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 6)));
#line 628 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 7)));
#line 629 "structure_reuse.indirect.m"
    {
#line 629 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11, transform_hlds__ctgc__structure_reuse__indirect__SharingTable_12, transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_15, transform_hlds__ctgc__structure_reuse__indirect__CalleeProcId_16, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_17, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_30, &transform_hlds__ctgc__structure_reuse__indirect__NewSharing_31);
    }
#line 631 "structure_reuse.indirect.m"
    {
#line 631 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_30, transform_hlds__ctgc__structure_reuse__indirect__NewSharing_31, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35);
#line 631 "structure_reuse.indirect.m"
      return;
    }
#line 575 "structure_reuse.indirect.m"
  }
#line 571 "structure_reuse.indirect.m"
}

#line 516 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_3(
#line 516 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 516 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 516 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 516 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 516 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 516 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5)
#line 516 "structure_reuse.indirect.m"
{
#line 516 "structure_reuse.indirect.m"
  {
#line 516 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 516 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv9_Case_11;
#line 516 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv8_IrInfo_12;
#line 516 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_FixpointTable_20;

#line 516 "structure_reuse.indirect.m"
    {
#line 516 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__indirect__conv9_Case_11, &transform_hlds__ctgc__structure_reuse__indirect__conv8_IrInfo_12, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_FixpointTable_20);
    }
#line 516 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv9_Case_11));
#line 516 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv8_IrInfo_12));
#line 516 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_FixpointTable_20));
#line 516 "structure_reuse.indirect.m"
  }
#line 516 "structure_reuse.indirect.m"
}

#line 507 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_2(
#line 507 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 507 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 507 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 507 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 507 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 507 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5)
#line 507 "structure_reuse.indirect.m"
{
#line 507 "structure_reuse.indirect.m"
  {
#line 507 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 507 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv5_Goal_11;
#line 507 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv4_IrInfo_12;
#line 507 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_16;

#line 507 "structure_reuse.indirect.m"
    {
#line 507 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__indirect__conv5_Goal_11, &transform_hlds__ctgc__structure_reuse__indirect__conv4_IrInfo_12, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_16);
    }
#line 507 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv5_Goal_11));
#line 507 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv4_IrInfo_12));
#line 507 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_16));
#line 507 "structure_reuse.indirect.m"
  }
#line 507 "structure_reuse.indirect.m"
}

#line 464 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_1(
#line 464 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 464 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 464 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 464 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 464 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4)
#line 464 "structure_reuse.indirect.m"
{
#line 464 "structure_reuse.indirect.m"
  {
#line 464 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 464 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Goal_90;
#line 464 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_92;

#line 464 "structure_reuse.indirect.m"
    {
#line 464 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Goal_90, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_92);
    }
#line 464 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Goal_90));
#line 464 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_92));
#line 464 "structure_reuse.indirect.m"
  }
#line 464 "structure_reuse.indirect.m"
}

#line 453 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(
#line 453 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 453 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89,
#line 453 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90,
#line 453 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91,
#line 453 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92)
#line 453 "structure_reuse.indirect.m"
{
#line 456 "structure_reuse.indirect.m"
  {
#line 456 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 456 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 0)));
#line 456 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 2)));
#line 456 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 3)));
#line 456 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89, (MR_Integer) 0)));
#line 456 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89, (MR_Integer) 1)));
#line 457 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 1)));
#line 457 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 4)));
#line 457 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 5)));
#line 457 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 6)));
#line 457 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 7)));
#line 457 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 8)));
#line 457 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 9)));

#line 468 "structure_reuse.indirect.m"
#line 468 "structure_reuse.indirect.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12)) {
#line 468 "structure_reuse.indirect.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 468 "structure_reuse.indirect.m"
      case (MR_Integer) 0:
#line 524 "structure_reuse.indirect.m"
        {
#line 524 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89;
#line 524 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 524 "structure_reuse.indirect.m"
        }
#line 468 "structure_reuse.indirect.m"
        break;
#line 468 "structure_reuse.indirect.m"
      case (MR_Integer) 1:
#line 478 "structure_reuse.indirect.m"
        {
#line 478 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__Unification_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 3)));
#line 478 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_56;
#line 478 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_57;
#line 478 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113;
#line 478 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 0)));
#line 478 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 478 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 478 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 4)));
#line 501 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_177_177;
#line 501 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_178_178;
#line 501 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_179_179;
#line 501 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_180_180;
#line 501 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_181_181;
#line 501 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_182_182;
#line 501 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_183_183;

#line 492 "structure_reuse.indirect.m"
#line 492 "structure_reuse.indirect.m"
          switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__Unification_32)) {
#line 492 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 492 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 481 "structure_reuse.indirect.m"
              {
#line 481 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 0)));
#line 481 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__HowToConstruct_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 4)));
#line 481 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 1)));
#line 481 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 2)));
#line 481 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 3)));
#line 481 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 5)));
#line 481 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 6)));

#line 486 "structure_reuse.indirect.m"
#line 486 "structure_reuse.indirect.m"
                switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HowToConstruct_38)) {
#line 486 "structure_reuse.indirect.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 486 "structure_reuse.indirect.m"
                  case (MR_Integer) 0:
#line 486 "structure_reuse.indirect.m"
#line 486 "structure_reuse.indirect.m"
                    switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HowToConstruct_38)) {
#line 486 "structure_reuse.indirect.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 486 "structure_reuse.indirect.m"
                      case (MR_Integer) 0:
#line 483 "structure_reuse.indirect.m"
                        {
#line 483 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_114_114;
#line 483 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 485 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 485 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 485 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 485 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 485 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 485 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 485 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 484 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_169_169;
#line 484 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_170_170;
#line 484 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_171_171;
#line 484 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_173_173;
#line 484 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_174_174;
#line 484 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_175_175;
#line 484 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_176_176;
#line 484 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_172_172;

#line 485 "structure_reuse.indirect.m"
                          {
#line 485 "structure_reuse.indirect.m"
                            transform_hlds__ctgc__structure_reuse__indirect__V_114_114 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3], transform_hlds__ctgc__structure_reuse__indirect__V_115_115, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Var_34)));
                          }
#line 484 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 484 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 484 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 484 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 484 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 484 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 484 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 484 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 484 "structure_reuse.indirect.m"
                          {
#line 484 "structure_reuse.indirect.m"
                            transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 484 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_169_169));
#line 484 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_170_170));
#line 484 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_171_171));
#line 484 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_114_114));
#line 484 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_173_173));
#line 484 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_174_174));
#line 484 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_175_175));
#line 484 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_176_176));
#line 484 "structure_reuse.indirect.m"
                          }
#line 483 "structure_reuse.indirect.m"
                        }
#line 486 "structure_reuse.indirect.m"
                        break;
#line 486 "structure_reuse.indirect.m"
                      case (MR_Integer) 1:
#line 487 "structure_reuse.indirect.m"
                        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 486 "structure_reuse.indirect.m"
                        break;
#line 486 "structure_reuse.indirect.m"
                    }
#line 486 "structure_reuse.indirect.m"
                    break;
#line 486 "structure_reuse.indirect.m"
                  case (MR_Integer) 1:
#line 488 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 486 "structure_reuse.indirect.m"
                    break;
#line 486 "structure_reuse.indirect.m"
                  case (MR_Integer) 2:
#line 489 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 486 "structure_reuse.indirect.m"
                    break;
#line 486 "structure_reuse.indirect.m"
                }
#line 481 "structure_reuse.indirect.m"
              }
#line 492 "structure_reuse.indirect.m"
              break;
#line 492 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 493 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 492 "structure_reuse.indirect.m"
              break;
#line 492 "structure_reuse.indirect.m"
            case (MR_Integer) 2:
#line 494 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 492 "structure_reuse.indirect.m"
              break;
#line 492 "structure_reuse.indirect.m"
            case (MR_Integer) 3:
#line 492 "structure_reuse.indirect.m"
#line 492 "structure_reuse.indirect.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 0)))) {
#line 492 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 492 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 495 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 492 "structure_reuse.indirect.m"
                  break;
#line 492 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 498 "structure_reuse.indirect.m"
                  {
#line 499 "structure_reuse.indirect.m"
                    {
#line 499 "structure_reuse.indirect.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.indirect_reuse_analyse_goal\'/5", (MR_String) "complicated unification");
#line 499 "structure_reuse.indirect.m"
                      return;
                    }
#line 498 "structure_reuse.indirect.m"
                  }
#line 492 "structure_reuse.indirect.m"
                  break;
#line 492 "structure_reuse.indirect.m"
              }
#line 492 "structure_reuse.indirect.m"
              break;
#line 492 "structure_reuse.indirect.m"
          }
#line 501 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__OldSharing_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 0)));
#line 501 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 1)));
#line 501 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 2)));
#line 501 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 3)));
#line 501 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 4)));
#line 501 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 5)));
#line 501 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 6)));
#line 501 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 7)));
#line 502 "structure_reuse.indirect.m"
          {
#line 502 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__NewSharing_57 = transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_f_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11, transform_hlds__ctgc__structure_reuse__indirect__Unification_32, transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_56);
          }
#line 504 "structure_reuse.indirect.m"
          {
#line 504 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_56, transform_hlds__ctgc__structure_reuse__indirect__NewSharing_57, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
          }
#line 478 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89;
#line 478 "structure_reuse.indirect.m"
        }
#line 468 "structure_reuse.indirect.m"
        break;
#line 468 "structure_reuse.indirect.m"
      case (MR_Integer) 2:
#line 470 "structure_reuse.indirect.m"
        {
#line 470 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
#line 470 "structure_reuse.indirect.m"
          return;
        }
#line 468 "structure_reuse.indirect.m"
        break;
#line 468 "structure_reuse.indirect.m"
      case (MR_Integer) 3:
#line 468 "structure_reuse.indirect.m"
#line 468 "structure_reuse.indirect.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 0)))) {
#line 468 "structure_reuse.indirect.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 468 "structure_reuse.indirect.m"
          case (MR_Integer) 0:
#line 474 "structure_reuse.indirect.m"
            {
#line 474 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GenDetails_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 474 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 474 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Modes_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 3)));
#line 473 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect___MaybeArgRegs_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 4)));
#line 473 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect___Detism_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 5)));

#line 475 "structure_reuse.indirect.m"
              {
#line 475 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__GenDetails_24, transform_hlds__ctgc__structure_reuse__indirect__CallArgs_25, transform_hlds__ctgc__structure_reuse__indirect__Modes_26, transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 474 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89;
#line 474 "structure_reuse.indirect.m"
            }
#line 468 "structure_reuse.indirect.m"
            break;
#line 468 "structure_reuse.indirect.m"
          case (MR_Integer) 1:
#line 558 "structure_reuse.indirect.m"
            {
#line 558 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Attributes_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 558 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ForeignPredId_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 558 "structure_reuse.indirect.m"
              MR_Integer transform_hlds__ctgc__structure_reuse__indirect__ForeignProcId_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 3)));
#line 558 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 4)));
#line 558 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ForeignPPId_86;
#line 558 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Context_87;
#line 558 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_133;
#line 558 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_134;
#line 557 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect___ExtraArgs_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 5)));
#line 557 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect___MaybeTraceRuntimeCond_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 6)));
#line 557 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect___Impl_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 7)));
#line 561 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_213_213;
#line 561 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_214_214;
#line 561 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_215_215;
#line 561 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_216_216;
#line 561 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_217_217;
#line 561 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_218_218;
#line 561 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_219_219;

#line 559 "structure_reuse.indirect.m"
              {
#line 559 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__ForeignPPId_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 559 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ForeignPPId_86, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ForeignPredId_80));
#line 559 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ForeignPPId_86, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ForeignProcId_81));
#line 559 "structure_reuse.indirect.m"
              }
#line 560 "structure_reuse.indirect.m"
              {
#line 560 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__Context_87 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13);
              }
#line 561 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__OldSharing_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 561 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 561 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 561 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 561 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 561 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 561 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 561 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 562 "structure_reuse.indirect.m"
              {
#line 562 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11, transform_hlds__ctgc__structure_reuse__indirect__ForeignPPId_86, transform_hlds__ctgc__structure_reuse__indirect__Attributes_79, transform_hlds__ctgc__structure_reuse__indirect__Args_82, transform_hlds__ctgc__structure_reuse__indirect__Context_87, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_133, &transform_hlds__ctgc__structure_reuse__indirect__NewSharing_134);
              }
#line 564 "structure_reuse.indirect.m"
              {
#line 564 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_133, transform_hlds__ctgc__structure_reuse__indirect__NewSharing_134, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 558 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89;
#line 558 "structure_reuse.indirect.m"
            }
#line 468 "structure_reuse.indirect.m"
            break;
#line 468 "structure_reuse.indirect.m"
          case (MR_Integer) 2:
#line 463 "structure_reuse.indirect.m"
            {
#line 463 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_224_224;
#line 463 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 463 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 463 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goals_16;
#line 463 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17;
#line 463 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_121_121;
#line 464 "structure_reuse.indirect.m"
              MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_IrInfo_92;

#line 464 "structure_reuse.indirect.m"
              {
#line 464 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_121_121, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_7[0]));
#line 464 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_121_121, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_1));
#line 464 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_121_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 464 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_121_121, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6));
#line 464 "structure_reuse.indirect.m"
              }
#line 8956 "transform_hlds.ctgc.structure_reuse.indirect.c"
              transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_224_224 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 464 "structure_reuse.indirect.m"
              {
#line 464 "structure_reuse.indirect.m"
                mercury__list__map_foldl_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_224_224, transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_224_224, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0, transform_hlds__ctgc__structure_reuse__indirect__V_121_121, transform_hlds__ctgc__structure_reuse__indirect__Goals0_15, &transform_hlds__ctgc__structure_reuse__indirect__Goals_16, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91)), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_IrInfo_92);
              }
#line 464 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_IrInfo_92);
#line 466 "structure_reuse.indirect.m"
              {
#line 466 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 466 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 466 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ConjType_14));
#line 466 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Goals_16));
#line 466 "structure_reuse.indirect.m"
              }
#line 467 "structure_reuse.indirect.m"
              {
#line 467 "structure_reuse.indirect.m"
                MR_Word base;
#line 467 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = base;
#line 467 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17));
#line 467 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13));
#line 467 "structure_reuse.indirect.m"
              }
#line 463 "structure_reuse.indirect.m"
            }
#line 468 "structure_reuse.indirect.m"
            break;
#line 468 "structure_reuse.indirect.m"
          case (MR_Integer) 3:
#line 506 "structure_reuse.indirect.m"
            {
#line 506 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_232_232;
#line 506 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_58;
#line 506 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_59;
#line 506 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_106_106;
#line 506 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_107_107;
#line 506 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goals0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 506 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goals_125;
#line 506 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_126;
#line 507 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_184_184;
#line 507 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_185_185;
#line 507 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_186_186;
#line 507 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_187_187;
#line 507 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_188_188;
#line 507 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_189_189;
#line 507 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_190_190;
#line 507 "structure_reuse.indirect.m"
              MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv6_NewFixpointTable_59;

#line 507 "structure_reuse.indirect.m"
              {
#line 507 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 507 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_106_106, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_8[0]));
#line 507 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_106_106, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_2));
#line 507 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_106_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 507 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_106_106, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6));
#line 507 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_106_106, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91));
#line 507 "structure_reuse.indirect.m"
              }
#line 507 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 507 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 507 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 507 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 507 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 507 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 507 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 507 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 9064 "transform_hlds.ctgc.structure_reuse.indirect.c"
              transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_232_232 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 507 "structure_reuse.indirect.m"
              {
#line 507 "structure_reuse.indirect.m"
                mercury__list__map2_foldl_6_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_232_232, transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_232_232, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], transform_hlds__ctgc__structure_reuse__indirect__V_106_106, transform_hlds__ctgc__structure_reuse__indirect__Goals0_124, &transform_hlds__ctgc__structure_reuse__indirect__Goals_125, &transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_58, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_107_107)), &transform_hlds__ctgc__structure_reuse__indirect__conv6_NewFixpointTable_59);
              }
#line 507 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_59 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv6_NewFixpointTable_59);
#line 509 "structure_reuse.indirect.m"
              {
#line 509 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_58, transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_59, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 511 "structure_reuse.indirect.m"
              {
#line 511 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 511 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_126, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Goals_125));
#line 511 "structure_reuse.indirect.m"
              }
#line 512 "structure_reuse.indirect.m"
              {
#line 512 "structure_reuse.indirect.m"
                MR_Word base;
#line 512 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 512 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = base;
#line 512 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_126));
#line 512 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13));
#line 512 "structure_reuse.indirect.m"
              }
#line 506 "structure_reuse.indirect.m"
            }
#line 468 "structure_reuse.indirect.m"
            break;
#line 468 "structure_reuse.indirect.m"
          case (MR_Integer) 4:
#line 514 "structure_reuse.indirect.m"
            {
#line 514 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_240_240;
#line 514 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__A_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 514 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__B_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 514 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cases0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 3)));
#line 514 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cases_63;
#line 514 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_102_102;
#line 514 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_103_103;
#line 514 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127;
#line 514 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_128;
#line 514 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_129;
#line 515 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_191_191;
#line 515 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_192_192;
#line 515 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_193_193;
#line 515 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_194_194;
#line 515 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_195_195;
#line 515 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_196_196;
#line 515 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_197_197;
#line 515 "structure_reuse.indirect.m"
              MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv10_NewFixpointTable_129;

#line 516 "structure_reuse.indirect.m"
              {
#line 516 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 516 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_102_102, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_8[1]));
#line 516 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_102_102, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_3));
#line 516 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_102_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 516 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_102_102, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6));
#line 516 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_102_102, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91));
#line 516 "structure_reuse.indirect.m"
              }
#line 515 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 515 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 515 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 515 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 515 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 515 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 515 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 515 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 9179 "transform_hlds.ctgc.structure_reuse.indirect.c"
              transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_240_240 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 515 "structure_reuse.indirect.m"
              {
#line 515 "structure_reuse.indirect.m"
                mercury__list__map2_foldl_6_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_240_240, transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_240_240, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], transform_hlds__ctgc__structure_reuse__indirect__V_102_102, transform_hlds__ctgc__structure_reuse__indirect__Cases0_62, &transform_hlds__ctgc__structure_reuse__indirect__Cases_63, &transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_128, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_103_103)), &transform_hlds__ctgc__structure_reuse__indirect__conv10_NewFixpointTable_129);
              }
#line 515 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_129 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv10_NewFixpointTable_129);
#line 518 "structure_reuse.indirect.m"
              {
#line 518 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_128, transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_129, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 520 "structure_reuse.indirect.m"
              {
#line 520 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 520 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 520 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__A_60));
#line 520 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__B_61));
#line 520 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cases_63));
#line 520 "structure_reuse.indirect.m"
              }
#line 521 "structure_reuse.indirect.m"
              {
#line 521 "structure_reuse.indirect.m"
                MR_Word base;
#line 521 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = base;
#line 521 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127));
#line 521 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13));
#line 521 "structure_reuse.indirect.m"
              }
#line 514 "structure_reuse.indirect.m"
            }
#line 468 "structure_reuse.indirect.m"
            break;
#line 468 "structure_reuse.indirect.m"
          case (MR_Integer) 5:
#line 526 "structure_reuse.indirect.m"
            {
#line 526 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 526 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__SubGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 526 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__SubGoal_67;
#line 526 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130;

#line 529 "structure_reuse.indirect.m"
              {
#line 529 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__SubGoal0_66, &transform_hlds__ctgc__structure_reuse__indirect__SubGoal_67, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 530 "structure_reuse.indirect.m"
              {
#line 530 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 530 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 530 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Reason_65));
#line 530 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SubGoal_67));
#line 530 "structure_reuse.indirect.m"
              }
#line 531 "structure_reuse.indirect.m"
              {
#line 531 "structure_reuse.indirect.m"
                MR_Word base;
#line 531 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 531 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = base;
#line 531 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130));
#line 531 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13));
#line 531 "structure_reuse.indirect.m"
              }
#line 526 "structure_reuse.indirect.m"
            }
#line 468 "structure_reuse.indirect.m"
            break;
#line 468 "structure_reuse.indirect.m"
          case (MR_Integer) 6:
#line 543 "structure_reuse.indirect.m"
            {
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IfGoal0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ThenGoal0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 3)));
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ElseGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 4)));
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IfGoal_72;
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoIfGoal_73;
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ThenGoal_74;
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75;
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76;
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ElseGoal_77;
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal_78;
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_97_97;
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131;
#line 543 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__A_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_198_198;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_199_199;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_200_200;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_201_201;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_202_202;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_203_203;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_204_204;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_205_205;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_206_206;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_207_207;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_208_208;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_210_210;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_211_211;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_212_212;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_209_209;

#line 545 "structure_reuse.indirect.m"
              {
#line 545 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__IfGoal0_68, &transform_hlds__ctgc__structure_reuse__indirect__IfGoal_72, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, &transform_hlds__ctgc__structure_reuse__indirect__IrInfoIfGoal_73);
              }
#line 547 "structure_reuse.indirect.m"
              {
#line 547 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__ThenGoal0_69, &transform_hlds__ctgc__structure_reuse__indirect__ThenGoal_74, transform_hlds__ctgc__structure_reuse__indirect__IrInfoIfGoal_73, &transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75);
              }
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 0)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 1)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 2)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 3)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 4)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 5)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 6)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 7)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 549 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 549 "structure_reuse.indirect.m"
              {
#line 549 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 549 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_205_205));
#line 549 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_206_206));
#line 549 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_207_207));
#line 549 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_208_208));
#line 549 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_97_97));
#line 549 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_210_210));
#line 549 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_211_211));
#line 549 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_212_212));
#line 549 "structure_reuse.indirect.m"
              }
#line 550 "structure_reuse.indirect.m"
              {
#line 550 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__ElseGoal0_70, &transform_hlds__ctgc__structure_reuse__indirect__ElseGoal_77, transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, &transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal_78);
              }
#line 552 "structure_reuse.indirect.m"
              {
#line 552 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal_78, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 554 "structure_reuse.indirect.m"
              {
#line 554 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 554 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 554 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__A_132));
#line 554 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__IfGoal_72));
#line 554 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ThenGoal_74));
#line 554 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ElseGoal_77));
#line 554 "structure_reuse.indirect.m"
              }
#line 555 "structure_reuse.indirect.m"
              {
#line 555 "structure_reuse.indirect.m"
                MR_Word base;
#line 555 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 555 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = base;
#line 555 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131));
#line 555 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13));
#line 555 "structure_reuse.indirect.m"
              }
#line 543 "structure_reuse.indirect.m"
            }
#line 468 "structure_reuse.indirect.m"
            break;
#line 468 "structure_reuse.indirect.m"
          case (MR_Integer) 7:
#line 566 "structure_reuse.indirect.m"
            {
#line 568 "structure_reuse.indirect.m"
              {
#line 568 "structure_reuse.indirect.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.indirect_reuse_analyse_goal\'/5", (MR_String) "shorthand");
#line 568 "structure_reuse.indirect.m"
                return;
              }
#line 566 "structure_reuse.indirect.m"
            }
#line 468 "structure_reuse.indirect.m"
            break;
#line 468 "structure_reuse.indirect.m"
        }
#line 468 "structure_reuse.indirect.m"
        break;
#line 468 "structure_reuse.indirect.m"
    }
#line 456 "structure_reuse.indirect.m"
  }
#line 453 "structure_reuse.indirect.m"
}

#line 418 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(
#line 418 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5,
#line 418 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6,
#line 418 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17,
#line 418 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_18)
#line 418 "structure_reuse.indirect.m"
{
#line 421 "structure_reuse.indirect.m"
  {
#line 421 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_160_160;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 0)));
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 3)));
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_10;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewReuse_11;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewStatus_12;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewStaticVars_13;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewDepProcs_14;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewRequests_15;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewIntermodRequests_16;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_27_27;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 421 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34;
#line 422 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 1)));
#line 422 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 2)));
#line 422 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 4)));
#line 422 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 5)));
#line 422 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 6)));
#line 422 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 7)));
#line 422 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 8)));
#line 422 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 9)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 426 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_67_67;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_68_68;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_69_69;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_70_70;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_71_71;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_72_72;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_73_73;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_74_74;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_75_75;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_76_76;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_77_77;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_79_79;
#line 430 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_90_90;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_93_93;
#line 434 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_94_94;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_96_96;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_97_97;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_98_98;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_99_99;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_100_100;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_101_101;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_102_102;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_103_103;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_104_104;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_105_105;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_106_106;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_107_107;
#line 437 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_108_108;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_109_109;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_110_110;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_111_111;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_112_112;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_113_113;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_114_114;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_115_115;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_116_116;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_117_117;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_118_118;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_119_119;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_120_120;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_121_121;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_122_122;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_123_123;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_124_124;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_125_125;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_126_126;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_127_127;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_128_128;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_129_129;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_130_130;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_131_131;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_132_132;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_133_133;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_134_134;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_135_135;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_136_136;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_137_137;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_138_138;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_139_139;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_140_140;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_141_141;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_142_142;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_143_143;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_144_144;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_145_145;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_146_146;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_147_147;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_148_148;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_149_149;
#line 444 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_150_150;
#line 448 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_151_151;
#line 448 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_152_152;
#line 448 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_153_153;
#line 448 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_154_154;
#line 448 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_155_155;
#line 448 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_156_156;
#line 448 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_157_157;

#line 426 "structure_reuse.indirect.m"
    {
#line 426 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewSharing_10 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_9, transform_hlds__ctgc__structure_reuse__indirect__V_19_19, transform_hlds__ctgc__structure_reuse__indirect__V_20_20);
    }
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 430 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 430 "structure_reuse.indirect.m"
    {
#line 430 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewReuse_11 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_4_f_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_9, transform_hlds__ctgc__structure_reuse__indirect__V_21_21, transform_hlds__ctgc__structure_reuse__indirect__V_22_22);
    }
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 434 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 434 "structure_reuse.indirect.m"
    {
#line 434 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewStatus_12 = analysis__lub_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_23_23, transform_hlds__ctgc__structure_reuse__indirect__V_24_24);
    }
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 437 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 437 "structure_reuse.indirect.m"
    {
#line 437 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewStaticVars_13 = mercury__set__union_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3], transform_hlds__ctgc__structure_reuse__indirect__V_25_25, transform_hlds__ctgc__structure_reuse__indirect__V_26_26);
    }
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 440 "structure_reuse.indirect.m"
    {
#line 440 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewDepProcs_14 = mercury__set__union_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__indirect__V_27_27, transform_hlds__ctgc__structure_reuse__indirect__V_28_28);
    }
#line 9915 "transform_hlds.ctgc.structure_reuse.indirect.c"
    transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_160_160 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 443 "structure_reuse.indirect.m"
    {
#line 443 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewRequests_15 = mercury__set__union_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_160_160, transform_hlds__ctgc__structure_reuse__indirect__V_29_29, transform_hlds__ctgc__structure_reuse__indirect__V_30_30);
    }
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 444 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 444 "structure_reuse.indirect.m"
    {
#line 444 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewIntermodRequests_16 = mercury__set__union_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_160_160, transform_hlds__ctgc__structure_reuse__indirect__V_31_31, transform_hlds__ctgc__structure_reuse__indirect__V_32_32);
    }
#line 448 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 448 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 448 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 448 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 448 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 448 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 448 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 448 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 448 "structure_reuse.indirect.m"
    {
#line 448 "structure_reuse.indirect.m"
      MR_Word base;
#line 448 "structure_reuse.indirect.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 448 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_18 = base;
#line 448 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewSharing_10));
#line 448 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewReuse_11));
#line 448 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewStatus_12));
#line 448 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewStaticVars_13));
#line 448 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_34_34));
#line 448 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewDepProcs_14));
#line 448 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewRequests_15));
#line 448 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewIntermodRequests_16));
#line 448 "structure_reuse.indirect.m"
    }
#line 421 "structure_reuse.indirect.m"
  }
#line 418 "structure_reuse.indirect.m"
}

#line 414 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0_1(
#line 414 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 414 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 414 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 414 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 414 "structure_reuse.indirect.m"
{
#line 414 "structure_reuse.indirect.m"
  {
#line 414 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 414 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_18;

#line 414 "structure_reuse.indirect.m"
    {
#line 414 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_18);
    }
#line 414 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_18));
#line 414 "structure_reuse.indirect.m"
  }
#line 414 "structure_reuse.indirect.m"
}

#line 402 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(
#line 402 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 402 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_7,
#line 402 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8,
#line 402 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12,
#line 402 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13)
#line 402 "structure_reuse.indirect.m"
{
#line 411 "structure_reuse.indirect.m"
  {
#line 411 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 411 "structure_reuse.indirect.m"
    if ((transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 411 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12;
#line 411 "structure_reuse.indirect.m"
    else
#line 413 "structure_reuse.indirect.m"
      {
#line 413 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_28_28;
#line 413 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14;
#line 413 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15;
#line 414 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_IrInfo_15_15;
#line 415 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17;
#line 415 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18;
#line 415 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19;
#line 415 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20;
#line 415 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22;
#line 415 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23;
#line 415 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24;
#line 415 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21;

#line 414 "structure_reuse.indirect.m"
        {
#line 414 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 414 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[1]));
#line 414 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0_1));
#line 414 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 414 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6));
#line 414 "structure_reuse.indirect.m"
        }
#line 10137 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0;
#line 414 "structure_reuse.indirect.m"
        {
#line 414 "structure_reuse.indirect.m"
          mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_28_28, transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_28_28, transform_hlds__ctgc__structure_reuse__indirect__V_14_14, transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_7, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12)), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_IrInfo_15_15);
        }
#line 414 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_IrInfo_15_15);
#line 415 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 0)));
#line 415 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 1)));
#line 415 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 2)));
#line 415 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 3)));
#line 415 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 4)));
#line 415 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 5)));
#line 415 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 6)));
#line 415 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 7)));
#line 415 "structure_reuse.indirect.m"
        {
#line 415 "structure_reuse.indirect.m"
          MR_Word base;
#line 415 "structure_reuse.indirect.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 415 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13 = base;
#line 415 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_17_17));
#line 415 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_18_18));
#line 415 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_19_19));
#line 415 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_20_20));
#line 415 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8));
#line 415 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_22_22));
#line 415 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_23_23));
#line 415 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_24_24));
#line 415 "structure_reuse.indirect.m"
        }
#line 413 "structure_reuse.indirect.m"
      }
#line 411 "structure_reuse.indirect.m"
  }
#line 402 "structure_reuse.indirect.m"
}

#line 388 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_f_0(
#line 388 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_7,
#line 388 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8,
#line 388 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__DepProcs_9,
#line 388 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Requests_10,
#line 388 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntermodRequests_11)
#line 388 "structure_reuse.indirect.m"
{
#line 392 "structure_reuse.indirect.m"
  {
#line 392 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 392 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Info_12;
#line 392 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Sharing_13;
#line 392 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_14;
#line 392 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Status_15;
#line 392 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_16_16;
#line 392 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17;
#line 1224 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_Sharing_13;

#line 1224 "structure_reuse.indirect.m"
    {
#line 1224 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_Sharing_13 = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PPId_7)), transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8);
    }
#line 1224 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Sharing_13 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_Sharing_13);
#line 394 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Sharing_13, (MR_Integer) 0)));
#line 394 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__Status_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Sharing_13, (MR_Integer) 1)));
#line 395 "structure_reuse.indirect.m"
    {
#line 395 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_16_16 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_f_0();
    }
#line 395 "structure_reuse.indirect.m"
    {
#line 395 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3]);
    }
#line 395 "structure_reuse.indirect.m"
    {
#line 395 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Info_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 395 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_16_16));
#line 395 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_14));
#line 395 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Status_15));
#line 395 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_17_17));
#line 395 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8));
#line 395 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__DepProcs_9));
#line 395 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Requests_10));
#line 395 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__IntermodRequests_11));
#line 395 "structure_reuse.indirect.m"
    }
#line 392 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__Info_12;
#line 392 "structure_reuse.indirect.m"
  }
#line 388 "structure_reuse.indirect.m"
}

#line 366 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_f_0(
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8,
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_9,
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10,
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11,
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_12,
#line 366 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_13)
#line 366 "structure_reuse.indirect.m"
{
#line 370 "structure_reuse.indirect.m"
  {
#line 370 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 370 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__BG_14;
#line 370 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVars_15;
#line 370 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Vartypes_16;
#line 370 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVarsOfInterest_17;
#line 370 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Globals_18;
#line 370 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_19;
#line 370 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_20;
#line 370 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_21;

#line 374 "structure_reuse.indirect.m"
    {
#line 374 "structure_reuse.indirect.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11, &transform_hlds__ctgc__structure_reuse__indirect__HeadVars_15);
    }
#line 375 "structure_reuse.indirect.m"
    {
#line 375 "structure_reuse.indirect.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11, &transform_hlds__ctgc__structure_reuse__indirect__Vartypes_16);
    }
#line 376 "structure_reuse.indirect.m"
    {
#line 376 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__HeadVarsOfInterest_17 = parse_tree__prog_type__remove_typeinfo_vars_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__Vartypes_16, transform_hlds__ctgc__structure_reuse__indirect__HeadVars_15);
    }
#line 378 "structure_reuse.indirect.m"
    {
#line 378 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8, &transform_hlds__ctgc__structure_reuse__indirect__Globals_18);
    }
#line 379 "structure_reuse.indirect.m"
    {
#line 379 "structure_reuse.indirect.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_18, (MR_Integer) 414, &transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_19);
    }
#line 381 "structure_reuse.indirect.m"
    {
#line 381 "structure_reuse.indirect.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_18, (MR_Integer) 46, &transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_20);
    }
#line 382 "structure_reuse.indirect.m"
    {
#line 382 "structure_reuse.indirect.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_18, (MR_Integer) 82, &transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_21);
    }
#line 384 "structure_reuse.indirect.m"
    {
#line 384 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__BG_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 384 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8));
#line 384 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PPId_9));
#line 384 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10));
#line 384 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11));
#line 384 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SharingTable_12));
#line 384 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_13));
#line 384 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__HeadVarsOfInterest_17));
#line 384 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_19));
#line 384 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 8) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_20));
#line 384 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 9) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_21));
#line 384 "structure_reuse.indirect.m"
    }
#line 370 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__BG_14;
#line 370 "structure_reuse.indirect.m"
  }
#line 366 "structure_reuse.indirect.m"
}

#line 247 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_p_0(
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_16,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43,
#line 247 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_44,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_45,
#line 247 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_46,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_47,
#line 247 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_48,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_49,
#line 247 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_50,
#line 247 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_51,
#line 247 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_52)
#line 247 "structure_reuse.indirect.m"
{
#line 256 "structure_reuse.indirect.m"
  {
#line 256 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Globals_22;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_23;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_24;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredId_25;
#line 256 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__ProcId_26;
#line 256 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__Run_27;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo0_29;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal0_31;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_32;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_33;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal_34;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_41;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_42;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_63_63;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78;
#line 256 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_90_90;
#line 292 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36;
#line 292 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37;
#line 292 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38;
#line 292 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39;
#line 319 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89;
#line 319 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91;
#line 319 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92;
#line 319 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_93_93;
#line 319 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_94_94;
#line 319 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;

#line 257 "structure_reuse.indirect.m"
    {
#line 257 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, &transform_hlds__ctgc__structure_reuse__indirect__Globals_22);
    }
#line 258 "structure_reuse.indirect.m"
    {
#line 258 "structure_reuse.indirect.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_22, (MR_Integer) 46, &transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_23);
    }
#line 259 "structure_reuse.indirect.m"
    {
#line 259 "structure_reuse.indirect.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_22, (MR_Integer) 82, &transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_24);
    }
#line 261 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__PPId_16, (MR_Integer) 0)));
#line 261 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__PPId_16, (MR_Integer) 1)));
#line 264 "structure_reuse.indirect.m"
    {
#line 264 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Run_27 = transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_45);
    }
#line 266 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_23 == (MR_Integer) 1);
#line 267 "structure_reuse.indirect.m"
    if (!(transform_hlds__ctgc__structure_reuse__indirect__succeeded))
#line 267 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_24 == (MR_Integer) 1);
#line 277 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 270 "structure_reuse.indirect.m"
      {
#line 271 "structure_reuse.indirect.m"
        {
#line 271 "structure_reuse.indirect.m"
          mercury__io__write_string_3_p_0((MR_String) "% Indirect reuse analysis (run ");
        }
#line 272 "structure_reuse.indirect.m"
        {
#line 272 "structure_reuse.indirect.m"
          mercury__io__write_int_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Run_27);
        }
#line 273 "structure_reuse.indirect.m"
        {
#line 273 "structure_reuse.indirect.m"
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
#line 274 "structure_reuse.indirect.m"
        {
#line 274 "structure_reuse.indirect.m"
          hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, transform_hlds__ctgc__structure_reuse__indirect__PredId_25, transform_hlds__ctgc__structure_reuse__indirect__ProcId_26);
        }
#line 275 "structure_reuse.indirect.m"
        {
#line 275 "structure_reuse.indirect.m"
          mercury__io__nl_2_p_0();
        }
#line 270 "structure_reuse.indirect.m"
      }
#line 277 "structure_reuse.indirect.m"
    else
#line 278 "structure_reuse.indirect.m"
      {
#line 278 "structure_reuse.indirect.m"
      }
#line 282 "structure_reuse.indirect.m"
    {
#line 282 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, transform_hlds__ctgc__structure_reuse__indirect__PPId_16, &transform_hlds__ctgc__structure_reuse__indirect__PredInfo0_29, &transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30);
    }
#line 283 "structure_reuse.indirect.m"
    {
#line 283 "structure_reuse.indirect.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30, &transform_hlds__ctgc__structure_reuse__indirect__Goal0_31);
    }
#line 284 "structure_reuse.indirect.m"
    {
#line 284 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_32 = transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_f_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__PredInfo0_29, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30, transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14, transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15);
    }
#line 286 "structure_reuse.indirect.m"
    {
#line 286 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_33 = transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_f_0(transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_45, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_47, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_49, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_51);
    }
#line 290 "structure_reuse.indirect.m"
    {
#line 290 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_32, transform_hlds__ctgc__structure_reuse__indirect__Goal0_31, &transform_hlds__ctgc__structure_reuse__indirect__Goal_34, transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_33, &transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35);
    }
#line 292 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 0)));
#line 292 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 1)));
#line 292 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 2)));
#line 292 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 3)));
#line 292 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 4)));
#line 292 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 5)));
#line 292 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 6)));
#line 292 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 7)));
#line 297 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_23 == (MR_Integer) 1);
#line 298 "structure_reuse.indirect.m"
    if (!(transform_hlds__ctgc__structure_reuse__indirect__succeeded))
#line 298 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_24 == (MR_Integer) 1);
#line 314 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 301 "structure_reuse.indirect.m"
      {
#line 301 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__NumConditions_40;
#line 301 "structure_reuse.indirect.m"
        MR_String transform_hlds__ctgc__structure_reuse__indirect__V_70_70;
#line 301 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_73_73;
#line 309 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82;
#line 309 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83;
#line 309 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84;
#line 309 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85;
#line 309 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86;
#line 309 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87;
#line 309 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88;

#line 302 "structure_reuse.indirect.m"
        {
#line 302 "structure_reuse.indirect.m"
          mercury__io__write_string_3_p_0((MR_String) "% FPT: ");
        }
#line 304 "structure_reuse.indirect.m"
        {
#line 304 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_70_70 = transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_63_63);
        }
#line 303 "structure_reuse.indirect.m"
        {
#line 303 "structure_reuse.indirect.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_70_70);
        }
#line 307 "structure_reuse.indirect.m"
        {
#line 307 "structure_reuse.indirect.m"
          mercury__io__nl_2_p_0();
        }
#line 309 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 0)));
#line 309 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 1)));
#line 309 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 2)));
#line 309 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 3)));
#line 309 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 4)));
#line 309 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 5)));
#line 309 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 6)));
#line 309 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 7)));
#line 309 "structure_reuse.indirect.m"
        {
#line 309 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__NumConditions_40 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_73_73);
        }
#line 310 "structure_reuse.indirect.m"
        {
#line 310 "structure_reuse.indirect.m"
          mercury__io__write_string_3_p_0((MR_String) "% Number of conditions: ");
        }
#line 311 "structure_reuse.indirect.m"
        {
#line 311 "structure_reuse.indirect.m"
          mercury__io__write_int_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__NumConditions_40);
        }
#line 312 "structure_reuse.indirect.m"
        {
#line 312 "structure_reuse.indirect.m"
          mercury__io__nl_2_p_0();
        }
#line 301 "structure_reuse.indirect.m"
      }
#line 314 "structure_reuse.indirect.m"
    else
#line 315 "structure_reuse.indirect.m"
      {
#line 315 "structure_reuse.indirect.m"
      }
#line 319 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 0)));
#line 319 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 1)));
#line 319 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 2)));
#line 319 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 3)));
#line 319 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 4)));
#line 319 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 5)));
#line 319 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 6)));
#line 319 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 7)));
#line 319 "structure_reuse.indirect.m"
    {
#line 319 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_41, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_78_78));
#line 319 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_41, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_90_90));
#line 319 "structure_reuse.indirect.m"
    }
#line 321 "structure_reuse.indirect.m"
    {
#line 321 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30, transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_41, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_63_63, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_46);
    }
#line 326 "structure_reuse.indirect.m"
    {
#line 326 "structure_reuse.indirect.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Goal_34, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30, &transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_42);
    }
#line 327 "structure_reuse.indirect.m"
    {
#line 327 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__PredInfo0_29, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_42, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_44);
#line 327 "structure_reuse.indirect.m"
      return;
    }
#line 256 "structure_reuse.indirect.m"
  }
#line 247 "structure_reuse.indirect.m"
}

#line 225 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_p_0(
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_16,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_27,
#line 225 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_28,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_29,
#line 225 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_30,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_31,
#line 225 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_32,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_33,
#line 225 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_34,
#line 225 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_35,
#line 225 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_36)
#line 225 "structure_reuse.indirect.m"
{
#line 234 "structure_reuse.indirect.m"
  {
#line 234 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 234 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__PPId_16, (MR_Integer) 0)));
#line 234 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_24;
#line 234 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Origin_25;
#line 235 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__PPId_16, (MR_Integer) 1)));
#line 238 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;

#line 236 "structure_reuse.indirect.m"
    {
#line 236 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_27, transform_hlds__ctgc__structure_reuse__indirect__PredId_22, &transform_hlds__ctgc__structure_reuse__indirect__PredInfo_24);
    }
#line 237 "structure_reuse.indirect.m"
    {
#line 237 "structure_reuse.indirect.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__PredInfo_24, &transform_hlds__ctgc__structure_reuse__indirect__Origin_25);
    }
#line 238 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__Origin_25)) == (MR_mktag((MR_Integer) 0)));
#line 238 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 238 "structure_reuse.indirect.m"
      {
#line 238 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Origin_25, (MR_Integer) 0)));
#line 240 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_36 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_35;
#line 240 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_34 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_33;
#line 240 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_32 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_31;
#line 240 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_30 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_29;
#line 240 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_28 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_27;
#line 238 "structure_reuse.indirect.m"
      }
#line 238 "structure_reuse.indirect.m"
    else
#line 242 "structure_reuse.indirect.m"
      {
#line 242 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_p_0(transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14, transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15, transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_27, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_28, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_29, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_30, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_31, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_32, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_33, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_34, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_35, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_36);
#line 242 "structure_reuse.indirect.m"
        return;
      }
#line 234 "structure_reuse.indirect.m"
  }
#line 225 "structure_reuse.indirect.m"
}

#line 211 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0_1(
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 211 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 211 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 211 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 211 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 211 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 211 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11)
#line 211 "structure_reuse.indirect.m"
{
#line 211 "structure_reuse.indirect.m"
  {
#line 211 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 211 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_28;
#line 211 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_30;
#line 211 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_32;
#line 211 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_34;
#line 211 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_36;

#line 211 "structure_reuse.indirect.m"
    {
#line 211 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_28, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_30, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_32, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_34, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10), &transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_36);
    }
#line 211 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_28));
#line 211 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_30));
#line 211 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_32));
#line 211 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_34));
#line 211 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_36));
#line 211 "structure_reuse.indirect.m"
  }
#line 211 "structure_reuse.indirect.m"
}

#line 200 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_15,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_16,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22,
#line 200 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_24,
#line 200 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_25,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26,
#line 200 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28,
#line 200 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29,
#line 200 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30,
#line 200 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31)
#line 200 "structure_reuse.indirect.m"
{
#line 210 "structure_reuse.indirect.m"
  while (MR_TRUE)
#line 210 "structure_reuse.indirect.m"
    {
#line 210 "structure_reuse.indirect.m"
      /* tailcall optimized into a loop */
#line 210 "structure_reuse.indirect.m"
      {
#line 210 "structure_reuse.indirect.m"
        MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 210 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_59_59;
#line 210 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 210 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_33_33;
#line 210 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_34_34;
#line 210 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_35_35;
#line 210 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_36_36;
#line 210 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37_37;
#line 211 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_33_33;
#line 211 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_FixpointTable_34_34;
#line 211 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_DepProcs_35_35;
#line 211 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv6_STATE_VARIABLE_Requests_36_36;
#line 211 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_37_37;

#line 211 "structure_reuse.indirect.m"
        {
#line 211 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 211 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_6[0]));
#line 211 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0_1));
#line 211 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 211 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14));
#line 211 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_16));
#line 211 "structure_reuse.indirect.m"
        }
#line 10964 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_59_59 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
#line 211 "structure_reuse.indirect.m"
        {
#line 211 "structure_reuse.indirect.m"
          mercury__list__foldl5_12_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_59_59, transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_59_59, transform_hlds__ctgc__structure_reuse__indirect__V_32_32, transform_hlds__ctgc__structure_reuse__indirect__SCC_15, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22)), &transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_33_33, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_24)), &transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_FixpointTable_34_34, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26)), &transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_DepProcs_35_35, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28)), &transform_hlds__ctgc__structure_reuse__indirect__conv6_STATE_VARIABLE_Requests_36_36, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30)), &transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_37_37);
        }
#line 211 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_33_33);
#line 211 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_34_34 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_FixpointTable_34_34);
#line 211 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_35_35 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_DepProcs_35_35);
#line 211 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_36_36 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv6_STATE_VARIABLE_Requests_36_36);
#line 211 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37_37 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_37_37);
#line 1195 "structure_reuse.indirect.m"
        {
#line 1195 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_34_34);
        }
#line 216 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 215 "structure_reuse.indirect.m"
          {
#line 215 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37_37;
#line 215 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_36_36;
#line 215 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_35_35;
#line 215 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_25 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_34_34;
#line 215 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_33_33;
#line 215 "structure_reuse.indirect.m"
          }
#line 216 "structure_reuse.indirect.m"
        else
#line 217 "structure_reuse.indirect.m"
          {
#line 217 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_38_38;

#line 1190 "structure_reuse.indirect.m"
            {
#line 1190 "structure_reuse.indirect.m"
              transform_hlds__ctgc__fixpoint_table__new_run_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_34_34, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_38_38);
            }
#line 218 "structure_reuse.indirect.m"
            /* direct tailcall eliminated */
#line 218 "structure_reuse.indirect.m"
            {
#line 218 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0__tmp_copy_22 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_33_33;
#line 218 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0__tmp_copy_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_38_38;
#line 218 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0__tmp_copy_26 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_35_35;
#line 218 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0__tmp_copy_28 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_36_36;
#line 218 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0__tmp_copy_30 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37_37;

#line 218 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0__tmp_copy_30;
#line 218 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0__tmp_copy_28;
#line 218 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0__tmp_copy_26;
#line 218 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0__tmp_copy_24;
#line 218 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0__tmp_copy_22;
#line 218 "structure_reuse.indirect.m"
            }
#line 218 "structure_reuse.indirect.m"
            continue;
#line 217 "structure_reuse.indirect.m"
          }
#line 210 "structure_reuse.indirect.m"
      }
#line 210 "structure_reuse.indirect.m"
      break;
#line 210 "structure_reuse.indirect.m"
    }
#line 200 "structure_reuse.indirect.m"
}

#line 182 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_4(
#line 182 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 182 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 182 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 182 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 182 "structure_reuse.indirect.m"
{
#line 182 "structure_reuse.indirect.m"
  {
#line 182 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 182 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_10;

#line 182 "structure_reuse.indirect.m"
    {
#line 182 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_10);
    }
#line 182 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_10));
#line 182 "structure_reuse.indirect.m"
  }
#line 182 "structure_reuse.indirect.m"
}

#line 1187 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_3(
#line 1187 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1187 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1)
#line 1187 "structure_reuse.indirect.m"
{
#line 1187 "structure_reuse.indirect.m"
  {
#line 1187 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 1187 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 1187 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_ReuseAs_6;

#line 1187 "structure_reuse.indirect.m"
    {
#line 1187 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__conv1_ReuseAs_6 = transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1));
    }
#line 1187 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_ReuseAs_6));
#line 1187 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 1187 "structure_reuse.indirect.m"
  }
#line 1187 "structure_reuse.indirect.m"
}

#line 191 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_1(
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg)
#line 191 "structure_reuse.indirect.m"
{
#line 191 "structure_reuse.indirect.m"
  {
#line 191 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s * transform_hlds__ctgc__structure_reuse__indirect__env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s *) transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg;

#line 191 "structure_reuse.indirect.m"
    *((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__conv0_HeadVar__3_14));
#line 191 "structure_reuse.indirect.m"
    {
#line 191 "structure_reuse.indirect.m"
      ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont)((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont_env_ptr);
#line 191 "structure_reuse.indirect.m"
      return;
    }
#line 191 "structure_reuse.indirect.m"
  }
#line 191 "structure_reuse.indirect.m"
}

#line 191 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2(
#line 191 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 191 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 191 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__cont,
#line 191 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr)
#line 191 "structure_reuse.indirect.m"
{
#line 191 "structure_reuse.indirect.m"
  {
#line 191 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s transform_hlds__ctgc__structure_reuse__indirect__env;

#line 191 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__wrapper_arg_1 = transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1;
#line 191 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont = transform_hlds__ctgc__structure_reuse__indirect__cont;
#line 191 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont_env_ptr = transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr;
#line 191 "structure_reuse.indirect.m"
    {
#line 191 "structure_reuse.indirect.m"
      MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;

#line 191 "structure_reuse.indirect.m"
      {
#line 191 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__191__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 4))), &(transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__conv0_HeadVar__3_14, transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_1, &transform_hlds__ctgc__structure_reuse__indirect__env);
      }
#line 191 "structure_reuse.indirect.m"
    }
#line 191 "structure_reuse.indirect.m"
  }
#line 191 "structure_reuse.indirect.m"
}

#line 162 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0(
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_14,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_23,
#line 162 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25,
#line 162 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_26,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_27,
#line 162 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_28,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_29,
#line 162 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_30,
#line 162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_31,
#line 162 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_32)
#line 162 "structure_reuse.indirect.m"
{
#line 173 "structure_reuse.indirect.m"
  {
#line 173 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 171 "structure_reuse.indirect.m"
    {
#line 171 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__ctgc__structure_reuse__indirect__SCC_14);
    }
#line 173 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 172 "structure_reuse.indirect.m"
      {
#line 172 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_32 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_31;
#line 172 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_30 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_29;
#line 172 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_28 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_27;
#line 172 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_26 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25;
#line 172 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_23;
#line 172 "structure_reuse.indirect.m"
      }
#line 173 "structure_reuse.indirect.m"
    else
#line 176 "structure_reuse.indirect.m"
      {
#line 176 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_19_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 176 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__ExtendedSCC_20;
#line 176 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_21;
#line 176 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_22;
#line 176 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37;
#line 176 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_47;
#line 176 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Extension_51;
#line 176 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25, (MR_Integer) 1)));
#line 176 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_53_53;
#line 176 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66;
#line 190 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25, (MR_Integer) 0)));
#line 182 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26;

#line 190 "structure_reuse.indirect.m"
        {
#line 190 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_47 = mercury__bimap__forward_map_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_19_59, transform_hlds__ctgc__structure_reuse__indirect__V_52_52);
        }
#line 191 "structure_reuse.indirect.m"
        {
#line 191 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 191 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_53_53, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_4[1]));
#line 191 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_53_53, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2));
#line 191 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 191 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_53_53, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SCC_14));
#line 191 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_53_53, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_47));
#line 191 "structure_reuse.indirect.m"
        }
#line 191 "structure_reuse.indirect.m"
        {
#line 191 "structure_reuse.indirect.m"
          mercury__solutions__solutions_2_p_1(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_19_59, transform_hlds__ctgc__structure_reuse__indirect__V_53_53, &transform_hlds__ctgc__structure_reuse__indirect__Extension_51);
        }
#line 196 "structure_reuse.indirect.m"
        {
#line 196 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__ExtendedSCC_20 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_19_59, transform_hlds__ctgc__structure_reuse__indirect__SCC_14, transform_hlds__ctgc__structure_reuse__indirect__Extension_51);
        }
#line 1187 "structure_reuse.indirect.m"
        {
#line 1187 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_66_66, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_4[0]));
#line 1187 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_66_66, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_3));
#line 1187 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1187 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_66_66, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25));
#line 1187 "structure_reuse.indirect.m"
        }
#line 1187 "structure_reuse.indirect.m"
        {
#line 1187 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_21 = transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__V_66_66, transform_hlds__ctgc__structure_reuse__indirect__ExtendedSCC_20);
        }
#line 179 "structure_reuse.indirect.m"
        {
#line 179 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13, transform_hlds__ctgc__structure_reuse__indirect__ExtendedSCC_20, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24, transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_21, &transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_22, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_27, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_28, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_29, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_30, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_31, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_32);
        }
#line 182 "structure_reuse.indirect.m"
        {
#line 182 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 182 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_37_37, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[0]));
#line 182 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_37_37, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_4));
#line 182 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 182 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_37_37, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_22));
#line 182 "structure_reuse.indirect.m"
        }
#line 182 "structure_reuse.indirect.m"
        {
#line 182 "structure_reuse.indirect.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__indirect__V_37_37, transform_hlds__ctgc__structure_reuse__indirect__ExtendedSCC_20, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25)), &transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26);
        }
#line 182 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_26 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26);
#line 176 "structure_reuse.indirect.m"
      }
#line 173 "structure_reuse.indirect.m"
  }
#line 162 "structure_reuse.indirect.m"
}

#line 145 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(
#line 145 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_5,
#line 145 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_6,
#line 145 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_9,
#line 145 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_10)
#line 145 "structure_reuse.indirect.m"
{
#line 148 "structure_reuse.indirect.m"
  {
#line 148 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 148 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__FinalAs_8;
#line 1224 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv0_FinalAs_8;

#line 1224 "structure_reuse.indirect.m"
    {
#line 1224 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__conv0_FinalAs_8 = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PPId_6)), transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_5);
    }
#line 1224 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__FinalAs_8 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv0_FinalAs_8);
#line 150 "structure_reuse.indirect.m"
    {
#line 150 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__PPId_6, transform_hlds__ctgc__structure_reuse__indirect__FinalAs_8, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_9, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_10);
#line 150 "structure_reuse.indirect.m"
      return;
    }
#line 148 "structure_reuse.indirect.m"
  }
#line 145 "structure_reuse.indirect.m"
}

#line 142 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_2(
#line 142 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 142 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 142 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 142 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 142 "structure_reuse.indirect.m"
{
#line 142 "structure_reuse.indirect.m"
  {
#line 142 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 142 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_ReuseTable_10;

#line 142 "structure_reuse.indirect.m"
    {
#line 142 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_ReuseTable_10);
    }
#line 142 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_ReuseTable_10));
#line 142 "structure_reuse.indirect.m"
  }
#line 142 "structure_reuse.indirect.m"
}

#line 1187 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_1(
#line 1187 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1187 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1)
#line 1187 "structure_reuse.indirect.m"
{
#line 1187 "structure_reuse.indirect.m"
  {
#line 1187 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 1187 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 1187 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6;

#line 1187 "structure_reuse.indirect.m"
    {
#line 1187 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6 = transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1));
    }
#line 1187 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6));
#line 1187 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 1187 "structure_reuse.indirect.m"
  }
#line 1187 "structure_reuse.indirect.m"
}

#line 126 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0(
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_14,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22,
#line 126 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24,
#line 126 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_25,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26,
#line 126 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28,
#line 126 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29,
#line 126 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30,
#line 126 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31)
#line 126 "structure_reuse.indirect.m"
{
#line 137 "structure_reuse.indirect.m"
  {
#line 137 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 135 "structure_reuse.indirect.m"
    {
#line 135 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ctgc__structure_reuse__indirect__SCC_14);
    }
#line 137 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 136 "structure_reuse.indirect.m"
      {
#line 136 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30;
#line 136 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28;
#line 136 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26;
#line 136 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_25 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24;
#line 136 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22;
#line 136 "structure_reuse.indirect.m"
      }
#line 137 "structure_reuse.indirect.m"
    else
#line 138 "structure_reuse.indirect.m"
      {
#line 138 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_20;
#line 138 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_21;
#line 138 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36;
#line 138 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46;
#line 142 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_25;

#line 1187 "structure_reuse.indirect.m"
        {
#line 1187 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_46_46, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_4[0]));
#line 1187 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_46_46, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_1));
#line 1187 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1187 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_46_46, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24));
#line 1187 "structure_reuse.indirect.m"
        }
#line 1187 "structure_reuse.indirect.m"
        {
#line 1187 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_20 = transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__V_46_46, transform_hlds__ctgc__structure_reuse__indirect__SCC_14);
        }
#line 139 "structure_reuse.indirect.m"
        {
#line 139 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13, transform_hlds__ctgc__structure_reuse__indirect__SCC_14, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23, transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_20, &transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_21, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31);
        }
#line 142 "structure_reuse.indirect.m"
        {
#line 142 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 142 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_36_36, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[0]));
#line 142 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_36_36, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_2));
#line 142 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 142 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_36_36, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_21));
#line 142 "structure_reuse.indirect.m"
        }
#line 142 "structure_reuse.indirect.m"
        {
#line 142 "structure_reuse.indirect.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__indirect__V_36_36, transform_hlds__ctgc__structure_reuse__indirect__SCC_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24)), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_25);
        }
#line 142 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_25 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_25);
#line 138 "structure_reuse.indirect.m"
      }
#line 137 "structure_reuse.indirect.m"
  }
#line 126 "structure_reuse.indirect.m"
}

#line 158 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0_1(
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 158 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 158 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 158 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 158 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 158 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 158 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11)
#line 158 "structure_reuse.indirect.m"
{
#line 158 "structure_reuse.indirect.m"
  {
#line 158 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 158 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_24;
#line 158 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26;
#line 158 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_28;
#line 158 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_30;
#line 158 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_32;

#line 158 "structure_reuse.indirect.m"
    {
#line 158 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_24, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_28, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_30, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10), &transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_32);
    }
#line 158 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_24));
#line 158 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26));
#line 158 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_28));
#line 158 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_30));
#line 158 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_32));
#line 158 "structure_reuse.indirect.m"
  }
#line 158 "structure_reuse.indirect.m"
}

#line 62 "structure_reuse.indirect.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0(
#line 62 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_10,
#line 62 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_18,
#line 62 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_19,
#line 62 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_20,
#line 62 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_21,
#line 62 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__DepProcs_13,
#line 62 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Requests_14,
#line 62 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_22,
#line 62 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_23)
#line 62 "structure_reuse.indirect.m"
{
#line 155 "structure_reuse.indirect.m"
  {
#line 155 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 155 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_49_49;
#line 155 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__DepInfo_16;
#line 155 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCCs_17;
#line 155 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24_24;
#line 155 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25;
#line 155 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 155 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 158 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19;
#line 158 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21;
#line 158 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_13;
#line 158 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_14;
#line 158 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_23;

#line 156 "structure_reuse.indirect.m"
    {
#line 156 "structure_reuse.indirect.m"
      transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24_24, &transform_hlds__ctgc__structure_reuse__indirect__DepInfo_16);
    }
#line 157 "structure_reuse.indirect.m"
    {
#line 157 "structure_reuse.indirect.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__indirect__DepInfo_16, &transform_hlds__ctgc__structure_reuse__indirect__SCCs_17);
    }
#line 158 "structure_reuse.indirect.m"
    {
#line 158 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 158 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_25_25, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_3[0]));
#line 158 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_25_25, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0_1));
#line 158 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 158 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_25_25, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SharingTable_10));
#line 158 "structure_reuse.indirect.m"
    }
#line 159 "structure_reuse.indirect.m"
    {
#line 159 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0);
    }
#line 159 "structure_reuse.indirect.m"
    {
#line 159 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0);
    }
#line 11729 "transform_hlds.ctgc.structure_reuse.indirect.c"
    transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_49_49 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
#line 158 "structure_reuse.indirect.m"
    {
#line 158 "structure_reuse.indirect.m"
      mercury__list__foldl5_12_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_49_49, transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_49_49, transform_hlds__ctgc__structure_reuse__indirect__V_25_25, transform_hlds__ctgc__structure_reuse__indirect__SCCs_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24_24)), &transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_20)), &transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_28_28)), &transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_29_29)), &transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_22)), &transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_23);
    }
#line 158 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_19 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19);
#line 158 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_21 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21);
#line 158 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__DepProcs_13 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_13);
#line 158 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__Requests_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_14);
#line 158 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_23 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_23);
#line 155 "structure_reuse.indirect.m"
  }
#line 62 "structure_reuse.indirect.m"
}

#line 118 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0_1(
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 118 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 118 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 118 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 118 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 118 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 118 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11)
#line 118 "structure_reuse.indirect.m"
{
#line 118 "structure_reuse.indirect.m"
  {
#line 118 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 118 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_23;
#line 118 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_25;
#line 118 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_27;
#line 118 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_29;
#line 118 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_31;

#line 118 "structure_reuse.indirect.m"
    {
#line 118 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_25, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_27, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_29, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10), &transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_31);
    }
#line 118 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_23));
#line 118 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_25));
#line 118 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_27));
#line 118 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_29));
#line 118 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_31));
#line 118 "structure_reuse.indirect.m"
  }
#line 118 "structure_reuse.indirect.m"
}

#line 55 "structure_reuse.indirect.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0(
#line 55 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_9,
#line 55 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_18,
#line 55 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_19,
#line 55 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_20,
#line 55 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_21,
#line 55 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__DepProcs_12,
#line 55 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Requests_13,
#line 55 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IntermodRequests_14)
#line 55 "structure_reuse.indirect.m"
{
#line 108 "structure_reuse.indirect.m"
  {
#line 108 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 108 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__MaybeDepInfo_15;
#line 108 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_22_22;

#line 113 "structure_reuse.indirect.m"
    {
#line 113 "structure_reuse.indirect.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 114 "structure_reuse.indirect.m"
    {
#line 114 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_22_22, &transform_hlds__ctgc__structure_reuse__indirect__MaybeDepInfo_15);
    }
#line 121 "structure_reuse.indirect.m"
    if ((transform_hlds__ctgc__structure_reuse__indirect__MaybeDepInfo_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 122 "structure_reuse.indirect.m"
      {
#line 123 "structure_reuse.indirect.m"
        {
#line 123 "structure_reuse.indirect.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.indirect_reuse_pass\'/8", (MR_String) "no dependency information");
#line 123 "structure_reuse.indirect.m"
          return;
        }
#line 122 "structure_reuse.indirect.m"
      }
#line 121 "structure_reuse.indirect.m"
    else
#line 116 "structure_reuse.indirect.m"
      {
#line 116 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_45_45;
#line 116 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_50_50;
#line 116 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__DepInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__MaybeDepInfo_15, (MR_Integer) 0)));
#line 116 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCCs_17;
#line 116 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 116 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 116 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 116 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 118 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19;
#line 118 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21;
#line 118 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_12;
#line 118 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_13;
#line 118 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv5_IntermodRequests_14;

#line 117 "structure_reuse.indirect.m"
        {
#line 117 "structure_reuse.indirect.m"
          hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__indirect__DepInfo_16, &transform_hlds__ctgc__structure_reuse__indirect__SCCs_17);
        }
#line 118 "structure_reuse.indirect.m"
        {
#line 118 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 118 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_26_26, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_3[0]));
#line 118 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_26_26, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0_1));
#line 118 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 118 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_26_26, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SharingTable_9));
#line 118 "structure_reuse.indirect.m"
        }
#line 119 "structure_reuse.indirect.m"
        {
#line 119 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0);
        }
#line 11923 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_45_45 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;
#line 119 "structure_reuse.indirect.m"
        {
#line 119 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = mercury__set__init_0_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_45_45);
        }
#line 120 "structure_reuse.indirect.m"
        {
#line 120 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = mercury__set__init_0_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_45_45);
        }
#line 11935 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_50_50 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
#line 118 "structure_reuse.indirect.m"
        {
#line 118 "structure_reuse.indirect.m"
          mercury__list__foldl5_12_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_50_50, transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_50_50, transform_hlds__ctgc__structure_reuse__indirect__V_26_26, transform_hlds__ctgc__structure_reuse__indirect__SCCs_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_22_22)), &transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_20)), &transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_29_29)), &transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_30_30)), &transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_31_31)), &transform_hlds__ctgc__structure_reuse__indirect__conv5_IntermodRequests_14);
        }
#line 118 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_19 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19);
#line 118 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_21 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21);
#line 118 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__DepProcs_12 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_12);
#line 118 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__Requests_13 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_13);
#line 118 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__IntermodRequests_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv5_IntermodRequests_14);
#line 116 "structure_reuse.indirect.m"
      }
#line 108 "structure_reuse.indirect.m"
  }
#line 55 "structure_reuse.indirect.m"
}

void mercury__transform_hlds__ctgc__structure_reuse__indirect__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__indirect__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_conditional_reuse_handling_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_dep_procs_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_fixpoint_table_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_verify_indirect_reuse_reason_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__indirect__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.structure_reuse.indirect. */
