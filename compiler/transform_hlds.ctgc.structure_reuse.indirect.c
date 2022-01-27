/*
** Automatically generated from `transform_hlds.ctgc.structure_reuse.indirect.m'
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


/* :- module transform_hlds.ctgc.structure_reuse.indirect. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__indirect__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.indirect.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
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
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
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



#line 197 "structure_reuse.indirect.m"
struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0_s {
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__ReuseVersionMap_7;
#line 197 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__LambdaHeadVar__1_14;
#line 197 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__cont;
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__cont_env_ptr;
#line 197 "structure_reuse.indirect.m"
  MR_bool transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__succeeded;
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__TypeCtorInfo_20_20;
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__TypeCtorInfo_21_21;
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__OrigPPId_9;
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_15_15;
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_22_22;
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_25_25;
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_26_26;
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_29_29;
#line 199 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__conv0_OrigPPId_9;
#line 200 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__conv2_V_22_22;
#line 200 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__conv1_LambdaHeadVar__1_14;
#line 197 "structure_reuse.indirect.m"
};

#line 197 "structure_reuse.indirect.m"
struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s {
#line 197 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__wrapper_arg_1;
#line 197 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont;
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont_env_ptr;
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__conv0_LambdaHeadVar__1_14;
#line 197 "structure_reuse.indirect.m"
};


#line 209 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

#line 212 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 215 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;

#line 218 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;

#line 221 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;

#line 224 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 227 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 230 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0;

#line 233 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1;

#line 236 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_value_ordered_conditional_reuse_handling_0[2];

#line 239 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_name_ordered_conditional_reuse_handling_0[2];

#line 242 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_conditional_reuse_handling_0[2];

#line 245 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;

#line 248 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 251 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 254 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;

#line 257 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;

#line 260 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_analysis_info_0_0[8];

#line 263 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_analysis_info_0_0[8];

#line 266 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0;

#line 269 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_analysis_info_0_0[1];

#line 272 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_analysis_info_0[1];

#line 275 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_analysis_info_0[1];

#line 278 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_analysis_info_0[1];

#line 281 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

#line 284 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 287 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_background_info_0_0[10];

#line 290 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_background_info_0_0[10];

#line 293 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0;

#line 296 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_background_info_0_0[1];

#line 299 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_background_info_0[1];

#line 302 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_background_info_0[1];

#line 305 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_background_info_0[1];

#line 308 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1builtin__type_ctor_info_int_0;

#line 311 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_sr_request_0_0[2];

#line 314 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_sr_request_0_0[2];

#line 317 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0;

#line 320 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_sr_request_0_0[1];

#line 323 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_sr_request_0[1];

#line 326 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_sr_request_0[1];

#line 329 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_sr_request_0[1];

#line 332 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0;

#line 335 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1;

#line 338 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2;

#line 341 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_verify_indirect_reuse_reason_0_3[1];

#line 344 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3;

#line 347 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4;

#line 350 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5;

#line 353 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_0[5];

#line 356 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_1[1];

#line 359 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_verify_indirect_reuse_reason_0[2];

#line 362 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_verify_indirect_reuse_reason_0[6];

#line 365 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_verify_indirect_reuse_reason_0[6];

#line 368 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0_10001(
#line 371 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 373 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 376 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0_10001(
#line 379 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 381 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 383 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 386 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0_10001(
#line 389 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 391 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 394 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0_10001(
#line 397 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 399 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 401 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 404 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0_10001(
#line 407 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 409 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 412 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0_10001(
#line 415 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 417 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 419 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 422 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0_10001(
#line 425 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 427 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 430 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0_10001(
#line 433 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 435 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 437 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 440 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0_10001(
#line 443 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 445 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 448 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0_10001(
#line 451 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 453 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 455 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 458 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0_10001(
#line 461 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 463 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 466 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0_10001(
#line 469 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 471 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 473 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 476 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0_10001(
#line 479 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 481 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 484 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0_10001(
#line 487 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 489 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 491 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 199 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_2(
#line 199 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg);

#line 200 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_4(
#line 200 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg);

#line 197 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_3(
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg);

#line 197 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_1(
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg);

#line 197 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0(
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_5,
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_7,
#line 197 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__LambdaHeadVar__1_14,
#line 197 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__cont,
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr);

#line 740 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0(
#line 740 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 740 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 740 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 740 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0(
#line 740 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 740 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 1112 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0(
#line 1112 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 1112 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 1112 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 1112 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0(
#line 1112 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 1112 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 341 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0(
#line 341 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 341 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 341 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 341 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0(
#line 341 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 341 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 358 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0(
#line 358 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 358 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 358 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 358 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0(
#line 358 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 358 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 109 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0(
#line 109 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 109 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 109 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 109 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0(
#line 109 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 109 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 736 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0(
#line 736 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 736 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 736 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3);

#line 736 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0(
#line 736 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_1,
#line 736 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 1180 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(
#line 1180 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_4,
#line 1180 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_5);

#line 1162 "structure_reuse.indirect.m"
static MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_f_0(
#line 1162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_4,
#line 1162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Table_5);

#line 1159 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_p_0(
#line 1159 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_5,
#line 1159 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6,
#line 1159 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_8,
#line 1159 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_9);

#line 1207 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0_1(
#line 1207 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1207 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 1207 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2);

#line 1146 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0(
#line 1146 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_7,
#line 1146 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_8,
#line 1146 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Id_9,
#line 1146 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_10,
#line 1146 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_12,
#line 1146 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_13);

#line 1129 "structure_reuse.indirect.m"
static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_f_0(
#line 1129 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Tin_3);

#line 1076 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__add_request_6_p_0(
#line 1076 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7,
#line 1076 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8,
#line 1076 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_9,
#line 1076 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IntraModule_10,
#line 1076 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20,
#line 1076 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_21);

#line 1062 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(
#line 1062 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__List_1,
#line 1062 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 1062 "structure_reuse.indirect.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__indirect__Index_3,
#line 1062 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__4_4);

#line 1015 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(
#line 1015 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 1015 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_9,
#line 1015 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_10,
#line 1015 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11,
#line 1015 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Reason_12);

#line 975 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(
#line 975 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 975 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__OrigPPId_9,
#line 975 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_10,
#line 975 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_11,
#line 975 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22,
#line 975 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_23,
#line 975 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_13);

#line 935 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0_1(
#line 935 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 935 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1);

#line 905 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0(
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9,
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10,
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11,
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_12,
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14,
#line 905 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_15,
#line 905 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16);

#line 816 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_p_0(
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25,
#line 816 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27,
#line 816 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28);

#line 748 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_14,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21,
#line 748 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_23,
#line 748 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24);

#line 709 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(
#line 709 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 709 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_7,
#line 709 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_8,
#line 709 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12,
#line 709 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13);

#line 696 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_p_0(
#line 696 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 696 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9,
#line 696 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Case0_10,
#line 696 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Case_11,
#line 696 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12,
#line 696 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_19,
#line 696 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_20);

#line 684 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_p_0(
#line 684 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 684 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9,
#line 684 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal0_10,
#line 684 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Goal_11,
#line 684 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12,
#line 684 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_15,
#line 684 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_16);

#line 639 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_p_0(
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GenDetails_9,
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallArgs_10,
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Modes_11,
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_12,
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34,
#line 639 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35);

#line 577 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_p_0(
#line 577 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 577 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_32,
#line 577 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_33,
#line 577 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34,
#line 577 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35);

#line 522 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_3(
#line 522 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 522 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 522 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 522 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 522 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 522 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5);

#line 513 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_2(
#line 513 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 513 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 513 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 513 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 513 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 513 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5);

#line 470 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_1(
#line 470 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 470 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 470 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 470 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 470 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4);

#line 459 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(
#line 459 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 459 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89,
#line 459 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90,
#line 459 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91,
#line 459 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);

#line 424 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(
#line 424 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5,
#line 424 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6,
#line 424 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17,
#line 424 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_18);

#line 420 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0_1(
#line 420 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 420 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 420 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 420 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 408 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(
#line 408 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 408 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_7,
#line 408 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8,
#line 408 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12,
#line 408 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13);

#line 394 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_f_0(
#line 394 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_7,
#line 394 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8,
#line 394 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__DepProcs_9,
#line 394 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Requests_10,
#line 394 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntermodRequests_11);

#line 372 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_f_0(
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8,
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_9,
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10,
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11,
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_12,
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_13);

#line 253 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_p_0(
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_16,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43,
#line 253 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_44,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_45,
#line 253 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_46,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_47,
#line 253 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_48,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_49,
#line 253 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_50,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_51,
#line 253 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_52);

#line 231 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_p_0(
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_16,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_28,
#line 231 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_29,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_30,
#line 231 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_31,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_32,
#line 231 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_33,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_34,
#line 231 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_35,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_36,
#line 231 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37);

#line 217 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0_1(
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 217 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 217 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 217 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 217 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 217 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11);

#line 206 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_15,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_16,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22,
#line 206 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_24,
#line 206 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_25,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26,
#line 206 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28,
#line 206 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30,
#line 206 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31);

#line 188 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_4(
#line 188 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 188 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 188 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 188 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 1193 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_3(
#line 1193 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1193 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1);

#line 197 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_1(
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg);

#line 197 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2(
#line 197 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 197 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 197 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__cont,
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr);

#line 168 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0(
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_14,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_23,
#line 168 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25,
#line 168 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_26,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_27,
#line 168 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_28,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_29,
#line 168 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_30,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_31,
#line 168 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_32);

#line 151 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(
#line 151 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_5,
#line 151 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_6,
#line 151 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_9,
#line 151 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_10);

#line 148 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_2(
#line 148 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 148 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 148 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 148 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3);

#line 1193 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_1(
#line 1193 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1193 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1);

#line 132 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0(
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_14,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22,
#line 132 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24,
#line 132 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_25,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26,
#line 132 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28,
#line 132 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30,
#line 132 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31);

#line 164 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0_1(
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 164 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 164 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 164 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 164 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 164 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11);

#line 124 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0_1(
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 124 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 124 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 124 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 124 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 124 "structure_reuse.indirect.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1583 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
  }
};

#line 1592 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1600 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0
  }
};

#line 1608 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0
  }
};

#line 1616 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0
  }
};

#line 1625 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1634 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1642 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0 = {
  (MR_String) "allow_conditional_reuse",
  (MR_Integer) 0
};

#line 1648 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1 = {
  (MR_String) "ignore_conditional_reuse",
  (MR_Integer) 1
};

#line 1654 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_value_ordered_conditional_reuse_handling_0[2] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1
};

#line 1660 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_name_ordered_conditional_reuse_handling_0[2] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1
};

#line 1666 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_conditional_reuse_handling_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1672 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1689 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0
  }
};

#line 1697 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1714 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1722 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1730 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0
  }
};

#line 1739 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0
  }
};

#line 1747 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1759 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1771 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1786 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_analysis_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0
};

#line 1791 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_analysis_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_analysis_info_0_0
  }
};

#line 1800 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_analysis_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0
};

#line 1805 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_analysis_info_0[1] = {
  (MR_Integer) 0
};

#line 1810 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1827 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
  }
};

#line 1836 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1844 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1858 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1872 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1887 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_background_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0
};

#line 1892 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_background_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_background_info_0_0
  }
};

#line 1901 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_background_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0
};

#line 1906 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_background_info_0[1] = {
  (MR_Integer) 0
};

#line 1911 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1928 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1945 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1953 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_sr_request_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1959 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_sr_request_0_0[2] = {
  (MR_String) "srreq_ppid",
  (MR_String) "srreq_args"
};

#line 1965 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 1980 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_sr_request_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0
};

#line 1985 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_sr_request_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_sr_request_0_0
  }
};

#line 1994 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_sr_request_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0
};

#line 1999 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_sr_request_0[1] = {
  (MR_Integer) 0
};

#line 2004 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 2021 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 2036 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 2051 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 2066 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_verify_indirect_reuse_reason_0_3[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2071 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 2086 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 2101 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 2116 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_0[5] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5
};

#line 2125 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3
};

#line 2130 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 2144 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_verify_indirect_reuse_reason_0[6] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3
};

#line 2154 "transform_hlds.ctgc.structure_reuse.indirect.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_verify_indirect_reuse_reason_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2164 "transform_hlds.ctgc.structure_reuse.indirect.c"
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

#line 2181 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0_10001(
#line 2184 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2186 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2188 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2190 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2192 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2195 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2197 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2200 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2202 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2204 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2207 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0_10001(
#line 2210 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2212 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2214 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2216 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2218 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2220 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2223 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2225 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2228 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2230 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2232 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2235 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0_10001(
#line 2238 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2240 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2242 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2244 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2246 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2249 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2251 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2254 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2256 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2258 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2261 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0_10001(
#line 2264 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2266 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2268 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2270 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2272 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2274 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2277 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2279 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2282 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2284 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2286 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2289 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0_10001(
#line 2292 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2294 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2296 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2298 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2300 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2303 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2305 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2308 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2310 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2312 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2315 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0_10001(
#line 2318 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2320 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2322 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2324 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2326 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2328 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2331 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2333 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2336 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2338 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2340 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2343 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0_10001(
#line 2346 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2348 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2350 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2352 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2354 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2357 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2359 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2362 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2364 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2366 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2369 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0_10001(
#line 2372 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2374 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2376 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2378 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2380 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2382 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2385 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2387 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2390 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2392 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2394 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2397 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0_10001(
#line 2400 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2402 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2404 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2406 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2408 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2411 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2413 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2416 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2418 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2420 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2423 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0_10001(
#line 2426 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2428 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2430 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2432 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2434 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2436 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2439 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2441 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2444 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2446 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2448 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2451 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0_10001(
#line 2454 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2456 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2458 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2460 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2462 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2465 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2467 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2470 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2472 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2474 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2477 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0_10001(
#line 2480 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2482 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2484 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2486 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2488 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2490 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2493 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2495 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2498 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2500 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2502 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2505 "transform_hlds.ctgc.structure_reuse.indirect.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0_10001(
#line 2508 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2510 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 2512 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2514 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2516 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 2519 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2521 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 2524 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 2526 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2528 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 2531 "transform_hlds.ctgc.structure_reuse.indirect.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0_10001(
#line 2534 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 2536 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 2538 "transform_hlds.ctgc.structure_reuse.indirect.c"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 2540 "transform_hlds.ctgc.structure_reuse.indirect.c"
{
#line 2542 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 2544 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1;

#line 2547 "transform_hlds.ctgc.structure_reuse.indirect.c"
    {
#line 2549 "transform_hlds.ctgc.structure_reuse.indirect.c"
      transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0(&transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3));
    }
#line 2552 "transform_hlds.ctgc.structure_reuse.indirect.c"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__1_1));
#line 2554 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 2556 "transform_hlds.ctgc.structure_reuse.indirect.c"
}

#line 199 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_2(
#line 199 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg)
#line 199 "structure_reuse.indirect.m"
{
#line 199 "structure_reuse.indirect.m"
  {
#line 199 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__indirect__env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg;

#line 199 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__OrigPPId_9 = ((MR_Word) (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__conv0_OrigPPId_9);
#line 199 "structure_reuse.indirect.m"
    {
#line 199 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_1(transform_hlds__ctgc__structure_reuse__indirect__env_ptr);
    }
#line 199 "structure_reuse.indirect.m"
  }
#line 199 "structure_reuse.indirect.m"
}

#line 200 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_4(
#line 200 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg)
#line 200 "structure_reuse.indirect.m"
{
#line 200 "structure_reuse.indirect.m"
  {
#line 200 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__indirect__env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg;

#line 200 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_22_22 = ((MR_Word) (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__conv2_V_22_22);
#line 200 "structure_reuse.indirect.m"
    *((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__LambdaHeadVar__1_14) = ((MR_Word) (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__conv1_LambdaHeadVar__1_14);
#line 200 "structure_reuse.indirect.m"
    {
#line 200 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_3(transform_hlds__ctgc__structure_reuse__indirect__env_ptr);
    }
#line 200 "structure_reuse.indirect.m"
  }
#line 200 "structure_reuse.indirect.m"
}

#line 197 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_3(
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg)
#line 197 "structure_reuse.indirect.m"
{
#line 197 "structure_reuse.indirect.m"
  {
#line 197 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__indirect__env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg;

#line 200 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_22_22, (MR_Integer) 0)));
#line 200 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_22_22, (MR_Integer) 1)));
#line 200 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_15_15, (MR_Integer) 0)));
#line 200 "structure_reuse.indirect.m"
    (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_15_15, (MR_Integer) 1)) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_26_26));
#line 200 "structure_reuse.indirect.m"
    {
#line 200 "structure_reuse.indirect.m"
      (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_25_25, (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_29_29);
    }
#line 200 "structure_reuse.indirect.m"
    if ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__succeeded)
#line 200 "structure_reuse.indirect.m"
      {
#line 200 "structure_reuse.indirect.m"
        ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__cont)((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__cont_env_ptr);
      }
#line 197 "structure_reuse.indirect.m"
  }
#line 197 "structure_reuse.indirect.m"
}

#line 197 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_1(
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg)
#line 197 "structure_reuse.indirect.m"
{
#line 197 "structure_reuse.indirect.m"
  {
#line 197 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__indirect__env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg;

#line 197 "structure_reuse.indirect.m"
    {
#line 200 "structure_reuse.indirect.m"
      MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_10_10;

#line 200 "structure_reuse.indirect.m"
      {
#line 200 "structure_reuse.indirect.m"
        MR_Word base;
#line 200 "structure_reuse.indirect.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 200 "structure_reuse.indirect.m"
        (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__V_15_15 = base;
#line 200 "structure_reuse.indirect.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__OrigPPId_9));
#line 200 "structure_reuse.indirect.m"
        MR_hl_field(MR_mktag(0), base, 1) = NULL;
#line 200 "structure_reuse.indirect.m"
      }
#line 2677 "transform_hlds.ctgc.structure_reuse.indirect.c"
      (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__TypeCtorInfo_21_21 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;
#line 200 "structure_reuse.indirect.m"
      {
#line 200 "structure_reuse.indirect.m"
        mercury__map__member_3_p_0((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__TypeCtorInfo_21_21, (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__TypeCtorInfo_20_20, (transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__ReuseVersionMap_7, &(transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__conv2_V_22_22, &(transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__conv1_LambdaHeadVar__1_14, transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_4, transform_hlds__ctgc__structure_reuse__indirect__env_ptr);
      }
#line 197 "structure_reuse.indirect.m"
    }
#line 197 "structure_reuse.indirect.m"
  }
#line 197 "structure_reuse.indirect.m"
}

#line 197 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0(
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_5,
#line 197 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_7,
#line 197 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__LambdaHeadVar__1_14,
#line 197 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__cont,
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr)
#line 197 "structure_reuse.indirect.m"
{
#line 197 "structure_reuse.indirect.m"
  {
#line 197 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0_s transform_hlds__ctgc__structure_reuse__indirect__env;

#line 197 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__ReuseVersionMap_7 = transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_7;
#line 197 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__LambdaHeadVar__1_14 = transform_hlds__ctgc__structure_reuse__indirect__LambdaHeadVar__1_14;
#line 197 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__cont = transform_hlds__ctgc__structure_reuse__indirect__cont;
#line 197 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__cont_env_ptr = transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr;
#line 2719 "transform_hlds.ctgc.structure_reuse.indirect.c"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 199 "structure_reuse.indirect.m"
    {
#line 199 "structure_reuse.indirect.m"
      mercury__list__member_2_p_1((transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__TypeCtorInfo_20_20, &(transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_env_0__conv0_OrigPPId_9, transform_hlds__ctgc__structure_reuse__indirect__SCC_5, transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0_2, &transform_hlds__ctgc__structure_reuse__indirect__env);
    }
#line 197 "structure_reuse.indirect.m"
  }
#line 197 "structure_reuse.indirect.m"
}

#line 740 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0(
#line 740 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 740 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 740 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 740 "structure_reuse.indirect.m"
{
#line 740 "structure_reuse.indirect.m"
  {
#line 740 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 740 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_16 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 740 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_17 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 740 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_16 == transform_hlds__ctgc__structure_reuse__indirect__CastY_17);
#line 740 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 2755 "transform_hlds.ctgc.structure_reuse.indirect.c"
      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 740 "structure_reuse.indirect.m"
    else
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)) {
#line 740 "structure_reuse.indirect.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
        case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)) {
#line 740 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 1:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 2:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 3:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 4:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                  }
#line 740 "structure_reuse.indirect.m"
                  break;
#line 740 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 2821 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                  break;
#line 740 "structure_reuse.indirect.m"
              }
#line 740 "structure_reuse.indirect.m"
              break;
#line 740 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 1:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 2:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 3:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 4:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                  }
#line 740 "structure_reuse.indirect.m"
                  break;
#line 740 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 2879 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                  break;
#line 740 "structure_reuse.indirect.m"
              }
#line 740 "structure_reuse.indirect.m"
              break;
#line 740 "structure_reuse.indirect.m"
            case (MR_Integer) 2:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 1:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 2:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 3:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 4:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                  }
#line 740 "structure_reuse.indirect.m"
                  break;
#line 740 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 2937 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                  break;
#line 740 "structure_reuse.indirect.m"
              }
#line 740 "structure_reuse.indirect.m"
              break;
#line 740 "structure_reuse.indirect.m"
            case (MR_Integer) 3:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 1:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 2:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 3:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 4:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                  }
#line 740 "structure_reuse.indirect.m"
                  break;
#line 740 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 2995 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                  break;
#line 740 "structure_reuse.indirect.m"
              }
#line 740 "structure_reuse.indirect.m"
              break;
#line 740 "structure_reuse.indirect.m"
            case (MR_Integer) 4:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 1:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 2:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 3:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                    case (MR_Integer) 4:
#line 740 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 740 "structure_reuse.indirect.m"
                      break;
#line 740 "structure_reuse.indirect.m"
                  }
#line 740 "structure_reuse.indirect.m"
                  break;
#line 740 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 3053 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                  break;
#line 740 "structure_reuse.indirect.m"
              }
#line 740 "structure_reuse.indirect.m"
              break;
#line 740 "structure_reuse.indirect.m"
          }
#line 740 "structure_reuse.indirect.m"
          break;
#line 740 "structure_reuse.indirect.m"
        case (MR_Integer) 1:
#line 740 "structure_reuse.indirect.m"
          {
#line 740 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));

#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
            switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
              case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
                switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)) {
#line 740 "structure_reuse.indirect.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
                  case (MR_Integer) 0:
#line 3086 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                    break;
#line 740 "structure_reuse.indirect.m"
                  case (MR_Integer) 1:
#line 3092 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                    break;
#line 740 "structure_reuse.indirect.m"
                  case (MR_Integer) 2:
#line 3098 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "structure_reuse.indirect.m"
                    break;
#line 740 "structure_reuse.indirect.m"
                  case (MR_Integer) 3:
#line 3104 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                    break;
#line 740 "structure_reuse.indirect.m"
                  case (MR_Integer) 4:
#line 3110 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "structure_reuse.indirect.m"
                    break;
#line 740 "structure_reuse.indirect.m"
                }
#line 740 "structure_reuse.indirect.m"
                break;
#line 740 "structure_reuse.indirect.m"
              case (MR_Integer) 1:
#line 740 "structure_reuse.indirect.m"
                {
#line 740 "structure_reuse.indirect.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 0)));

#line 740 "structure_reuse.indirect.m"
                  {
#line 740 "structure_reuse.indirect.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6], transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_19_19)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_11_11)));
                  }
#line 740 "structure_reuse.indirect.m"
                }
#line 740 "structure_reuse.indirect.m"
                break;
#line 740 "structure_reuse.indirect.m"
            }
#line 740 "structure_reuse.indirect.m"
          }
#line 740 "structure_reuse.indirect.m"
          break;
#line 740 "structure_reuse.indirect.m"
      }
#line 740 "structure_reuse.indirect.m"
  }
#line 740 "structure_reuse.indirect.m"
}

#line 740 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0(
#line 740 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 740 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 740 "structure_reuse.indirect.m"
{
#line 740 "structure_reuse.indirect.m"
  {
#line 740 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 740 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_15 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 740 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_16 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 740 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_15 == transform_hlds__ctgc__structure_reuse__indirect__CastY_16);
#line 740 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 740 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 740 "structure_reuse.indirect.m"
    else
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1)) {
#line 740 "structure_reuse.indirect.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
        case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
#line 740 "structure_reuse.indirect.m"
          switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1)) {
#line 740 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 740 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 740 "structure_reuse.indirect.m"
              {
#line 740 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_3 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 740 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 740 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastY_4 == transform_hlds__ctgc__structure_reuse__indirect__CastX_3);
#line 740 "structure_reuse.indirect.m"
              }
#line 740 "structure_reuse.indirect.m"
              break;
#line 740 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 740 "structure_reuse.indirect.m"
              {
#line 740 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_5 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 740 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_6 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 740 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastY_6 == transform_hlds__ctgc__structure_reuse__indirect__CastX_5);
#line 740 "structure_reuse.indirect.m"
              }
#line 740 "structure_reuse.indirect.m"
              break;
#line 740 "structure_reuse.indirect.m"
            case (MR_Integer) 2:
#line 740 "structure_reuse.indirect.m"
              {
#line 740 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 740 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 740 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastY_8 == transform_hlds__ctgc__structure_reuse__indirect__CastX_7);
#line 740 "structure_reuse.indirect.m"
              }
#line 740 "structure_reuse.indirect.m"
              break;
#line 740 "structure_reuse.indirect.m"
            case (MR_Integer) 3:
#line 740 "structure_reuse.indirect.m"
              {
#line 740 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 740 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 740 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastY_12 == transform_hlds__ctgc__structure_reuse__indirect__CastX_11);
#line 740 "structure_reuse.indirect.m"
              }
#line 740 "structure_reuse.indirect.m"
              break;
#line 740 "structure_reuse.indirect.m"
            case (MR_Integer) 4:
#line 740 "structure_reuse.indirect.m"
              {
#line 740 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_13 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 740 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_14 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 740 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastY_14 == transform_hlds__ctgc__structure_reuse__indirect__CastX_13);
#line 740 "structure_reuse.indirect.m"
              }
#line 740 "structure_reuse.indirect.m"
              break;
#line 740 "structure_reuse.indirect.m"
          }
#line 740 "structure_reuse.indirect.m"
          break;
#line 740 "structure_reuse.indirect.m"
        case (MR_Integer) 1:
#line 740 "structure_reuse.indirect.m"
          {
#line 740 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_17_17;
#line 740 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 0)));
#line 740 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_10_10;

#line 740 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 740 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 740 "structure_reuse.indirect.m"
              {
#line 740 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 3283 "transform_hlds.ctgc.structure_reuse.indirect.c"
                transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_17_17 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6];
#line 3285 "transform_hlds.ctgc.structure_reuse.indirect.c"
                {
#line 3287 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_17_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_9_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_10_10)));
                }
#line 740 "structure_reuse.indirect.m"
              }
#line 740 "structure_reuse.indirect.m"
          }
#line 740 "structure_reuse.indirect.m"
          break;
#line 740 "structure_reuse.indirect.m"
      }
#line 740 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 740 "structure_reuse.indirect.m"
  }
#line 740 "structure_reuse.indirect.m"
}

#line 33 "structure_reuse.indirect.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0(
#line 33 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 33 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 33 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 33 "structure_reuse.indirect.m"
{
#line 33 "structure_reuse.indirect.m"
  {
#line 33 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 33 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 33 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 33 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_9 == transform_hlds__ctgc__structure_reuse__indirect__CastY_10);
#line 33 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 3329 "transform_hlds.ctgc.structure_reuse.indirect.c"
      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 33 "structure_reuse.indirect.m"
    else
#line 33 "structure_reuse.indirect.m"
      {
#line 33 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 33 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 33 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 0)));
#line 33 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 1)));
#line 33 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8;

#line 33 "structure_reuse.indirect.m"
        {
#line 33 "structure_reuse.indirect.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_8_8, transform_hlds__ctgc__structure_reuse__indirect__V_4_4, transform_hlds__ctgc__structure_reuse__indirect__V_6_6);
        }
#line 3351 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_8_8 == (MR_Integer) 0);
#line 33 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 33 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 33 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_8_8;
#line 33 "structure_reuse.indirect.m"
        else
#line 33 "structure_reuse.indirect.m"
          {
#line 33 "structure_reuse.indirect.m"
            {
#line 33 "structure_reuse.indirect.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4], transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_7_7)));
            }
#line 33 "structure_reuse.indirect.m"
          }
#line 33 "structure_reuse.indirect.m"
      }
#line 33 "structure_reuse.indirect.m"
  }
#line 33 "structure_reuse.indirect.m"
}

#line 33 "structure_reuse.indirect.m"
MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0(
#line 33 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 33 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 33 "structure_reuse.indirect.m"
{
#line 33 "structure_reuse.indirect.m"
  {
#line 33 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 33 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 33 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 33 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_7 == transform_hlds__ctgc__structure_reuse__indirect__CastY_8);
#line 33 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 33 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 33 "structure_reuse.indirect.m"
    else
#line 33 "structure_reuse.indirect.m"
      {
#line 33 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_10_10;
#line 33 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 0)));
#line 33 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 1)));
#line 33 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 33 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));

#line 3416 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 3418 "transform_hlds.ctgc.structure_reuse.indirect.c"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_3_3, transform_hlds__ctgc__structure_reuse__indirect__V_5_5);
        }
#line 33 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 33 "structure_reuse.indirect.m"
          {
#line 3425 "transform_hlds.ctgc.structure_reuse.indirect.c"
            transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_10_10 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4];
#line 3427 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 3429 "transform_hlds.ctgc.structure_reuse.indirect.c"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_10_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_6_6)));
            }
#line 33 "structure_reuse.indirect.m"
          }
#line 33 "structure_reuse.indirect.m"
      }
#line 33 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 33 "structure_reuse.indirect.m"
  }
#line 33 "structure_reuse.indirect.m"
}

#line 1112 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0(
#line 1112 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 1112 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 1112 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 1112 "structure_reuse.indirect.m"
{
#line 1112 "structure_reuse.indirect.m"
  {
#line 1112 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1112 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 1112 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 1112 "structure_reuse.indirect.m"
    {
#line 1112 "structure_reuse.indirect.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5)));
    }
#line 1112 "structure_reuse.indirect.m"
  }
#line 1112 "structure_reuse.indirect.m"
}

#line 1112 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0(
#line 1112 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 1112 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 1112 "structure_reuse.indirect.m"
{
#line 1112 "structure_reuse.indirect.m"
  {
#line 1112 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1112 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 1112 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 1112 "structure_reuse.indirect.m"
    {
#line 1112 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_4)));
    }
#line 1112 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1112 "structure_reuse.indirect.m"
  }
#line 1112 "structure_reuse.indirect.m"
}

#line 341 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0(
#line 341 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 341 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 341 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 341 "structure_reuse.indirect.m"
{
#line 341 "structure_reuse.indirect.m"
  {
#line 341 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 341 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_33 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 341 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_34 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 341 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_33 == transform_hlds__ctgc__structure_reuse__indirect__CastY_34);
#line 341 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 3527 "transform_hlds.ctgc.structure_reuse.indirect.c"
      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 341 "structure_reuse.indirect.m"
    else
#line 341 "structure_reuse.indirect.m"
      {
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 2)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 3)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 4)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 5)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 6)));
#line 341 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 7)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 8)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 9)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 0)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 1)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 2)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 3)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 4)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 5)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 6)));
#line 341 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 7)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 8)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 9)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24;

#line 341 "structure_reuse.indirect.m"
        {
#line 341 "structure_reuse.indirect.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_24_24, transform_hlds__ctgc__structure_reuse__indirect__V_4_4, transform_hlds__ctgc__structure_reuse__indirect__V_14_14);
        }
#line 3581 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_24_24 == (MR_Integer) 0);
#line 341 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 341 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_24_24;
#line 341 "structure_reuse.indirect.m"
        else
#line 341 "structure_reuse.indirect.m"
          {
#line 341 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25;

#line 341 "structure_reuse.indirect.m"
            {
#line 341 "structure_reuse.indirect.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_25_25, transform_hlds__ctgc__structure_reuse__indirect__V_5_5, transform_hlds__ctgc__structure_reuse__indirect__V_15_15);
            }
#line 3601 "transform_hlds.ctgc.structure_reuse.indirect.c"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_25_25 == (MR_Integer) 0);
#line 341 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 341 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_25_25;
#line 341 "structure_reuse.indirect.m"
            else
#line 341 "structure_reuse.indirect.m"
              {
#line 341 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;

#line 341 "structure_reuse.indirect.m"
                {
#line 341 "structure_reuse.indirect.m"
                  hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_26_26, transform_hlds__ctgc__structure_reuse__indirect__V_6_6, transform_hlds__ctgc__structure_reuse__indirect__V_16_16);
                }
#line 3621 "transform_hlds.ctgc.structure_reuse.indirect.c"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_26_26 == (MR_Integer) 0);
#line 341 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 341 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 341 "structure_reuse.indirect.m"
                else
#line 341 "structure_reuse.indirect.m"
                  {
#line 341 "structure_reuse.indirect.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_27_27;

#line 341 "structure_reuse.indirect.m"
                    {
#line 341 "structure_reuse.indirect.m"
                      hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_27_27, transform_hlds__ctgc__structure_reuse__indirect__V_7_7, transform_hlds__ctgc__structure_reuse__indirect__V_17_17);
                    }
#line 3641 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_27_27 == (MR_Integer) 0);
#line 341 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 341 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_27_27;
#line 341 "structure_reuse.indirect.m"
                    else
#line 341 "structure_reuse.indirect.m"
                      {
#line 341 "structure_reuse.indirect.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;

#line 341 "structure_reuse.indirect.m"
                        {
#line 341 "structure_reuse.indirect.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[1], &transform_hlds__ctgc__structure_reuse__indirect__V_28_28, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_8_8)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_18_18)));
                        }
#line 3661 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_28_28 == (MR_Integer) 0);
#line 341 "structure_reuse.indirect.m"
                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 341 "structure_reuse.indirect.m"
                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 341 "structure_reuse.indirect.m"
                        else
#line 341 "structure_reuse.indirect.m"
                          {
#line 341 "structure_reuse.indirect.m"
                            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;

#line 341 "structure_reuse.indirect.m"
                            {
#line 341 "structure_reuse.indirect.m"
                              transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_29_29, transform_hlds__ctgc__structure_reuse__indirect__V_9_9, transform_hlds__ctgc__structure_reuse__indirect__V_19_19);
                            }
#line 3681 "transform_hlds.ctgc.structure_reuse.indirect.c"
                            transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_29_29 == (MR_Integer) 0);
#line 341 "structure_reuse.indirect.m"
                            transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 341 "structure_reuse.indirect.m"
                            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                              *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 341 "structure_reuse.indirect.m"
                            else
#line 341 "structure_reuse.indirect.m"
                              {
#line 341 "structure_reuse.indirect.m"
                                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;

#line 341 "structure_reuse.indirect.m"
                                {
#line 341 "structure_reuse.indirect.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6], &transform_hlds__ctgc__structure_reuse__indirect__V_30_30, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_10_10)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_20_20)));
                                }
#line 3701 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_30_30 == (MR_Integer) 0);
#line 341 "structure_reuse.indirect.m"
                                transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 341 "structure_reuse.indirect.m"
                                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 341 "structure_reuse.indirect.m"
                                else
#line 341 "structure_reuse.indirect.m"
                                  {
#line 341 "structure_reuse.indirect.m"
                                    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;

#line 341 "structure_reuse.indirect.m"
                                    {
#line 341 "structure_reuse.indirect.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__structure_reuse__indirect__V_31_31, transform_hlds__ctgc__structure_reuse__indirect__V_11_11, transform_hlds__ctgc__structure_reuse__indirect__V_21_21);
                                    }
#line 3721 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_31_31 == (MR_Integer) 0);
#line 341 "structure_reuse.indirect.m"
                                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 341 "structure_reuse.indirect.m"
                                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 341 "structure_reuse.indirect.m"
                                    else
#line 341 "structure_reuse.indirect.m"
                                      {
#line 341 "structure_reuse.indirect.m"
                                        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 341 "structure_reuse.indirect.m"
                                        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_12_12;
#line 341 "structure_reuse.indirect.m"
                                        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_22_22;

#line 341 "structure_reuse.indirect.m"
                                        {
#line 341 "structure_reuse.indirect.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__structure_reuse__indirect__V_32_32, transform_hlds__ctgc__structure_reuse__indirect__V_45_45, transform_hlds__ctgc__structure_reuse__indirect__V_46_46);
                                        }
#line 3745 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_32_32 == (MR_Integer) 0);
#line 341 "structure_reuse.indirect.m"
                                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 341 "structure_reuse.indirect.m"
                                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                                          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 341 "structure_reuse.indirect.m"
                                        else
#line 341 "structure_reuse.indirect.m"
                                          {
#line 341 "structure_reuse.indirect.m"
                                            MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_13_13;
#line 341 "structure_reuse.indirect.m"
                                            MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_23_23;

#line 341 "structure_reuse.indirect.m"
                                            {
#line 341 "structure_reuse.indirect.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__indirect__V_47_47, transform_hlds__ctgc__structure_reuse__indirect__V_48_48);
                                            }
#line 341 "structure_reuse.indirect.m"
                                          }
#line 341 "structure_reuse.indirect.m"
                                      }
#line 341 "structure_reuse.indirect.m"
                                  }
#line 341 "structure_reuse.indirect.m"
                              }
#line 341 "structure_reuse.indirect.m"
                          }
#line 341 "structure_reuse.indirect.m"
                      }
#line 341 "structure_reuse.indirect.m"
                  }
#line 341 "structure_reuse.indirect.m"
              }
#line 341 "structure_reuse.indirect.m"
          }
#line 341 "structure_reuse.indirect.m"
      }
#line 341 "structure_reuse.indirect.m"
  }
#line 341 "structure_reuse.indirect.m"
}

#line 341 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0(
#line 341 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 341 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 341 "structure_reuse.indirect.m"
{
#line 341 "structure_reuse.indirect.m"
  {
#line 341 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 341 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_23 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 341 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_24 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 341 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_23 == transform_hlds__ctgc__structure_reuse__indirect__CastY_24);
#line 341 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 341 "structure_reuse.indirect.m"
    else
#line 341 "structure_reuse.indirect.m"
      {
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_29_29;
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_31_31;
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 0)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 1)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 2)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 3)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 4)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 5)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 6)));
#line 341 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 7)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 8)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 9)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 2)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 3)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 4)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 5)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 6)));
#line 341 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 7)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 8)));
#line 341 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 9)));

#line 3865 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 3867 "transform_hlds.ctgc.structure_reuse.indirect.c"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_3_3, transform_hlds__ctgc__structure_reuse__indirect__V_13_13);
        }
#line 341 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
          {
#line 3874 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 3876 "transform_hlds.ctgc.structure_reuse.indirect.c"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_4_4, transform_hlds__ctgc__structure_reuse__indirect__V_14_14);
            }
#line 341 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
              {
#line 3883 "transform_hlds.ctgc.structure_reuse.indirect.c"
                {
#line 3885 "transform_hlds.ctgc.structure_reuse.indirect.c"
                  transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_5_5, transform_hlds__ctgc__structure_reuse__indirect__V_15_15);
                }
#line 341 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                  {
#line 3892 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    {
#line 3894 "transform_hlds.ctgc.structure_reuse.indirect.c"
                      transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_6_6, transform_hlds__ctgc__structure_reuse__indirect__V_16_16);
                    }
#line 341 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                      {
#line 3901 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_29_29 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[1];
#line 3903 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        {
#line 3905 "transform_hlds.ctgc.structure_reuse.indirect.c"
                          transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_29_29, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_17_17)));
                        }
#line 341 "structure_reuse.indirect.m"
                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                          {
#line 3912 "transform_hlds.ctgc.structure_reuse.indirect.c"
                            {
#line 3914 "transform_hlds.ctgc.structure_reuse.indirect.c"
                              transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_8_8, transform_hlds__ctgc__structure_reuse__indirect__V_18_18);
                            }
#line 341 "structure_reuse.indirect.m"
                            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                              {
#line 3921 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_31_31 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6];
#line 3923 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                {
#line 3925 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                  transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_31_31, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_9_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_19_19)));
                                }
#line 341 "structure_reuse.indirect.m"
                                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                                  {
#line 3932 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_10_10 == transform_hlds__ctgc__structure_reuse__indirect__V_20_20);
#line 341 "structure_reuse.indirect.m"
                                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 341 "structure_reuse.indirect.m"
                                      {
#line 3938 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_11_11 == transform_hlds__ctgc__structure_reuse__indirect__V_21_21);
#line 341 "structure_reuse.indirect.m"
                                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 3942 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                          transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_12_12 == transform_hlds__ctgc__structure_reuse__indirect__V_22_22);
#line 341 "structure_reuse.indirect.m"
                                      }
#line 341 "structure_reuse.indirect.m"
                                  }
#line 341 "structure_reuse.indirect.m"
                              }
#line 341 "structure_reuse.indirect.m"
                          }
#line 341 "structure_reuse.indirect.m"
                      }
#line 341 "structure_reuse.indirect.m"
                  }
#line 341 "structure_reuse.indirect.m"
              }
#line 341 "structure_reuse.indirect.m"
          }
#line 341 "structure_reuse.indirect.m"
      }
#line 341 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 341 "structure_reuse.indirect.m"
  }
#line 341 "structure_reuse.indirect.m"
}

#line 358 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0(
#line 358 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 358 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 358 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 358 "structure_reuse.indirect.m"
{
#line 358 "structure_reuse.indirect.m"
  {
#line 358 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 358 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_27 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 358 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_28 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 358 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_27 == transform_hlds__ctgc__structure_reuse__indirect__CastY_28);
#line 358 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 3993 "transform_hlds.ctgc.structure_reuse.indirect.c"
      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = (MR_Integer) 0;
#line 358 "structure_reuse.indirect.m"
    else
#line 358 "structure_reuse.indirect.m"
      {
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 2)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 3)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 4)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 5)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 6)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 7)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 0)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 1)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 2)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 3)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 4)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 5)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 6)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3, (MR_Integer) 7)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20;

#line 358 "structure_reuse.indirect.m"
        {
#line 358 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_20_20, transform_hlds__ctgc__structure_reuse__indirect__V_4_4, transform_hlds__ctgc__structure_reuse__indirect__V_12_12);
        }
#line 4039 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_20_20 == (MR_Integer) 0);
#line 358 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 358 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_20_20;
#line 358 "structure_reuse.indirect.m"
        else
#line 358 "structure_reuse.indirect.m"
          {
#line 358 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21;

#line 358 "structure_reuse.indirect.m"
            {
#line 358 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(&transform_hlds__ctgc__structure_reuse__indirect__V_21_21, transform_hlds__ctgc__structure_reuse__indirect__V_5_5, transform_hlds__ctgc__structure_reuse__indirect__V_13_13);
            }
#line 4059 "transform_hlds.ctgc.structure_reuse.indirect.c"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_21_21 == (MR_Integer) 0);
#line 358 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 358 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_21_21;
#line 358 "structure_reuse.indirect.m"
            else
#line 358 "structure_reuse.indirect.m"
              {
#line 358 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22;
#line 358 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_6_6;
#line 358 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__V_14_14;

#line 358 "structure_reuse.indirect.m"
                {
#line 358 "structure_reuse.indirect.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__structure_reuse__indirect__V_22_22, transform_hlds__ctgc__structure_reuse__indirect__V_37_37, transform_hlds__ctgc__structure_reuse__indirect__V_38_38);
                }
#line 4083 "transform_hlds.ctgc.structure_reuse.indirect.c"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_22_22 == (MR_Integer) 0);
#line 358 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 358 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_22_22;
#line 358 "structure_reuse.indirect.m"
                else
#line 358 "structure_reuse.indirect.m"
                  {
#line 358 "structure_reuse.indirect.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23;

#line 358 "structure_reuse.indirect.m"
                    {
#line 358 "structure_reuse.indirect.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[5], &transform_hlds__ctgc__structure_reuse__indirect__V_23_23, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_15_15)));
                    }
#line 4103 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_23_23 == (MR_Integer) 0);
#line 358 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 358 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
                      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_23_23;
#line 358 "structure_reuse.indirect.m"
                    else
#line 358 "structure_reuse.indirect.m"
                      {
#line 358 "structure_reuse.indirect.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24;

#line 358 "structure_reuse.indirect.m"
                        {
#line 358 "structure_reuse.indirect.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], &transform_hlds__ctgc__structure_reuse__indirect__V_24_24, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_8_8)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_16_16)));
                        }
#line 4123 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_24_24 == (MR_Integer) 0);
#line 358 "structure_reuse.indirect.m"
                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 358 "structure_reuse.indirect.m"
                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
                          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_24_24;
#line 358 "structure_reuse.indirect.m"
                        else
#line 358 "structure_reuse.indirect.m"
                          {
#line 358 "structure_reuse.indirect.m"
                            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25;

#line 358 "structure_reuse.indirect.m"
                            {
#line 358 "structure_reuse.indirect.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], &transform_hlds__ctgc__structure_reuse__indirect__V_25_25, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_9_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_17_17)));
                            }
#line 4143 "transform_hlds.ctgc.structure_reuse.indirect.c"
                            transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_25_25 == (MR_Integer) 0);
#line 358 "structure_reuse.indirect.m"
                            transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 358 "structure_reuse.indirect.m"
                            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
                              *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_25_25;
#line 358 "structure_reuse.indirect.m"
                            else
#line 358 "structure_reuse.indirect.m"
                              {
#line 358 "structure_reuse.indirect.m"
                                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;

#line 358 "structure_reuse.indirect.m"
                                {
#line 358 "structure_reuse.indirect.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2], &transform_hlds__ctgc__structure_reuse__indirect__V_26_26, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_10_10)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_18_18)));
                                }
#line 4163 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_26_26 == (MR_Integer) 0);
#line 358 "structure_reuse.indirect.m"
                                transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 358 "structure_reuse.indirect.m"
                                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
                                  *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 358 "structure_reuse.indirect.m"
                                else
#line 358 "structure_reuse.indirect.m"
                                  {
#line 358 "structure_reuse.indirect.m"
                                    {
#line 358 "structure_reuse.indirect.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2], transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_11_11)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_19_19)));
                                    }
#line 358 "structure_reuse.indirect.m"
                                  }
#line 358 "structure_reuse.indirect.m"
                              }
#line 358 "structure_reuse.indirect.m"
                          }
#line 358 "structure_reuse.indirect.m"
                      }
#line 358 "structure_reuse.indirect.m"
                  }
#line 358 "structure_reuse.indirect.m"
              }
#line 358 "structure_reuse.indirect.m"
          }
#line 358 "structure_reuse.indirect.m"
      }
#line 358 "structure_reuse.indirect.m"
  }
#line 358 "structure_reuse.indirect.m"
}

#line 358 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0(
#line 358 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 358 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 358 "structure_reuse.indirect.m"
{
#line 358 "structure_reuse.indirect.m"
  {
#line 358 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 358 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastX_19 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 358 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CastY_20 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 358 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__CastX_19 == transform_hlds__ctgc__structure_reuse__indirect__CastY_20);
#line 358 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 358 "structure_reuse.indirect.m"
    else
#line 358 "structure_reuse.indirect.m"
      {
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_23_23;
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_24_24;
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_25_25;
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_26_26;
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_27_27;
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 0)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 1)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 2)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 3)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 4)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 5)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 6)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, (MR_Integer) 7)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 2)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 3)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 4)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 5)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 6)));
#line 358 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 7)));

#line 4272 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 4274 "transform_hlds.ctgc.structure_reuse.indirect.c"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_3_3, transform_hlds__ctgc__structure_reuse__indirect__V_11_11);
        }
#line 358 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
          {
#line 4281 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 4283 "transform_hlds.ctgc.structure_reuse.indirect.c"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(transform_hlds__ctgc__structure_reuse__indirect__V_4_4, transform_hlds__ctgc__structure_reuse__indirect__V_12_12);
            }
#line 358 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
              {
#line 4290 "transform_hlds.ctgc.structure_reuse.indirect.c"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_5_5 == transform_hlds__ctgc__structure_reuse__indirect__V_13_13);
#line 358 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
                  {
#line 4296 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_23_23 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[5];
#line 4298 "transform_hlds.ctgc.structure_reuse.indirect.c"
                    {
#line 4300 "transform_hlds.ctgc.structure_reuse.indirect.c"
                      transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_23_23, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_6_6)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_14_14)));
                    }
#line 358 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
                      {
#line 4307 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_24_24 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0];
#line 4309 "transform_hlds.ctgc.structure_reuse.indirect.c"
                        {
#line 4311 "transform_hlds.ctgc.structure_reuse.indirect.c"
                          transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_24_24, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_15_15)));
                        }
#line 358 "structure_reuse.indirect.m"
                        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
                          {
#line 4318 "transform_hlds.ctgc.structure_reuse.indirect.c"
                            transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_25_25 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1];
#line 4320 "transform_hlds.ctgc.structure_reuse.indirect.c"
                            {
#line 4322 "transform_hlds.ctgc.structure_reuse.indirect.c"
                              transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_25_25, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_8_8)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_16_16)));
                            }
#line 358 "structure_reuse.indirect.m"
                            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
                              {
#line 4329 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_26_26 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
#line 4331 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                {
#line 4333 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                  transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_26_26, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_9_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_17_17)));
                                }
#line 358 "structure_reuse.indirect.m"
                                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 358 "structure_reuse.indirect.m"
                                  {
#line 4340 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                    transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_27_27 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
#line 4342 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                    {
#line 4344 "transform_hlds.ctgc.structure_reuse.indirect.c"
                                      transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_27_27, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_10_10)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_18_18)));
                                    }
#line 358 "structure_reuse.indirect.m"
                                  }
#line 358 "structure_reuse.indirect.m"
                              }
#line 358 "structure_reuse.indirect.m"
                          }
#line 358 "structure_reuse.indirect.m"
                      }
#line 358 "structure_reuse.indirect.m"
                  }
#line 358 "structure_reuse.indirect.m"
              }
#line 358 "structure_reuse.indirect.m"
          }
#line 358 "structure_reuse.indirect.m"
      }
#line 358 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 358 "structure_reuse.indirect.m"
  }
#line 358 "structure_reuse.indirect.m"
}

#line 109 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0(
#line 109 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 109 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 109 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 109 "structure_reuse.indirect.m"
{
#line 109 "structure_reuse.indirect.m"
  {
#line 109 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 109 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 109 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 109 "structure_reuse.indirect.m"
    {
#line 109 "structure_reuse.indirect.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5)));
    }
#line 109 "structure_reuse.indirect.m"
  }
#line 109 "structure_reuse.indirect.m"
}

#line 109 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0(
#line 109 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 109 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 109 "structure_reuse.indirect.m"
{
#line 109 "structure_reuse.indirect.m"
  {
#line 109 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 109 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1;
#line 109 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 109 "structure_reuse.indirect.m"
    {
#line 109 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_4)));
    }
#line 109 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 109 "structure_reuse.indirect.m"
  }
#line 109 "structure_reuse.indirect.m"
}

#line 736 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0(
#line 736 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1,
#line 736 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 736 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3)
#line 736 "structure_reuse.indirect.m"
{
#line 736 "structure_reuse.indirect.m"
  {
#line 736 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 736 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 736 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__ctgc__structure_reuse__indirect__HeadVar__3_3;

#line 736 "structure_reuse.indirect.m"
    {
#line 736 "structure_reuse.indirect.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar1_4, transform_hlds__ctgc__structure_reuse__indirect__Cast_HeadVar2_5);
    }
#line 736 "structure_reuse.indirect.m"
  }
#line 736 "structure_reuse.indirect.m"
}

#line 736 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0(
#line 736 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_1,
#line 736 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2)
#line 736 "structure_reuse.indirect.m"
{
#line 4469 "transform_hlds.ctgc.structure_reuse.indirect.c"
  {
#line 4471 "transform_hlds.ctgc.structure_reuse.indirect.c"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_1 == transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2);

#line 4474 "transform_hlds.ctgc.structure_reuse.indirect.c"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 4476 "transform_hlds.ctgc.structure_reuse.indirect.c"
  }
#line 736 "structure_reuse.indirect.m"
}

#line 1180 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(
#line 1180 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_4,
#line 1180 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_5)
#line 1180 "structure_reuse.indirect.m"
{
#line 1185 "structure_reuse.indirect.m"
  {
#line 1185 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1185 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6;
#line 1185 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs0_7;

#line 1183 "structure_reuse.indirect.m"
    {
#line 1183 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_4, transform_hlds__ctgc__structure_reuse__indirect__PPId_5, &transform_hlds__ctgc__structure_reuse__indirect__ReuseAs0_7);
    }
#line 1185 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1184 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6 = transform_hlds__ctgc__structure_reuse__indirect__ReuseAs0_7;
#line 1185 "structure_reuse.indirect.m"
    else
#line 1189 "structure_reuse.indirect.m"
      {
#line 1189 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_8_8;

#line 1189 "structure_reuse.indirect.m"
        {
#line 1189 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_8_8 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
        }
#line 1189 "structure_reuse.indirect.m"
        {
#line 1189 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_8_8));
#line 1189 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6, 1) = ((MR_Box) ((MR_Integer) 2));
#line 1189 "structure_reuse.indirect.m"
        }
#line 1189 "structure_reuse.indirect.m"
      }
#line 1185 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6;
#line 1185 "structure_reuse.indirect.m"
  }
#line 1180 "structure_reuse.indirect.m"
}

#line 1162 "structure_reuse.indirect.m"
static MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_f_0(
#line 1162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_4,
#line 1162 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Table_5)
#line 1162 "structure_reuse.indirect.m"
{
#line 1213 "structure_reuse.indirect.m"
  {
#line 1213 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1213 "structure_reuse.indirect.m"
    MR_String transform_hlds__ctgc__structure_reuse__indirect__Descr_6;
#line 1213 "structure_reuse.indirect.m"
    MR_String transform_hlds__ctgc__structure_reuse__indirect__Rec_7;
#line 1213 "structure_reuse.indirect.m"
    MR_String transform_hlds__ctgc__structure_reuse__indirect__Descr0_10;
#line 1213 "structure_reuse.indirect.m"
    MR_String transform_hlds__ctgc__structure_reuse__indirect__V_12_12;
#line 1224 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_8;
#line 1220 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_11_11;
#line 1233 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv0_V_11_11;
#line 1221 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_9_9;

#line 1214 "structure_reuse.indirect.m"
    {
#line 1214 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__fixpoint_table__is_recursive_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__Table_5);
    }
#line 1216 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1215 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Rec_7 = (MR_String) "(rec)";
#line 1216 "structure_reuse.indirect.m"
    else
#line 1217 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Rec_7 = (MR_String) "(non-rec)";
#line 1233 "structure_reuse.indirect.m"
    {
#line 1233 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PPId_4)), transform_hlds__ctgc__structure_reuse__indirect__Table_5, &transform_hlds__ctgc__structure_reuse__indirect__conv0_V_11_11);
    }
#line 1233 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1233 "structure_reuse.indirect.m"
      {
#line 1233 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_11_11 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv0_V_11_11);
#line 1233 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 1233 "structure_reuse.indirect.m"
      }
#line 1220 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1220 "structure_reuse.indirect.m"
      {
#line 1221 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_11_11, (MR_Integer) 0)));
#line 1221 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_11_11, (MR_Integer) 1)));
#line 1221 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 1220 "structure_reuse.indirect.m"
      }
#line 1224 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1223 "structure_reuse.indirect.m"
      {
#line 1223 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__Descr0_10 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_8);
      }
#line 1224 "structure_reuse.indirect.m"
    else
#line 1225 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Descr0_10 = (MR_String) "-";
#line 1227 "structure_reuse.indirect.m"
    {
#line 1227 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", transform_hlds__ctgc__structure_reuse__indirect__Rec_7);
    }
#line 1227 "structure_reuse.indirect.m"
    {
#line 1227 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Descr_6 = mercury__string__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__Descr0_10, transform_hlds__ctgc__structure_reuse__indirect__V_12_12);
    }
#line 1213 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__Descr_6;
#line 1213 "structure_reuse.indirect.m"
  }
#line 1162 "structure_reuse.indirect.m"
}

#line 1159 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_p_0(
#line 1159 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_5,
#line 1159 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6,
#line 1159 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_8,
#line 1159 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_9)
#line 1159 "structure_reuse.indirect.m"
{
#line 1211 "structure_reuse.indirect.m"
  {
#line 1211 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1211 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6;

#line 1211 "structure_reuse.indirect.m"
    {
#line 1211 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PPId_5)), &transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_8, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_9);
    }
#line 1211 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1211 "structure_reuse.indirect.m"
      {
#line 1211 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6);
#line 1211 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = MR_TRUE;
#line 1211 "structure_reuse.indirect.m"
      }
#line 1211 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1211 "structure_reuse.indirect.m"
  }
#line 1159 "structure_reuse.indirect.m"
}

#line 1207 "structure_reuse.indirect.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0_1(
#line 1207 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1207 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 1207 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2)
#line 1207 "structure_reuse.indirect.m"
{
#line 1207 "structure_reuse.indirect.m"
  {
#line 1207 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1207 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;

#line 1207 "structure_reuse.indirect.m"
    {
#line 1207 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_and_status_subsumed_by_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2));
    }
#line 1207 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1207 "structure_reuse.indirect.m"
  }
#line 1207 "structure_reuse.indirect.m"
}

#line 1146 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0(
#line 1146 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_7,
#line 1146 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_8,
#line 1146 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Id_9,
#line 1146 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_10,
#line 1146 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_12,
#line 1146 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_13)
#line 1146 "structure_reuse.indirect.m"
{
#line 1205 "structure_reuse.indirect.m"
  {
#line 1205 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1205 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14;

#line 1207 "structure_reuse.indirect.m"
    {
#line 1207 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1207 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[2]));
#line 1207 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0_1));
#line 1207 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1207 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_7));
#line 1207 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_8));
#line 1207 "structure_reuse.indirect.m"
    }
#line 1206 "structure_reuse.indirect.m"
    {
#line 1206 "structure_reuse.indirect.m"
      transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__indirect__V_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Id_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_10)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_0_12, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Table_13);
    }
#line 1205 "structure_reuse.indirect.m"
  }
#line 1146 "structure_reuse.indirect.m"
}

#line 1129 "structure_reuse.indirect.m"
static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_f_0(
#line 1129 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Tin_3)
#line 1129 "structure_reuse.indirect.m"
{
#line 1198 "structure_reuse.indirect.m"
  {
#line 1198 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1198 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;

#line 1198 "structure_reuse.indirect.m"
    {
#line 1198 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2 = transform_hlds__ctgc__fixpoint_table__which_run_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__Tin_3);
    }
#line 1198 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2;
#line 1198 "structure_reuse.indirect.m"
  }
#line 1129 "structure_reuse.indirect.m"
}

#line 1076 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__add_request_6_p_0(
#line 1076 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7,
#line 1076 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8,
#line 1076 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_9,
#line 1076 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IntraModule_10,
#line 1076 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20,
#line 1076 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_21)
#line 1076 "structure_reuse.indirect.m"
{
#line 1079 "structure_reuse.indirect.m"
  {
#line 1079 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1079 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8, (MR_Integer) 0)));
#line 1079 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 0)));
#line 1079 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_15;
#line 1079 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredStatus_16;
#line 1080 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8, (MR_Integer) 1)));
#line 1081 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 1)));
#line 1081 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 2)));
#line 1081 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 3)));
#line 1081 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 4)));
#line 1081 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 5)));
#line 1081 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 6)));
#line 1081 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 7)));
#line 1081 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 8)));
#line 1081 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_7, (MR_Integer) 9)));

#line 1082 "structure_reuse.indirect.m"
    {
#line 1082 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_14, transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_12, &transform_hlds__ctgc__structure_reuse__indirect__PredInfo_15);
    }
#line 1083 "structure_reuse.indirect.m"
    {
#line 1083 "structure_reuse.indirect.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__PredInfo_15, &transform_hlds__ctgc__structure_reuse__indirect__PredStatus_16);
    }
#line 1085 "structure_reuse.indirect.m"
    {
#line 1085 "structure_reuse.indirect.m"
      MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23;

#line 1085 "structure_reuse.indirect.m"
      {
#line 1085 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__PredStatus_16);
      }
#line 1085 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_23_23 == (MR_Integer) 1);
#line 1085 "structure_reuse.indirect.m"
    }
#line 1086 "structure_reuse.indirect.m"
    if (!(transform_hlds__ctgc__structure_reuse__indirect__succeeded))
#line 1086 "structure_reuse.indirect.m"
      {
#line 1086 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = (MR_Word) transform_hlds__ctgc__structure_reuse__indirect__PredStatus_16;

#line 1086 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "structure_reuse.indirect.m"
      }
#line 1092 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1089 "structure_reuse.indirect.m"
      {
#line 1089 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Request_17;
#line 1089 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25;
#line 1089 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_43_43;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_44_44;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_45_45;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_47_47;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_48_48;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_49_49;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_50_50;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_51_51;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_52_52;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_53_53;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_54_54;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_55_55;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57;
#line 1091 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_56_56;

#line 1089 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__IntraModule_10 = (MR_Integer) 1;
#line 1090 "structure_reuse.indirect.m"
        {
#line 1090 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__Request_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Request_17, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8));
#line 1090 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Request_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_9));
#line 1090 "structure_reuse.indirect.m"
        }
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
#line 1091 "structure_reuse.indirect.m"
        {
#line 1091 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0, transform_hlds__ctgc__structure_reuse__indirect__V_26_26, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Request_17)));
        }
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
#line 1091 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
#line 1091 "structure_reuse.indirect.m"
        {
#line 1091 "structure_reuse.indirect.m"
          MR_Word base;
#line 1091 "structure_reuse.indirect.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1091 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_21 = base;
#line 1091 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_50_50));
#line 1091 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_51_51));
#line 1091 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_52_52));
#line 1091 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_53_53));
#line 1091 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_54_54));
#line 1091 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_55_55));
#line 1091 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_25_25));
#line 1091 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_57_57));
#line 1091 "structure_reuse.indirect.m"
        }
#line 1089 "structure_reuse.indirect.m"
      }
#line 1092 "structure_reuse.indirect.m"
    else
#line 1093 "structure_reuse.indirect.m"
      {
#line 1093 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Globals_18;
#line 1093 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntermoduleAnalysis_19;

#line 1093 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__IntraModule_10 = (MR_Integer) 0;
#line 1094 "structure_reuse.indirect.m"
        {
#line 1094 "structure_reuse.indirect.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_14, &transform_hlds__ctgc__structure_reuse__indirect__Globals_18);
        }
#line 1095 "structure_reuse.indirect.m"
        {
#line 1095 "structure_reuse.indirect.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_18, (MR_Integer) 326, &transform_hlds__ctgc__structure_reuse__indirect__IntermoduleAnalysis_19);
        }
#line 1102 "structure_reuse.indirect.m"
#line 1102 "structure_reuse.indirect.m"
        switch (transform_hlds__ctgc__structure_reuse__indirect__IntermoduleAnalysis_19) {
#line 1102 "structure_reuse.indirect.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "structure_reuse.indirect.m"
          case (MR_Integer) 0:
#line 1103 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_21 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20;
#line 1102 "structure_reuse.indirect.m"
            break;
#line 1102 "structure_reuse.indirect.m"
          case (MR_Integer) 1:
#line 1098 "structure_reuse.indirect.m"
            {
#line 1098 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 1098 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 1098 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Request_31;
#line 1101 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_58_58;
#line 1101 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59;
#line 1101 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60;
#line 1101 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 1101 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_62_62;
#line 1101 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63;
#line 1101 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64;
#line 1100 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_65_65;
#line 1100 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66;
#line 1100 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_67_67;
#line 1100 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_68_68;
#line 1100 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_69_69;
#line 1100 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_70_70;
#line 1100 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_71_71;
#line 1100 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_72_72;

#line 1099 "structure_reuse.indirect.m"
              {
#line 1099 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__Request_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1099 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Request_31, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_8));
#line 1099 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Request_31, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_9));
#line 1099 "structure_reuse.indirect.m"
              }
#line 1101 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
#line 1101 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
#line 1101 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
#line 1101 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
#line 1101 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
#line 1101 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
#line 1101 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
#line 1101 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
#line 1101 "structure_reuse.indirect.m"
              {
#line 1101 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0, transform_hlds__ctgc__structure_reuse__indirect__V_30_30, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Request_31)));
              }
#line 1100 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
#line 1100 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
#line 1100 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
#line 1100 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
#line 1100 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
#line 1100 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
#line 1100 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
#line 1100 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
#line 1100 "structure_reuse.indirect.m"
              {
#line 1100 "structure_reuse.indirect.m"
                MR_Word base;
#line 1100 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1100 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_21 = base;
#line 1100 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_65_65));
#line 1100 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_66_66));
#line 1100 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_67_67));
#line 1100 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_68_68));
#line 1100 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_69_69));
#line 1100 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_70_70));
#line 1100 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_71_71));
#line 1100 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_29_29));
#line 1100 "structure_reuse.indirect.m"
              }
#line 1098 "structure_reuse.indirect.m"
            }
#line 1102 "structure_reuse.indirect.m"
            break;
#line 1102 "structure_reuse.indirect.m"
        }
#line 1093 "structure_reuse.indirect.m"
      }
#line 1079 "structure_reuse.indirect.m"
  }
#line 1076 "structure_reuse.indirect.m"
}

#line 1062 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(
#line 1062 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__List_1,
#line 1062 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2,
#line 1062 "structure_reuse.indirect.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__indirect__Index_3,
#line 1062 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__HeadVar__4_4)
#line 1062 "structure_reuse.indirect.m"
{
#line 1065 "structure_reuse.indirect.m"
  {
#line 1065 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 1065 "structure_reuse.indirect.m"
    if ((transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1065 "structure_reuse.indirect.m"
    else
#line 1066 "structure_reuse.indirect.m"
      {
#line 1066 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 0)));
#line 1066 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__HeadVar__2_2, (MR_Integer) 1)));
#line 1066 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Indices0_12;
#line 1066 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_13_13 = (transform_hlds__ctgc__structure_reuse__indirect__Index_3 + (MR_Integer) 1);

#line 1067 "structure_reuse.indirect.m"
        {
#line 1067 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__List_1, transform_hlds__ctgc__structure_reuse__indirect__Vars_9, transform_hlds__ctgc__structure_reuse__indirect__V_13_13, &transform_hlds__ctgc__structure_reuse__indirect__Indices0_12);
        }
#line 1068 "structure_reuse.indirect.m"
        {
#line 1068 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3], ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Var_8)), transform_hlds__ctgc__structure_reuse__indirect__List_1);
        }
#line 1070 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1069 "structure_reuse.indirect.m"
          {
#line 1069 "structure_reuse.indirect.m"
            MR_Word base;
#line 1069 "structure_reuse.indirect.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__4_4 = base;
#line 1069 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Index_3));
#line 1069 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Indices0_12));
#line 1069 "structure_reuse.indirect.m"
          }
#line 1070 "structure_reuse.indirect.m"
        else
#line 1071 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__HeadVar__4_4 = transform_hlds__ctgc__structure_reuse__indirect__Indices0_12;
#line 1066 "structure_reuse.indirect.m"
      }
#line 1065 "structure_reuse.indirect.m"
  }
#line 1062 "structure_reuse.indirect.m"
}

#line 1015 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(
#line 1015 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 1015 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_9,
#line 1015 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_10,
#line 1015 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11,
#line 1015 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Reason_12)
#line 1015 "structure_reuse.indirect.m"
{
#line 1020 "structure_reuse.indirect.m"
  {
#line 1020 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 1020 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));
#line 1020 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 1021 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 1021 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 1021 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 1021 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 1021 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 1021 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 1021 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 1021 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));

#line 1039 "structure_reuse.indirect.m"
#line 1039 "structure_reuse.indirect.m"
    switch (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_14) {
#line 1039 "structure_reuse.indirect.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1039 "structure_reuse.indirect.m"
      case (MR_Integer) 0:
#line 1040 "structure_reuse.indirect.m"
        {
#line 1040 "structure_reuse.indirect.m"
        }
#line 1039 "structure_reuse.indirect.m"
        break;
#line 1039 "structure_reuse.indirect.m"
      case (MR_Integer) 1:
#line 1023 "structure_reuse.indirect.m"
        {
#line 1023 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalReuse_16;
#line 1023 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__Context_17;
#line 1023 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__VarSet_18;
#line 1023 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21;
#line 1027 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_56_56;
#line 1027 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57;
#line 1027 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_58_58;
#line 1027 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59;
#line 1027 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60;
#line 1027 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 1027 "structure_reuse.indirect.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_62_62;
#line 1027 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63;
#line 1027 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64;

#line 1025 "structure_reuse.indirect.m"
          {
#line 1025 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__GoalReuse_16 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11);
          }
#line 1026 "structure_reuse.indirect.m"
          {
#line 1026 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11);
          }
#line 1027 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 1027 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 1027 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 1027 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 1027 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 1027 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 1027 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 1027 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 1027 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 1027 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));
#line 1027 "structure_reuse.indirect.m"
          {
#line 1027 "structure_reuse.indirect.m"
            hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_21_21, &transform_hlds__ctgc__structure_reuse__indirect__VarSet_18);
          }
#line 1028 "structure_reuse.indirect.m"
          {
#line 1028 "structure_reuse.indirect.m"
            mercury__io__write_string_3_p_0((MR_String) "\tcall to ");
          }
#line 1029 "structure_reuse.indirect.m"
          {
#line 1029 "structure_reuse.indirect.m"
            hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_38_38, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_9);
          }
#line 1030 "structure_reuse.indirect.m"
          {
#line 1030 "structure_reuse.indirect.m"
            mercury__io__write_string_3_p_0((MR_String) "\n\tfrom ");
          }
#line 1031 "structure_reuse.indirect.m"
          {
#line 1031 "structure_reuse.indirect.m"
            parse_tree__prog_out__write_context_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Context_17);
          }
#line 1032 "structure_reuse.indirect.m"
          {
#line 1032 "structure_reuse.indirect.m"
            mercury__io__write_string_3_p_0((MR_String) "\n\twith NoClobbers = ");
          }
#line 1033 "structure_reuse.indirect.m"
          {
#line 1033 "structure_reuse.indirect.m"
            mercury__io__write_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4], ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_10)));
          }
#line 1034 "structure_reuse.indirect.m"
          {
#line 1034 "structure_reuse.indirect.m"
            mercury__io__write_string_3_p_0((MR_String) "\n\t\treuse: ");
          }
#line 1035 "structure_reuse.indirect.m"
          {
#line 1035 "structure_reuse.indirect.m"
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_reuse_description_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalReuse_16)));
          }
#line 1036 "structure_reuse.indirect.m"
          {
#line 1036 "structure_reuse.indirect.m"
            mercury__io__write_string_3_p_0((MR_String) "\n\t\treason: ");
          }
#line 1053 "structure_reuse.indirect.m"
#line 1053 "structure_reuse.indirect.m"
          switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__Reason_12)) {
#line 1053 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1053 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 1053 "structure_reuse.indirect.m"
              {
#line 1054 "structure_reuse.indirect.m"
                {
#line 1054 "structure_reuse.indirect.m"
                  mercury__io__write_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_verify_indirect_reuse_reason_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Reason_12)));
                }
#line 1053 "structure_reuse.indirect.m"
              }
#line 1053 "structure_reuse.indirect.m"
              break;
#line 1053 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 1056 "structure_reuse.indirect.m"
              {
#line 1056 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__Vars_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__Reason_12, (MR_Integer) 0)));

#line 1057 "structure_reuse.indirect.m"
                {
#line 1057 "structure_reuse.indirect.m"
                  mercury__io__write_string_3_p_0((MR_String) "reuse_is_unsafe(");
                }
#line 1058 "structure_reuse.indirect.m"
                {
#line 1058 "structure_reuse.indirect.m"
                  parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__indirect__VarSet_18, (MR_Integer) 1, transform_hlds__ctgc__structure_reuse__indirect__Vars_72);
                }
#line 1059 "structure_reuse.indirect.m"
                {
#line 1059 "structure_reuse.indirect.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
#line 1056 "structure_reuse.indirect.m"
              }
#line 1053 "structure_reuse.indirect.m"
              break;
#line 1053 "structure_reuse.indirect.m"
          }
#line 1038 "structure_reuse.indirect.m"
          {
#line 1038 "structure_reuse.indirect.m"
            mercury__io__nl_2_p_0();
          }
#line 1023 "structure_reuse.indirect.m"
        }
#line 1039 "structure_reuse.indirect.m"
        break;
#line 1039 "structure_reuse.indirect.m"
    }
#line 1020 "structure_reuse.indirect.m"
  }
#line 1015 "structure_reuse.indirect.m"
}

#line 975 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(
#line 975 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 975 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__OrigPPId_9,
#line 975 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_10,
#line 975 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_11,
#line 975 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22,
#line 975 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_23,
#line 975 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_13)
#line 975 "structure_reuse.indirect.m"
{
#line 979 "structure_reuse.indirect.m"
  {
#line 979 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 979 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_16;
#line 979 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Status_17;
#line 979 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25;
#line 979 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27;
#line 979 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 979 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 987 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status0_14;
#line 987 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_15;
#line 982 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 4)));
#line 982 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 0)));
#line 982 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 1)));
#line 982 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 2)));
#line 982 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 3)));
#line 982 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 5)));
#line 982 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 6)));
#line 982 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 7)));
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_58_58;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_62_62;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_65_65;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_68_68;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_69_69;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_70_70;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_71_71;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_72_72;
#line 996 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_67_67;
#line 1001 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_18;
#line 1001 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePredInfo_20;
#line 1001 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 1001 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_19_19;
#line 1002 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_73_73;
#line 1002 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_74_74;
#line 1002 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_75_75;
#line 1002 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_76_76;
#line 1002 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_77_77;
#line 1002 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78;
#line 1002 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_79_79;
#line 1002 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80;
#line 1002 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81;

#line 982 "structure_reuse.indirect.m"
    {
#line 982 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__PPId_10, &transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status0_14, transform_hlds__ctgc__structure_reuse__indirect__V_24_24, &transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_15);
    }
#line 987 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 985 "structure_reuse.indirect.m"
      {
#line 986 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_41_41;
#line 986 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42;
#line 986 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_43_43;
#line 986 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_44_44;
#line 986 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46;
#line 986 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_47_47;
#line 986 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_48_48;
#line 986 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_45_45;

#line 985 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_16 = transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status0_14;
#line 986 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 0)));
#line 986 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 1)));
#line 986 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 2)));
#line 986 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 3)));
#line 986 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 4)));
#line 986 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 5)));
#line 986 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 6)));
#line 986 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 7)));
#line 986 "structure_reuse.indirect.m"
        {
#line 986 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 986 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_41_41));
#line 986 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_42_42));
#line 986 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_43_43));
#line 986 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_44_44));
#line 986 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_15));
#line 986 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_46_46));
#line 986 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_47_47));
#line 986 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_48_48));
#line 986 "structure_reuse.indirect.m"
        }
#line 985 "structure_reuse.indirect.m"
      }
#line 987 "structure_reuse.indirect.m"
    else
#line 989 "structure_reuse.indirect.m"
      {
#line 989 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 989 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 989 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 989 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 989 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 989 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 989 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 989 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 989 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 989 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));

#line 989 "structure_reuse.indirect.m"
        {
#line 989 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_16 = transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_26_26, transform_hlds__ctgc__structure_reuse__indirect__PPId_10);
        }
#line 989 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_22;
#line 989 "structure_reuse.indirect.m"
      }
#line 992 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_16, (MR_Integer) 0)));
#line 992 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__Status_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_16, (MR_Integer) 1)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
#line 996 "structure_reuse.indirect.m"
    {
#line 996 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = analysis__lub_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__Status_17, transform_hlds__ctgc__structure_reuse__indirect__V_29_29);
    }
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
#line 996 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
#line 996 "structure_reuse.indirect.m"
    {
#line 996 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 996 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_65_65));
#line 996 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_66_66));
#line 996 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_28_28));
#line 996 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_68_68));
#line 996 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_69_69));
#line 996 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_70_70));
#line 996 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_71_71));
#line 996 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_72_72));
#line 996 "structure_reuse.indirect.m"
    }
#line 1001 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__OrigPPId_9, (MR_Integer) 0)));
#line 1001 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__OrigPPId_9, (MR_Integer) 1)));
#line 1002 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 1002 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 1002 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 1002 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 1002 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 1002 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 1002 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 1002 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 1002 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 1002 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));
#line 1002 "structure_reuse.indirect.m"
    {
#line 1002 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_30_30, transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_18, &transform_hlds__ctgc__structure_reuse__indirect__CalleePredInfo_20);
    }
#line 1004 "structure_reuse.indirect.m"
    {
#line 1004 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__CalleePredInfo_20);
    }
#line 1001 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1001 "structure_reuse.indirect.m"
      {
#line 1005 "structure_reuse.indirect.m"
        {
#line 1005 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__CalleePredInfo_20);
        }
#line 1005 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 1001 "structure_reuse.indirect.m"
      }
#line 1009 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 1007 "structure_reuse.indirect.m"
      {
#line 1007 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Dep_21;
#line 1007 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 1007 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_33_33;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_90_90;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_93_93;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_96_96;
#line 1008 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_94_94;

#line 1007 "structure_reuse.indirect.m"
        {
#line 1007 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__Dep_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Dep_21, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__OrigPPId_9));
#line 1007 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Dep_21, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_11));
#line 1007 "structure_reuse.indirect.m"
        }
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 0)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 1)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 2)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 3)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 4)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 5)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 6)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 7)));
#line 1008 "structure_reuse.indirect.m"
        {
#line 1008 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__indirect__V_33_33, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Dep_21)));
        }
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 0)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 1)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 2)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 3)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 4)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 5)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 6)));
#line 1008 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 7)));
#line 1008 "structure_reuse.indirect.m"
        {
#line 1008 "structure_reuse.indirect.m"
          MR_Word base;
#line 1008 "structure_reuse.indirect.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_23 = base;
#line 1008 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_89_89));
#line 1008 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_90_90));
#line 1008 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_91_91));
#line 1008 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_92_92));
#line 1008 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_93_93));
#line 1008 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_32_32));
#line 1008 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_95_95));
#line 1008 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_96_96));
#line 1008 "structure_reuse.indirect.m"
        }
#line 1007 "structure_reuse.indirect.m"
      }
#line 1009 "structure_reuse.indirect.m"
    else
#line 1009 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_23 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_27_27;
#line 979 "structure_reuse.indirect.m"
  }
#line 975 "structure_reuse.indirect.m"
}

#line 935 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0_1(
#line 935 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 935 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1)
#line 935 "structure_reuse.indirect.m"
{
#line 935 "structure_reuse.indirect.m"
  {
#line 935 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 935 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 935 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__2_2;

#line 935 "structure_reuse.indirect.m"
    {
#line 935 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1));
    }
#line 935 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_HeadVar__2_2));
#line 935 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 935 "structure_reuse.indirect.m"
  }
#line 935 "structure_reuse.indirect.m"
}

#line 905 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0(
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9,
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10,
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11,
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_12,
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 905 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14,
#line 905 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_15,
#line 905 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16)
#line 905 "structure_reuse.indirect.m"
{
#line 910 "structure_reuse.indirect.m"
  {
#line 910 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_89_89;
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 0)));
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 2)));
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 3)));
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingAs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 0)));
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ActualVarTypes_21;
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallerTypeVarSet_22;
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallerHeadTypeParams_23;
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeTypes_24;
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ActualReuseAs_25;
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__LiveData_26;
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProjectedLiveData_27;
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__StaticVars_28;
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Result_29;
#line 910 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36;
#line 911 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 1)));
#line 911 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 4)));
#line 911 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 5)));
#line 911 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 6)));
#line 911 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 7)));
#line 911 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 8)));
#line 911 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 9)));
#line 914 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 1)));
#line 914 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 2)));
#line 914 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 3)));
#line 914 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 4)));
#line 914 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 5)));
#line 914 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 6)));
#line 914 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 7)));
#line 925 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_73_73;
#line 925 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_74_74;
#line 925 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_75_75;
#line 925 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_76_76;
#line 925 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_77_77;
#line 925 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78;
#line 925 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_79_79;

#line 915 "structure_reuse.indirect.m"
    {
#line 915 "structure_reuse.indirect.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_19, &transform_hlds__ctgc__structure_reuse__indirect__ActualVarTypes_21);
    }
#line 916 "structure_reuse.indirect.m"
    {
#line 916 "structure_reuse.indirect.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__PredInfo_18, &transform_hlds__ctgc__structure_reuse__indirect__CallerTypeVarSet_22);
    }
#line 917 "structure_reuse.indirect.m"
    {
#line 917 "structure_reuse.indirect.m"
      hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__PredInfo_18, &transform_hlds__ctgc__structure_reuse__indirect__CallerHeadTypeParams_23);
    }
#line 918 "structure_reuse.indirect.m"
    {
#line 918 "structure_reuse.indirect.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__ActualVarTypes_21, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, &transform_hlds__ctgc__structure_reuse__indirect__CalleeTypes_24);
    }
#line 919 "structure_reuse.indirect.m"
    {
#line 919 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_8_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_17, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_12, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, transform_hlds__ctgc__structure_reuse__indirect__CalleeTypes_24, transform_hlds__ctgc__structure_reuse__indirect__CallerTypeVarSet_22, transform_hlds__ctgc__structure_reuse__indirect__CallerHeadTypeParams_23, transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14, &transform_hlds__ctgc__structure_reuse__indirect__ActualReuseAs_25);
    }
#line 922 "structure_reuse.indirect.m"
    {
#line 922 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__LiveData_26 = transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_17, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_19, transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11, transform_hlds__ctgc__structure_reuse__indirect__SharingAs_20);
    }
#line 924 "structure_reuse.indirect.m"
    {
#line 924 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__ProjectedLiveData_27 = transform_hlds__ctgc__livedata__livedata_project_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, transform_hlds__ctgc__structure_reuse__indirect__LiveData_26);
    }
#line 6059 "transform_hlds.ctgc.structure_reuse.indirect.c"
    transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_89_89 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3];
#line 925 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 0)));
#line 925 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 1)));
#line 925 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 2)));
#line 925 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 3)));
#line 925 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 4)));
#line 925 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 5)));
#line 925 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 6)));
#line 925 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_10, (MR_Integer) 7)));
#line 925 "structure_reuse.indirect.m"
    {
#line 925 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__StaticVars_28 = mercury__set__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_89_89, transform_hlds__ctgc__structure_reuse__indirect__V_36_36);
    }
#line 927 "structure_reuse.indirect.m"
    {
#line 927 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_17, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_19, transform_hlds__ctgc__structure_reuse__indirect__ProjectedLiveData_27, transform_hlds__ctgc__structure_reuse__indirect__SharingAs_20, transform_hlds__ctgc__structure_reuse__indirect__StaticVars_28, transform_hlds__ctgc__structure_reuse__indirect__ActualReuseAs_25, &transform_hlds__ctgc__structure_reuse__indirect__Result_29);
    }
#line 940 "structure_reuse.indirect.m"
    if ((transform_hlds__ctgc__structure_reuse__indirect__Result_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "structure_reuse.indirect.m"
      {
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_90_90;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__LFU_30;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__LBU_31;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__LU_32;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__LuList_33;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__LuData_34;
#line 930 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38;
#line 936 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80;
#line 936 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81;
#line 936 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82;
#line 936 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83;
#line 936 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84;
#line 936 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85;
#line 936 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_86_86;
#line 936 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87;
#line 936 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88;

#line 931 "structure_reuse.indirect.m"
        {
#line 931 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__LFU_30 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11);
        }
#line 932 "structure_reuse.indirect.m"
        {
#line 932 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__LBU_31 = hlds__hlds_goal__goal_info_get_lbu_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_11);
        }
#line 6134 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 933 "structure_reuse.indirect.m"
        {
#line 933 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__LU_32 = parse_tree__set_of_var__union_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_90_90, transform_hlds__ctgc__structure_reuse__indirect__LFU_30, transform_hlds__ctgc__structure_reuse__indirect__LBU_31);
        }
#line 934 "structure_reuse.indirect.m"
        {
#line 934 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__LuList_33 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_90_90, transform_hlds__ctgc__structure_reuse__indirect__LU_32);
        }
#line 935 "structure_reuse.indirect.m"
        {
#line 935 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__LuData_34 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_89_89, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[2], transform_hlds__ctgc__structure_reuse__indirect__LuList_33);
        }
#line 936 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 0)));
#line 936 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 1)));
#line 936 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 2)));
#line 936 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 3)));
#line 936 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 4)));
#line 936 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 5)));
#line 936 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 6)));
#line 936 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 7)));
#line 936 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 8)));
#line 936 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_9, (MR_Integer) 9)));
#line 936 "structure_reuse.indirect.m"
        {
#line 936 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_15 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_17, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_19, transform_hlds__ctgc__structure_reuse__indirect__V_38_38, transform_hlds__ctgc__structure_reuse__indirect__LuData_34, transform_hlds__ctgc__structure_reuse__indirect__SharingAs_20, transform_hlds__ctgc__structure_reuse__indirect__ActualReuseAs_25);
        }
#line 939 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 930 "structure_reuse.indirect.m"
      }
#line 940 "structure_reuse.indirect.m"
    else
#line 941 "structure_reuse.indirect.m"
      {
#line 941 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Reason_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__Result_29, (MR_Integer) 0)));

#line 942 "structure_reuse.indirect.m"
        {
#line 942 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_15 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
        }
#line 948 "structure_reuse.indirect.m"
#line 948 "structure_reuse.indirect.m"
        switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__Reason_35)) {
#line 948 "structure_reuse.indirect.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 948 "structure_reuse.indirect.m"
          case (MR_Integer) 0:
#line 947 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 948 "structure_reuse.indirect.m"
            break;
#line 948 "structure_reuse.indirect.m"
          case (MR_Integer) 1:
#line 949 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__Reason_35, (MR_Integer) 0)));
#line 948 "structure_reuse.indirect.m"
            break;
#line 948 "structure_reuse.indirect.m"
          case (MR_Integer) 2:
#line 951 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__Reason_35, (MR_Integer) 0)));
#line 948 "structure_reuse.indirect.m"
            break;
#line 948 "structure_reuse.indirect.m"
        }
#line 941 "structure_reuse.indirect.m"
      }
#line 910 "structure_reuse.indirect.m"
  }
#line 905 "structure_reuse.indirect.m"
}

#line 816 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_p_0(
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25,
#line 816 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26,
#line 816 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27,
#line 816 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28)
#line 816 "structure_reuse.indirect.m"
{
#line 822 "structure_reuse.indirect.m"
  {
#line 822 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 822 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17;
#line 822 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_18;

#line 823 "structure_reuse.indirect.m"
    {
#line 823 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_14, &transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17, &transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_18);
    }
#line 826 "structure_reuse.indirect.m"
    {
#line 826 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17);
    }
#line 866 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 828 "structure_reuse.indirect.m"
      {
#line 828 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_130_130;
#line 828 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums0_19;
#line 828 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20;
#line 828 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;

#line 828 "structure_reuse.indirect.m"
        {
#line 828 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_18, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, (MR_Integer) 1, &transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums0_19);
        }
#line 6284 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_130_130 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 830 "structure_reuse.indirect.m"
        {
#line 830 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_130_130, transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums0_19, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12);
        }
#line 829 "structure_reuse.indirect.m"
        {
#line 829 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_130_130, transform_hlds__ctgc__structure_reuse__indirect__V_30_30);
        }
#line 832 "structure_reuse.indirect.m"
        {
#line 832 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4], ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12)));
        }
#line 840 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 835 "structure_reuse.indirect.m"
          {
#line 836 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34;

#line 835 "structure_reuse.indirect.m"
            {
#line 835 "structure_reuse.indirect.m"
              hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26);
            }
#line 838 "structure_reuse.indirect.m"
            {
#line 838 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 838 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__V_34_34, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_18));
#line 838 "structure_reuse.indirect.m"
            }
#line 837 "structure_reuse.indirect.m"
            {
#line 837 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26, transform_hlds__ctgc__structure_reuse__indirect__V_34_34);
            }
#line 835 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27;
#line 835 "structure_reuse.indirect.m"
          }
#line 840 "structure_reuse.indirect.m"
        else
#line 850 "structure_reuse.indirect.m"
          {
#line 845 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 5)));
#line 845 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 0)));
#line 845 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 1)));
#line 845 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 2)));
#line 845 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 3)));
#line 845 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 4)));
#line 845 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 6)));
#line 845 "structure_reuse.indirect.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 7)));
#line 845 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 8)));
#line 845 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 9)));
#line 845 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect___ReusePPId_22;

#line 845 "structure_reuse.indirect.m"
            {
#line 845 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_36_36, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20, &transform_hlds__ctgc__structure_reuse__indirect___ReusePPId_22);
            }
#line 850 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 848 "structure_reuse.indirect.m"
              {
#line 848 "structure_reuse.indirect.m"
                {
#line 848 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, (MR_Integer) 0, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28);
                }
#line 848 "structure_reuse.indirect.m"
              }
#line 850 "structure_reuse.indirect.m"
            else
#line 853 "structure_reuse.indirect.m"
              {
#line 853 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntraModule_23;
#line 861 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46;

#line 852 "structure_reuse.indirect.m"
                {
#line 852 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__add_request_6_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NotDeadArgNums_20, &transform_hlds__ctgc__structure_reuse__indirect__IntraModule_23, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28);
                }
#line 857 "structure_reuse.indirect.m"
#line 857 "structure_reuse.indirect.m"
                switch (transform_hlds__ctgc__structure_reuse__indirect__IntraModule_23) {
#line 857 "structure_reuse.indirect.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 857 "structure_reuse.indirect.m"
                  case (MR_Integer) 0:
#line 858 "structure_reuse.indirect.m"
                    {
#line 859 "structure_reuse.indirect.m"
                      {
#line 859 "structure_reuse.indirect.m"
                        hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26);
                      }
#line 858 "structure_reuse.indirect.m"
                    }
#line 857 "structure_reuse.indirect.m"
                    break;
#line 857 "structure_reuse.indirect.m"
                  case (MR_Integer) 1:
#line 855 "structure_reuse.indirect.m"
                    {
#line 856 "structure_reuse.indirect.m"
                      {
#line 856 "structure_reuse.indirect.m"
                        hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26);
                      }
#line 855 "structure_reuse.indirect.m"
                    }
#line 857 "structure_reuse.indirect.m"
                    break;
#line 857 "structure_reuse.indirect.m"
                }
#line 863 "structure_reuse.indirect.m"
                {
#line 863 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__V_46_46, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NotDeadVars_18));
#line 863 "structure_reuse.indirect.m"
                }
#line 862 "structure_reuse.indirect.m"
                {
#line 862 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26, transform_hlds__ctgc__structure_reuse__indirect__V_46_46);
                }
#line 853 "structure_reuse.indirect.m"
              }
#line 850 "structure_reuse.indirect.m"
          }
#line 828 "structure_reuse.indirect.m"
      }
#line 866 "structure_reuse.indirect.m"
    else
#line 878 "structure_reuse.indirect.m"
      {
#line 867 "structure_reuse.indirect.m"
        {
#line 867 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17);
        }
#line 878 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 870 "structure_reuse.indirect.m"
          {
#line 870 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_24;
#line 870 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
#line 870 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_50_50;
#line 870 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_52_52;
#line 870 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
#line 870 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
#line 870 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
#line 870 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
#line 870 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
#line 870 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
#line 870 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
#line 871 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89;
#line 871 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91;
#line 871 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92;
#line 871 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_93_93;
#line 871 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_94_94;
#line 871 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;
#line 871 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_96_96;
#line 871 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_90_90;

#line 870 "structure_reuse.indirect.m"
            {
#line 870 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_48_48, &transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_24);
            }
#line 871 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
#line 871 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
#line 871 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
#line 871 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
#line 871 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
#line 871 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
#line 871 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
#line 871 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
#line 871 "structure_reuse.indirect.m"
            {
#line 871 "structure_reuse.indirect.m"
              MR_Word base;
#line 871 "structure_reuse.indirect.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 871 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28 = base;
#line 871 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_89_89));
#line 871 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_24));
#line 871 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_91_91));
#line 871 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_92_92));
#line 871 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_93_93));
#line 871 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_94_94));
#line 871 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_95_95));
#line 871 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_96_96));
#line 871 "structure_reuse.indirect.m"
            }
#line 872 "structure_reuse.indirect.m"
            {
#line 872 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_52_52, 0) = ((MR_Box) ((MR_Integer) 1));
#line 872 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_52_52, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12));
#line 872 "structure_reuse.indirect.m"
            }
#line 872 "structure_reuse.indirect.m"
            {
#line 872 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 872 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__V_50_50, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_52_52));
#line 872 "structure_reuse.indirect.m"
            }
#line 872 "structure_reuse.indirect.m"
            {
#line 872 "structure_reuse.indirect.m"
              hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_50_50, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26);
            }
#line 875 "structure_reuse.indirect.m"
            {
#line 875 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
            }
#line 870 "structure_reuse.indirect.m"
          }
#line 878 "structure_reuse.indirect.m"
        else
#line 893 "structure_reuse.indirect.m"
          {
#line 879 "structure_reuse.indirect.m"
            {
#line 879 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17);
            }
#line 893 "structure_reuse.indirect.m"
            if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 884 "structure_reuse.indirect.m"
              {
#line 884 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 0)));
#line 884 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
#line 884 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 884 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63;
#line 884 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_71;
#line 884 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 3)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 1)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 2)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 4)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 5)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 6)));
#line 882 "structure_reuse.indirect.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 7)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 8)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 9)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
#line 882 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
#line 885 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_122_122;
#line 885 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_124_124;
#line 885 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_125_125;
#line 885 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_126_126;
#line 885 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_127_127;
#line 885 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_128_128;
#line 885 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_129_129;
#line 885 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_123_123;

#line 882 "structure_reuse.indirect.m"
                {
#line 882 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_57_57, transform_hlds__ctgc__structure_reuse__indirect__V_99_99, transform_hlds__ctgc__structure_reuse__indirect__V_59_59, transform_hlds__ctgc__structure_reuse__indirect__NewAndRenamedReuseAs_17, &transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_71);
                }
#line 885 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
#line 885 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
#line 885 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
#line 885 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
#line 885 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
#line 885 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
#line 885 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
#line 885 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
#line 885 "structure_reuse.indirect.m"
                {
#line 885 "structure_reuse.indirect.m"
                  MR_Word base;
#line 885 "structure_reuse.indirect.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 885 "structure_reuse.indirect.m"
                  *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_28 = base;
#line 885 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_122_122));
#line 885 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_71));
#line 885 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_124_124));
#line 885 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_125_125));
#line 885 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_126_126));
#line 885 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_127_127));
#line 885 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_128_128));
#line 885 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_129_129));
#line 885 "structure_reuse.indirect.m"
                }
#line 887 "structure_reuse.indirect.m"
                {
#line 887 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_63_63, 0) = ((MR_Box) ((MR_Integer) 0));
#line 887 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_63_63, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12));
#line 887 "structure_reuse.indirect.m"
                }
#line 887 "structure_reuse.indirect.m"
                {
#line 887 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 887 "structure_reuse.indirect.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_61_61, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_63_63));
#line 887 "structure_reuse.indirect.m"
                }
#line 886 "structure_reuse.indirect.m"
                {
#line 886 "structure_reuse.indirect.m"
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_61_61, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26);
                }
#line 890 "structure_reuse.indirect.m"
                {
#line 890 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
                }
#line 884 "structure_reuse.indirect.m"
              }
#line 893 "structure_reuse.indirect.m"
            else
#line 894 "structure_reuse.indirect.m"
              {
#line 894 "structure_reuse.indirect.m"
                {
#line 894 "structure_reuse.indirect.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.verify_indirect_reuse_conditional\'/9", (MR_String) "unknown NewReuseAs");
#line 894 "structure_reuse.indirect.m"
                  return;
                }
#line 894 "structure_reuse.indirect.m"
              }
#line 893 "structure_reuse.indirect.m"
          }
#line 878 "structure_reuse.indirect.m"
      }
#line 822 "structure_reuse.indirect.m"
  }
#line 816 "structure_reuse.indirect.m"
}

#line 748 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_14,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21,
#line 748 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22,
#line 748 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_23,
#line 748 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24)
#line 748 "structure_reuse.indirect.m"
{
#line 757 "structure_reuse.indirect.m"
  {
#line 757 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 757 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17;
#line 757 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25;
#line 966 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_76;
#line 961 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 5)));
#line 961 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 0)));
#line 961 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 1)));
#line 961 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 2)));
#line 961 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 3)));
#line 961 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 4)));
#line 961 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 6)));
#line 961 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 7)));
#line 961 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 8)));
#line 961 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, (MR_Integer) 9)));

#line 961 "structure_reuse.indirect.m"
    {
#line 961 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_77_77, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, &transform_hlds__ctgc__structure_reuse__indirect__PPId_76);
    }
#line 966 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 964 "structure_reuse.indirect.m"
      {
#line 964 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__PPId_76, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_23, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, &transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17);
      }
#line 966 "structure_reuse.indirect.m"
    else
#line 971 "structure_reuse.indirect.m"
      {
#line 967 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 971 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 969 "structure_reuse.indirect.m"
          {
#line 969 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_23, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, &transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17);
          }
#line 971 "structure_reuse.indirect.m"
        else
#line 972 "structure_reuse.indirect.m"
          {
#line 972 "structure_reuse.indirect.m"
            {
#line 972 "structure_reuse.indirect.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.lookup_reuse_as\'/6", (MR_String) "conditions failed");
#line 972 "structure_reuse.indirect.m"
              return;
            }
#line 972 "structure_reuse.indirect.m"
          }
#line 971 "structure_reuse.indirect.m"
      }
#line 764 "structure_reuse.indirect.m"
    {
#line 764 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17);
    }
#line 774 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 766 "structure_reuse.indirect.m"
      {
#line 771 "structure_reuse.indirect.m"
        {
#line 771 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 766 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25;
#line 766 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21;
#line 766 "structure_reuse.indirect.m"
      }
#line 774 "structure_reuse.indirect.m"
    else
#line 788 "structure_reuse.indirect.m"
      {
#line 775 "structure_reuse.indirect.m"
        {
#line 775 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17);
        }
#line 788 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 779 "structure_reuse.indirect.m"
          {
#line 779 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_20;
#line 779 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
#line 779 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 779 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 779 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
#line 779 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
#line 779 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
#line 779 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
#line 779 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
#line 779 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
#line 779 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
#line 780 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_54_54;
#line 780 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_56_56;
#line 780 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57;
#line 780 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_58_58;
#line 780 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59;
#line 780 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60;
#line 780 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 780 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_55_55;

#line 779 "structure_reuse.indirect.m"
            {
#line 779 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_28_28, &transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_20);
            }
#line 780 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
#line 780 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
#line 780 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
#line 780 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
#line 780 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
#line 780 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
#line 780 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
#line 780 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
#line 780 "structure_reuse.indirect.m"
            {
#line 780 "structure_reuse.indirect.m"
              MR_Word base;
#line 780 "structure_reuse.indirect.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 780 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24 = base;
#line 780 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_54_54));
#line 780 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewReuseAs_20));
#line 780 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_56_56));
#line 780 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_57_57));
#line 780 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_58_58));
#line 780 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_59_59));
#line 780 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_60_60));
#line 780 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_61_61));
#line 780 "structure_reuse.indirect.m"
            }
#line 781 "structure_reuse.indirect.m"
            {
#line 781 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 0) = ((MR_Box) ((MR_Integer) 1));
#line 781 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12));
#line 781 "structure_reuse.indirect.m"
            }
#line 781 "structure_reuse.indirect.m"
            {
#line 781 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 781 "structure_reuse.indirect.m"
              MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__V_30_30, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_32_32));
#line 781 "structure_reuse.indirect.m"
            }
#line 781 "structure_reuse.indirect.m"
            {
#line 781 "structure_reuse.indirect.m"
              hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_30_30, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22);
            }
#line 784 "structure_reuse.indirect.m"
            {
#line 784 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
            }
#line 779 "structure_reuse.indirect.m"
          }
#line 788 "structure_reuse.indirect.m"
        else
#line 811 "structure_reuse.indirect.m"
#line 811 "structure_reuse.indirect.m"
          switch (transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_14) {
#line 811 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 811 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 807 "structure_reuse.indirect.m"
              {
#line 800 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
#line 800 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
#line 800 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
#line 800 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
#line 800 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
#line 800 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
#line 800 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
#line 800 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));

#line 800 "structure_reuse.indirect.m"
                {
#line 800 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_39_39);
                }
#line 807 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 802 "structure_reuse.indirect.m"
                  {
#line 802 "structure_reuse.indirect.m"
                    {
#line 802 "structure_reuse.indirect.m"
                      hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22);
                    }
#line 804 "structure_reuse.indirect.m"
                    {
#line 804 "structure_reuse.indirect.m"
                      transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                    }
#line 802 "structure_reuse.indirect.m"
                    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25;
#line 802 "structure_reuse.indirect.m"
                  }
#line 807 "structure_reuse.indirect.m"
                else
#line 808 "structure_reuse.indirect.m"
                  {
#line 808 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_10, transform_hlds__ctgc__structure_reuse__indirect__CalleePPId_11, transform_hlds__ctgc__structure_reuse__indirect__NoClobbers_12, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_13, transform_hlds__ctgc__structure_reuse__indirect__FormalReuseAs_17, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24);
                  }
#line 807 "structure_reuse.indirect.m"
              }
#line 811 "structure_reuse.indirect.m"
              break;
#line 811 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 812 "structure_reuse.indirect.m"
              {
#line 813 "structure_reuse.indirect.m"
                {
#line 813 "structure_reuse.indirect.m"
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_GoalInfo_22);
                }
#line 812 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_25_25;
#line 812 "structure_reuse.indirect.m"
              }
#line 811 "structure_reuse.indirect.m"
              break;
#line 811 "structure_reuse.indirect.m"
          }
#line 788 "structure_reuse.indirect.m"
      }
#line 757 "structure_reuse.indirect.m"
  }
#line 748 "structure_reuse.indirect.m"
}

#line 709 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(
#line 709 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 709 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_7,
#line 709 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_8,
#line 709 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12,
#line 709 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13)
#line 709 "structure_reuse.indirect.m"
{
#line 712 "structure_reuse.indirect.m"
  {
#line 712 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 712 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 9)));
#line 713 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 0)));
#line 713 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 1)));
#line 713 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 2)));
#line 713 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 3)));
#line 713 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 4)));
#line 713 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 5)));
#line 713 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 6)));
#line 713 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 7)));
#line 713 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 8)));
#line 729 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 729 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 729 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 729 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 729 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 729 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_33_33;
#line 729 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34;
#line 729 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_27_27;

#line 726 "structure_reuse.indirect.m"
#line 726 "structure_reuse.indirect.m"
    switch (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_10) {
#line 726 "structure_reuse.indirect.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 726 "structure_reuse.indirect.m"
      case (MR_Integer) 0:
#line 727 "structure_reuse.indirect.m"
        {
#line 727 "structure_reuse.indirect.m"
        }
#line 726 "structure_reuse.indirect.m"
        break;
#line 726 "structure_reuse.indirect.m"
      case (MR_Integer) 1:
#line 716 "structure_reuse.indirect.m"
        {
#line 718 "structure_reuse.indirect.m"
          {
#line 718 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewSharing_8);
          }
#line 718 "structure_reuse.indirect.m"
          if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 718 "structure_reuse.indirect.m"
            {
#line 719 "structure_reuse.indirect.m"
              {
#line 719 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__OldSharing_7);
              }
#line 719 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 718 "structure_reuse.indirect.m"
            }
#line 722 "structure_reuse.indirect.m"
          if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 721 "structure_reuse.indirect.m"
            {
#line 721 "structure_reuse.indirect.m"
              {
#line 721 "structure_reuse.indirect.m"
                mercury__io__write_string_3_p_0((MR_String) "\tsharing is now top\n");
              }
#line 721 "structure_reuse.indirect.m"
            }
#line 722 "structure_reuse.indirect.m"
          else
#line 722 "structure_reuse.indirect.m"
            {
#line 722 "structure_reuse.indirect.m"
            }
#line 716 "structure_reuse.indirect.m"
        }
#line 726 "structure_reuse.indirect.m"
        break;
#line 726 "structure_reuse.indirect.m"
    }
#line 729 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 0)));
#line 729 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 1)));
#line 729 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 2)));
#line 729 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 3)));
#line 729 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 4)));
#line 729 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 5)));
#line 729 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 6)));
#line 729 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 7)));
#line 729 "structure_reuse.indirect.m"
    {
#line 729 "structure_reuse.indirect.m"
      MR_Word base;
#line 729 "structure_reuse.indirect.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 729 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13 = base;
#line 729 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewSharing_8));
#line 729 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_28_28));
#line 729 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_29_29));
#line 729 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_30_30));
#line 729 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_31_31));
#line 729 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_32_32));
#line 729 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_33_33));
#line 729 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_34_34));
#line 729 "structure_reuse.indirect.m"
    }
#line 712 "structure_reuse.indirect.m"
  }
#line 709 "structure_reuse.indirect.m"
}

#line 696 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_p_0(
#line 696 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 696 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9,
#line 696 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Case0_10,
#line 696 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Case_11,
#line 696 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12,
#line 696 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_19,
#line 696 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_20)
#line 696 "structure_reuse.indirect.m"
{
#line 701 "structure_reuse.indirect.m"
  {
#line 701 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 701 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__MainConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Case0_10, (MR_Integer) 0)));
#line 701 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__OtherConsIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Case0_10, (MR_Integer) 1)));
#line 701 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Case0_10, (MR_Integer) 2)));
#line 701 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17;
#line 701 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal_18;
#line 704 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 0)));
#line 704 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 1)));
#line 704 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 2)));
#line 704 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 3)));
#line 704 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 5)));
#line 704 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 6)));
#line 704 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 7)));
#line 704 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 4)));
#line 706 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 706 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 706 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 706 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_33_33;
#line 706 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34;
#line 706 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_35_35;
#line 706 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36;

#line 704 "structure_reuse.indirect.m"
    {
#line 704 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 704 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_22_22));
#line 704 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_23_23));
#line 704 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_24_24));
#line 704 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_25_25));
#line 704 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_19));
#line 704 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_27_27));
#line 704 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_28_28));
#line 704 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_29_29));
#line 704 "structure_reuse.indirect.m"
    }
#line 705 "structure_reuse.indirect.m"
    {
#line 705 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, transform_hlds__ctgc__structure_reuse__indirect__Goal0_16, &transform_hlds__ctgc__structure_reuse__indirect__Goal_18, transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_17, transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12);
    }
#line 706 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 0)));
#line 706 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 1)));
#line 706 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 2)));
#line 706 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 3)));
#line 706 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 4)));
#line 706 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 5)));
#line 706 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 6)));
#line 706 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 7)));
#line 707 "structure_reuse.indirect.m"
    {
#line 707 "structure_reuse.indirect.m"
      MR_Word base;
#line 707 "structure_reuse.indirect.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 707 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__Case_11 = base;
#line 707 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__MainConsId_14));
#line 707 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__OtherConsIds_15));
#line 707 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Goal_18));
#line 707 "structure_reuse.indirect.m"
    }
#line 701 "structure_reuse.indirect.m"
  }
#line 696 "structure_reuse.indirect.m"
}

#line 684 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_p_0(
#line 684 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 684 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9,
#line 684 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal0_10,
#line 684 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Goal_11,
#line 684 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12,
#line 684 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_15,
#line 684 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_16)
#line 684 "structure_reuse.indirect.m"
{
#line 689 "structure_reuse.indirect.m"
  {
#line 689 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 689 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14;
#line 691 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 0)));
#line 691 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 1)));
#line 691 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 2)));
#line 691 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 3)));
#line 691 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 5)));
#line 691 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 6)));
#line 691 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 7)));
#line 691 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_9, (MR_Integer) 4)));
#line 693 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 693 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_27_27;
#line 693 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 693 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 693 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 693 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 693 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;

#line 691 "structure_reuse.indirect.m"
    {
#line 691 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 691 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_18_18));
#line 691 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_19_19));
#line 691 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_20_20));
#line 691 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_21_21));
#line 691 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_15));
#line 691 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_23_23));
#line 691 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_24_24));
#line 691 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_25_25));
#line 691 "structure_reuse.indirect.m"
    }
#line 692 "structure_reuse.indirect.m"
    {
#line 692 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, transform_hlds__ctgc__structure_reuse__indirect__Goal0_10, transform_hlds__ctgc__structure_reuse__indirect__Goal_11, transform_hlds__ctgc__structure_reuse__indirect__NewIrInfo_14, transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12);
    }
#line 693 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 0)));
#line 693 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 1)));
#line 693 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 2)));
#line 693 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 3)));
#line 693 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 4)));
#line 693 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 5)));
#line 693 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 6)));
#line 693 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__ctgc__structure_reuse__indirect__IrInfo_12, (MR_Integer) 7)));
#line 689 "structure_reuse.indirect.m"
  }
#line 684 "structure_reuse.indirect.m"
}

#line 639 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_p_0(
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8,
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GenDetails_9,
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallArgs_10,
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Modes_11,
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_12,
#line 639 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34,
#line 639 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35)
#line 639 "structure_reuse.indirect.m"
{
#line 644 "structure_reuse.indirect.m"
  {
#line 644 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 644 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 644 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 645 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 645 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 645 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 645 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 645 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 645 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 645 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 645 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));

#line 7505 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 7506 "transform_hlds.ctgc.structure_reuse.indirect.c"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__GenDetails_9)) {
#line 7508 "transform_hlds.ctgc.structure_reuse.indirect.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 7510 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 0:
#line 7512 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 1:
#line 7514 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 7516 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallerVarTypes_24;
#line 7518 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__ActualTypes_25;

#line 651 "structure_reuse.indirect.m"
          {
#line 651 "structure_reuse.indirect.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_15, &transform_hlds__ctgc__structure_reuse__indirect__CallerVarTypes_24);
          }
#line 652 "structure_reuse.indirect.m"
          {
#line 652 "structure_reuse.indirect.m"
            hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__CallerVarTypes_24, transform_hlds__ctgc__structure_reuse__indirect__CallArgs_10, &transform_hlds__ctgc__structure_reuse__indirect__ActualTypes_25);
          }
#line 654 "structure_reuse.indirect.m"
          {
#line 654 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_14, transform_hlds__ctgc__structure_reuse__indirect__Modes_11, transform_hlds__ctgc__structure_reuse__indirect__ActualTypes_25);
          }
#line 7536 "transform_hlds.ctgc.structure_reuse.indirect.c"
          if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 668 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34;
#line 7540 "transform_hlds.ctgc.structure_reuse.indirect.c"
          else
#line 7542 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 7544 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Context_132;
#line 7546 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_String transform_hlds__ctgc__structure_reuse__indirect__ContextString_133;
#line 7548 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_String transform_hlds__ctgc__structure_reuse__indirect__Msg_134;
#line 7550 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_135;
#line 7552 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_136;
#line 7554 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_String transform_hlds__ctgc__structure_reuse__indirect__V_138_138;
#line 7556 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_140_140;
#line 7558 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_141_141;
#line 7560 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_142_142;
#line 7562 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_143_143;
#line 7564 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_144_144;
#line 7566 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_145_145;
#line 7568 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_146_146;
#line 7570 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_147_147;
#line 7572 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_148;
#line 713 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;
#line 713 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_96_96;
#line 713 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_97_97;
#line 713 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_98_98;
#line 713 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_99_99;
#line 713 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_100_100;
#line 713 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_101_101;
#line 713 "structure_reuse.indirect.m"
              MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_102_102;
#line 713 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_103_103;

#line 671 "structure_reuse.indirect.m"
              {
#line 671 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__Context_132 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_12);
              }
#line 672 "structure_reuse.indirect.m"
              {
#line 672 "structure_reuse.indirect.m"
                parse_tree__prog_out__context_to_string_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__Context_132, &transform_hlds__ctgc__structure_reuse__indirect__ContextString_133);
              }
#line 673 "structure_reuse.indirect.m"
              {
#line 673 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_138_138 = mercury__string__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__ContextString_133, (MR_String) ")");
              }
#line 673 "structure_reuse.indirect.m"
              {
#line 673 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__Msg_134 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", transform_hlds__ctgc__structure_reuse__indirect__V_138_138);
              }
#line 674 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__OldSharing_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
#line 674 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
#line 674 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
#line 674 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
#line 674 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
#line 674 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
#line 674 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
#line 674 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));
#line 676 "structure_reuse.indirect.m"
              {
#line 676 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_140_140 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 676 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_140_140, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Msg_134));
#line 676 "structure_reuse.indirect.m"
              }
#line 675 "structure_reuse.indirect.m"
              {
#line 675 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__NewSharing_136 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_140_140, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_135);
              }
#line 713 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 713 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 713 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 713 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 713 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 713 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 713 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 713 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 713 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 713 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));
#line 726 "structure_reuse.indirect.m"
#line 726 "structure_reuse.indirect.m"
              switch (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_148) {
#line 726 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 726 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 727 "structure_reuse.indirect.m"
                  {
#line 727 "structure_reuse.indirect.m"
                  }
#line 726 "structure_reuse.indirect.m"
                  break;
#line 726 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 716 "structure_reuse.indirect.m"
                  {
#line 718 "structure_reuse.indirect.m"
                    {
#line 718 "structure_reuse.indirect.m"
                      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewSharing_136);
                    }
#line 718 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 718 "structure_reuse.indirect.m"
                      {
#line 719 "structure_reuse.indirect.m"
                        {
#line 719 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__OldSharing_135);
                        }
#line 719 "structure_reuse.indirect.m"
                        transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 718 "structure_reuse.indirect.m"
                      }
#line 722 "structure_reuse.indirect.m"
                    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 721 "structure_reuse.indirect.m"
                      {
#line 721 "structure_reuse.indirect.m"
                        {
#line 721 "structure_reuse.indirect.m"
                          mercury__io__write_string_3_p_0((MR_String) "\tsharing is now top\n");
                        }
#line 721 "structure_reuse.indirect.m"
                      }
#line 722 "structure_reuse.indirect.m"
                    else
#line 722 "structure_reuse.indirect.m"
                      {
#line 722 "structure_reuse.indirect.m"
                      }
#line 716 "structure_reuse.indirect.m"
                  }
#line 726 "structure_reuse.indirect.m"
                  break;
#line 726 "structure_reuse.indirect.m"
              }
#line 729 "structure_reuse.indirect.m"
              {
#line 729 "structure_reuse.indirect.m"
                MR_Word base;
#line 729 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 729 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35 = base;
#line 729 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewSharing_136));
#line 729 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_141_141));
#line 729 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_142_142));
#line 729 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_143_143));
#line 729 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_144_144));
#line 729 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_145_145));
#line 729 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_146_146));
#line 729 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_147_147));
#line 729 "structure_reuse.indirect.m"
              }
#line 7746 "transform_hlds.ctgc.structure_reuse.indirect.c"
            }
#line 7748 "transform_hlds.ctgc.structure_reuse.indirect.c"
        }
#line 7750 "transform_hlds.ctgc.structure_reuse.indirect.c"
        break;
#line 7752 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 2:
#line 7754 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 3:
#line 7756 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 7758 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__Context_29;
#line 7760 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_String transform_hlds__ctgc__structure_reuse__indirect__ContextString_30;
#line 7762 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_String transform_hlds__ctgc__structure_reuse__indirect__Msg_31;
#line 7764 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_32;
#line 7766 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_33;
#line 7768 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_String transform_hlds__ctgc__structure_reuse__indirect__V_37_37;
#line 7770 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39;
#line 7772 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59;
#line 7774 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60;
#line 7776 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61;
#line 7778 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_62_62;
#line 7780 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63;
#line 7782 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64;
#line 7784 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_65_65;
#line 7786 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_72;
#line 713 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78;
#line 713 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_79_79;
#line 713 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80;
#line 713 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81;
#line 713 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82;
#line 713 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83;
#line 713 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84;
#line 713 "structure_reuse.indirect.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_85_85;
#line 713 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86;

#line 671 "structure_reuse.indirect.m"
          {
#line 671 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_12);
          }
#line 672 "structure_reuse.indirect.m"
          {
#line 672 "structure_reuse.indirect.m"
            parse_tree__prog_out__context_to_string_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__Context_29, &transform_hlds__ctgc__structure_reuse__indirect__ContextString_30);
          }
#line 673 "structure_reuse.indirect.m"
          {
#line 673 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = mercury__string__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__ContextString_30, (MR_String) ")");
          }
#line 673 "structure_reuse.indirect.m"
          {
#line 673 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__Msg_31 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", transform_hlds__ctgc__structure_reuse__indirect__V_37_37);
          }
#line 674 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__OldSharing_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
#line 674 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
#line 674 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
#line 674 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
#line 674 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
#line 674 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
#line 674 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
#line 674 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));
#line 676 "structure_reuse.indirect.m"
          {
#line 676 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 676 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__V_39_39, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Msg_31));
#line 676 "structure_reuse.indirect.m"
          }
#line 675 "structure_reuse.indirect.m"
          {
#line 675 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__NewSharing_33 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_39_39, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_32);
          }
#line 713 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 0)));
#line 713 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 1)));
#line 713 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 2)));
#line 713 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 3)));
#line 713 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 4)));
#line 713 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 5)));
#line 713 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 6)));
#line 713 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 7)));
#line 713 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 8)));
#line 713 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_8, (MR_Integer) 9)));
#line 726 "structure_reuse.indirect.m"
#line 726 "structure_reuse.indirect.m"
          switch (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_72) {
#line 726 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 726 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 727 "structure_reuse.indirect.m"
              {
#line 727 "structure_reuse.indirect.m"
              }
#line 726 "structure_reuse.indirect.m"
              break;
#line 726 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 716 "structure_reuse.indirect.m"
              {
#line 718 "structure_reuse.indirect.m"
                {
#line 718 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__NewSharing_33);
                }
#line 718 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 718 "structure_reuse.indirect.m"
                  {
#line 719 "structure_reuse.indirect.m"
                    {
#line 719 "structure_reuse.indirect.m"
                      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__structure_reuse__indirect__OldSharing_32);
                    }
#line 719 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__succeeded = !(transform_hlds__ctgc__structure_reuse__indirect__succeeded);
#line 718 "structure_reuse.indirect.m"
                  }
#line 722 "structure_reuse.indirect.m"
                if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 721 "structure_reuse.indirect.m"
                  {
#line 721 "structure_reuse.indirect.m"
                    {
#line 721 "structure_reuse.indirect.m"
                      mercury__io__write_string_3_p_0((MR_String) "\tsharing is now top\n");
                    }
#line 721 "structure_reuse.indirect.m"
                  }
#line 722 "structure_reuse.indirect.m"
                else
#line 722 "structure_reuse.indirect.m"
                  {
#line 722 "structure_reuse.indirect.m"
                  }
#line 716 "structure_reuse.indirect.m"
              }
#line 726 "structure_reuse.indirect.m"
              break;
#line 726 "structure_reuse.indirect.m"
          }
#line 729 "structure_reuse.indirect.m"
          {
#line 729 "structure_reuse.indirect.m"
            MR_Word base;
#line 729 "structure_reuse.indirect.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 729 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35 = base;
#line 729 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewSharing_33));
#line 729 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_59_59));
#line 729 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_60_60));
#line 729 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_61_61));
#line 729 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_62_62));
#line 729 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_63_63));
#line 729 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_64_64));
#line 729 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_65_65));
#line 729 "structure_reuse.indirect.m"
          }
#line 7960 "transform_hlds.ctgc.structure_reuse.indirect.c"
        }
#line 7962 "transform_hlds.ctgc.structure_reuse.indirect.c"
        break;
#line 7964 "transform_hlds.ctgc.structure_reuse.indirect.c"
    }
#line 644 "structure_reuse.indirect.m"
  }
#line 639 "structure_reuse.indirect.m"
}

#line 577 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_p_0(
#line 577 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 577 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_32,
#line 577 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_33,
#line 577 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34,
#line 577 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35)
#line 577 "structure_reuse.indirect.m"
{
#line 581 "structure_reuse.indirect.m"
  {
#line 581 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 0)));
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 2)));
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 3)));
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 4)));
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_32, (MR_Integer) 0)));
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_32, (MR_Integer) 1)));
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 0)));
#line 581 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__CalleeProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 1)));
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 2)));
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Reuse0_21;
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_30;
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_31;
#line 581 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39;
#line 582 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 1)));
#line 582 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 5)));
#line 582 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 6)));
#line 582 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 7)));
#line 582 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 8)));
#line 582 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 9)));
#line 588 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect___Builtin_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 3)));
#line 588 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect___Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 4)));
#line 588 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect___Sym_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13, (MR_Integer) 5)));
#line 634 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_94_94;
#line 634 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;
#line 634 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_96_96;
#line 634 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_97_97;
#line 634 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_98_98;
#line 634 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_99_99;
#line 634 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_100_100;

#line 590 "structure_reuse.indirect.m"
    {
#line 590 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Reuse0_21 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_14);
    }
#line 8054 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 8055 "transform_hlds.ctgc.structure_reuse.indirect.c"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__Reuse0_21)) {
#line 8057 "transform_hlds.ctgc.structure_reuse.indirect.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 8059 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 0:
#line 8061 "transform_hlds.ctgc.structure_reuse.indirect.c"
#line 8062 "transform_hlds.ctgc.structure_reuse.indirect.c"
        switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__Reuse0_21)) {
#line 8064 "transform_hlds.ctgc.structure_reuse.indirect.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 8066 "transform_hlds.ctgc.structure_reuse.indirect.c"
          case (MR_Integer) 0:
#line 8068 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 8070 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Integer transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 7)));
#line 8072 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_140;
#line 8074 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_142;
#line 8076 "transform_hlds.ctgc.structure_reuse.indirect.c"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_145_145;
#line 620 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 0)));
#line 620 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 1)));
#line 620 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 2)));
#line 620 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 3)));
#line 620 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 4)));
#line 620 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 5)));
#line 620 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 6)));
#line 620 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 8)));
#line 620 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 9)));
#line 621 "structure_reuse.indirect.m"
              MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_120_120;
#line 621 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
#line 621 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
#line 621 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
#line 621 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
#line 621 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
#line 621 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
#line 621 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
#line 621 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));

#line 621 "structure_reuse.indirect.m"
              {
#line 621 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_120_120 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_121_121);
              }
#line 621 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_120_120 >= transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_139);
#line 623 "structure_reuse.indirect.m"
              if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 622 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_140 = (MR_Integer) 1;
#line 623 "structure_reuse.indirect.m"
              else
#line 624 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_140 = (MR_Integer) 0;
#line 627 "structure_reuse.indirect.m"
              {
#line 627 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 627 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_145_145, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_15));
#line 627 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_145_145, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleeProcId_16));
#line 627 "structure_reuse.indirect.m"
              }
#line 627 "structure_reuse.indirect.m"
              {
#line 627 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__V_145_145, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_17, transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_140, transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_14, &transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_142, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39);
              }
#line 630 "structure_reuse.indirect.m"
              {
#line 630 "structure_reuse.indirect.m"
                MR_Word base;
#line 630 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_33 = base;
#line 630 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13));
#line 630 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_142));
#line 630 "structure_reuse.indirect.m"
              }
#line 8159 "transform_hlds.ctgc.structure_reuse.indirect.c"
            }
#line 8161 "transform_hlds.ctgc.structure_reuse.indirect.c"
            break;
#line 8163 "transform_hlds.ctgc.structure_reuse.indirect.c"
          case (MR_Integer) 1:
#line 8165 "transform_hlds.ctgc.structure_reuse.indirect.c"
            {
#line 632 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_33 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_32;
#line 632 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34;
#line 8171 "transform_hlds.ctgc.structure_reuse.indirect.c"
            }
#line 8173 "transform_hlds.ctgc.structure_reuse.indirect.c"
            break;
#line 8175 "transform_hlds.ctgc.structure_reuse.indirect.c"
        }
#line 8177 "transform_hlds.ctgc.structure_reuse.indirect.c"
        break;
#line 8179 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 1:
#line 8181 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 2:
#line 8183 "transform_hlds.ctgc.structure_reuse.indirect.c"
      case (MR_Integer) 3:
#line 8185 "transform_hlds.ctgc.structure_reuse.indirect.c"
        {
#line 8187 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Integer transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 7)));
#line 8189 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_27;
#line 8191 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_29;
#line 8193 "transform_hlds.ctgc.structure_reuse.indirect.c"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38;
#line 620 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 0)));
#line 620 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 1)));
#line 620 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 2)));
#line 620 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 3)));
#line 620 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 4)));
#line 620 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 5)));
#line 620 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 6)));
#line 620 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 8)));
#line 620 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 9)));
#line 621 "structure_reuse.indirect.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_36_36;
#line 621 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
#line 621 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
#line 621 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
#line 621 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
#line 621 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
#line 621 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
#line 621 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
#line 621 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));

#line 621 "structure_reuse.indirect.m"
          {
#line 621 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_37_37);
          }
#line 621 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__V_36_36 >= transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_26);
#line 623 "structure_reuse.indirect.m"
          if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 622 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_27 = (MR_Integer) 1;
#line 623 "structure_reuse.indirect.m"
          else
#line 624 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_27 = (MR_Integer) 0;
#line 627 "structure_reuse.indirect.m"
          {
#line 627 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 627 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_38_38, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_15));
#line 627 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_38_38, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__CalleeProcId_16));
#line 627 "structure_reuse.indirect.m"
          }
#line 627 "structure_reuse.indirect.m"
          {
#line 627 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__V_38_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_17, transform_hlds__ctgc__structure_reuse__indirect__CondReuseHandling_27, transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_14, &transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_29, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_34, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39);
          }
#line 630 "structure_reuse.indirect.m"
          {
#line 630 "structure_reuse.indirect.m"
            MR_Word base;
#line 630 "structure_reuse.indirect.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_33 = base;
#line 630 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_13));
#line 630 "structure_reuse.indirect.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo_29));
#line 630 "structure_reuse.indirect.m"
          }
#line 8276 "transform_hlds.ctgc.structure_reuse.indirect.c"
        }
#line 8278 "transform_hlds.ctgc.structure_reuse.indirect.c"
        break;
#line 8280 "transform_hlds.ctgc.structure_reuse.indirect.c"
    }
#line 634 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__OldSharing_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 0)));
#line 634 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 1)));
#line 634 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 2)));
#line 634 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 3)));
#line 634 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 4)));
#line 634 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 5)));
#line 634 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 6)));
#line 634 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 7)));
#line 635 "structure_reuse.indirect.m"
    {
#line 635 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11, transform_hlds__ctgc__structure_reuse__indirect__SharingTable_12, transform_hlds__ctgc__structure_reuse__indirect__CalleePredId_15, transform_hlds__ctgc__structure_reuse__indirect__CalleeProcId_16, transform_hlds__ctgc__structure_reuse__indirect__CalleeArgs_17, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_30, &transform_hlds__ctgc__structure_reuse__indirect__NewSharing_31);
    }
#line 637 "structure_reuse.indirect.m"
    {
#line 637 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_30, transform_hlds__ctgc__structure_reuse__indirect__NewSharing_31, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_39_39, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_35);
    }
#line 581 "structure_reuse.indirect.m"
  }
#line 577 "structure_reuse.indirect.m"
}

#line 522 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_3(
#line 522 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 522 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 522 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 522 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 522 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 522 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5)
#line 522 "structure_reuse.indirect.m"
{
#line 522 "structure_reuse.indirect.m"
  {
#line 522 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 522 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv9_Case_11;
#line 522 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv8_IrInfo_12;
#line 522 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_FixpointTable_20;

#line 522 "structure_reuse.indirect.m"
    {
#line 522 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__indirect__conv9_Case_11, &transform_hlds__ctgc__structure_reuse__indirect__conv8_IrInfo_12, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_FixpointTable_20);
    }
#line 522 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv9_Case_11));
#line 522 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv8_IrInfo_12));
#line 522 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_FixpointTable_20));
#line 522 "structure_reuse.indirect.m"
  }
#line 522 "structure_reuse.indirect.m"
}

#line 513 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_2(
#line 513 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 513 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 513 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 513 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 513 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 513 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5)
#line 513 "structure_reuse.indirect.m"
{
#line 513 "structure_reuse.indirect.m"
  {
#line 513 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 513 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv5_Goal_11;
#line 513 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv4_IrInfo_12;
#line 513 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_16;

#line 513 "structure_reuse.indirect.m"
    {
#line 513 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__indirect__conv5_Goal_11, &transform_hlds__ctgc__structure_reuse__indirect__conv4_IrInfo_12, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_16);
    }
#line 513 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv5_Goal_11));
#line 513 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv4_IrInfo_12));
#line 513 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_16));
#line 513 "structure_reuse.indirect.m"
  }
#line 513 "structure_reuse.indirect.m"
}

#line 470 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_1(
#line 470 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 470 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 470 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 470 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 470 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4)
#line 470 "structure_reuse.indirect.m"
{
#line 470 "structure_reuse.indirect.m"
  {
#line 470 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 470 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Goal_90;
#line 470 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_92;

#line 470 "structure_reuse.indirect.m"
    {
#line 470 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Goal_90, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_92);
    }
#line 470 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Goal_90));
#line 470 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_92));
#line 470 "structure_reuse.indirect.m"
  }
#line 470 "structure_reuse.indirect.m"
}

#line 459 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(
#line 459 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 459 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89,
#line 459 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90,
#line 459 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91,
#line 459 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92)
#line 459 "structure_reuse.indirect.m"
{
#line 462 "structure_reuse.indirect.m"
  {
#line 462 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 462 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 0)));
#line 462 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 2)));
#line 462 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 3)));
#line 462 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89, (MR_Integer) 0)));
#line 462 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89, (MR_Integer) 1)));
#line 463 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 1)));
#line 463 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 4)));
#line 463 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 5)));
#line 463 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 6)));
#line 463 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 7)));
#line 463 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 8)));
#line 463 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, (MR_Integer) 9)));

#line 474 "structure_reuse.indirect.m"
#line 474 "structure_reuse.indirect.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12)) {
#line 474 "structure_reuse.indirect.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 474 "structure_reuse.indirect.m"
      case (MR_Integer) 0:
#line 530 "structure_reuse.indirect.m"
        {
#line 530 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89;
#line 530 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 530 "structure_reuse.indirect.m"
        }
#line 474 "structure_reuse.indirect.m"
        break;
#line 474 "structure_reuse.indirect.m"
      case (MR_Integer) 1:
#line 484 "structure_reuse.indirect.m"
        {
#line 484 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__Unification_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 3)));
#line 484 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_56;
#line 484 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_57;
#line 484 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113;
#line 484 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 0)));
#line 484 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 484 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 484 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 4)));
#line 507 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_177_177;
#line 507 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_178_178;
#line 507 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_179_179;
#line 507 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_180_180;
#line 507 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_181_181;
#line 507 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_182_182;
#line 507 "structure_reuse.indirect.m"
          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_183_183;

#line 498 "structure_reuse.indirect.m"
#line 498 "structure_reuse.indirect.m"
          switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__Unification_32)) {
#line 498 "structure_reuse.indirect.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 498 "structure_reuse.indirect.m"
            case (MR_Integer) 0:
#line 487 "structure_reuse.indirect.m"
              {
#line 487 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 0)));
#line 487 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__HowToConstruct_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 4)));
#line 487 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 1)));
#line 487 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 2)));
#line 487 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 3)));
#line 487 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 5)));
#line 487 "structure_reuse.indirect.m"
                MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 6)));

#line 492 "structure_reuse.indirect.m"
#line 492 "structure_reuse.indirect.m"
                switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__HowToConstruct_38)) {
#line 492 "structure_reuse.indirect.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 492 "structure_reuse.indirect.m"
                  case (MR_Integer) 0:
#line 492 "structure_reuse.indirect.m"
#line 492 "structure_reuse.indirect.m"
                    switch (MR_unmkbody(transform_hlds__ctgc__structure_reuse__indirect__HowToConstruct_38)) {
#line 492 "structure_reuse.indirect.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 492 "structure_reuse.indirect.m"
                      case (MR_Integer) 0:
#line 489 "structure_reuse.indirect.m"
                        {
#line 489 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_114_114;
#line 489 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 491 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 491 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 491 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 491 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 491 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 491 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 491 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 490 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_169_169;
#line 490 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_170_170;
#line 490 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_171_171;
#line 490 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_173_173;
#line 490 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_174_174;
#line 490 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_175_175;
#line 490 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_176_176;
#line 490 "structure_reuse.indirect.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_172_172;

#line 491 "structure_reuse.indirect.m"
                          {
#line 491 "structure_reuse.indirect.m"
                            transform_hlds__ctgc__structure_reuse__indirect__V_114_114 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3], transform_hlds__ctgc__structure_reuse__indirect__V_115_115, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Var_34)));
                          }
#line 490 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 490 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 490 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 490 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 490 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 490 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 490 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 490 "structure_reuse.indirect.m"
                          transform_hlds__ctgc__structure_reuse__indirect__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 490 "structure_reuse.indirect.m"
                          {
#line 490 "structure_reuse.indirect.m"
                            transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 490 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_169_169));
#line 490 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_170_170));
#line 490 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_171_171));
#line 490 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_114_114));
#line 490 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_173_173));
#line 490 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_174_174));
#line 490 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_175_175));
#line 490 "structure_reuse.indirect.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_176_176));
#line 490 "structure_reuse.indirect.m"
                          }
#line 489 "structure_reuse.indirect.m"
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
                    }
#line 492 "structure_reuse.indirect.m"
                    break;
#line 492 "structure_reuse.indirect.m"
                  case (MR_Integer) 1:
#line 494 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 492 "structure_reuse.indirect.m"
                    break;
#line 492 "structure_reuse.indirect.m"
                  case (MR_Integer) 2:
#line 495 "structure_reuse.indirect.m"
                    transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 492 "structure_reuse.indirect.m"
                    break;
#line 492 "structure_reuse.indirect.m"
                }
#line 487 "structure_reuse.indirect.m"
              }
#line 498 "structure_reuse.indirect.m"
              break;
#line 498 "structure_reuse.indirect.m"
            case (MR_Integer) 1:
#line 499 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 498 "structure_reuse.indirect.m"
              break;
#line 498 "structure_reuse.indirect.m"
            case (MR_Integer) 2:
#line 500 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 498 "structure_reuse.indirect.m"
              break;
#line 498 "structure_reuse.indirect.m"
            case (MR_Integer) 3:
#line 498 "structure_reuse.indirect.m"
#line 498 "structure_reuse.indirect.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__Unification_32, (MR_Integer) 0)))) {
#line 498 "structure_reuse.indirect.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 498 "structure_reuse.indirect.m"
                case (MR_Integer) 0:
#line 501 "structure_reuse.indirect.m"
                  transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91;
#line 498 "structure_reuse.indirect.m"
                  break;
#line 498 "structure_reuse.indirect.m"
                case (MR_Integer) 1:
#line 504 "structure_reuse.indirect.m"
                  {
#line 505 "structure_reuse.indirect.m"
                    {
#line 505 "structure_reuse.indirect.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.indirect_reuse_analyse_goal\'/5", (MR_String) "complicated unification");
#line 505 "structure_reuse.indirect.m"
                      return;
                    }
#line 504 "structure_reuse.indirect.m"
                  }
#line 498 "structure_reuse.indirect.m"
                  break;
#line 498 "structure_reuse.indirect.m"
              }
#line 498 "structure_reuse.indirect.m"
              break;
#line 498 "structure_reuse.indirect.m"
          }
#line 507 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__OldSharing_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 0)));
#line 507 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 1)));
#line 507 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 2)));
#line 507 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 3)));
#line 507 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 4)));
#line 507 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 5)));
#line 507 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 6)));
#line 507 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 7)));
#line 508 "structure_reuse.indirect.m"
          {
#line 508 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__NewSharing_57 = transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_f_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11, transform_hlds__ctgc__structure_reuse__indirect__Unification_32, transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_56);
          }
#line 510 "structure_reuse.indirect.m"
          {
#line 510 "structure_reuse.indirect.m"
            transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_56, transform_hlds__ctgc__structure_reuse__indirect__NewSharing_57, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_113_113, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
          }
#line 484 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89;
#line 484 "structure_reuse.indirect.m"
        }
#line 474 "structure_reuse.indirect.m"
        break;
#line 474 "structure_reuse.indirect.m"
      case (MR_Integer) 2:
#line 476 "structure_reuse.indirect.m"
        {
#line 476 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
        }
#line 474 "structure_reuse.indirect.m"
        break;
#line 474 "structure_reuse.indirect.m"
      case (MR_Integer) 3:
#line 474 "structure_reuse.indirect.m"
#line 474 "structure_reuse.indirect.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 0)))) {
#line 474 "structure_reuse.indirect.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 474 "structure_reuse.indirect.m"
          case (MR_Integer) 0:
#line 480 "structure_reuse.indirect.m"
            {
#line 480 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GenDetails_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 480 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__CallArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 480 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Modes_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 3)));
#line 479 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect___MaybeArgRegs_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 4)));
#line 479 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect___Detism_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 5)));

#line 481 "structure_reuse.indirect.m"
              {
#line 481 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__GenDetails_24, transform_hlds__ctgc__structure_reuse__indirect__CallArgs_25, transform_hlds__ctgc__structure_reuse__indirect__Modes_26, transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 480 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89;
#line 480 "structure_reuse.indirect.m"
            }
#line 474 "structure_reuse.indirect.m"
            break;
#line 474 "structure_reuse.indirect.m"
          case (MR_Integer) 1:
#line 564 "structure_reuse.indirect.m"
            {
#line 564 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Attributes_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 564 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ForeignPredId_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 564 "structure_reuse.indirect.m"
              MR_Integer transform_hlds__ctgc__structure_reuse__indirect__ForeignProcId_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 3)));
#line 564 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 4)));
#line 564 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ForeignPPId_86;
#line 564 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Context_87;
#line 564 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__OldSharing_133;
#line 564 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_134;
#line 563 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect___ExtraArgs_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 5)));
#line 563 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect___MaybeTraceRuntimeCond_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 6)));
#line 563 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect___Impl_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 7)));
#line 567 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_213_213;
#line 567 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_214_214;
#line 567 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_215_215;
#line 567 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_216_216;
#line 567 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_217_217;
#line 567 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_218_218;
#line 567 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_219_219;

#line 565 "structure_reuse.indirect.m"
              {
#line 565 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__ForeignPPId_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 565 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ForeignPPId_86, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ForeignPredId_80));
#line 565 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ForeignPPId_86, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ForeignProcId_81));
#line 565 "structure_reuse.indirect.m"
              }
#line 566 "structure_reuse.indirect.m"
              {
#line 566 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__Context_87 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13);
              }
#line 567 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__OldSharing_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 567 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 567 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 567 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 567 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 567 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 567 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 567 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 568 "structure_reuse.indirect.m"
              {
#line 568 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_9, transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11, transform_hlds__ctgc__structure_reuse__indirect__ForeignPPId_86, transform_hlds__ctgc__structure_reuse__indirect__Attributes_79, transform_hlds__ctgc__structure_reuse__indirect__Args_82, transform_hlds__ctgc__structure_reuse__indirect__Context_87, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_133, &transform_hlds__ctgc__structure_reuse__indirect__NewSharing_134);
              }
#line 570 "structure_reuse.indirect.m"
              {
#line 570 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__OldSharing_133, transform_hlds__ctgc__structure_reuse__indirect__NewSharing_134, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 564 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_0_89;
#line 564 "structure_reuse.indirect.m"
            }
#line 474 "structure_reuse.indirect.m"
            break;
#line 474 "structure_reuse.indirect.m"
          case (MR_Integer) 2:
#line 469 "structure_reuse.indirect.m"
            {
#line 469 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_224_224;
#line 469 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 469 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 469 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goals_16;
#line 469 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17;
#line 469 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_121_121;
#line 470 "structure_reuse.indirect.m"
              MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_IrInfo_92;

#line 470 "structure_reuse.indirect.m"
              {
#line 470 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 470 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_121_121, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_7[0]));
#line 470 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_121_121, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_1));
#line 470 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_121_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 470 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_121_121, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6));
#line 470 "structure_reuse.indirect.m"
              }
#line 8926 "transform_hlds.ctgc.structure_reuse.indirect.c"
              transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_224_224 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 470 "structure_reuse.indirect.m"
              {
#line 470 "structure_reuse.indirect.m"
                mercury__list__map_foldl_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_224_224, transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_224_224, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0, transform_hlds__ctgc__structure_reuse__indirect__V_121_121, transform_hlds__ctgc__structure_reuse__indirect__Goals0_15, &transform_hlds__ctgc__structure_reuse__indirect__Goals_16, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91)), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_IrInfo_92);
              }
#line 470 "structure_reuse.indirect.m"
              *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_IrInfo_92);
#line 472 "structure_reuse.indirect.m"
              {
#line 472 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 472 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 472 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ConjType_14));
#line 472 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Goals_16));
#line 472 "structure_reuse.indirect.m"
              }
#line 473 "structure_reuse.indirect.m"
              {
#line 473 "structure_reuse.indirect.m"
                MR_Word base;
#line 473 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 473 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = base;
#line 473 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_17));
#line 473 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13));
#line 473 "structure_reuse.indirect.m"
              }
#line 469 "structure_reuse.indirect.m"
            }
#line 474 "structure_reuse.indirect.m"
            break;
#line 474 "structure_reuse.indirect.m"
          case (MR_Integer) 3:
#line 512 "structure_reuse.indirect.m"
            {
#line 512 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_232_232;
#line 512 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_58;
#line 512 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_59;
#line 512 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_106_106;
#line 512 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_107_107;
#line 512 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goals0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 512 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goals_125;
#line 512 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_126;
#line 513 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_184_184;
#line 513 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_185_185;
#line 513 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_186_186;
#line 513 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_187_187;
#line 513 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_188_188;
#line 513 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_189_189;
#line 513 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_190_190;
#line 513 "structure_reuse.indirect.m"
              MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv6_NewFixpointTable_59;

#line 513 "structure_reuse.indirect.m"
              {
#line 513 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 513 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_106_106, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_8[0]));
#line 513 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_106_106, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_2));
#line 513 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_106_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 513 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_106_106, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6));
#line 513 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_106_106, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91));
#line 513 "structure_reuse.indirect.m"
              }
#line 513 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 513 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 513 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 513 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 513 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 513 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 513 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 513 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 9034 "transform_hlds.ctgc.structure_reuse.indirect.c"
              transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_232_232 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 513 "structure_reuse.indirect.m"
              {
#line 513 "structure_reuse.indirect.m"
                mercury__list__map2_foldl_6_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_232_232, transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_232_232, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], transform_hlds__ctgc__structure_reuse__indirect__V_106_106, transform_hlds__ctgc__structure_reuse__indirect__Goals0_124, &transform_hlds__ctgc__structure_reuse__indirect__Goals_125, &transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_58, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_107_107)), &transform_hlds__ctgc__structure_reuse__indirect__conv6_NewFixpointTable_59);
              }
#line 513 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_59 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv6_NewFixpointTable_59);
#line 515 "structure_reuse.indirect.m"
              {
#line 515 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_58, transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_59, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 517 "structure_reuse.indirect.m"
              {
#line 517 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 517 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_126, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Goals_125));
#line 517 "structure_reuse.indirect.m"
              }
#line 518 "structure_reuse.indirect.m"
              {
#line 518 "structure_reuse.indirect.m"
                MR_Word base;
#line 518 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = base;
#line 518 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_126));
#line 518 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13));
#line 518 "structure_reuse.indirect.m"
              }
#line 512 "structure_reuse.indirect.m"
            }
#line 474 "structure_reuse.indirect.m"
            break;
#line 474 "structure_reuse.indirect.m"
          case (MR_Integer) 4:
#line 520 "structure_reuse.indirect.m"
            {
#line 520 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_240_240;
#line 520 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__A_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 520 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__B_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 520 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cases0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 3)));
#line 520 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Cases_63;
#line 520 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_102_102;
#line 520 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_103_103;
#line 520 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127;
#line 520 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_128;
#line 520 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_129;
#line 521 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_191_191;
#line 521 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_192_192;
#line 521 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_193_193;
#line 521 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_194_194;
#line 521 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_195_195;
#line 521 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_196_196;
#line 521 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_197_197;
#line 521 "structure_reuse.indirect.m"
              MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv10_NewFixpointTable_129;

#line 522 "structure_reuse.indirect.m"
              {
#line 522 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 522 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_102_102, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_8[1]));
#line 522 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_102_102, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_3));
#line 522 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_102_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 522 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_102_102, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6));
#line 522 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_102_102, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91));
#line 522 "structure_reuse.indirect.m"
              }
#line 521 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 521 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 521 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 521 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 521 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 521 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 521 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 521 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 9149 "transform_hlds.ctgc.structure_reuse.indirect.c"
              transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_240_240 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 521 "structure_reuse.indirect.m"
              {
#line 521 "structure_reuse.indirect.m"
                mercury__list__map2_foldl_6_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_240_240, transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_240_240, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], transform_hlds__ctgc__structure_reuse__indirect__V_102_102, transform_hlds__ctgc__structure_reuse__indirect__Cases0_62, &transform_hlds__ctgc__structure_reuse__indirect__Cases_63, &transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_128, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_103_103)), &transform_hlds__ctgc__structure_reuse__indirect__conv10_NewFixpointTable_129);
              }
#line 521 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_129 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv10_NewFixpointTable_129);
#line 524 "structure_reuse.indirect.m"
              {
#line 524 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_128, transform_hlds__ctgc__structure_reuse__indirect__NewFixpointTable_129, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 526 "structure_reuse.indirect.m"
              {
#line 526 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 526 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 526 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__A_60));
#line 526 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__B_61));
#line 526 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Cases_63));
#line 526 "structure_reuse.indirect.m"
              }
#line 527 "structure_reuse.indirect.m"
              {
#line 527 "structure_reuse.indirect.m"
                MR_Word base;
#line 527 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = base;
#line 527 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_127));
#line 527 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13));
#line 527 "structure_reuse.indirect.m"
              }
#line 520 "structure_reuse.indirect.m"
            }
#line 474 "structure_reuse.indirect.m"
            break;
#line 474 "structure_reuse.indirect.m"
          case (MR_Integer) 5:
#line 532 "structure_reuse.indirect.m"
            {
#line 532 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 532 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__SubGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 532 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__SubGoal_67;
#line 532 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130;

#line 535 "structure_reuse.indirect.m"
              {
#line 535 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__SubGoal0_66, &transform_hlds__ctgc__structure_reuse__indirect__SubGoal_67, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 536 "structure_reuse.indirect.m"
              {
#line 536 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 536 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 536 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Reason_65));
#line 536 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SubGoal_67));
#line 536 "structure_reuse.indirect.m"
              }
#line 537 "structure_reuse.indirect.m"
              {
#line 537 "structure_reuse.indirect.m"
                MR_Word base;
#line 537 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 537 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = base;
#line 537 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_130));
#line 537 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13));
#line 537 "structure_reuse.indirect.m"
              }
#line 532 "structure_reuse.indirect.m"
            }
#line 474 "structure_reuse.indirect.m"
            break;
#line 474 "structure_reuse.indirect.m"
          case (MR_Integer) 6:
#line 549 "structure_reuse.indirect.m"
            {
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IfGoal0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 2)));
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ThenGoal0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 3)));
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ElseGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 4)));
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IfGoal_72;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoIfGoal_73;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ThenGoal_74;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__ElseGoal_77;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal_78;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_97_97;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131;
#line 549 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__A_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr0_12, (MR_Integer) 1)));
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_198_198;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_199_199;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_200_200;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_201_201;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_202_202;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_203_203;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_204_204;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_205_205;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_206_206;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_207_207;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_208_208;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_210_210;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_211_211;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_212_212;
#line 555 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_209_209;

#line 551 "structure_reuse.indirect.m"
              {
#line 551 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__IfGoal0_68, &transform_hlds__ctgc__structure_reuse__indirect__IfGoal_72, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, &transform_hlds__ctgc__structure_reuse__indirect__IrInfoIfGoal_73);
              }
#line 553 "structure_reuse.indirect.m"
              {
#line 553 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__ThenGoal0_69, &transform_hlds__ctgc__structure_reuse__indirect__ThenGoal_74, transform_hlds__ctgc__structure_reuse__indirect__IrInfoIfGoal_73, &transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75);
              }
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 0)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 1)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 2)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 3)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 4)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 5)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 6)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, (MR_Integer) 7)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
#line 555 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
#line 555 "structure_reuse.indirect.m"
              {
#line 555 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 555 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_205_205));
#line 555 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_206_206));
#line 555 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_207_207));
#line 555 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_208_208));
#line 555 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_97_97));
#line 555 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_210_210));
#line 555 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_211_211));
#line 555 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_212_212));
#line 555 "structure_reuse.indirect.m"
              }
#line 556 "structure_reuse.indirect.m"
              {
#line 556 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__ElseGoal0_70, &transform_hlds__ctgc__structure_reuse__indirect__ElseGoal_77, transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal0_76, &transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal_78);
              }
#line 558 "structure_reuse.indirect.m"
              {
#line 558 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6, transform_hlds__ctgc__structure_reuse__indirect__IrInfoThenGoal_75, transform_hlds__ctgc__structure_reuse__indirect__IrInfoElseGoal_78, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_92);
              }
#line 560 "structure_reuse.indirect.m"
              {
#line 560 "structure_reuse.indirect.m"
                transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 560 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 560 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__A_132));
#line 560 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__IfGoal_72));
#line 560 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ThenGoal_74));
#line 560 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ElseGoal_77));
#line 560 "structure_reuse.indirect.m"
              }
#line 561 "structure_reuse.indirect.m"
              {
#line 561 "structure_reuse.indirect.m"
                MR_Word base;
#line 561 "structure_reuse.indirect.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "structure_reuse.indirect.m"
                *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Goal_90 = base;
#line 561 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalExpr_131));
#line 561 "structure_reuse.indirect.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__GoalInfo0_13));
#line 561 "structure_reuse.indirect.m"
              }
#line 549 "structure_reuse.indirect.m"
            }
#line 474 "structure_reuse.indirect.m"
            break;
#line 474 "structure_reuse.indirect.m"
          case (MR_Integer) 7:
#line 572 "structure_reuse.indirect.m"
            {
#line 574 "structure_reuse.indirect.m"
              {
#line 574 "structure_reuse.indirect.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.indirect_reuse_analyse_goal\'/5", (MR_String) "shorthand");
#line 574 "structure_reuse.indirect.m"
                return;
              }
#line 572 "structure_reuse.indirect.m"
            }
#line 474 "structure_reuse.indirect.m"
            break;
#line 474 "structure_reuse.indirect.m"
        }
#line 474 "structure_reuse.indirect.m"
        break;
#line 474 "structure_reuse.indirect.m"
    }
#line 462 "structure_reuse.indirect.m"
  }
#line 459 "structure_reuse.indirect.m"
}

#line 424 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(
#line 424 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5,
#line 424 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6,
#line 424 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17,
#line 424 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_18)
#line 424 "structure_reuse.indirect.m"
{
#line 427 "structure_reuse.indirect.m"
  {
#line 427 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_160_160;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 0)));
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 3)));
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewSharing_10;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewReuse_11;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewStatus_12;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewStaticVars_13;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewDepProcs_14;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewRequests_15;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__NewIntermodRequests_16;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_27_27;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 427 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_34_34;
#line 428 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 1)));
#line 428 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 2)));
#line 428 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 4)));
#line 428 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 5)));
#line 428 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 6)));
#line 428 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 7)));
#line 428 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 8)));
#line 428 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_5, (MR_Integer) 9)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 432 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_67_67;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_68_68;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_69_69;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_70_70;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_71_71;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_72_72;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_73_73;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_74_74;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_75_75;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_76_76;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_77_77;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_79_79;
#line 436 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_80_80;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_81_81;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_90_90;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_93_93;
#line 440 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_94_94;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_96_96;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_97_97;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_98_98;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_99_99;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_100_100;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_101_101;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_102_102;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_103_103;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_104_104;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_105_105;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_106_106;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_107_107;
#line 443 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_108_108;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_109_109;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_110_110;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_111_111;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_112_112;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_113_113;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_114_114;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_115_115;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_116_116;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_117_117;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_118_118;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_119_119;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_120_120;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_121_121;
#line 446 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_122_122;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_123_123;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_124_124;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_125_125;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_126_126;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_127_127;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_128_128;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_129_129;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_130_130;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_131_131;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_132_132;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_133_133;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_134_134;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_135_135;
#line 449 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_136_136;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_137_137;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_138_138;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_139_139;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_140_140;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_141_141;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_142_142;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_143_143;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_144_144;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_145_145;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_146_146;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_147_147;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_148_148;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_149_149;
#line 450 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_150_150;
#line 454 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_151_151;
#line 454 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_152_152;
#line 454 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_153_153;
#line 454 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_154_154;
#line 454 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_155_155;
#line 454 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_156_156;
#line 454 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_157_157;

#line 432 "structure_reuse.indirect.m"
    {
#line 432 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewSharing_10 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_9, transform_hlds__ctgc__structure_reuse__indirect__V_19_19, transform_hlds__ctgc__structure_reuse__indirect__V_20_20);
    }
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 436 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 436 "structure_reuse.indirect.m"
    {
#line 436 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewReuse_11 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_4_f_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_9, transform_hlds__ctgc__structure_reuse__indirect__V_21_21, transform_hlds__ctgc__structure_reuse__indirect__V_22_22);
    }
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 440 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 440 "structure_reuse.indirect.m"
    {
#line 440 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewStatus_12 = analysis__lub_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_23_23, transform_hlds__ctgc__structure_reuse__indirect__V_24_24);
    }
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 443 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 443 "structure_reuse.indirect.m"
    {
#line 443 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewStaticVars_13 = mercury__set__union_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3], transform_hlds__ctgc__structure_reuse__indirect__V_25_25, transform_hlds__ctgc__structure_reuse__indirect__V_26_26);
    }
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 446 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 446 "structure_reuse.indirect.m"
    {
#line 446 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewDepProcs_14 = mercury__set__union_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__indirect__V_27_27, transform_hlds__ctgc__structure_reuse__indirect__V_28_28);
    }
#line 9885 "transform_hlds.ctgc.structure_reuse.indirect.c"
    transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_160_160 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 449 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 449 "structure_reuse.indirect.m"
    {
#line 449 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewRequests_15 = mercury__set__union_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_160_160, transform_hlds__ctgc__structure_reuse__indirect__V_29_29, transform_hlds__ctgc__structure_reuse__indirect__V_30_30);
    }
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 0)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 1)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 2)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 3)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 4)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 5)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 6)));
#line 450 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_6, (MR_Integer) 7)));
#line 450 "structure_reuse.indirect.m"
    {
#line 450 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__NewIntermodRequests_16 = mercury__set__union_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_160_160, transform_hlds__ctgc__structure_reuse__indirect__V_31_31, transform_hlds__ctgc__structure_reuse__indirect__V_32_32);
    }
#line 454 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
#line 454 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
#line 454 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
#line 454 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
#line 454 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
#line 454 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
#line 454 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
#line 454 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
#line 454 "structure_reuse.indirect.m"
    {
#line 454 "structure_reuse.indirect.m"
      MR_Word base;
#line 454 "structure_reuse.indirect.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 454 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_18 = base;
#line 454 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewSharing_10));
#line 454 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewReuse_11));
#line 454 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewStatus_12));
#line 454 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewStaticVars_13));
#line 454 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_34_34));
#line 454 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewDepProcs_14));
#line 454 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewRequests_15));
#line 454 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__NewIntermodRequests_16));
#line 454 "structure_reuse.indirect.m"
    }
#line 427 "structure_reuse.indirect.m"
  }
#line 424 "structure_reuse.indirect.m"
}

#line 420 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0_1(
#line 420 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 420 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 420 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 420 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 420 "structure_reuse.indirect.m"
{
#line 420 "structure_reuse.indirect.m"
  {
#line 420 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 420 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_18;

#line 420 "structure_reuse.indirect.m"
    {
#line 420 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_18);
    }
#line 420 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IrInfo_18));
#line 420 "structure_reuse.indirect.m"
  }
#line 420 "structure_reuse.indirect.m"
}

#line 408 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(
#line 408 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6,
#line 408 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_7,
#line 408 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8,
#line 408 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12,
#line 408 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13)
#line 408 "structure_reuse.indirect.m"
{
#line 417 "structure_reuse.indirect.m"
  {
#line 417 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 417 "structure_reuse.indirect.m"
    if ((transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "structure_reuse.indirect.m"
      *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12;
#line 417 "structure_reuse.indirect.m"
    else
#line 419 "structure_reuse.indirect.m"
      {
#line 419 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_28_28;
#line 419 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_14_14;
#line 419 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15;
#line 420 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_IrInfo_15_15;
#line 421 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17;
#line 421 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_18_18;
#line 421 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_19_19;
#line 421 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_20_20;
#line 421 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_22_22;
#line 421 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_23_23;
#line 421 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_24_24;
#line 421 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_21_21;

#line 420 "structure_reuse.indirect.m"
        {
#line 420 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 420 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[1]));
#line 420 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0_1));
#line 420 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 420 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_14_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_6));
#line 420 "structure_reuse.indirect.m"
        }
#line 10107 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0;
#line 420 "structure_reuse.indirect.m"
        {
#line 420 "structure_reuse.indirect.m"
          mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_28_28, transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_28_28, transform_hlds__ctgc__structure_reuse__indirect__V_14_14, transform_hlds__ctgc__structure_reuse__indirect__IrInfoList_7, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_0_12)), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_IrInfo_15_15);
        }
#line 420 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_IrInfo_15_15);
#line 421 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 0)));
#line 421 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 1)));
#line 421 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 2)));
#line 421 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 3)));
#line 421 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 4)));
#line 421 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 5)));
#line 421 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 6)));
#line 421 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 7)));
#line 421 "structure_reuse.indirect.m"
        {
#line 421 "structure_reuse.indirect.m"
          MR_Word base;
#line 421 "structure_reuse.indirect.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 421 "structure_reuse.indirect.m"
          *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IrInfo_13 = base;
#line 421 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_17_17));
#line 421 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_18_18));
#line 421 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_19_19));
#line 421 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_20_20));
#line 421 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8));
#line 421 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_22_22));
#line 421 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_23_23));
#line 421 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_24_24));
#line 421 "structure_reuse.indirect.m"
        }
#line 419 "structure_reuse.indirect.m"
      }
#line 417 "structure_reuse.indirect.m"
  }
#line 408 "structure_reuse.indirect.m"
}

#line 394 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_f_0(
#line 394 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_7,
#line 394 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8,
#line 394 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__DepProcs_9,
#line 394 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__Requests_10,
#line 394 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntermodRequests_11)
#line 394 "structure_reuse.indirect.m"
{
#line 398 "structure_reuse.indirect.m"
  {
#line 398 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 398 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Info_12;
#line 398 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Sharing_13;
#line 398 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_14;
#line 398 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Status_15;
#line 398 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_16_16;
#line 398 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_17_17;
#line 1230 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_Sharing_13;

#line 1230 "structure_reuse.indirect.m"
    {
#line 1230 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_Sharing_13 = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PPId_7)), transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8);
    }
#line 1230 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Sharing_13 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_Sharing_13);
#line 400 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Sharing_13, (MR_Integer) 0)));
#line 400 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__Status_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Sharing_13, (MR_Integer) 1)));
#line 401 "structure_reuse.indirect.m"
    {
#line 401 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_16_16 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_f_0();
    }
#line 401 "structure_reuse.indirect.m"
    {
#line 401 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_17_17 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3]);
    }
#line 401 "structure_reuse.indirect.m"
    {
#line 401 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Info_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 401 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_16_16));
#line 401 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_14));
#line 401 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Status_15));
#line 401 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_17_17));
#line 401 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_8));
#line 401 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__DepProcs_9));
#line 401 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__Requests_10));
#line 401 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Info_12, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__IntermodRequests_11));
#line 401 "structure_reuse.indirect.m"
    }
#line 398 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__Info_12;
#line 398 "structure_reuse.indirect.m"
  }
#line 394 "structure_reuse.indirect.m"
}

#line 372 "structure_reuse.indirect.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_f_0(
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8,
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_9,
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10,
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11,
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_12,
#line 372 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_13)
#line 372 "structure_reuse.indirect.m"
{
#line 376 "structure_reuse.indirect.m"
  {
#line 376 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 376 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__BG_14;
#line 376 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVars_15;
#line 376 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Vartypes_16;
#line 376 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__HeadVarsOfInterest_17;
#line 376 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Globals_18;
#line 376 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_19;
#line 376 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_20;
#line 376 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_21;

#line 380 "structure_reuse.indirect.m"
    {
#line 380 "structure_reuse.indirect.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11, &transform_hlds__ctgc__structure_reuse__indirect__HeadVars_15);
    }
#line 381 "structure_reuse.indirect.m"
    {
#line 381 "structure_reuse.indirect.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11, &transform_hlds__ctgc__structure_reuse__indirect__Vartypes_16);
    }
#line 382 "structure_reuse.indirect.m"
    {
#line 382 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__HeadVarsOfInterest_17 = check_hlds__type_util__remove_typeinfo_vars_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__Vartypes_16, transform_hlds__ctgc__structure_reuse__indirect__HeadVars_15);
    }
#line 384 "structure_reuse.indirect.m"
    {
#line 384 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8, &transform_hlds__ctgc__structure_reuse__indirect__Globals_18);
    }
#line 385 "structure_reuse.indirect.m"
    {
#line 385 "structure_reuse.indirect.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_18, (MR_Integer) 406, &transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_19);
    }
#line 387 "structure_reuse.indirect.m"
    {
#line 387 "structure_reuse.indirect.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_18, (MR_Integer) 47, &transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_20);
    }
#line 388 "structure_reuse.indirect.m"
    {
#line 388 "structure_reuse.indirect.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_18, (MR_Integer) 82, &transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_21);
    }
#line 390 "structure_reuse.indirect.m"
    {
#line 390 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__BG_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 390 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ModuleInfo_8));
#line 390 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PPId_9));
#line 390 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PredInfo_10));
#line 390 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_11));
#line 390 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SharingTable_12));
#line 390 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_13));
#line 390 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__HeadVarsOfInterest_17));
#line 390 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 7) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__MaxConditions_19));
#line 390 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 8) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_20));
#line 390 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__BG_14, 9) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_21));
#line 390 "structure_reuse.indirect.m"
    }
#line 376 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__BG_14;
#line 376 "structure_reuse.indirect.m"
  }
#line 372 "structure_reuse.indirect.m"
}

#line 253 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_p_0(
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_16,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43,
#line 253 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_44,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_45,
#line 253 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_46,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_47,
#line 253 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_48,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_49,
#line 253 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_50,
#line 253 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_51,
#line 253 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_52)
#line 253 "structure_reuse.indirect.m"
{
#line 262 "structure_reuse.indirect.m"
  {
#line 262 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Globals_22;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_23;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_24;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredId_25;
#line 262 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__ProcId_26;
#line 262 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__Run_27;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo0_29;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal0_31;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_32;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_33;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Goal_34;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_41;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_42;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_63_63;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_78_78;
#line 262 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_90_90;
#line 298 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36;
#line 298 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37;
#line 298 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_38_38;
#line 298 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_39_39;
#line 325 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_89_89;
#line 325 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_91_91;
#line 325 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_92_92;
#line 325 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_93_93;
#line 325 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_94_94;
#line 325 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_95_95;

#line 263 "structure_reuse.indirect.m"
    {
#line 263 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, &transform_hlds__ctgc__structure_reuse__indirect__Globals_22);
    }
#line 264 "structure_reuse.indirect.m"
    {
#line 264 "structure_reuse.indirect.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_22, (MR_Integer) 47, &transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_23);
    }
#line 265 "structure_reuse.indirect.m"
    {
#line 265 "structure_reuse.indirect.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Globals_22, (MR_Integer) 82, &transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_24);
    }
#line 267 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__PPId_16, (MR_Integer) 0)));
#line 267 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__PPId_16, (MR_Integer) 1)));
#line 270 "structure_reuse.indirect.m"
    {
#line 270 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__Run_27 = transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_45);
    }
#line 272 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_23 == (MR_Integer) 1);
#line 273 "structure_reuse.indirect.m"
    if (!(transform_hlds__ctgc__structure_reuse__indirect__succeeded))
#line 273 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_24 == (MR_Integer) 1);
#line 283 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 276 "structure_reuse.indirect.m"
      {
#line 277 "structure_reuse.indirect.m"
        {
#line 277 "structure_reuse.indirect.m"
          mercury__io__write_string_3_p_0((MR_String) "% Indirect reuse analysis (run ");
        }
#line 278 "structure_reuse.indirect.m"
        {
#line 278 "structure_reuse.indirect.m"
          mercury__io__write_int_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Run_27);
        }
#line 279 "structure_reuse.indirect.m"
        {
#line 279 "structure_reuse.indirect.m"
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
#line 280 "structure_reuse.indirect.m"
        {
#line 280 "structure_reuse.indirect.m"
          hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, transform_hlds__ctgc__structure_reuse__indirect__PredId_25, transform_hlds__ctgc__structure_reuse__indirect__ProcId_26);
        }
#line 281 "structure_reuse.indirect.m"
        {
#line 281 "structure_reuse.indirect.m"
          mercury__io__nl_2_p_0();
        }
#line 276 "structure_reuse.indirect.m"
      }
#line 283 "structure_reuse.indirect.m"
    else
#line 284 "structure_reuse.indirect.m"
      {
#line 284 "structure_reuse.indirect.m"
      }
#line 288 "structure_reuse.indirect.m"
    {
#line 288 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, transform_hlds__ctgc__structure_reuse__indirect__PPId_16, &transform_hlds__ctgc__structure_reuse__indirect__PredInfo0_29, &transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30);
    }
#line 289 "structure_reuse.indirect.m"
    {
#line 289 "structure_reuse.indirect.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30, &transform_hlds__ctgc__structure_reuse__indirect__Goal0_31);
    }
#line 290 "structure_reuse.indirect.m"
    {
#line 290 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_32 = transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_f_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__PredInfo0_29, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30, transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14, transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15);
    }
#line 292 "structure_reuse.indirect.m"
    {
#line 292 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_33 = transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_f_0(transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_45, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_47, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_49, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_51);
    }
#line 296 "structure_reuse.indirect.m"
    {
#line 296 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__BaseInfo_32, transform_hlds__ctgc__structure_reuse__indirect__Goal0_31, &transform_hlds__ctgc__structure_reuse__indirect__Goal_34, transform_hlds__ctgc__structure_reuse__indirect__IrInfo0_33, &transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35);
    }
#line 298 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 0)));
#line 298 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 1)));
#line 298 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 2)));
#line 298 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 3)));
#line 298 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 4)));
#line 298 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 5)));
#line 298 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 6)));
#line 298 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 7)));
#line 303 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__VeryVerbose_23 == (MR_Integer) 1);
#line 304 "structure_reuse.indirect.m"
    if (!(transform_hlds__ctgc__structure_reuse__indirect__succeeded))
#line 304 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = (transform_hlds__ctgc__structure_reuse__indirect__DebugIndirect_24 == (MR_Integer) 1);
#line 320 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 307 "structure_reuse.indirect.m"
      {
#line 307 "structure_reuse.indirect.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__indirect__NumConditions_40;
#line 307 "structure_reuse.indirect.m"
        MR_String transform_hlds__ctgc__structure_reuse__indirect__V_70_70;
#line 307 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_73_73;
#line 315 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_82_82;
#line 315 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_83_83;
#line 315 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_84_84;
#line 315 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_85_85;
#line 315 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_86_86;
#line 315 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_87_87;
#line 315 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_88_88;

#line 308 "structure_reuse.indirect.m"
        {
#line 308 "structure_reuse.indirect.m"
          mercury__io__write_string_3_p_0((MR_String) "% FPT: ");
        }
#line 310 "structure_reuse.indirect.m"
        {
#line 310 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_70_70 = transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_63_63);
        }
#line 309 "structure_reuse.indirect.m"
        {
#line 309 "structure_reuse.indirect.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__V_70_70);
        }
#line 313 "structure_reuse.indirect.m"
        {
#line 313 "structure_reuse.indirect.m"
          mercury__io__nl_2_p_0();
        }
#line 315 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 0)));
#line 315 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 1)));
#line 315 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 2)));
#line 315 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 3)));
#line 315 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 4)));
#line 315 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 5)));
#line 315 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 6)));
#line 315 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 7)));
#line 315 "structure_reuse.indirect.m"
        {
#line 315 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__NumConditions_40 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(transform_hlds__ctgc__structure_reuse__indirect__V_73_73);
        }
#line 316 "structure_reuse.indirect.m"
        {
#line 316 "structure_reuse.indirect.m"
          mercury__io__write_string_3_p_0((MR_String) "% Number of conditions: ");
        }
#line 317 "structure_reuse.indirect.m"
        {
#line 317 "structure_reuse.indirect.m"
          mercury__io__write_int_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__NumConditions_40);
        }
#line 318 "structure_reuse.indirect.m"
        {
#line 318 "structure_reuse.indirect.m"
          mercury__io__nl_2_p_0();
        }
#line 307 "structure_reuse.indirect.m"
      }
#line 320 "structure_reuse.indirect.m"
    else
#line 321 "structure_reuse.indirect.m"
      {
#line 321 "structure_reuse.indirect.m"
      }
#line 325 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 0)));
#line 325 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 1)));
#line 325 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 2)));
#line 325 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 3)));
#line 325 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 4)));
#line 325 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 5)));
#line 325 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 6)));
#line 325 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__IrInfo_35, (MR_Integer) 7)));
#line 325 "structure_reuse.indirect.m"
    {
#line 325 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_41, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_78_78));
#line 325 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_41, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_90_90));
#line 325 "structure_reuse.indirect.m"
    }
#line 327 "structure_reuse.indirect.m"
    {
#line 327 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30, transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__ReuseAs_Status_41, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_63_63, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_46);
    }
#line 332 "structure_reuse.indirect.m"
    {
#line 332 "structure_reuse.indirect.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__Goal_34, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo0_30, &transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_42);
    }
#line 333 "structure_reuse.indirect.m"
    {
#line 333 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__PredInfo0_29, transform_hlds__ctgc__structure_reuse__indirect__ProcInfo_42, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_43, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_44);
    }
#line 262 "structure_reuse.indirect.m"
  }
#line 253 "structure_reuse.indirect.m"
}

#line 231 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_p_0(
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_16,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_28,
#line 231 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_29,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_30,
#line 231 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_31,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_32,
#line 231 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_33,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_34,
#line 231 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_35,
#line 231 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_36,
#line 231 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37)
#line 231 "structure_reuse.indirect.m"
{
#line 240 "structure_reuse.indirect.m"
  {
#line 240 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 240 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__PPId_16, (MR_Integer) 0)));
#line 240 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__PredInfo_24;
#line 240 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__Origin_25;
#line 241 "structure_reuse.indirect.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__indirect__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__PPId_16, (MR_Integer) 1)));
#line 244 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 244 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_27_27;

#line 242 "structure_reuse.indirect.m"
    {
#line 242 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_28, transform_hlds__ctgc__structure_reuse__indirect__PredId_22, &transform_hlds__ctgc__structure_reuse__indirect__PredInfo_24);
    }
#line 243 "structure_reuse.indirect.m"
    {
#line 243 "structure_reuse.indirect.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__PredInfo_24, &transform_hlds__ctgc__structure_reuse__indirect__Origin_25);
    }
#line 244 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__Origin_25)) == (MR_mktag((MR_Integer) 0)));
#line 244 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 244 "structure_reuse.indirect.m"
      {
#line 244 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Origin_25, (MR_Integer) 0)));
#line 244 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__Origin_25, (MR_Integer) 1)));
#line 246 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_36;
#line 246 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_35 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_34;
#line 246 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_33 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_32;
#line 246 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_31 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_30;
#line 246 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_29 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_28;
#line 244 "structure_reuse.indirect.m"
      }
#line 244 "structure_reuse.indirect.m"
    else
#line 248 "structure_reuse.indirect.m"
      {
#line 248 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_p_0(transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14, transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_15, transform_hlds__ctgc__structure_reuse__indirect__PPId_16, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_28, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_29, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_30, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_31, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_32, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_33, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_34, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_35, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_36, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37);
      }
#line 240 "structure_reuse.indirect.m"
  }
#line 231 "structure_reuse.indirect.m"
}

#line 217 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0_1(
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 217 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 217 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 217 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 217 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 217 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 217 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11)
#line 217 "structure_reuse.indirect.m"
{
#line 217 "structure_reuse.indirect.m"
  {
#line 217 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 217 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_29;
#line 217 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_31;
#line 217 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_33;
#line 217 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_35;
#line 217 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_37;

#line 217 "structure_reuse.indirect.m"
    {
#line 217 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_29, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_31, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_33, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_35, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10), &transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_37);
    }
#line 217 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_29));
#line 217 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_FixpointTable_31));
#line 217 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_33));
#line 217 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_35));
#line 217 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_37));
#line 217 "structure_reuse.indirect.m"
  }
#line 217 "structure_reuse.indirect.m"
}

#line 206 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_15,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_16,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22,
#line 206 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_24,
#line 206 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_25,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26,
#line 206 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28,
#line 206 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29,
#line 206 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30,
#line 206 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31)
#line 206 "structure_reuse.indirect.m"
{
#line 216 "structure_reuse.indirect.m"
  while (MR_TRUE)
#line 216 "structure_reuse.indirect.m"
    {
#line 216 "structure_reuse.indirect.m"
      /* tailcall optimized into a loop */
#line 216 "structure_reuse.indirect.m"
      {
#line 216 "structure_reuse.indirect.m"
        MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 216 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_59_59;
#line 216 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_32_32;
#line 216 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_33_33;
#line 216 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_34_34;
#line 216 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_35_35;
#line 216 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_36_36;
#line 216 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37_37;
#line 217 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_33_33;
#line 217 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_FixpointTable_34_34;
#line 217 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_DepProcs_35_35;
#line 217 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv6_STATE_VARIABLE_Requests_36_36;
#line 217 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_37_37;

#line 217 "structure_reuse.indirect.m"
        {
#line 217 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 217 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_6[0]));
#line 217 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0_1));
#line 217 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 217 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SharingTable_14));
#line 217 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_32_32, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ReuseTable_16));
#line 217 "structure_reuse.indirect.m"
        }
#line 10934 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_59_59 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
#line 217 "structure_reuse.indirect.m"
        {
#line 217 "structure_reuse.indirect.m"
          mercury__list__foldl5_12_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_59_59, transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_59_59, transform_hlds__ctgc__structure_reuse__indirect__V_32_32, transform_hlds__ctgc__structure_reuse__indirect__SCC_15, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22)), &transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_33_33, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_24)), &transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_FixpointTable_34_34, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26)), &transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_DepProcs_35_35, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28)), &transform_hlds__ctgc__structure_reuse__indirect__conv6_STATE_VARIABLE_Requests_36_36, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30)), &transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_37_37);
        }
#line 217 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_33_33);
#line 217 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_34_34 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_FixpointTable_34_34);
#line 217 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_35_35 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv7_STATE_VARIABLE_DepProcs_35_35);
#line 217 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_36_36 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv6_STATE_VARIABLE_Requests_36_36);
#line 217 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37_37 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_37_37);
#line 1201 "structure_reuse.indirect.m"
        {
#line 1201 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_34_34);
        }
#line 222 "structure_reuse.indirect.m"
        if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 221 "structure_reuse.indirect.m"
          {
#line 221 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37_37;
#line 221 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_36_36;
#line 221 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_35_35;
#line 221 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_25 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_34_34;
#line 221 "structure_reuse.indirect.m"
            *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_33_33;
#line 221 "structure_reuse.indirect.m"
          }
#line 222 "structure_reuse.indirect.m"
        else
#line 223 "structure_reuse.indirect.m"
          {
#line 223 "structure_reuse.indirect.m"
            MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_38_38;

#line 1196 "structure_reuse.indirect.m"
            {
#line 1196 "structure_reuse.indirect.m"
              transform_hlds__ctgc__fixpoint_table__new_run_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_34_34, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_38_38);
            }
#line 224 "structure_reuse.indirect.m"
            /* direct tailcall eliminated */
#line 224 "structure_reuse.indirect.m"
            {
#line 224 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0__tmp_copy_22 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_33_33;
#line 224 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0__tmp_copy_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_38_38;
#line 224 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0__tmp_copy_26 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_35_35;
#line 224 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0__tmp_copy_28 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_36_36;
#line 224 "structure_reuse.indirect.m"
              MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0__tmp_copy_30 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_37_37;

#line 224 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0__tmp_copy_30;
#line 224 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0__tmp_copy_28;
#line 224 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0__tmp_copy_26;
#line 224 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_FixpointTable_0__tmp_copy_24;
#line 224 "structure_reuse.indirect.m"
              transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0__tmp_copy_22;
#line 224 "structure_reuse.indirect.m"
            }
#line 224 "structure_reuse.indirect.m"
            continue;
#line 223 "structure_reuse.indirect.m"
          }
#line 216 "structure_reuse.indirect.m"
      }
#line 216 "structure_reuse.indirect.m"
      break;
#line 216 "structure_reuse.indirect.m"
    }
#line 206 "structure_reuse.indirect.m"
}

#line 188 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_4(
#line 188 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 188 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 188 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 188 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 188 "structure_reuse.indirect.m"
{
#line 188 "structure_reuse.indirect.m"
  {
#line 188 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 188 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_10;

#line 188 "structure_reuse.indirect.m"
    {
#line 188 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_10);
    }
#line 188 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_10));
#line 188 "structure_reuse.indirect.m"
  }
#line 188 "structure_reuse.indirect.m"
}

#line 1193 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_3(
#line 1193 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1193 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1)
#line 1193 "structure_reuse.indirect.m"
{
#line 1193 "structure_reuse.indirect.m"
  {
#line 1193 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 1193 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 1193 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_ReuseAs_6;

#line 1193 "structure_reuse.indirect.m"
    {
#line 1193 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__conv1_ReuseAs_6 = transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1));
    }
#line 1193 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_ReuseAs_6));
#line 1193 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 1193 "structure_reuse.indirect.m"
  }
#line 1193 "structure_reuse.indirect.m"
}

#line 197 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_1(
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg)
#line 197 "structure_reuse.indirect.m"
{
#line 197 "structure_reuse.indirect.m"
  {
#line 197 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s * transform_hlds__ctgc__structure_reuse__indirect__env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s *) transform_hlds__ctgc__structure_reuse__indirect__env_ptr_arg;

#line 197 "structure_reuse.indirect.m"
    *((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__conv0_LambdaHeadVar__1_14));
#line 197 "structure_reuse.indirect.m"
    {
#line 197 "structure_reuse.indirect.m"
      ((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont)((transform_hlds__ctgc__structure_reuse__indirect__env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont_env_ptr);
    }
#line 197 "structure_reuse.indirect.m"
  }
#line 197 "structure_reuse.indirect.m"
}

#line 197 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2(
#line 197 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 197 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 197 "structure_reuse.indirect.m"
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__cont,
#line 197 "structure_reuse.indirect.m"
  void * transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr)
#line 197 "structure_reuse.indirect.m"
{
#line 197 "structure_reuse.indirect.m"
  {
#line 197 "structure_reuse.indirect.m"
    struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s transform_hlds__ctgc__structure_reuse__indirect__env;

#line 197 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__wrapper_arg_1 = transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1;
#line 197 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont = transform_hlds__ctgc__structure_reuse__indirect__cont;
#line 197 "structure_reuse.indirect.m"
    (transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont_env_ptr = transform_hlds__ctgc__structure_reuse__indirect__cont_env_ptr;
#line 197 "structure_reuse.indirect.m"
    {
#line 197 "structure_reuse.indirect.m"
      MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;

#line 197 "structure_reuse.indirect.m"
      {
#line 197 "structure_reuse.indirect.m"
        transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__197__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 4))), &(transform_hlds__ctgc__structure_reuse__indirect__env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__conv0_LambdaHeadVar__1_14, transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_1, &transform_hlds__ctgc__structure_reuse__indirect__env);
      }
#line 197 "structure_reuse.indirect.m"
    }
#line 197 "structure_reuse.indirect.m"
  }
#line 197 "structure_reuse.indirect.m"
}

#line 168 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0(
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_14,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_23,
#line 168 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25,
#line 168 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_26,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_27,
#line 168 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_28,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_29,
#line 168 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_30,
#line 168 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_31,
#line 168 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_32)
#line 168 "structure_reuse.indirect.m"
{
#line 179 "structure_reuse.indirect.m"
  {
#line 179 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 177 "structure_reuse.indirect.m"
    {
#line 177 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__ctgc__structure_reuse__indirect__SCC_14);
    }
#line 179 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 178 "structure_reuse.indirect.m"
      {
#line 178 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_32 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_31;
#line 178 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_30 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_29;
#line 178 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_28 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_27;
#line 178 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_26 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25;
#line 178 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_23;
#line 178 "structure_reuse.indirect.m"
      }
#line 179 "structure_reuse.indirect.m"
    else
#line 182 "structure_reuse.indirect.m"
      {
#line 182 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_19_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 182 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__ExtendedSCC_20;
#line 182 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_21;
#line 182 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_22;
#line 182 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_37_37;
#line 182 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_47;
#line 182 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__Extension_51;
#line 182 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25, (MR_Integer) 1)));
#line 182 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_53_53;
#line 182 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_66_66;
#line 196 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25, (MR_Integer) 0)));
#line 188 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26;

#line 196 "structure_reuse.indirect.m"
        {
#line 196 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_47 = mercury__bimap__forward_map_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_19_59, transform_hlds__ctgc__structure_reuse__indirect__V_52_52);
        }
#line 197 "structure_reuse.indirect.m"
        {
#line 197 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 197 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_53_53, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_4[1]));
#line 197 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_53_53, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2));
#line 197 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 197 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_53_53, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SCC_14));
#line 197 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_53_53, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ReuseVersionMap_47));
#line 197 "structure_reuse.indirect.m"
        }
#line 197 "structure_reuse.indirect.m"
        {
#line 197 "structure_reuse.indirect.m"
          mercury__solutions__solutions_2_p_1(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_19_59, transform_hlds__ctgc__structure_reuse__indirect__V_53_53, &transform_hlds__ctgc__structure_reuse__indirect__Extension_51);
        }
#line 202 "structure_reuse.indirect.m"
        {
#line 202 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__ExtendedSCC_20 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_19_59, transform_hlds__ctgc__structure_reuse__indirect__SCC_14, transform_hlds__ctgc__structure_reuse__indirect__Extension_51);
        }
#line 1193 "structure_reuse.indirect.m"
        {
#line 1193 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_66_66, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_4[0]));
#line 1193 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_66_66, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_3));
#line 1193 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1193 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_66_66, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25));
#line 1193 "structure_reuse.indirect.m"
        }
#line 1193 "structure_reuse.indirect.m"
        {
#line 1193 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_21 = transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__V_66_66, transform_hlds__ctgc__structure_reuse__indirect__ExtendedSCC_20);
        }
#line 185 "structure_reuse.indirect.m"
        {
#line 185 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13, transform_hlds__ctgc__structure_reuse__indirect__ExtendedSCC_20, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24, transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_21, &transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_22, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_27, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_28, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_29, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_30, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_31, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_32);
        }
#line 188 "structure_reuse.indirect.m"
        {
#line 188 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 188 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_37_37, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[0]));
#line 188 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_37_37, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_4));
#line 188 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 188 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_37_37, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_22));
#line 188 "structure_reuse.indirect.m"
        }
#line 188 "structure_reuse.indirect.m"
        {
#line 188 "structure_reuse.indirect.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__indirect__V_37_37, transform_hlds__ctgc__structure_reuse__indirect__ExtendedSCC_20, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_25)), &transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26);
        }
#line 188 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_26 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26);
#line 182 "structure_reuse.indirect.m"
      }
#line 179 "structure_reuse.indirect.m"
  }
#line 168 "structure_reuse.indirect.m"
}

#line 151 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(
#line 151 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_5,
#line 151 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__PPId_6,
#line 151 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_9,
#line 151 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_10)
#line 151 "structure_reuse.indirect.m"
{
#line 154 "structure_reuse.indirect.m"
  {
#line 154 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 154 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__FinalAs_8;
#line 1230 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv0_FinalAs_8;

#line 1230 "structure_reuse.indirect.m"
    {
#line 1230 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__conv0_FinalAs_8 = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__PPId_6)), transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_5);
    }
#line 1230 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__FinalAs_8 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv0_FinalAs_8);
#line 156 "structure_reuse.indirect.m"
    {
#line 156 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(transform_hlds__ctgc__structure_reuse__indirect__PPId_6, transform_hlds__ctgc__structure_reuse__indirect__FinalAs_8, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_9, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_10);
    }
#line 154 "structure_reuse.indirect.m"
  }
#line 151 "structure_reuse.indirect.m"
}

#line 148 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_2(
#line 148 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 148 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 148 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 148 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3)
#line 148 "structure_reuse.indirect.m"
{
#line 148 "structure_reuse.indirect.m"
  {
#line 148 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 148 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_ReuseTable_10;

#line 148 "structure_reuse.indirect.m"
    {
#line 148 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_ReuseTable_10);
    }
#line 148 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_ReuseTable_10));
#line 148 "structure_reuse.indirect.m"
  }
#line 148 "structure_reuse.indirect.m"
}

#line 1193 "structure_reuse.indirect.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_1(
#line 1193 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 1193 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1)
#line 1193 "structure_reuse.indirect.m"
{
#line 1193 "structure_reuse.indirect.m"
  {
#line 1193 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 1193 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 1193 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6;

#line 1193 "structure_reuse.indirect.m"
    {
#line 1193 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6 = transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1));
    }
#line 1193 "structure_reuse.indirect.m"
    transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_ReuseAs_6));
#line 1193 "structure_reuse.indirect.m"
    return transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2;
#line 1193 "structure_reuse.indirect.m"
  }
#line 1193 "structure_reuse.indirect.m"
}

#line 132 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0(
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCC_14,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22,
#line 132 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24,
#line 132 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_25,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26,
#line 132 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28,
#line 132 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29,
#line 132 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30,
#line 132 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31)
#line 132 "structure_reuse.indirect.m"
{
#line 143 "structure_reuse.indirect.m"
  {
#line 143 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;

#line 141 "structure_reuse.indirect.m"
    {
#line 141 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__succeeded = transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ctgc__structure_reuse__indirect__SCC_14);
    }
#line 143 "structure_reuse.indirect.m"
    if (transform_hlds__ctgc__structure_reuse__indirect__succeeded)
#line 142 "structure_reuse.indirect.m"
      {
#line 142 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30;
#line 142 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28;
#line 142 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26;
#line 142 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_25 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24;
#line 142 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23 = transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22;
#line 142 "structure_reuse.indirect.m"
      }
#line 143 "structure_reuse.indirect.m"
    else
#line 144 "structure_reuse.indirect.m"
      {
#line 144 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_20;
#line 144 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_21;
#line 144 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_36_36;
#line 144 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_46_46;
#line 148 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_25;

#line 1193 "structure_reuse.indirect.m"
        {
#line 1193 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_46_46, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_4[0]));
#line 1193 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_46_46, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_1));
#line 1193 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1193 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_46_46, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24));
#line 1193 "structure_reuse.indirect.m"
        }
#line 1193 "structure_reuse.indirect.m"
        {
#line 1193 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_20 = transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, transform_hlds__ctgc__structure_reuse__indirect__V_46_46, transform_hlds__ctgc__structure_reuse__indirect__SCC_14);
        }
#line 145 "structure_reuse.indirect.m"
        {
#line 145 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(transform_hlds__ctgc__structure_reuse__indirect__SharingTable_13, transform_hlds__ctgc__structure_reuse__indirect__SCC_14, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_23, transform_hlds__ctgc__structure_reuse__indirect__FixpointTable0_20, &transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_21, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_0_26, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_DepProcs_27, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_0_28, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_Requests_29, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_30, transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_31);
        }
#line 148 "structure_reuse.indirect.m"
        {
#line 148 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 148 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_36_36, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[0]));
#line 148 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_36_36, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_2));
#line 148 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 148 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_36_36, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__FixpointTable_21));
#line 148 "structure_reuse.indirect.m"
        }
#line 148 "structure_reuse.indirect.m"
        {
#line 148 "structure_reuse.indirect.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, transform_hlds__ctgc__structure_reuse__indirect__V_36_36, transform_hlds__ctgc__structure_reuse__indirect__SCC_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_24)), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_25);
        }
#line 148 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_25 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_ReuseTable_25);
#line 144 "structure_reuse.indirect.m"
      }
#line 143 "structure_reuse.indirect.m"
  }
#line 132 "structure_reuse.indirect.m"
}

#line 164 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0_1(
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 164 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 164 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 164 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 164 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 164 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 164 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11)
#line 164 "structure_reuse.indirect.m"
{
#line 164 "structure_reuse.indirect.m"
  {
#line 164 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 164 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_24;
#line 164 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26;
#line 164 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_28;
#line 164 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_30;
#line 164 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_32;

#line 164 "structure_reuse.indirect.m"
    {
#line 164 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_24, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_28, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_30, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10), &transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_32);
    }
#line 164 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_24));
#line 164 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_26));
#line 164 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_28));
#line 164 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_30));
#line 164 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_32));
#line 164 "structure_reuse.indirect.m"
  }
#line 164 "structure_reuse.indirect.m"
}

#line 64 "structure_reuse.indirect.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0(
#line 64 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_10,
#line 64 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_18,
#line 64 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_19,
#line 64 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_20,
#line 64 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_21,
#line 64 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__DepProcs_13,
#line 64 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Requests_14,
#line 64 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_22,
#line 64 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_23)
#line 64 "structure_reuse.indirect.m"
{
#line 161 "structure_reuse.indirect.m"
  {
#line 161 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 161 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_49_49;
#line 161 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__DepInfo_16;
#line 161 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCCs_17;
#line 161 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24_24;
#line 161 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_25_25;
#line 161 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_28_28;
#line 161 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 164 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19;
#line 164 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21;
#line 164 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_13;
#line 164 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_14;
#line 164 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_23;

#line 162 "structure_reuse.indirect.m"
    {
#line 162 "structure_reuse.indirect.m"
      transform_hlds__dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24_24, &transform_hlds__ctgc__structure_reuse__indirect__DepInfo_16);
    }
#line 163 "structure_reuse.indirect.m"
    {
#line 163 "structure_reuse.indirect.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__indirect__DepInfo_16, &transform_hlds__ctgc__structure_reuse__indirect__SCCs_17);
    }
#line 164 "structure_reuse.indirect.m"
    {
#line 164 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 164 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_25_25, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_3[0]));
#line 164 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_25_25, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0_1));
#line 164 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 164 "structure_reuse.indirect.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_25_25, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SharingTable_10));
#line 164 "structure_reuse.indirect.m"
    }
#line 165 "structure_reuse.indirect.m"
    {
#line 165 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_28_28 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0);
    }
#line 165 "structure_reuse.indirect.m"
    {
#line 165 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0);
    }
#line 11695 "transform_hlds.ctgc.structure_reuse.indirect.c"
    transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_49_49 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
#line 164 "structure_reuse.indirect.m"
    {
#line 164 "structure_reuse.indirect.m"
      mercury__list__foldl5_12_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_49_49, transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_49_49, transform_hlds__ctgc__structure_reuse__indirect__V_25_25, transform_hlds__ctgc__structure_reuse__indirect__SCCs_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_24_24)), &transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_20)), &transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_28_28)), &transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_29_29)), &transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_0_22)), &transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_23);
    }
#line 164 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_19 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19);
#line 164 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_21 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21);
#line 164 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__DepProcs_13 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_13);
#line 164 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__Requests_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_14);
#line 164 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_IntermodRequests_23 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv5_STATE_VARIABLE_IntermodRequests_23);
#line 161 "structure_reuse.indirect.m"
  }
#line 64 "structure_reuse.indirect.m"
}

#line 124 "structure_reuse.indirect.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0_1(
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure_arg,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2,
#line 124 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4,
#line 124 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6,
#line 124 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8,
#line 124 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9,
#line 124 "structure_reuse.indirect.m"
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10,
#line 124 "structure_reuse.indirect.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11)
#line 124 "structure_reuse.indirect.m"
{
#line 124 "structure_reuse.indirect.m"
  {
#line 124 "structure_reuse.indirect.m"
    MR_Box transform_hlds__ctgc__structure_reuse__indirect__closure = transform_hlds__ctgc__structure_reuse__indirect__closure_arg;
#line 124 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_23;
#line 124 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_25;
#line 124 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_27;
#line 124 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_29;
#line 124 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_31;

#line 124 "structure_reuse.indirect.m"
    {
#line 124 "structure_reuse.indirect.m"
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_4), &transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_25, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_6), &transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_27, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_8), &transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_29, ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_10), &transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_31);
    }
#line 124 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv4_STATE_VARIABLE_ModuleInfo_23));
#line 124 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_5 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv3_STATE_VARIABLE_ReuseTable_25));
#line 124 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_7 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv2_STATE_VARIABLE_DepProcs_27));
#line 124 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_9 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv1_STATE_VARIABLE_Requests_29));
#line 124 "structure_reuse.indirect.m"
    *transform_hlds__ctgc__structure_reuse__indirect__wrapper_arg_11 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__conv0_STATE_VARIABLE_IntermodRequests_31));
#line 124 "structure_reuse.indirect.m"
  }
#line 124 "structure_reuse.indirect.m"
}

#line 57 "structure_reuse.indirect.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0(
#line 57 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__SharingTable_9,
#line 57 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_18,
#line 57 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_19,
#line 57 "structure_reuse.indirect.m"
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_20,
#line 57 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_21,
#line 57 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__DepProcs_12,
#line 57 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__Requests_13,
#line 57 "structure_reuse.indirect.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IntermodRequests_14)
#line 57 "structure_reuse.indirect.m"
{
#line 114 "structure_reuse.indirect.m"
  {
#line 114 "structure_reuse.indirect.m"
    MR_bool transform_hlds__ctgc__structure_reuse__indirect__succeeded;
#line 114 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__MaybeDepInfo_15;
#line 114 "structure_reuse.indirect.m"
    MR_Word transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_22_22;

#line 119 "structure_reuse.indirect.m"
    {
#line 119 "structure_reuse.indirect.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 120 "structure_reuse.indirect.m"
    {
#line 120 "structure_reuse.indirect.m"
      hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_22_22, &transform_hlds__ctgc__structure_reuse__indirect__MaybeDepInfo_15);
    }
#line 127 "structure_reuse.indirect.m"
    if ((transform_hlds__ctgc__structure_reuse__indirect__MaybeDepInfo_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "structure_reuse.indirect.m"
      {
#line 129 "structure_reuse.indirect.m"
        {
#line 129 "structure_reuse.indirect.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.indirect_reuse_pass\'/8", (MR_String) "no dependency information");
#line 129 "structure_reuse.indirect.m"
          return;
        }
#line 128 "structure_reuse.indirect.m"
      }
#line 127 "structure_reuse.indirect.m"
    else
#line 122 "structure_reuse.indirect.m"
      {
#line 122 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_45_45;
#line 122 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_50_50;
#line 122 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__DepInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__indirect__MaybeDepInfo_15, (MR_Integer) 0)));
#line 122 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__SCCs_17;
#line 122 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_26_26;
#line 122 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_29_29;
#line 122 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_30_30;
#line 122 "structure_reuse.indirect.m"
        MR_Word transform_hlds__ctgc__structure_reuse__indirect__V_31_31;
#line 124 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19;
#line 124 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21;
#line 124 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_12;
#line 124 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_13;
#line 124 "structure_reuse.indirect.m"
        MR_Box transform_hlds__ctgc__structure_reuse__indirect__conv5_IntermodRequests_14;

#line 123 "structure_reuse.indirect.m"
        {
#line 123 "structure_reuse.indirect.m"
          hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__ctgc__structure_reuse__indirect__DepInfo_16, &transform_hlds__ctgc__structure_reuse__indirect__SCCs_17);
        }
#line 124 "structure_reuse.indirect.m"
        {
#line 124 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 124 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_26_26, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_3[0]));
#line 124 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_26_26, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0_1));
#line 124 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 124 "structure_reuse.indirect.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__indirect__V_26_26, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__SharingTable_9));
#line 124 "structure_reuse.indirect.m"
        }
#line 125 "structure_reuse.indirect.m"
        {
#line 125 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_29_29 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0);
        }
#line 11889 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_45_45 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;
#line 125 "structure_reuse.indirect.m"
        {
#line 125 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_30_30 = mercury__set__init_0_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_45_45);
        }
#line 126 "structure_reuse.indirect.m"
        {
#line 126 "structure_reuse.indirect.m"
          transform_hlds__ctgc__structure_reuse__indirect__V_31_31 = mercury__set__init_0_f_0(transform_hlds__ctgc__structure_reuse__indirect__TypeCtorInfo_45_45);
        }
#line 11901 "transform_hlds.ctgc.structure_reuse.indirect.c"
        transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_50_50 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
#line 124 "structure_reuse.indirect.m"
        {
#line 124 "structure_reuse.indirect.m"
          mercury__list__foldl5_12_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_50_50, transform_hlds__ctgc__structure_reuse__indirect__TypeInfo_50_50, transform_hlds__ctgc__structure_reuse__indirect__V_26_26, transform_hlds__ctgc__structure_reuse__indirect__SCCs_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_22_22)), &transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_0_20)), &transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_29_29)), &transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_30_30)), &transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__V_31_31)), &transform_hlds__ctgc__structure_reuse__indirect__conv5_IntermodRequests_14);
        }
#line 124 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ModuleInfo_19 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv9_STATE_VARIABLE_ModuleInfo_19);
#line 124 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__STATE_VARIABLE_ReuseTable_21 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv8_STATE_VARIABLE_ReuseTable_21);
#line 124 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__DepProcs_12 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv7_DepProcs_12);
#line 124 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__Requests_13 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv6_Requests_13);
#line 124 "structure_reuse.indirect.m"
        *transform_hlds__ctgc__structure_reuse__indirect__IntermodRequests_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__indirect__conv5_IntermodRequests_14);
#line 122 "structure_reuse.indirect.m"
      }
#line 114 "structure_reuse.indirect.m"
  }
#line 57 "structure_reuse.indirect.m"
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
